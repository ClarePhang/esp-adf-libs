// Copyright 2018 Espressif Systems (Shanghai) PTE LTD
// All rights reserved.

#ifndef _AUTO_AAC_DEC_H_
#define _AUTO_AAC_DEC_H_

/**
 * @brief      Open an Audio Element type data
 *
 * @param      el   The audio element handle
 *
 * @return    
 *             ESP_OK
 *             ESP_FAIL
 */
int aac_decoder_open(audio_element_handle_t el);

/**
 * @brief      Close an Audio Element type data
 *
 * @param      el   The audio element handle
 *
 * @return    
 *             ESP_OK
 *             ESP_FAIL
 */
int aac_decoder_close(audio_element_handle_t el);

/**
 * @brief      Do music data to decode
 *
 * @param      el   The audio element handle
 *
 * @return    
 *             ESP_OK
 *             ESP_FAIL
 */
int aac_decoder_process(audio_element_handle_t el);

#endif