// 函数: sub_141c470e0
// 地址: 0x141c470e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = memset(arg3, 0, sx.q(*(arg1 + 0xc)) << 2)
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int32_t* r11_1 = arg3
    void* rbx_1 = *(arg1 + 0x10) + 0x10
    
    do
        result = sx.q(*(rbx_1 - 0x10))
        int32_t rdi_1 = 0
        int64_t r8_2 = sx.q(*rbx_1)
        int64_t j = 0
        int64_t rdx = *(rbx_1 - 8)
        int64_t r9_1 = arg2 + (result << 2)
        
        if (r8_2.d s> 0)
            float zmm0_1[0x4]
            float zmm1[0x4]
            
            if (r8_2.d u>= 8)
                int32_t zmm4_1 = *r11_1
                int64_t rcx_1 = sx.q((r8_2 - 1).d)
                result = r9_1 + (rcx_1 << 2)
                void* rsi_1 = &arg3[rcx_1]
                
                if (arg3 u> result || rsi_1 u< r9_1)
                    result = rdx + (rcx_1 << 2)
                    
                    if (arg3 u> result || rsi_1 u< rdx)
                        float zmm2[0x4] = zx.o(0)
                        float zmm3[0x4] = zx.o(0)
                        int32_t rcx_3 = r8_2.d & 0x80000007
                        
                        if (rcx_3 s< 0)
                            rcx_3 = ((rcx_3 - 1) | 0xfffffff8) + 1
                        
                        float (* rcx_7)[0x4] = rdx - r9_1
                        result = r9_1 + 0x10
                        
                        do
                            rdi_1 += 8
                            j += 8
                            zmm1 = _mm_mul_ps(*(rcx_7 + result - 0x10), *(result - 0x10))
                            zmm0_1 = *result
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = *(rcx_7 + result)
                            result += 0x20
                            zmm3 = _mm_add_ps(zmm3, _mm_mul_ps(zmm1, zmm0_1))
                        while (j s< sx.q(r8_2.d - rcx_3))
                        
                        zmm2 = _mm_add_ps(zmm2, zmm3)
                        zmm2[0].q = zmm2 u>> 0x40
                        zmm1 = _mm_add_ps(zmm2, zmm2)
                        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
                        zmm1[0] = zmm1[0] + zmm0_1[0]
                        zmm1[0] = zmm1[0] f+ zmm4_1
                        *r11_1 = zmm1[0]
            
            if (rdi_1 s< r8_2.d)
                zmm1 = *r11_1
                result = r9_1 + (j << 2)
                int64_t j_2 = r8_2 - j
                int64_t j_1
                
                do
                    zmm0_1 = *(result + rdx - r9_1)
                    zmm0_1[0] = zmm0_1[0] f* *result
                    result += 4
                    zmm1[0] = zmm1[0] + zmm0_1[0]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                *r11_1 = zmm1[0]
        
        i += 1
        rbx_1 += 0x18
        r11_1 = &r11_1[1]
    while (i s< *(arg1 + 0x18))

return result
