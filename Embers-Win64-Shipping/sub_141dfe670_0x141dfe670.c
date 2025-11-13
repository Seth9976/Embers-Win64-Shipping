// 函数: sub_141dfe670
// 地址: 0x141dfe670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int32_t rdx = *(r10 + 8)
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int64_t rdi = sx.q(*(rax_2 + (rcx << 2) + 4))
int32_t result = rdx - 1
int64_t r8_3 = (sx.q(*(rax_2 + (rcx << 2))) + 3 + *(r10 + 0x38)) & 0xfffffffffffffffc
int32_t r11 = (rdi - 1).d

if (rdi.d s>= 2)
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
        
        int32_t rax_3 = int.d(zmm2.d)
        int32_t r9
        
        if (rax_3 s>= 0)
            r9 = r11
            
            if (rax_3 s< r11)
                r9 = rax_3
        else
            r9 = 0
        
        int64_t rax_4 = sx.q(r9)
        int32_t r9_1
        int32_t r9_2
        
        if (rdx s<= 0xff)
            if (zx.d(*(rax_4 + r8_3)) s> i)
                r9_2 = r9 - 1
                int64_t rdx_4 = sx.q(r9_2)
                
                if (r9_2 s> 0)
                    while (zx.d(*(rdx_4 + r8_3)) s> i)
                        r9_2 -= 1
                        rdx_4 -= 1
                        
                        if (rdx_4 s<= 0)
                            goto label_141dfe7e9
                    
                    r10_1 = r9_2
            else
                r9_1 = r9 + 1
                int64_t rdx_3 = sx.q(r9_1)
                r10_1 = r11
                
                if (rdx_3 s<= rdi - 1)
                    while (zx.d(*(rdx_3 + r8_3)) s<= i)
                        r9_1 += 1
                        rdx_3 += 1
                        
                        if (rdx_3 s> rdi - 1)
                            goto label_141dfe7e9
                    
                    r10_1 = r9_1 - 1
        else if (zx.d(*(r8_3 + (rax_4 << 1))) s> i)
            r9_2 = r9 - 1
            int64_t rdx_2 = sx.q(r9_2)
            
            if (r9_2 s> 0)
                while (zx.d(*(r8_3 + (rdx_2 << 1))) s> i)
                    r9_2 -= 1
                    rdx_2 -= 1
                    
                    if (rdx_2 s<= 0)
                        goto label_141dfe7e9
                
                r10_1 = r9_2
        else
            r9_1 = r9 + 1
            int64_t rbx_1 = sx.q(r11)
            int64_t rdx_1 = sx.q(r9_1)
            r10_1 = r11
            
            if (rdx_1 s<= rbx_1)
                while (zx.d(*(r8_3 + (rdx_1 << 1))) s<= i)
                    r9_1 += 1
                    rdx_1 += 1
                    
                    if (rdx_1 s> rbx_1)
                        goto label_141dfe7e9
                
                r10_1 = r9_1 - 1
    label_141dfe7e9:
        result = r10_1 + 1

*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_143dbb1f8, data_143dbb200.q), 
    _mm_unpacklo_ps(data_143dbb1fc, (zx.o(0)).q).q)
return result
