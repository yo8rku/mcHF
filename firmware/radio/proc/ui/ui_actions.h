/************************************************************************************
**                                                                                 **
**                             mcHF Pro QRP Transceiver                            **
**                         Krassi Atanassov - M0NKA 2012-2020                      **
**                            mail: djchrismarc@gmail.com                          **
**                                 twitter: @bph_co                                **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:                                                                       **
**          The mcHF project is released for radio amateurs experimentation,       **
**          non-commercial use only. All source files under GPL-3.0, unless        **
**          third party drivers specifies otherwise. Thank you!                    **
************************************************************************************/
#ifndef __UI_ACTIONS
#define __UI_ACTIONS

uchar ui_actions_ipc_msg(uchar send, uchar msg, uchar *in_buff);

void ui_actions_change_band(uchar band);
void ui_actions_change_vfo_mode(void);
void ui_actions_change_span(void);
void ui_actions_change_step(void);
void ui_actions_change_demod_mode(uchar mode);
void ui_actions_jump_to_band_part(uchar band_part_id);
void ui_actions_toggle_atten(void);
void ui_actions_change_atten(uchar val);
void ui_actions_change_audio_balance(uchar bal);
void ui_actions_change_audio_volume(uchar vol);
void ui_actions_change_stereo_mode(uchar mode);
void ui_actions_change_filter(uchar id);
void ui_actions_change_agc_mode(uchar mode);
void ui_actions_change_rf_gain(uchar gain);
void ui_actions_change_power_level(void);
void ui_actions_change_dsp_core(void);

#endif
