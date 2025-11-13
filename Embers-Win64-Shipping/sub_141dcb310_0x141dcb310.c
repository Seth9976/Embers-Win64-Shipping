// 函数: sub_141dcb310
// 地址: 0x141dcb310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0 && (arg1 == arg3 || *(arg1 + 0x118) == arg3))
    return arg4 * 10f f* *(arg1 + 0x110)

if ((*(arg1 + 0x58) & 0x20) == 0)
    void* rax = *(arg1 + 0x130)
    
    if (rax != 0)
        float zmm1[0x4] = *(rax + 0x1d0)
        float zmm0 = zmm1[0] - *arg2
        float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        temp0[0] = temp0[0] - arg2[1]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_1[0] = temp0_1[0] - arg2[2]
        temp0[0] = temp0[0] * temp0[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        temp0[0] = temp0[0] + zmm0 * zmm0
        temp0[0] = temp0[0] + temp0_1[0]
        
        if (not(temp0[0] >= 250000f))
            return arg4 * 4f f* *(arg1 + 0x110)
        
        if (not(temp0[0] >= 4000000f))
            return arg4 * 3f f* *(arg1 + 0x110)
        
        if (not(temp0[0] >= 9998244f))
            return arg4 * 2.4000001f f* *(arg1 + 0x110)
        
        if (temp0[0] >= 64000000f)
            return arg4 * 0.200000003f f* *(arg1 + 0x110)
        
        return arg4 * 0.800000012f f* *(arg1 + 0x110)

return arg4 f* *(arg1 + 0x110)
