/**
 * FreeRDP: A Remote Desktop Protocol client.
 * Time Utils
 *
 * Copyright 2018 Idan Freiberg <speidy@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <time.h>

#include <freerdp/utils/time.h>


/**
 * Set client time zone information.
 * @param settings settings
 */

void time_set_client_time_zone(rdpSettings* settings)
{
	time_t t;
	struct tm* local_time;
	TIME_ZONE_INFO* clientTimeZone;

	time(&t);
	local_time = localtime(&t);
	clientTimeZone = settings->client_time_zone;

#if defined(sun)
	if(local_time->tm_isdst > 0)
		clientTimeZone->bias = (uint32) (altzone / 3600);
	else
		clientTimeZone->bias = (uint32) (timezone / 3600);
#elif defined(HAVE_TM_GMTOFF)
	if(local_time->tm_gmtoff >= 0)
		clientTimeZone->bias = (uint32) (local_time->tm_gmtoff / 60);
	else
		clientTimeZone->bias = (uint32) ((-1 * local_time->tm_gmtoff) / 60 + 720);
#else
	clientTimeZone->bias = 0;
#endif

	if(local_time->tm_isdst > 0)
	{
		clientTimeZone->standardBias = clientTimeZone->bias - 60;
		clientTimeZone->daylightBias = clientTimeZone->bias;
	}
	else
	{
		clientTimeZone->standardBias = clientTimeZone->bias;
		clientTimeZone->daylightBias = clientTimeZone->bias + 60;
	}

	strftime(clientTimeZone->standardName, 32, "%Z, Standard Time", local_time);
	clientTimeZone->standardName[31] = 0;
	strftime(clientTimeZone->daylightName, 32, "%Z, Summer Time", local_time);
	clientTimeZone->daylightName[31] = 0;
}
