// 函数: sub_142b84b40
// 地址: 0x142b84b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)
int32_t rdx = *(arg1 + 8)

if (rdx s<= 0xf)
    uint128_t zmm0
    
    if (r9.d s>= 0)
    label_142b84c0f:
        
        if (r9.d s< 0x17)
            zmm0 = *arg1
            int64_t i = 0
            int32_t r11_1 = 0
            int32_t rbx_2 = _mm_bsrli_si128(zmm0, 8).d
            
            if (rbx_2 s> 0)
                void* r10_2 = nullptr
                
                while (i u<= 0x1999999999999998)
                    r11_1 += 1
                    int32_t rax_8 = sx.d(*(r10_2 + zmm0.q)) - 0x30
                    r10_2 += 1
                    i = sx.q(rax_8) + i * 0xa
                    
                    if (r11_1 s>= rbx_2)
                        break
            
            zmm0.q = float.d(i)
            
            if (i s< 0)
                zmm0.q = zmm0.q f+ 1.8446744073709552e+19
            
            zmm0.q = zmm0.q f* *(&data_14367e130 + (r9 << 3))
            int64_t rax_10
            rax_10.b = 1
            *arg3 = zmm0.q
            return rax_10
    else
        if (neg.d(r9.d) s< 0x17)
            zmm0 = *arg1
            int64_t i_1 = 0
            int32_t r11 = 0
            int32_t rbx_1 = _mm_bsrli_si128(zmm0, 8).d
            
            if (rbx_1 s> 0)
                void* r10_1 = nullptr
                
                while (i_1 u<= 0x1999999999999998)
                    r11 += 1
                    int32_t rax_3 = sx.d(*(r10_1 + zmm0.q)) - 0x30
                    r10_1 += 1
                    i_1 = sx.q(rax_3) + i_1 * 0xa
                    
                    if (r11 s>= rbx_1)
                        break
            
            zmm0.q = float.d(i_1)
            
            if (i_1 s< 0)
                zmm0.q = zmm0.q f+ 1.8446744073709552e+19
            
            int64_t rax_6
            rax_6.b = 1
            zmm0.q = zmm0.q f/ *(&data_14367e130 - (r9 << 3))
            *arg3 = zmm0.q
            return rax_6
        
        if (r9.d s>= 0)
            goto label_142b84c0f
    
    if (r9.d s>= 0)
        int32_t r9_1 = r9.d - (0xf - rdx)
        
        if (r9_1 s< 0x17)
            zmm0 = *arg1
            int64_t i_2 = 0
            int32_t r11_2 = 0
            int32_t rdi_3 = _mm_bsrli_si128(zmm0, 8).d
            
            if (rdi_3 s> 0)
                void* r10_3 = nullptr
                
                while (i_2 u<= 0x1999999999999998)
                    r11_2 += 1
                    int32_t rax_12 = sx.d(*(r10_3 + zmm0.q)) - 0x30
                    r10_3 += 1
                    i_2 = sx.q(rax_12) + i_2 * 0xa
                    
                    if (r11_2 s>= rdi_3)
                        break
            
            zmm0.q = float.d(i_2)
            
            if (i_2 s< 0)
                zmm0.q = zmm0.q f+ 1.8446744073709552e+19
            
            zmm0.q = zmm0.q f* *(&data_14367e130 + (sx.q(0xf - rdx) << 3))
            zmm0.q = zmm0.q f* *(&data_14367e130 + (sx.q(r9_1) << 3))
            int64_t rax_15
            rax_15.b = 1
            *arg3 = zmm0.q
            return rax_15

int32_t rax
rax.b = 0
return rax
