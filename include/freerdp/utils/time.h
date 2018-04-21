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

#ifndef __TIME_UTILS_H
#define __TIME_UTILS_H

#include <freerdp/settings.h>

void time_set_client_time_zone(rdpSettings* settings);

#endif /* __TIME_UTILS_H */
