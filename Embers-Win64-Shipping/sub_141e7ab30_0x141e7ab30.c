// 函数: sub_141e7ab30
// 地址: 0x141e7ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*arg3 = 0
float var_28

if (sub_141e7dd40(arg1, 0, &var_28, arg4) == 0)
    return 0xffffffff

float zmm1 = var_28 - *arg2
float var_24
float zmm2_1 = var_24 - arg2[1]
float var_20
float zmm0_1 = var_20 - arg2[2]
*arg3 = zmm2_1 * zmm2_1 + zmm1 * zmm1 + zmm0_1 * zmm0_1
int32_t rdi_1

if (sub_140a80ea0() == 0)
    rdi_1 = *(arg1 + 0x88)
else
    rdi_1 = *(arg1 + 0x138)

int32_t rbx_1 = 1

if (rdi_1 s> 1)
    do
        if (sub_141e7dd40(arg1, rbx_1, &var_28, arg4) != 0)
            float zmm2_2 = var_24 - arg2[1]
            zmm1 = var_28 - *arg2
            float zmm0_2 = var_20 - arg2[2]
            zmm2_2 = zmm2_2 * zmm2_2 + zmm1 * zmm1 + zmm0_2 * zmm0_2
            
            if (not(zmm2_2 f>= *arg3))
                *arg3 = zmm2_2
                rbp = rbx_1
        
        rbx_1 += 1
    while (rbx_1 s< rdi_1)

return zx.q(rbp)
