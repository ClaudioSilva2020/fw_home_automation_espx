/**
 * @file wifi_app.h
 * @brief
 * @author claudio Silva
 * @version 1.0 
 * @date 4 de ago. de 2022
 *  
 * @copyright Copyright (c) 2020
 *
 */

#ifndef DRIVER_INC_WIFI_APP_H_
#define DRIVER_INC_WIFI_APP_H_

#include "esp_netif.h"


/**
 * Constants for the WIFI application settings default
 */
#define WIFI_AP_SSID              "HOME CLAUDIO" // AP NAME
#define WIFI_AP_PASS              "detamms2" // AP password
#define WIFI_AP_CHANNEL           1
#define WIFI_AP_SSID_HIDDEN       0
#define WIFI_AP_MAX_CONNECTIONS   5
#define WIFI_AP_BEACON_INTERVAL   100
#define WIFI_AP_IP                "192.168.0.1"
#define WIFI_AP_GATEWAY           "192.168.0.1"
#define WIFI_AP_NETMASK           "255.255.255.0"
#define WIFI_AP_BANDWIDTH		  WIFI_BW_HT20
#define WIFI_STA_POWER_SAVE       WIFI_PS_NONE
#define MAX_SSID_LENGTH           32
#define MAX_PASSWORD_LENGTH       64
#define MAX_CONNECTION_RETRIES    5


/**
 * Netif objects for station and access point
 *
 */
extern esp_netif_t* esp_netif_sta;
extern esp_netif_t* esp_netif_ap;

/**
 * Message IDs for the wifi application tasks
 */
typedef enum wifi_app_message
{
	WIFI_APP_MSG_START = 0,
	WIFI_APP_MSG_START_HTTP_SERVER,
	WIFI_APP_MEG_CONNECTING_FROM_HTTP_SERVER,
	WIFI_APP_MSG_CONNECTED,
	WIFI_APP_MSG_GOT_IP,
}wifi_app_message_e;

/**
 * Structure for the message queue
 */
typedef struct wifi_app_queue_message
{
	wifi_app_message_e msgID;
}wifi_app_queue_message_e;










#endif /* DRIVER_INC_WIFI_APP_H_ */
