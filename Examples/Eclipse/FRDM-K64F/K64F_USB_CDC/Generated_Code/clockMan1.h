/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : clockMan1.h
**     Project     : K64F_USB_CDC
**     Processor   : MK64FN1M0VLL12
**     Component   : fsl_clock_manager
**     Version     : Component 1.3.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.3.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-12-12, 23:04, # CodeGen: 0
**     Contents    :
**         CLOCK_SYS_SetOutDiv1                  - static inline void CLOCK_SYS_SetOutDiv1(uint8_t outdiv1);
**         CLOCK_SYS_GetOutDiv1                  - static inline uint8_t CLOCK_SYS_GetOutDiv1(void);
**         CLOCK_SYS_SetOutDiv2                  - static inline void CLOCK_SYS_SetOutDiv2(uint8_t outdiv2);
**         CLOCK_SYS_GetOutDiv2                  - static inline uint8_t CLOCK_SYS_GetOutDiv2(void);
**         CLOCK_SYS_SetOutDiv3                  - static inline void CLOCK_SYS_SetOutDiv3(uint8_t outdiv3);
**         CLOCK_SYS_GetOutDiv3                  - static inline uint8_t CLOCK_SYS_GetOutDiv3(void);
**         CLOCK_SYS_SetOutDiv4                  - static inline void CLOCK_SYS_SetOutDiv4(uint8_t outdiv4);
**         CLOCK_SYS_GetOutDiv4                  - static inline uint8_t CLOCK_SYS_GetOutDiv4(void);
**         CLOCK_SYS_SetOutDiv                   - static inline void CLOCK_SYS_SetOutDiv(uint8_t outdiv1,uint8_t...
**         CLOCK_SYS_GetOutDiv                   - static inline void CLOCK_SYS_GetOutDiv(uint8_t * outdiv1,uint8_t *...
**         CLOCK_SYS_GetFlexbusFreq              - uint32_t CLOCK_SYS_GetFlexbusFreq(void);
**         CLOCK_SYS_GetPllFllClockFreq          - uint32_t CLOCK_SYS_GetPllFllClockFreq(void);
**         CLOCK_SYS_SetPllfllSel                - static inline void CLOCK_SYS_SetPllfllSel(clock_pllfll_sel_t setting);
**         CLOCK_SYS_GetPllfllSel                - static inline clock_pllfll_sel_t CLOCK_SYS_GetPllfllSel(void);
**         CLOCK_SYS_GetFixedFreqClockFreq       - static inline uint32_t CLOCK_SYS_GetFixedFreqClockFreq(void);
**         CLOCK_SYS_GetInternalRefClockFreq     - static inline uint32_t CLOCK_SYS_GetInternalRefClockFreq(void);
**         CLOCK_SYS_GetExternalRefClock32kFreq  - uint32_t CLOCK_SYS_GetExternalRefClock32kFreq(void);
**         CLOCK_SYS_SetExternalRefClock32kSrc   - static inline void CLOCK_SYS_SetExternalRefClock32kSrc(clock_er32k_src_t src);
**         CLOCK_SYS_GetExternalRefClock32kSrc   - static inline clock_er32k_src_t CLOCK_SYS_GetExternalRefClock32kSrc(void);
**         CLOCK_SYS_GetOsc0ExternalRefClockFreq - uint32_t CLOCK_SYS_GetOsc0ExternalRefClockFreq(void);
**         CLOCK_SYS_GetRtcFreq                  - static inline uint32_t CLOCK_SYS_GetRtcFreq(uint32_t instance);
**         CLOCK_SYS_GetRtcOutFreq               - uint32_t CLOCK_SYS_GetRtcOutFreq(void);
**         CLOCK_SYS_GetRtcOutSrc                - static inline clock_rtcout_src_t CLOCK_SYS_GetRtcOutSrc(void);
**         CLOCK_SYS_SetRtcOutSrc                - static inline void CLOCK_SYS_SetRtcOutSrc(clock_rtcout_src_t src);
**         CLOCK_SYS_GetWdogFreq                 - uint32_t CLOCK_SYS_GetWdogFreq(uint32_t instance,clock_wdog_src_t wdogSrc);
**         CLOCK_SYS_GetTraceSrc                 - static inline clock_trace_src_t CLOCK_SYS_GetTraceSrc(uint32_t instance);
**         CLOCK_SYS_SetTraceSrc                 - static inline void CLOCK_SYS_SetTraceSrc(uint32_t instance,clock_trace_src_t...
**         CLOCK_SYS_GetTraceFreq                - uint32_t CLOCK_SYS_GetTraceFreq(uint32_t instance);
**         CLOCK_SYS_GetPortFilterFreq           - uint32_t CLOCK_SYS_GetPortFilterFreq(uint32_t...
**         CLOCK_SYS_GetLptmrFreq                - uint32_t CLOCK_SYS_GetLptmrFreq(uint32_t instance,clock_lptmr_src_t lptmrSrc);
**         CLOCK_SYS_GetEnetRmiiSrc              - static inline clock_rmii_src_t CLOCK_SYS_GetEnetRmiiSrc(uint32_t instance);
**         CLOCK_SYS_SetEnetRmiiSrc              - static inline void CLOCK_SYS_SetEnetRmiiSrc(uint32_t...
**         CLOCK_SYS_GetEnetRmiiFreq             - uint32_t CLOCK_SYS_GetEnetRmiiFreq(uint32_t instance);
**         CLOCK_SYS_SetEnetTimeStampSrc         - static inline void CLOCK_SYS_SetEnetTimeStampSrc(uint32_t...
**         CLOCK_SYS_GetEnetTimeStampSrc         - static inline clock_time_src_t CLOCK_SYS_GetEnetTimeStampSrc(uint32_t instance);
**         CLOCK_SYS_GetEnetTimeStampFreq        - uint32_t CLOCK_SYS_GetEnetTimeStampFreq(uint32_t instance);
**         CLOCK_SYS_GetEwmFreq                  - static inline uint32_t CLOCK_SYS_GetEwmFreq(uint32_t instance);
**         CLOCK_SYS_GetFtfFreq                  - static inline uint32_t CLOCK_SYS_GetFtfFreq(uint32_t instance);
**         CLOCK_SYS_GetCrcFreq                  - static inline uint32_t CLOCK_SYS_GetCrcFreq(uint32_t instance);
**         CLOCK_SYS_GetCmpFreq                  - static inline uint32_t CLOCK_SYS_GetCmpFreq(uint32_t instance);
**         CLOCK_SYS_GetVrefFreq                 - static inline uint32_t CLOCK_SYS_GetVrefFreq(uint32_t instance);
**         CLOCK_SYS_GetPdbFreq                  - static inline uint32_t CLOCK_SYS_GetPdbFreq(uint32_t instance);
**         CLOCK_SYS_GetPitFreq                  - static inline uint32_t CLOCK_SYS_GetPitFreq(uint32_t instance);
**         CLOCK_SYS_GetCmtFreq                  - static inline uint32_t CLOCK_SYS_GetCmtFreq(uint32_t instance);
**         CLOCK_SYS_GetUsbfsSrc                 - static inline clock_usbfs_src_t CLOCK_SYS_GetUsbfsSrc(uint32_t instance);
**         CLOCK_SYS_SetUsbfsSrc                 - static inline void CLOCK_SYS_SetUsbfsSrc(uint32_t instance,clock_usbfs_src_t...
**         CLOCK_SYS_GetUsbfsFreq                - uint32_t CLOCK_SYS_GetUsbfsFreq(uint32_t instance);
**         CLOCK_SYS_SetUsbfsDiv                 - static inline void CLOCK_SYS_SetUsbfsDiv(uint32_t instance,uint8_t...
**         CLOCK_SYS_GetUsbfsDiv                 - static inline void CLOCK_SYS_GetUsbfsDiv(uint32_t instance,uint8_t *...
**         CLOCK_SYS_GetFlexcanFreq              - uint32_t CLOCK_SYS_GetFlexcanFreq(uint32_t instance,clock_flexcan_src_t...
**         CLOCK_SYS_GetSdhcFreq                 - uint32_t CLOCK_SYS_GetSdhcFreq(uint32_t instance);
**         CLOCK_SYS_SetSdhcSrc                  - static inline void CLOCK_SYS_SetSdhcSrc(uint32_t instance,clock_sdhc_src_t...
**         CLOCK_SYS_GetSdhcSrc                  - static inline clock_sdhc_src_t CLOCK_SYS_GetSdhcSrc(uint32_t instance);
**         CLOCK_SYS_GetSaiFreq                  - uint32_t CLOCK_SYS_GetSaiFreq(uint32_t instance,clock_sai_src_t saiSrc);
**         CLOCK_SYS_GetUsbdcdFreq               - static inline uint32_t CLOCK_SYS_GetUsbdcdFreq(uint32_t instance);
**         CLOCK_SYS_GetSpiFreq                  - static inline uint32_t CLOCK_SYS_GetSpiFreq(uint32_t instance);
**         CLOCK_SYS_GetI2cFreq                  - static inline uint32_t CLOCK_SYS_GetI2cFreq(uint32_t instance);
**         CLOCK_SYS_GetAdcAltFreq               - static inline uint32_t CLOCK_SYS_GetAdcAltFreq(uint32_t instance);
**         CLOCK_SYS_GetFtmFixedFreq             - static inline uint32_t CLOCK_SYS_GetFtmFixedFreq(uint32_t instance);
**         CLOCK_SYS_GetFtmSystemClockFreq       - static inline uint32_t CLOCK_SYS_GetFtmSystemClockFreq(uint32_t instance);
**         CLOCK_SYS_GetFtmExternalFreq          - uint32_t CLOCK_SYS_GetFtmExternalFreq(uint32_t instance);
**         CLOCK_SYS_GetFtmExternalSrc           - static inline sim_ftm_clk_sel_t CLOCK_SYS_GetFtmExternalSrc(uint32_t instance);
**         CLOCK_SYS_SetFtmExternalSrc           - static inline void CLOCK_SYS_SetFtmExternalSrc(uint32_t...
**         CLOCK_SYS_GetUartFreq                 - uint32_t CLOCK_SYS_GetUartFreq(uint32_t instance);
**         CLOCK_SYS_GetGpioFreq                 - static inline uint32_t CLOCK_SYS_GetGpioFreq(uint32_t instance);
**         CLOCK_SYS_EnableDmaClock              - static inline void CLOCK_SYS_EnableDmaClock(uint32_t instance);
**         CLOCK_SYS_DisableDmaClock             - static inline void CLOCK_SYS_DisableDmaClock(uint32_t instance);
**         CLOCK_SYS_GetDmaGateCmd               - static inline bool CLOCK_SYS_GetDmaGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableDmamuxClock           - static inline void CLOCK_SYS_EnableDmamuxClock(uint32_t instance);
**         CLOCK_SYS_DisableDmamuxClock          - static inline void CLOCK_SYS_DisableDmamuxClock(uint32_t instance);
**         CLOCK_SYS_GetDmamuxGateCmd            - static inline bool CLOCK_SYS_GetDmamuxGateCmd(uint32_t instance);
**         CLOCK_SYS_EnablePortClock             - void CLOCK_SYS_EnablePortClock(uint32_t instance);
**         CLOCK_SYS_DisablePortClock            - void CLOCK_SYS_DisablePortClock(uint32_t instance);
**         CLOCK_SYS_GetPortGateCmd              - bool CLOCK_SYS_GetPortGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableMpuClock              - static inline void CLOCK_SYS_EnableMpuClock(uint32_t instance);
**         CLOCK_SYS_DisableMpuClock             - static inline void CLOCK_SYS_DisableMpuClock(uint32_t instance);
**         CLOCK_SYS_GetMpuGateCmd               - static inline bool CLOCK_SYS_GetMpuGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableEwmClock              - static inline void CLOCK_SYS_EnableEwmClock(uint32_t instance);
**         CLOCK_SYS_DisableEwmClock             - static inline void CLOCK_SYS_DisableEwmClock(uint32_t instance);
**         CLOCK_SYS_GetEwmGateCmd               - static inline bool CLOCK_SYS_GetEwmGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableFlexbusClock          - static inline void CLOCK_SYS_EnableFlexbusClock(uint32_t instance);
**         CLOCK_SYS_DisableFlexbusClock         - static inline void CLOCK_SYS_DisableFlexbusClock(uint32_t instance);
**         CLOCK_SYS_GetFlexbusGateCmd           - static inline bool CLOCK_SYS_GetFlexbusGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableFtfClock              - static inline void CLOCK_SYS_EnableFtfClock(uint32_t instance);
**         CLOCK_SYS_DisableFtfClock             - static inline void CLOCK_SYS_DisableFtfClock(uint32_t instance);
**         CLOCK_SYS_GetFtfGateCmd               - static inline bool CLOCK_SYS_GetFtfGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableCrcClock              - static inline void CLOCK_SYS_EnableCrcClock(uint32_t instance);
**         CLOCK_SYS_DisableCrcClock             - static inline void CLOCK_SYS_DisableCrcClock(uint32_t instance);
**         CLOCK_SYS_GetCrcGateCmd               - static inline bool CLOCK_SYS_GetCrcGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableRngaClock             - static inline void CLOCK_SYS_EnableRngaClock(uint32_t instance);
**         CLOCK_SYS_DisableRngaClock            - static inline void CLOCK_SYS_DisableRngaClock(uint32_t instance);
**         CLOCK_SYS_GetRngaGateCmd              - static inline bool CLOCK_SYS_GetRngaGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableAdcClock              - void CLOCK_SYS_EnableAdcClock(uint32_t instance);
**         CLOCK_SYS_DisableAdcClock             - void CLOCK_SYS_DisableAdcClock(uint32_t instance);
**         CLOCK_SYS_GetAdcGateCmd               - bool CLOCK_SYS_GetAdcGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableCmpClock              - static inline void CLOCK_SYS_EnableCmpClock(uint32_t instance);
**         CLOCK_SYS_DisableCmpClock             - static inline void CLOCK_SYS_DisableCmpClock(uint32_t instance);
**         CLOCK_SYS_GetCmpGateCmd               - static inline bool CLOCK_SYS_GetCmpGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableDacClock              - void CLOCK_SYS_EnableDacClock(uint32_t instance);
**         CLOCK_SYS_DisableDacClock             - void CLOCK_SYS_DisableDacClock(uint32_t instance);
**         CLOCK_SYS_GetDacGateCmd               - bool CLOCK_SYS_GetDacGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableVrefClock             - static inline void CLOCK_SYS_EnableVrefClock(uint32_t instance);
**         CLOCK_SYS_DisableVrefClock            - static inline void CLOCK_SYS_DisableVrefClock(uint32_t instance);
**         CLOCK_SYS_GetVrefGateCmd              - static inline bool CLOCK_SYS_GetVrefGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableSaiClock              - static inline void CLOCK_SYS_EnableSaiClock(uint32_t instance);
**         CLOCK_SYS_DisableSaiClock             - static inline void CLOCK_SYS_DisableSaiClock(uint32_t instance);
**         CLOCK_SYS_GetSaiGateCmd               - static inline bool CLOCK_SYS_GetSaiGateCmd(uint32_t instance);
**         CLOCK_SYS_EnablePdbClock              - static inline void CLOCK_SYS_EnablePdbClock(uint32_t instance);
**         CLOCK_SYS_DisablePdbClock             - static inline void CLOCK_SYS_DisablePdbClock(uint32_t instance);
**         CLOCK_SYS_GetPdbGateCmd               - static inline bool CLOCK_SYS_GetPdbGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableFtmClock              - void CLOCK_SYS_EnableFtmClock(uint32_t instance);
**         CLOCK_SYS_DisableFtmClock             - void CLOCK_SYS_DisableFtmClock(uint32_t instance);
**         CLOCK_SYS_GetFtmGateCmd               - bool CLOCK_SYS_GetFtmGateCmd(uint32_t instance);
**         CLOCK_SYS_EnablePitClock              - static inline void CLOCK_SYS_EnablePitClock(uint32_t instance);
**         CLOCK_SYS_DisablePitClock             - static inline void CLOCK_SYS_DisablePitClock(uint32_t instance);
**         CLOCK_SYS_GetPitGateCmd               - static inline bool CLOCK_SYS_GetPitGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableLptmrClock            - static inline void CLOCK_SYS_EnableLptmrClock(uint32_t instance);
**         CLOCK_SYS_DisableLptmrClock           - static inline void CLOCK_SYS_DisableLptmrClock(uint32_t instance);
**         CLOCK_SYS_GetLptmrGateCmd             - static inline bool CLOCK_SYS_GetLptmrGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableCmtClock              - static inline void CLOCK_SYS_EnableCmtClock(uint32_t instance);
**         CLOCK_SYS_DisableCmtClock             - static inline void CLOCK_SYS_DisableCmtClock(uint32_t instance);
**         CLOCK_SYS_GetCmtGateCmd               - static inline bool CLOCK_SYS_GetCmtGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableRtcClock              - static inline void CLOCK_SYS_EnableRtcClock(uint32_t instance);
**         CLOCK_SYS_DisableRtcClock             - static inline void CLOCK_SYS_DisableRtcClock(uint32_t instance);
**         CLOCK_SYS_GetRtcGateCmd               - static inline bool CLOCK_SYS_GetRtcGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableEnetClock             - static inline void CLOCK_SYS_EnableEnetClock(uint32_t instance);
**         CLOCK_SYS_DisableEnetClock            - static inline void CLOCK_SYS_DisableEnetClock(uint32_t instance);
**         CLOCK_SYS_GetEnetGateCmd              - static inline bool CLOCK_SYS_GetEnetGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableUsbfsClock            - static inline void CLOCK_SYS_EnableUsbfsClock(uint32_t instance);
**         CLOCK_SYS_DisableUsbfsClock           - static inline void CLOCK_SYS_DisableUsbfsClock(uint32_t instance);
**         CLOCK_SYS_GetUsbfsGateCmd             - static inline bool CLOCK_SYS_GetUsbfsGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableUsbdcdClock           - static inline void CLOCK_SYS_EnableUsbdcdClock(uint32_t instance);
**         CLOCK_SYS_DisableUsbdcdClock          - static inline void CLOCK_SYS_DisableUsbdcdClock(uint32_t instance);
**         CLOCK_SYS_GetUsbdcdGateCmd            - static inline bool CLOCK_SYS_GetUsbdcdGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableFlexcanClock          - static inline void CLOCK_SYS_EnableFlexcanClock(uint32_t instance);
**         CLOCK_SYS_DisableFlexcanClock         - static inline void CLOCK_SYS_DisableFlexcanClock(uint32_t instance);
**         CLOCK_SYS_GetFlexcanGateCmd           - static inline bool CLOCK_SYS_GetFlexcanGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableSpiClock              - void CLOCK_SYS_EnableSpiClock(uint32_t instance);
**         CLOCK_SYS_DisableSpiClock             - void CLOCK_SYS_DisableSpiClock(uint32_t instance);
**         CLOCK_SYS_GetSpiGateCmd               - bool CLOCK_SYS_GetSpiGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableI2cClock              - void CLOCK_SYS_EnableI2cClock(uint32_t instance);
**         CLOCK_SYS_DisableI2cClock             - void CLOCK_SYS_DisableI2cClock(uint32_t instance);
**         CLOCK_SYS_GetI2cGateCmd               - bool CLOCK_SYS_GetI2cGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableUartClock             - void CLOCK_SYS_EnableUartClock(uint32_t instance);
**         CLOCK_SYS_DisableUartClock            - void CLOCK_SYS_DisableUartClock(uint32_t instance);
**         CLOCK_SYS_GetUartGateCmd              - bool CLOCK_SYS_GetUartGateCmd(uint32_t instance);
**         CLOCK_SYS_EnableSdhcClock             - static inline void CLOCK_SYS_EnableSdhcClock(uint32_t instance);
**         CLOCK_SYS_DisableSdhcClock            - static inline void CLOCK_SYS_DisableSdhcClock(uint32_t instance);
**         CLOCK_SYS_GetSdhcGateCmd              - static inline bool CLOCK_SYS_GetSdhcGateCmd(uint32_t instance);
**         CLOCK_SYS_SetEnetExternalFreq         - static inline void CLOCK_SYS_SetEnetExternalFreq(uint32_t...
**         CLOCK_SYS_SetSdhcExternalFreq         - static inline void CLOCK_SYS_SetSdhcExternalFreq(uint32_t...
**         CLOCK_SYS_SetUsbExternalFreq          - static inline void CLOCK_SYS_SetUsbExternalFreq(uint32_t srcInstance,uint32_t...
**         CLOCK_SYS_SetFtmExternalFreq          - static inline void CLOCK_SYS_SetFtmExternalFreq(uint32_t srcInstance,uint32_t...
**         CLOCK_SYS_Init                        - clock_manager_error_code_t CLOCK_SYS_Init(clock_manager_user_config_t const...
**         CLOCK_SYS_UpdateConfiguration         - clock_manager_error_code_t CLOCK_SYS_UpdateConfiguration(uint8_t...
**         CLOCK_SYS_SetConfiguration            - clock_manager_error_code_t CLOCK_SYS_Se...
**         CLOCK_SYS_GetCurrentConfiguration     - uint8_t CLOCK_SYS_GetCurrentConfiguration(void);
**         CLOCK_SYS_GetErrorCallback            - clock_manager_callback_user_config_t* CLOCK_SYS_GetErrorCallback(void);
**         CLOCK_SYS_BootToFee                   - mcg_mode_error_t CLOCK_SYS_BootToFee(const mcg_config_t * config);
**         CLOCK_SYS_BootToFei                   - mcg_mode_error_t CLOCK_SYS_BootToFei(const mcg_config_t * config);
**         CLOCK_SYS_BootToBlpi                  - mcg_mode_error_t CLOCK_SYS_BootToBlpi(const mcg_config_t * config);
**         CLOCK_SYS_BootToBlpe                  - mcg_mode_error_t CLOCK_SYS_BootToBlpe(const mcg_config_t * config);
**         CLOCK_SYS_BootToPee                   - mcg_mode_error_t CLOCK_SYS_BootToPee(const mcg_config_t * config);
**         CLOCK_SYS_SetMcgMode                  - mcg_mode_error_t CLOCK_SYS_SetMcgMode(mcg_config_t const * targetConfig);
**         CLOCK_SYS_SetSimConfigration          - void CLOCK_SYS_SetSimConfigration(sim_config_t const * simConfig);
**         CLOCK_SYS_OscInit                     - clock_manager_error_code_t CLOCK_SYS_OscInit(uint32_t...
**         CLOCK_SYS_OscDeinit                   - void CLOCK_SYS_OscDeinit(uint32_t instance);
**         CLOCK_SYS_SetOscerConfigration        - void CLOCK_SYS_SetOscerConfigration(uint32_t instance,oscer_config_t const *...
**         CLOCK_SYS_RtcOscInit                  - clock_manager_error_code_t CLOCK_SYS_RtcOscInit(uint32_t...
**         CLOCK_SYS_RtcOscDeinit                - void CLOCK_SYS_RtcOscDeinit(uint32_t instance);
**         CLOCK_SYS_GetFreq                     - clock_manager_error_code_t CLOCK_SYS_GetFreq(clock_names_t clockName,uint32_t...
**         CLOCK_SYS_GetCoreClockFreq            - uint32_t CLOCK_SYS_GetCoreClockFreq(void);
**         CLOCK_SYS_GetSystemClockFreq          - uint32_t CLOCK_SYS_GetSystemClockFreq(void);
**         CLOCK_SYS_GetBusClockFreq             - uint32_t CLOCK_SYS_GetBusClockFreq(void);
**         CLOCK_SYS_GetFlashClockFreq           - uint32_t CLOCK_SYS_GetFlashClockFreq(void);
**         CLOCK_SYS_GetLpoClockFreq             - static inline uint32_t CLOCK_SYS_GetLpoClockFreq(void);
**         CLOCK_SYS_SetSystickSrc               - static inline void CLOCK_SYS_SetSystickSrc(clock_systick_src_t src);
**         CLOCK_SYS_GetSystickFreq              - inline uint32_t CLOCK_SYS_GetSystickFreq(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file clockMan1.h
** @version 01.00
*/         
/*!
**  @addtogroup clockMan1_module clockMan1 module documentation
**  @{
*/         
#ifndef __clockMan1_H
#define __clockMan1_H
/* MODULE clockMan1. */
        
/* Include inherited beans */
#include "osa1.h"
#include "Cpu.h"
        
/*! @brief OSC instance number */
#define FSL_OSC0_INSTANCE 0U
                        
/*! @brief OSC Initialization Configuration Structure */  
extern osc_user_config_t clockMan1_osc0_Config;
/*! @brief User configuration structure 0 */
extern const clock_manager_user_config_t clockMan1_InitConfig0;
/*! @brief User configuration structure 1 */
extern const clock_manager_user_config_t clockMan1_InitConfig1;
/*! @brief User configuration structure 2 */
extern const clock_manager_user_config_t clockMan1_InitConfig2;
/*! @brief User configuration structure 3 */
extern const clock_manager_user_config_t clockMan1_InitConfig3;
/*! @brief User configuration structure 4 */
extern const clock_manager_user_config_t clockMan1_InitConfig4;
                
/*! @brief Count of user configuration structures */
#define FSL_CLOCK_MANAGER_CONFIG_CNT 5U
                
/*! @brief Array of pointers to User configuration structures */
extern clock_manager_user_config_t const *g_clockManConfigsArr[];


/*! @brief Count of user Callbacks */
#define FSL_CLOCK_MANAGER_CALLBACK_CNT 0U
            
/*! @brief Array of User callbacks */
extern clock_manager_callback_user_config_t *g_clockManCallbacksArr[];
#endif /* ifndef __clockMan1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
        
