/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __SECURITY_H__
#define __SECURITY_H__
 
#include <inttypes.h>
 
#define MBED_DOMAIN "3be0d5a8-b17d-441d-b51e-f4eb2583302a"
#define MBED_ENDPOINT_NAME "fa37de2e-5379-4240-a714-ba19d5a679cd"
 
const uint8_t SERVER_CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBmDCCAT6gAwIBAgIEVUCA0jAKBggqhkjOPQQDAjBLMQswCQYDVQQGEwJGSTEN\r\n"
"MAsGA1UEBwwET3VsdTEMMAoGA1UECgwDQVJNMQwwCgYDVQQLDANJb1QxETAPBgNV\r\n"
"BAMMCEFSTSBtYmVkMB4XDTE1MDQyOTA2NTc0OFoXDTE4MDQyOTA2NTc0OFowSzEL\r\n"
"MAkGA1UEBhMCRkkxDTALBgNVBAcMBE91bHUxDDAKBgNVBAoMA0FSTTEMMAoGA1UE\r\n"
"CwwDSW9UMREwDwYDVQQDDAhBUk0gbWJlZDBZMBMGByqGSM49AgEGCCqGSM49AwEH\r\n"
"A0IABLuAyLSk0mA3awgFR5mw2RHth47tRUO44q/RdzFZnLsAsd18Esxd5LCpcT9w\r\n"
"0tvNfBv4xJxGw0wcYrPDDb8/rjujEDAOMAwGA1UdEwQFMAMBAf8wCgYIKoZIzj0E\r\n"
"AwIDSAAwRQIhAPAonEAkwixlJiyYRQQWpXtkMZax+VlEiS201BG0PpAzAiBh2RsD\r\n"
"NxLKWwf4O7D6JasGBYf9+ZLwl0iaRjTjytO+Kw==\r\n"
"-----END CERTIFICATE-----\r\n";
 
const uint8_t CERT[] = "-----BEGIN CERTIFICATE-----\r\n"
"MIIBzjCCAXOgAwIBAgIELroecjAMBggqhkjOPQQDAgUAMDkxCzAJBgNVBAYTAkZ\r\n"
"JMQwwCgYDVQQKDANBUk0xHDAaBgNVBAMME21iZWQtY29ubmVjdG9yLTIwMTgwHh\r\n"
"cNMTcwMjIyMTkyMDMwWhcNMTgxMjMxMDYwMDAwWjCBoTFSMFAGA1UEAxNJM2JlM\r\n"
"GQ1YTgtYjE3ZC00NDFkLWI1MWUtZjRlYjI1ODMzMDJhL2ZhMzdkZTJlLTUzNzkt\r\n"
"NDI0MC1hNzE0LWJhMTlkNWE2NzljZDEMMAoGA1UECxMDQVJNMRIwEAYDVQQKEwl\r\n"
"tYmVkIHVzZXIxDTALBgNVBAcTBE91bHUxDTALBgNVBAgTBE91bHUxCzAJBgNVBA\r\n"
"YTAkZJMFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEA/wubc5eTWIKXJiVeZ/5T\r\n"
"pcD4J5ZQTzNuYv21aaQVGyS9kNEOqUQbEp2ccJ4uX1j2HMlaZnzQUfLOM7Z7rS3\r\n"
"vDAMBggqhkjOPQQDAgUAA0cAMEQCIAMvDL77LEmAYz76dCYMPnrjGMJUB6nT+/5\r\n"
"Alek31myJAiA2PDKSQPIvdxHydYy/AFGothaPrmykzrYNgSCbYFv4TQ==\r\n"
"-----END CERTIFICATE-----\r\n";
 
const uint8_t KEY[] = "-----BEGIN PRIVATE KEY-----\r\n"
"MIGHAgEAMBMGByqGSM49AgEGCCqGSM49AwEHBG0wawIBAQQgTVpJi+urydHRW8lU\r\n"
"kzW3oE9fyCSxEvxCCUbQtejWT46hRANCAAQD/C5tzl5NYgpcmJV5n/lOlwPgnllB\r\n"
"PM25i/bVppBUbJL2Q0Q6pRBsSnZxwni5fWPYcyVpmfNBR8s4ztnutLe8\r\n"
"-----END PRIVATE KEY-----\r\n";
 
#endif //__SECURITY_H__