// 函数: sub_141dca0c0
// 地址: 0x141dca0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x59) & 2) != 0)
    int64_t* r11_1 = *(arg1 + 0xe0)
    
    if (r11_1 != 0)
        jump(*(*r11_1 + 0x3c0))

if (arg4 != 0 && (arg1 == arg4 || *(arg1 + 0x118) == arg4))
    return arg5 * 4f f* *(arg1 + 0x110)

if ((*(arg1 + 0x58) & 0x20) == 0)
    void* rax_2 = *(arg1 + 0x130)
    
    if (rax_2 != 0)
        float zmm3[0x4] = *(rax_2 + 0x1d0)
        float zmm2 = zmm3[0] - *arg2
        float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        temp0_1[0] = temp0_1[0] - arg2[1]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        temp0_2[0] = temp0_2[0] - arg2[2]
        float zmm0 = zmm2 * zmm2
        zmm2 = zmm2 * *arg3
        float zmm4 = temp0_1[0] * temp0_1[0]
        float zmm1 = temp0_2[0]
        temp0_1[0] = temp0_1[0] * arg3[1]
        zmm1 = zmm1 * temp0_2[0]
        temp0_2[0] = temp0_2[0] * arg3[2]
        temp0_1[0] = temp0_1[0] + zmm2
        zmm4 = zmm4 + zmm0 + zmm1
        temp0_1[0] = temp0_1[0] + temp0_2[0]
        bool cond:0_1
        
        if (temp0_1[0] >= 0f)
            if (not(zmm4 >= 64000000f))
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                
                if (not(temp0_1[0] <= zmm4 * 0.5f))
                    return (arg5 + arg5) f* *(arg1 + 0x110)
            
            cond:0_1 = zmm4 <= 9998244f
        else
            if (not(zmm4 <= 4000000f))
                return arg5 * 0.200000003f f* *(arg1 + 0x110)
            
            cond:0_1 = zmm4 <= 250000f
        
        if (not(cond:0_1))
            return arg5 * 0.400000006f f* *(arg1 + 0x110)

return arg5 f* *(arg1 + 0x110)
