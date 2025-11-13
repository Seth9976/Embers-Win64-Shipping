// 函数: sub_141dfd860
// 地址: 0x141dfd860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
char rsi = *(arg3 + 4)
uint128_t zmm6
uint128_t var_18 = zmm6
int32_t r9 = *(r10 + 8)
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int64_t rbx = sx.q(*(rax_2 + (rcx << 2) + 4))
int64_t rdi_1 = sx.q(*(rax_2 + (rcx << 2))) + *(r10 + 0x38)
uint64_t r10_1 = zx.q((rbx - 1).d)
int64_t rcx_4 = (sx.q((rbx * 3).d << 2) + 3 + rdi_1) & 0xfffffffffffffffc
uint128_t zmm0

if (rbx.d s>= 2)
    zmm0 = *(arg3 + 0x1c)

int32_t result
uint128_t zmm2
uint128_t zmm3
uint64_t i_8

if (rbx.d s< 2 || zmm0.d f<= 0f)
    i_8 = 0
label_141dfdb4e:
    int64_t rcx_6 = sx.q((i_8 * 3).d << 2)
    int32_t rax_42 = zx.d(*(rcx_6 + rdi_1 + 2)) - 0x7fff
    zmm3 = _mm_cvtepi32_ps(zx.o(zx.d(*(rcx_6 + rdi_1)) - 0x7fff))
    result = zx.d(*(rcx_6 + rdi_1 + 4)) - 0x7fff
    zmm3.d = zmm3.d f* 0.00390636921f
    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_42)).d f* 0.00390636921f
    zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f* 0.00390636921f
else
    if (not(zmm0.d f< 1f))
        i_8 = zx.q(r10_1.d)
        goto label_141dfdb4e
    
    int32_t rdx = r9 - 2
    zmm6.d = _mm_cvtepi32_ps(zx.o(r9 - 1)).d f* zmm0.d
    zmm2.d = _mm_cvtepi32_ps(zx.o(r10_1.d)).d f* zmm0.d
    int32_t rax_6 = int.d(zmm6.d)
    
    if (rax_6 s< 0)
        rdx = 0
    else if (rax_6 s< rdx)
        rdx = rax_6
    
    int32_t rax_7 = int.d(zmm2.d)
    int32_t r11_1
    
    if (rax_7 s>= 0)
        r11_1 = r10_1.d
        
        if (rax_7 s< r10_1.d)
            r11_1 = rax_7
    else
        r11_1 = 0
    
    int64_t rax_8 = sx.q(r11_1)
    uint32_t rdx_1
    uint32_t r8
    
    if (r9 s<= 0xff)
        if (zx.d(*(rax_8 + rcx_4)) s> rdx)
            i_8 = 0
            int32_t i_7 = r11_1 - 1
            int64_t i = sx.q(i_7)
            
            if (i_7 s> 0)
                do
                    if (zx.d(*(i + rcx_4)) s<= rdx)
                        i_8 = zx.q(i_7)
                        break
                    
                    i_7 -= 1
                    i -= 1
                while (i s> 0)
        else
            int32_t i_6 = r11_1 + 1
            int64_t i_1 = sx.q(i_6)
            i_8 = zx.q(r10_1.d)
            
            for (; i_1 s<= rbx - 1; i_1 += 1)
                if (zx.d(*(i_1 + rcx_4)) s> rdx)
                    i_8 = zx.q(i_6 - 1)
                    break
                
                i_6 += 1
        
        r8 = zx.d(*(sx.q(i_8.d) + rcx_4))
        int32_t rax_19 = (i_8 + 1).d
        
        if (rax_19 s<= r10_1.d)
            r10_1 = zx.q(rax_19)
        
        rdx_1 = zx.d(*(sx.q(r10_1.d) + rcx_4))
    else
        i_8 = sx.q(r10_1.d)
        
        if (zx.d(*(rcx_4 + (rax_8 << 1))) s> rdx)
            i_8 = 0
            int32_t i_5 = r11_1 - 1
            int64_t i_2 = sx.q(i_5)
            
            if (i_5 s> 0)
                do
                    if (zx.d(*(rcx_4 + (i_2 << 1))) s<= rdx)
                        i_8 = zx.q(i_5)
                        break
                    
                    i_5 -= 1
                    i_2 -= 1
                while (i_2 s> 0)
        else
            int32_t i_4 = r11_1 + 1
            
            for (int64_t i_3 = sx.q(i_4); i_3 s<= i_8; i_3 += 1)
                if (zx.d(*(rcx_4 + (i_3 << 1))) s> rdx)
                    i_8 = zx.q(i_4 - 1)
                    break
                
                i_4 += 1
        
        r8 = zx.d(*(rcx_4 + (sx.q(i_8.d) << 1)))
        int32_t rax_13 = (i_8 + 1).d
        
        if (rax_13 s<= r10_1.d)
            r10_1 = zx.q(rax_13)
        
        rdx_1 = zx.d(*(rcx_4 + (sx.q(r10_1.d) << 1)))
    
    uint32_t rdx_2 = rdx_1 - r8
    
    if (rsi != 1)
        uint32_t rax_21 = 1
        zmm0 = _mm_cvtepi32_ps(zx.o(r8))
        
        if (rdx_2 s>= 1)
            rax_21 = rdx_2
        
        zmm6.d = zmm6.d f- zmm0.d
        zmm6.d = zmm6.d f/ _mm_cvtepi32_ps(zx.o(rax_21)).d
    else
        zmm6 = zx.o(0)
    
    if (i_8.d == r10_1.d)
        goto label_141dfdb4e
    
    int64_t rcx_5 = sx.q((i_8 * 3).d << 2)
    int64_t rdx_3 = sx.q((r10_1 * 3).d << 2)
    int32_t rax_29 = zx.d(*(rcx_5 + rdi_1 + 2)) - 0x7fff
    zmm0.d = _mm_cvtepi32_ps(zx.o(zx.d(*(rcx_5 + rdi_1)) - 0x7fff)).d f* 0.00390636921f
    int32_t rax_31 = zx.d(*(rcx_5 + rdi_1 + 4)) - 0x7fff
    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_29))
    int32_t rax_33 = zx.d(*(rdx_3 + rdi_1)) - 0x7fff
    zmm1.d = zmm1.d f* 0.00390636921f
    zmm3 = _mm_cvtepi32_ps(zx.o(rax_31))
    uint32_t rax_34 = zx.d(*(rdx_3 + rdi_1 + 2))
    zmm3.d = zmm3.d f* 0.00390636921f
    uint128_t zmm4
    zmm4.d = _mm_cvtepi32_ps(zx.o(rax_33)).d f* 0.00390636921f
    zmm4.d = zmm4.d f- zmm0.d
    result = zx.d(*(rdx_3 + rdi_1 + 4)) - 0x7fff
    zmm4.d = zmm4.d f* zmm6.d
    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_34 - 0x7fff)).d f* 0.00390636921f
    zmm4.d = zmm4.d f+ zmm0.d
    zmm2.d = zmm2.d f- zmm1.d
    zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f* 0.00390636921f
    zmm0.d = zmm0.d f- zmm3.d
    zmm2.d = zmm2.d f* zmm6.d
    zmm2.d = zmm2.d f+ zmm1.d
    zmm0.d = zmm0.d f* zmm6.d
    zmm0.d = zmm0.d f+ zmm3.d
    zmm3 = zmm4
zmm2 = _mm_unpacklo_ps(zmm2, 0)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), zmm2.q)
return result
