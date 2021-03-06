#ifndef	_GSMCONFIG_H
#define	_GSMCONFIG_H
#include "main.h"
//	Please enable FreerRtos 
//	Please Config your usart and enable interrupt on CubeMX 
//	2 control Pin	 PowerKey>>>>output--open drain : default Value>>1         Power status>>>>>input---pulldown
// Select "General peripheral Initalizion as a pair of '.c/.h' file per peripheral" on project settings
UART_HandleTypeDef huart1;
UART_HandleTypeDef huart3;

#define		_GSM_DUAL_SIM_SUPPORT				0

#define		_GSM_USART									huart3
#define		_SR_USART									huart1
#define		_GSM_POWER_PORT							GSM_POWER_KEY_GPIO_Port							
#define		_GSM_POWER_PIN							GSM_POWER_KEY_Pin
#define		_GSM_POWER_STATUS_PORT			GSM_STATUS_GPIO_Port	
#define		_GSM_POWER_STATUS_PIN				GSM_STATUS_Pin

#define		_GSM_RX_SIZE								256
#define		_GSM_TX_SIZE								128
#define		_GSM_TASK_SIZE							1024


#define		_GSM_WAIT_TIME_LOW					1000
#define		_GSM_WAIT_TIME_MED					10000
#define		_GSM_WAIT_TIME_HIGH					25000
#define		_GSM_WAIT_TIME_VERYHIGH			80000

/*tamnd12 add config for TCP SOCKET*/
#define HOSTNAME_TCP "\"broker.hivemq.com\""
#define PRIMARY_DNS "\"8.8.8.8\""
#define SECOND_DNS "\"8.8.4.4\""


/*#define HOSTNAME_TCP "\"iot.eclipse.org\""*/
#define FIRST_PARAMETER 1
#define SECOND_PARAMETER 2
#define PORT_TCP 1883
#define CONNECT_ID connectID
#define MAX_CONNECT_ID 11
#define MAX_ERROR 3


#define CONTEXT_ID 1
#define MAX_WAIT_PARAMETER 5
#define DETAILED_DEBUG 1

/*define QUECTEL_STATE*/
enum TCPIP_STATE {
	STATE_INITIAL = 0,
	STATE_OPENING,
	STATE_CONNECTED,
	STATE_LISTENING,
	STATE_CLOSING,
	STATE_ERROR
};
enum NETWORK_STATE {
	NETWORK_INITIAL = 0,
	NETWORK_REGISTERED_HOME,
	NETWORK_NOT_REGISTERED,
	NETWORK_REGISTERED_DENIED,
	NETWORK_UNKNOWN,
	NETWORK_REGISTERED_ROAMING
};
enum SIM_INSERTED_STATUS {
	SIM_REMOVED = 0,
	SIM_INSERTED,
	UNKNOW_SIM_STATUS
};

enum ERROR_CODE {
	UNKNOW_ERROR_CODE = 552,
	BLOCKED,
	OPEN_CONNECTION_FAILED,
	CONNECTION_HAS_BEEN_CLOSED,
	ACTIVATE_PDP_FAILED,
	INVALID_IP_ADDR,
	INVALID_PARAMETER,
	OPERATION_NOT_SUPPORTED,
	CREATE_SOCKET_FAILED,
	INVALID_SOCKET_ID,
	SPECIFIED_SOCKET_INDEX_USED,
	PDP_HAS_BEEN_ACTIVED,
	INVALID_APP_TYPE,
	DNS_PARSE_FAILED,
	INVALID_OPERATION
};
#endif
