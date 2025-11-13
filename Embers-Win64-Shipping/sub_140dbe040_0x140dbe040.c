// 函数: sub_140dbe040
// 地址: 0x140dbe040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0xb0))

if (result.d s> 0)
    int64_t r8_1 = sx.q(*(*(arg1 + 0xa8) + (result << 2) - 4))
    
    if (r8_1.d != 0xffffffff)
        result = (r8_1 << 6) + *(arg1 + 0xb8)
        
        if (*(result + 0x34) != 0 && (*(result + 0x30) & 1) != 0)
            uint32_t zmm0[0x4] = *(result + 0x10)
            zmm0[0] = zmm0[0] f- *(result + 0x28)
            uint32_t zmm1[0x4] = *(result + 0x14)
            zmm1[0] = zmm1[0] f- *(result + 0x2c)
            uint32_t temp0_1[0x4] = _mm_and_ps(zmm0, 0x7fffffff)
            uint32_t temp0_2[0x4]
            
            if (not(temp0_1[0] f<= 9.99999994e-09f))
                temp0_2 = _mm_and_ps(zmm1, 0x7fffffff)
            
            if (temp0_1[0] f<= 9.99999994e-09f || not(temp0_2[0] f> 9.99999994e-09f))
                result.b = 1
                return result

result.b = 0
return result
