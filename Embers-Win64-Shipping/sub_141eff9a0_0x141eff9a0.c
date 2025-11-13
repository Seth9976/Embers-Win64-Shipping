// 函数: sub_141eff9a0
// 地址: 0x141eff9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(*arg1 + 0x5c0))()

if (result != 0)
    if (*(arg1[0x29] + 0x298) != 0)
        float zmm1[0x4] = *(arg1[0x16] + 0x1d0)
        int64_t rax_3 = *arg1
        float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_18 = zmm1[0]
        float var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_14 = temp0[0]
        return (*(rax_3 + 0x8a0))(arg1, &var_18, &arg1[0x5e], 0, 0)
    
    arg1[0x5e].d &= 0xfffffff8
    *(arg1 + 0x2f4) = 0
    result = memset(arg1 + 0x2fc, 0, 0x88)
    *(arg1 + 0x304) = 0x3f800000

return result
