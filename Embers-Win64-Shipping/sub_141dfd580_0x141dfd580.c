// 函数: sub_141dfd580
// 地址: 0x141dfd580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
char rsi = *(arg3 + 4)
int32_t r9 = *(r10 + 8)
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int64_t rbx = sx.q(*(rax_2 + (rcx << 2) + 4))
int64_t rdi_1 = sx.q(*(rax_2 + (rcx << 2))) + *(r10 + 0x38)
uint64_t r10_1 = zx.q((rbx - 1).d)
int64_t rcx_4 = (sx.q((rbx * 3).d << 2) + 3 + rdi_1) & 0xfffffffffffffffc
uint128_t result_2

if (rbx.d s>= 2)
    result_2 = *(arg3 + 0x1c)

int32_t result
float result_1[0x4]
uint128_t result_3
uint64_t i_8

if (rbx.d s< 2 || result_2.d f<= 0f)
    i_8 = 0
label_141dfd80d:
    int64_t rcx_6 = sx.q((i_8 * 3).d << 2)
    result = *(rcx_6 + rdi_1 + 8)
    result_1 = *(rcx_6 + rdi_1 + 4)
    result_3 = _mm_unpacklo_ps(zx.o(*(rcx_6 + rdi_1)), result)
else
    if (not(result_2.d f< 1f))
        i_8 = zx.q(r10_1.d)
        goto label_141dfd80d
    
    int32_t rdx = r9 - 2
    uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(r9 - 1))
    float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(r10_1.d))
    zmm5.d = zmm5.d f* result_2.d
    temp0_2[0] = temp0_2[0] f* result_2.d
    int32_t rax_6 = int.d(zmm5.d)
    
    if (rax_6 s< 0)
        rdx = 0
    else if (rax_6 s< rdx)
        rdx = rax_6
    
    int32_t rax_7 = int.d(temp0_2.d)
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
        result_2 = _mm_cvtepi32_ps(zx.o(r8))
        
        if (rdx_2 s>= 1)
            rax_21 = rdx_2
        
        zmm5.d = zmm5.d f- result_2.d
        zmm5.d = zmm5.d f/ _mm_cvtepi32_ps(zx.o(rax_21)).d
    else
        zmm5 = zx.o(0)
    
    if (i_8.d == r10_1.d)
        goto label_141dfd80d
    
    int64_t rdx_3 = sx.q((i_8 * 3).d << 2)
    int64_t rcx_5 = sx.q((r10_1 * 3).d << 2)
    result_2 = zx.o(*(rdx_3 + rdi_1))
    int32_t rax_26 = *(rdx_3 + rdi_1 + 8)
    result_3 = zx.o(*(rcx_5 + rdi_1))
    uint128_t zmm4 = zx.o(*(rcx_5 + rdi_1))
    result_3 = _mm_shuffle_ps(result_3, result_3, 0x55)
    zmm4.d = zmm4.d f- result_2.d
    result = *(rcx_5 + rdi_1 + 8)
    uint64_t result_4 = result_2.q
    result_3.d = result_3.d f- result_4:4.d
    zmm4.d = zmm4.d f* zmm5.d
    result_1 = result
    result_1[0] = result_1[0] f- rax_26
    result_3.d = result_3.d f* zmm5.d
    zmm4.d = zmm4.d f+ result_2.d
    result_3.d = result_3.d f+ result_4:4.d
    result_1[0] = result_1[0] f* zmm5.d
    result_1[0] = result_1[0] f+ rax_26
    result_2 = result_1
    result_1 = result_3
    result_3 = _mm_unpacklo_ps(zmm4, result_2.q)
*(arg2 + 0x20) = _mm_unpacklo_ps(result_3, _mm_unpacklo_ps(result_1, 0)[0].q)
return result
