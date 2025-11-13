// 函数: sub_14217f7d0
// 地址: 0x14217f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r11_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                uint64_t r9_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r10_1 = (r9_1 + 1).d
                
                if (r10_1 s< arg2)
                    int32_t rax_4 =
                        *(&arg1[sx.q(r10_1) * 4] + 0x1c) + *(&arg1[sx.q(r10_1) * 4] + 0x18)
                    zmm0 = _mm_cvtepi32_ps(zx.o(arg1[sx.q(r10_1) * 4 + 1].d))
                    int32_t rax_6 =
                        *(&arg1[sx.q(r9_1.d) * 4] + 0x1c) + *(&arg1[sx.q(r9_1.d) * 4] + 0x18)
                    zmm0.d = zmm0.d f* 0.00100000005f
                    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_4)).d f+ zmm0.d
                    zmm0.d = _mm_cvtepi32_ps(zx.o(arg1[sx.q(r9_1.d) * 4 + 1].d)).d f* 0.00100000005f
                    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f+ zmm0.d
                    
                    if (zmm1.d f< zmm2.d)
                        r10_1 = r9_1.d
                    
                    r9_1 = zx.q(r10_1)
                
                uint128_t* rdx_5 = &arg1[sx.q(r11_1.d) * 4]
                uint128_t* rcx_4 = &arg1[sx.q(r9_1.d) * 4]
                int32_t rax_8 = *(rdx_5 + 0x1c) + *(rdx_5 + 0x18)
                zmm0 = _mm_cvtepi32_ps(zx.o(rdx_5[1].d))
                result = zx.q(*(rcx_4 + 0x1c) + *(rcx_4 + 0x18))
                zmm0.d = zmm0.d f* 0.00100000005f
                zmm2.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f+ zmm0.d
                zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_4[1].d)).d f* 0.00100000005f
                zmm1.d = _mm_cvtepi32_ps(zx.o(result.d)).d f+ zmm0.d
                
                if (zmm2.d f<= zmm1.d)
                    break
                
                if (rdx_5 != rcx_4)
                    zmm2 = *rdx_5
                    zmm3 = rdx_5[1]
                    zmm4 = rdx_5[2]
                    zmm5 = rdx_5[3]
                    *rdx_5 = *rcx_4
                    rdx_5[1] = rcx_4[1]
                    rdx_5[2] = rcx_4[2]
                    rdx_5[3] = rcx_4[3]
                    *rcx_4 = zmm2
                    rcx_4[1] = zmm3
                    rcx_4[2] = zmm4
                    rcx_4[3] = zmm5
                
                result = zx.q(((r9_1 << 1) + 1).d)
                r11_1 = zx.q(r9_1.d)
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    uint128_t* rdi_3 = &arg1[sx.q(i) * 4]
    
    do
        if (arg1 != rdi_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            *arg1 = *rdi_3
            arg1[1] = rdi_3[1]
            arg1[2] = rdi_3[2]
            arg1[3] = rdi_3[3]
            *rdi_3 = zmm2
            rdi_3[1] = zmm3
            rdi_3[2] = zmm4
            rdi_3[3] = zmm5
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t r9_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r10_2 = (r9_2 + 1).d
                
                if (r10_2 s< i)
                    int32_t rax_11 =
                        *(&arg1[sx.q(r10_2) * 4] + 0x1c) + *(&arg1[sx.q(r10_2) * 4] + 0x18)
                    zmm0 = _mm_cvtepi32_ps(zx.o(arg1[sx.q(r10_2) * 4 + 1].d))
                    int32_t rax_13 =
                        *(&arg1[sx.q(r9_2.d) * 4] + 0x1c) + *(&arg1[sx.q(r9_2.d) * 4] + 0x18)
                    zmm0.d = zmm0.d f* 0.00100000005f
                    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f+ zmm0.d
                    zmm0.d = _mm_cvtepi32_ps(zx.o(arg1[sx.q(r9_2.d) * 4 + 1].d)).d f* 0.00100000005f
                    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_13)).d f+ zmm0.d
                    
                    if (zmm1.d f< zmm2.d)
                        r10_2 = r9_2.d
                    
                    r9_2 = zx.q(r10_2)
                
                int128_t* rdx_10 = &arg1[sx.q(rbx_1.d) * 4]
                uint128_t* rcx_9 = &arg1[sx.q(r9_2.d) * 4]
                int32_t rax_15 = *(rdx_10 + 0x1c) + *(rdx_10 + 0x18)
                zmm0 = _mm_cvtepi32_ps(zx.o(rdx_10[1].d))
                result = zx.q(*(rcx_9 + 0x1c) + *(rcx_9 + 0x18))
                zmm0.d = zmm0.d f* 0.00100000005f
                zmm2.d = _mm_cvtepi32_ps(zx.o(rax_15)).d f+ zmm0.d
                zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_9[1].d)).d f* 0.00100000005f
                zmm1.d = _mm_cvtepi32_ps(zx.o(result.d)).d f+ zmm0.d
                
                if (zmm2.d f<= zmm1.d)
                    break
                
                if (rdx_10 != rcx_9)
                    zmm2 = *rdx_10
                    zmm3 = rdx_10[1]
                    zmm4 = rdx_10[2]
                    zmm5 = rdx_10[3]
                    *rdx_10 = *rcx_9
                    rdx_10[1] = rcx_9[1]
                    rdx_10[2] = rcx_9[2]
                    rdx_10[3] = rcx_9[3]
                    *rcx_9 = zmm2
                    rcx_9[1] = zmm3
                    rcx_9[2] = zmm4
                    rcx_9[3] = zmm5
                
                result = zx.q(((r9_2 << 1) + 1).d)
                rbx_1 = zx.q(r9_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_3 -= 0x40
    while (i s> 0)

return result
