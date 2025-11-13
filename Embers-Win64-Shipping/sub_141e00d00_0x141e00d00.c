// 函数: sub_141e00d00
// 地址: 0x141e00d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int64_t rcx = sx.q((arg4 << 2).d)
int64_t rax_1 = *(r10 + 0x10)
int32_t rdx = *(r10 + 8)
int64_t rbx = sx.q(*(rax_1 + (rcx << 2) + 4))
int32_t result = rdx - 1
int64_t r9_3 = (sx.q(*(rax_1 + (rcx << 2))) + 3 + *(r10 + 0x38)) & 0xfffffffffffffffc
int32_t r11 = (rbx - 1).d

if (rbx.d s>= 2)
    int64_t zmm1 = *(arg3 + 0x1c)
    
    if (not(zmm1.d f<= 0f) && not(zmm1.d f>= 1f))
        int32_t i = result - 1
        int32_t r10_1 = 0
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f* zmm1.d
        int32_t i_1 = int.d(zmm0.d)
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(r11)).d f* zmm1.d
        
        if (i_1 s< 0)
            i = 0
        else if (i_1 s< i)
            i = i_1
        
        int32_t rax_2 = int.d(zmm2.d)
        int32_t r8
        
        if (rax_2 s>= 0)
            r8 = r11
            
            if (rax_2 s< r11)
                r8 = rax_2
        else
            r8 = 0
        
        int64_t rax_3 = sx.q(r8)
        int32_t r8_1
        int32_t r8_2
        
        if (rdx s<= 0xff)
            if (zx.d(*(rax_3 + r9_3)) s> i)
                r8_2 = r8 - 1
                int64_t rdx_4 = sx.q(r8_2)
                
                if (r8_2 s> 0)
                    while (zx.d(*(rdx_4 + r9_3)) s> i)
                        r8_2 -= 1
                        rdx_4 -= 1
                        
                        if (rdx_4 s<= 0)
                            goto label_141e00e79
                    
                    r10_1 = r8_2
            else
                r8_1 = r8 + 1
                int64_t rdx_3 = sx.q(r8_1)
                r10_1 = r11
                
                if (rdx_3 s<= rbx - 1)
                    while (zx.d(*(rdx_3 + r9_3)) s<= i)
                        r8_1 += 1
                        rdx_3 += 1
                        
                        if (rdx_3 s> rbx - 1)
                            goto label_141e00e79
                    
                    r10_1 = r8_1 - 1
        else if (zx.d(*(r9_3 + (rax_3 << 1))) s> i)
            r8_2 = r8 - 1
            int64_t rdx_2 = sx.q(r8_2)
            
            if (r8_2 s> 0)
                while (zx.d(*(r9_3 + (rdx_2 << 1))) s> i)
                    r8_2 -= 1
                    rdx_2 -= 1
                    
                    if (rdx_2 s<= 0)
                        goto label_141e00e79
                
                r10_1 = r8_2
        else
            r8_1 = r8 + 1
            int64_t rbx_1 = sx.q(r11)
            int64_t rdx_1 = sx.q(r8_1)
            r10_1 = r11
            
            if (rdx_1 s<= rbx_1)
                while (zx.d(*(r9_3 + (rdx_1 << 1))) s<= i)
                    r8_1 += 1
                    rdx_1 += 1
                    
                    if (rdx_1 s> rbx_1)
                        goto label_141e00e79
                
                r10_1 = r8_1 - 1
    label_141e00e79:
        result = r10_1 + 1

*(arg2 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200.q), 
    _mm_unpacklo_ps(data_143dbb1fc, (zx.o(0)).q).q)
return result
