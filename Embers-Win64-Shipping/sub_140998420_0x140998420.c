// 函数: sub_140998420
// 地址: 0x140998420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg3 + 0x10) u>> 2)

if ((result.b & 1) == 0)
    result = *(arg2 + 0x10)
    *result = 0
else
    int32_t r9_1 = *(arg3 + 0x20)
    int32_t rcx = 0
    
    if (r9_1 s> 0)
        uint64_t* r8 = *(arg3 + 0x18)
        int64_t r10_1 = sx.q(arg2[1])
        int64_t r11_1 = sx.q(*arg2)
        
        while (true)
            result = *r8
            uint32_t zmm0[0x4] = *(result + (r11_1 << 3))
            zmm0[0] = zmm0[0] f- *(result + (r10_1 << 3))
            uint32_t zmm1[0x4] = *(result + (r11_1 << 3) + 4)
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
                break
            
            zmm1[0] = zmm1[0] f- *(result + (r10_1 << 3) + 4)
            
            if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999975e-05f)
                break
            
            rcx += 1
            r8 = &r8[2]
            
            if (rcx s>= r9_1)
                return result
        
        result = *(arg2 + 0x10)
        *result = 0

return result
