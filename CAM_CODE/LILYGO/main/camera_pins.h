#ifndef CAMERA_PINS_H_
#define CAMERA_PINS_H_

//#define CONFIG_BOARD_ESP32CAM_AITHINKER 1

// Freenove ESP32-WROVER CAM Board PIN Map
#if CONFIG_BOARD_WROVER_KIT
#define CAM_PIN_PWDN -1  //power down is not used
#define CAM_PIN_RESET -1 //software reset will be performed
#define CAM_PIN_XCLK 4
#define CAM_PIN_SIOD 18
#define CAM_PIN_SIOC 23

#define CAM_PIN_D7 36
#define CAM_PIN_D6 37
#define CAM_PIN_D5 38
#define CAM_PIN_D4 39
#define CAM_PIN_D3 35
#define CAM_PIN_D2 14
#define CAM_PIN_D1 13
#define CAM_PIN_D0 34
#define CAM_PIN_VSYNC 5
#define CAM_PIN_HREF 27
#define CAM_PIN_PCLK 25
#endif

// ESP-EYE PIN Map
#if CONFIG_BOARD_CAMERA_MODEL_ESP_EYE
#define PWDN_GPIO_NUM    -1
#define RESET_GPIO_NUM   -1
#define XCLK_GPIO_NUM    4
#define SIOD_GPIO_NUM    18
#define SIOC_GPIO_NUM    23

#define Y9_GPIO_NUM      36
#define Y8_GPIO_NUM      37
#define Y7_GPIO_NUM      38
#define Y6_GPIO_NUM      39
#define Y5_GPIO_NUM      35
#define Y4_GPIO_NUM      14
#define Y3_GPIO_NUM      13
#define Y2_GPIO_NUM      34
#define VSYNC_GPIO_NUM   5
#define HREF_GPIO_NUM    27
#define PCLK_GPIO_NUM    25
#endif


// AiThinker ESP32Cam PIN Map
#if CONFIG_BOARD_ESP32CAM_AITHINKER
#define CAM_PIN_PWDN -1  // power down is not used
#define CAM_PIN_RESET -1 // software reset will be performed
#define CAM_PIN_XCLK 4
#define CAM_PIN_SIOD 18
#define CAM_PIN_SIOC 23

#define CAM_PIN_D7 36
#define CAM_PIN_D6 37
#define CAM_PIN_D5 38
#define CAM_PIN_D4 39
#define CAM_PIN_D3 35
#define CAM_PIN_D2 14
#define CAM_PIN_D1 13
#define CAM_PIN_D0 34
#define CAM_PIN_VSYNC 5
#define CAM_PIN_HREF 27
#define CAM_PIN_PCLK 25
#endif



// TTGO T-Journal ESP32 Camera PIN Map
#if CONFIG_BOARD_CAMERA_MODEL_TTGO_T_JOURNAL
#define PWDN_GPIO_NUM      0
#define RESET_GPIO_NUM    15
#define XCLK_GPIO_NUM     27
#define SIOD_GPIO_NUM     25
#define SIOC_GPIO_NUM     23

#define Y9_GPIO_NUM       19
#define Y8_GPIO_NUM       36
#define Y7_GPIO_NUM       18
#define Y6_GPIO_NUM       39
#define Y5_GPIO_NUM        5
#define Y4_GPIO_NUM       34
#define Y3_GPIO_NUM       35
#define Y2_GPIO_NUM       17
#define VSYNC_GPIO_NUM    22
#define HREF_GPIO_NUM     26
#define PCLK_GPIO_NUM     21
#endif

#endif