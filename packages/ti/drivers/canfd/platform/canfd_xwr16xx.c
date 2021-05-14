/*
 *   @file  canfd_xwr16xx.c
 *
 *   @brief
 *      XWR16xx CANFD controller configuration. This is XWR16xx specific
 *      configuration and should *NOT* be modified by the customer.
 *
 *  \par
 *  NOTE:
 *      (C) Copyright 2016 Texas Instruments, Inc.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**************************************************************************
 *************************** Include Files ********************************
 **************************************************************************/

#include <stdint.h>
#include <ti/common/hw_types.h>
#include <ti/drivers/canfd/include/hw_mcanss.h>
#include <ti/drivers/canfd/include/canfd_internal.h>
#include <ti/common/sys_common.h>

/**************************************************************************
 ************************* Extern Declarations ****************************
 **************************************************************************/


/**************************************************************************
 ************************** Global Variables ******************************
 **************************************************************************/

/**
 * @brief   Platform specific CANFD initializations. This is XWR16xx
 * specific configuration and should *NOT* be modified by the customer.
 */
CANFD_HwCfg gCanFdHwCfg[2] =
{
    /* MCAN Hardware configuration:
     * - instance Id 0
     * - CANFD register Base Address
     * - CANFD Interrupt 0
     * - CANFD Interrupt 1
     */
    {
        0U,
        SOC_XWR16XX_MSS_MCAN_MEM_BASE_ADDRESS,
        SOC_XWR16XX_MSS_MCAN_LVL0_INT,
        SOC_XWR16XX_MSS_MCAN_LVL1_INT
    },
    /* Only 1 instance of CANFD is supported.
     * Mark this entry invalid.
     */
    {
        0xFFU,
        0,
        0,
        0
    }
};

/**
 *  @b Description
 *  @n
 *      Function is used to reset the MCAN IP.
 *
 *  @param[in]  baseAddr
 *      Base Address of the IP module.
 *
 *  @retval
 *      Not applicable
 */
void MCAN_reset(uint32_t baseAddr)
{
    HW_WR_FIELD32(MCAN_MCANSS_CTRL(baseAddr),
                  MCAN_MCANSS_CTRL_RESET,
                  0x1U);
}

/**
 *  @b Description
 *  @n
 *      Function is used to check if the MCAN IP is in RESET.
 *
 *  @param[in]  baseAddr
 *      Base Address of the IP module.
 *
 *  @retval
 *      0   -   Module is out of reset
 *  @retval
 *      1   -   Module is in reset
 */
uint32_t MCAN_isInReset(uint32_t baseAddr)
{
    uint32_t reset;
    uint32_t state;

    reset = HW_RD_FIELD32(MCAN_MCANSS_STAT(baseAddr),
                          MCAN_MCANSS_STAT_RESET);
    if (1U == reset)
    {
        state = (uint32_t) 1U;
    }
    else
    {
        state = (uint32_t) 0;
    }
    return state;
}

