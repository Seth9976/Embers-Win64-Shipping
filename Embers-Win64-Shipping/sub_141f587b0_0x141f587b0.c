// 函数: sub_141f587b0
// 地址: 0x141f587b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x440)

if (rcx == 0)
    return 

uint32_t zmm2[0x4] = *(arg1 + 0x504)
float zmm1 = *(arg1 + 0x520)
zmm2[0] = zmm2[0] f- zmm1

if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770)[0] f> 9.99999994e-09f))
    float var_28
    sub_1423633d0(rcx, &var_28)
    uint32_t rcx_1 = zx.d(*(arg1 + 0x525))
    float zmm1_1
    float var_1c
    
    if (rcx_1 == 0)
        zmm1_1 = var_1c
    else
        float var_18
        float var_14
        
        zmm1_1 = rcx_1 == 1 ? var_18 : var_14
    float zmm0_1 = 0.5f / zmm1_1
    *arg2 = zmm0_1
    uint32_t rcx_3 = zx.d(*(arg1 + 0x525))
    
    if (rcx_3 == 0)
        *arg3 = zmm0_1 * var_28 - 0.5f
        return 
    
    if (rcx_3 == 1)
        float var_24
        *arg3 = zmm0_1 * var_24 - 0.5f
        return 
    
    float var_20
    *arg3 = zmm0_1 * var_20 - 0.5f
    return 

uint32_t zmm0[0x4] = 0x3f800000
zmm0[0] = 1f / (zmm1 f- zmm2[0])
*arg2 = zmm0[0]
zmm0[0] = zmm0[0] f* *(arg1 + 0x504)
*arg3 = zmm0[0]
