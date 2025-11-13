// 函数: sub_140d90100
// 地址: 0x140d90100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_3 = zx.q(arg5)
int64_t* rbp = arg6
int32_t r15 = arg2
int64_t r14 = sx.q(arg4)
int64_t rbx = sx.q(rbp[1].d)
uint64_t result = zx.q(r14.d * i_3.d)
int64_t r13 = sx.q(arg1)

if (result.d s> rbx.d)
    rbp[1].d = result.d
    
    if (result.d s> *(rbp + 0xc))
        sub_1405daba0(rbp)
    
    result = memset(rbx + *rbp, 0, sx.q(result.d - rbx.d))
else if (result.d s< rbx.d && result.d != rbx.d)
    rbp[1].d = result.d
    result = sub_1405dac10(rbp)

uint128_t zmm7 = zx.o(0)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(r14.d))
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(r13.d)).d f/ zmm0.d
uint128_t zmm8
zmm8.d = _mm_cvtepi32_ps(zx.o(r15)).d f/ _mm_cvtepi32_ps(zx.o(i_3.d)).d

if (i_3.d s> 0)
    result = 0
    uint64_t i_1 = i_3
    uint64_t result_2 = 0
    uint64_t i_2 = i_1
    int64_t rdx_1 = r14
    int64_t var_78_1 = r14
    uint64_t i
    
    do
        float zmm2 = (zx.o(0)).d
        
        if (r14.d s> 0)
            uint64_t result_1 = result
            zmm0.d = zmm7.d f+ 0.5f
            uint64_t j_1 = zx.q(r14.d)
            uint64_t result_3 = result
            uint64_t j_2 = j_1
            int32_t rcx_4 = r15 - 1
            uint128_t zmm5
            zmm5.d = zmm8.d f+ zmm7.d
            arg5 = rcx_4
            int32_t rdx_2 = (r13 - 1).d
            int32_t rax_1 = int.d(zmm0.d)
            int32_t arg_8 = rax_1
            uint64_t j
            
            do
                uint128_t zmm3
                zmm3.d = zmm6.d f+ zmm2
                int32_t rbx_1
                
                if (rax_1 s>= 0)
                    rbx_1 = rcx_4
                    
                    if (rax_1 s< rcx_4)
                        rbx_1 = rax_1
                else
                    rbx_1 = 0
                
                int32_t rax_2 = int.d(zmm2 + 0.5f)
                int32_t r9
                
                if (rax_2 s>= 0)
                    r9 = rdx_2
                    
                    if (rax_2 s< rdx_2)
                        r9 = rax_2
                else
                    r9 = 0
                
                zmm0.d = zmm5.d f+ 0.5f
                int32_t rax_3 = int.d(zmm0.d)
                int32_t r10_1
                
                if (rax_3 s>= 0)
                    r10_1 = rcx_4
                    
                    if (rax_3 s< rcx_4)
                        r10_1 = rax_3
                else
                    r10_1 = 0
                
                zmm0.d = zmm3.d f+ 0.5f
                int32_t rax_4 = int.d(zmm0.d)
                int32_t r15_1
                
                if (rax_4 s>= 0)
                    r15_1 = rdx_2
                    
                    if (rax_4 s< rdx_2)
                        r15_1 = rax_4
                else
                    r15_1 = 0
                
                int32_t r14_1 = 0
                zmm2 = (zx.o(0)).d
                
                if (r9 s<= r15_1)
                    do
                        int32_t r11_1 = rbx_1
                        
                        if (rbx_1 s<= r10_1)
                            if (r10_1 - rbx_1 + 1 s>= 4)
                                int64_t rcx_5 = sx.q((rbx_1 + 2) * r13.d + r9)
                                char* rdx_4 = *arg3 + rcx_5
                                uint64_t rax_25 = zx.q(((r10_1 - rbx_1 - 3) u>> 2) + 1)
                                uint64_t k_2 = zx.q(rax_25.d)
                                uint32_t rax_26 = (rax_25 << 2).d
                                r14_1 += rax_26
                                r11_1 = rax_26 + rbx_1
                                uint64_t k
                                
                                do
                                    uint32_t rax_28 =
                                        zx.d(rdx_4[sx.q((rbx_1 + 1) * r13.d + r9) - rcx_5])
                                    uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rdx_4[
                                        sx.q(rbx_1 * r13.d + r9) - rcx_5]))
                                    uint32_t rax_29 = zx.d(*rdx_4)
                                    zmm1.d = zmm1.d f+ zmm2
                                    zmm0 = _mm_cvtepi32_ps(zx.o(rax_28))
                                    uint32_t rax_30 =
                                        zx.d(rdx_4[sx.q((rbx_1 + 3) * r13.d + r9) - rcx_5])
                                    rdx_4 = &rdx_4[sx.q((r13 << 2).d)]
                                    zmm2 = zmm1.d f+ zmm0.d f+ _mm_cvtepi32_ps(zx.o(rax_29)).d
                                        f+ _mm_cvtepi32_ps(zx.o(rax_30)).d
                                    k = k_2
                                    k_2 -= 1
                                while (k != 1)
                            
                            if (r11_1 s<= r10_1)
                                char* rcx_7 = sx.q(r11_1 * r13.d + r9) + *arg3
                                int64_t k_3 = sx.q(r10_1 - r11_1 + 1)
                                r14_1 += k_3.d
                                int64_t k_1
                                
                                do
                                    uint32_t rax_37 = zx.d(*rcx_7)
                                    rcx_7 = &rcx_7[r13]
                                    zmm2 = zmm2 f+ _mm_cvtepi32_ps(zx.o(rax_37)).d
                                    k_1 = k_3
                                    k_3 -= 1
                                while (k_1 != 1)
                        
                        r9 += 1
                    while (r9 s<= r15_1)
                    
                    result_3 = result_1
                    rdx_2 = (r13 - 1).d
                    j_1 = j_2
                    rbp = arg6
                
                int32_t rax_38 = int.d(zmm2 f/ _mm_cvtepi32_ps(zx.o(r14_1)).d)
                char rcx_8
                
                if (rax_38 s>= 0)
                    rcx_8 = -1
                    
                    if (rax_38 s< 0xff)
                        rcx_8 = rax_38.b
                else
                    rcx_8 = 0
                
                zmm2 = zmm3.d
                *(result_3 + *rbp) = rcx_8
                result_3 += 1
                rcx_4 = arg5
                j = j_1
                j_1 -= 1
                rax_1 = arg_8
                j_2 = j_1
                result_1 = result_3
            while (j != 1)
            result = result_2
            r14 = zx.q(arg4)
            i_1 = i_2
            rdx_1 = var_78_1
            r15 = arg2
        
        result += rdx_1
        zmm7.d = zmm7.d f+ zmm8.d
        i = i_1
        i_1 -= 1
        result_2 = result
        i_2 = i_1
    while (i != 1)

return result
