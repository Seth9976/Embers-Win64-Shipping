// 函数: sub_140d904a0
// 地址: 0x140d904a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_2 = zx.q(arg5)
int64_t* r14 = arg3
int64_t* r15 = arg6
int32_t r12 = arg2
uint64_t r13 = zx.q(arg1)
int64_t rbp = sx.q(arg4)
int64_t rbx = sx.q(r15[1].d)
uint64_t result = zx.q((rbp.d * result_2.d) << 2)

if (result.d s> rbx.d)
    r15[1].d = result.d
    
    if (result.d s> *(r15 + 0xc))
        sub_1405daba0(r15)
    
    result = memset(rbx + *r15, 0, sx.q(result.d - rbx.d))
else if (result.d s< rbx.d && result.d != rbx.d)
    r15[1].d = result.d
    result = sub_1405dac10(r15)

uint128_t zmm10 = zx.o(0)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rbp.d))
uint128_t zmm9
zmm9.d = _mm_cvtepi32_ps(zx.o(r13.d)).d f/ zmm0.d
uint128_t zmm12
zmm12.d = _mm_cvtepi32_ps(zx.o(r12)).d f/ _mm_cvtepi32_ps(zx.o(result_2.d)).d

if (result_2.d s> 0)
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    char* rdx_1 = nullptr
    int64_t rax_3 = rbp << 2
    result = result_2
    int64_t rcx_4 = rax_3
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint64_t result_1 = result
    char* var_d8_1 = nullptr
    uint64_t i
    
    do
        int32_t zmm2 = (zx.o(0)).d
        
        if (rbp.d s> 0)
            uint64_t j_1 = zx.q(rbp.d)
            zmm0.d = zmm10.d f+ 0.5f
            char* var_f0_1 = rdx_1
            uint64_t j_2 = j_1
            int32_t rcx_5 = r12 - 1
            zmm8.d = zmm12.d f+ zmm10.d
            int32_t var_f8_1 = rcx_5
            int32_t r8_1 = (r13 - 1).d
            int32_t rax_4 = int.d(zmm0.d)
            int32_t var_f4_1 = rax_4
            uint64_t j
            
            do
                zmm6.d = zmm9.d f+ zmm2
                int32_t r11_1
                
                if (rax_4 s>= 0)
                    r11_1 = rcx_5
                    
                    if (rax_4 s< rcx_5)
                        r11_1 = rax_4
                else
                    r11_1 = 0
                
                int32_t rax_5 = int.d(zmm2 f+ 0.5f)
                int32_t r10_1
                
                if (rax_5 s>= 0)
                    r10_1 = r8_1
                    
                    if (rax_5 s< r8_1)
                        r10_1 = rax_5
                else
                    r10_1 = 0
                
                zmm0.d = zmm8.d f+ 0.5f
                int32_t rax_6 = int.d(zmm0.d)
                int32_t rbx_1
                
                if (rax_6 s>= 0)
                    rbx_1 = rcx_5
                    
                    if (rax_6 s< rcx_5)
                        rbx_1 = rax_6
                else
                    rbx_1 = 0
                
                zmm0.d = zmm6.d f+ 0.5f
                int32_t rax_7 = int.d(zmm0.d)
                int32_t rsi_3
                
                if (rax_7 s>= 0)
                    rsi_3 = r8_1
                    
                    if (rax_7 s< r8_1)
                        rsi_3 = rax_7
                else
                    rsi_3 = 0
                
                int32_t r12_1 = 0
                arg5 = rsi_3
                zmm2 = (zx.o(0)).d
                int32_t zmm3 = (zx.o(0)).d
                float zmm4 = (zx.o(0)).d
                int32_t zmm5 = (zx.o(0)).d
                uint128_t zmm1
                
                if (r10_1 s<= rsi_3)
                    do
                        int32_t rdi = r11_1
                        
                        if (r11_1 s<= rbx_1)
                            if (rbx_1 - r11_1 + 1 s>= 4)
                                void* rcx_6 = *r14
                                int64_t rdx_2 = sx.q(r13.d << 4)
                                int64_t rdx_3 = sx.q((r11_1 * r13.d + r10_1) << 2)
                                void* r9_1 = rcx_6 + 2 + rdx_3
                                int64_t rsi_4 = sx.q(((r11_1 + 2) * r13.d + r10_1) << 2)
                                char* r8_3 = rcx_6 + 1 + rsi_4
                                int64_t r14_1 = sx.q(((r11_1 + 1) * r13.d + r10_1) << 2)
                                int64_t rcx_8 = r14_1 - rsi_4
                                int64_t r15_1 = sx.q(((r11_1 + 3) * r13.d + r10_1) << 2)
                                int64_t rbp_2 = r15_1 - rsi_4
                                uint64_t rax_33 = zx.q(((rbx_1 - r11_1 - 3) u>> 2) + 1)
                                uint64_t k_2 = zx.q(rax_33.d)
                                uint32_t rax_34 = (rax_33 << 2).d
                                r12_1 += rax_34
                                rdi = rax_34 + r11_1
                                uint64_t k
                                
                                do
                                    zmm1.d = float.s(zx.d(*(r9_1 - 2)))
                                    zmm0.d = float.s(zx.d(*(r14_1 - rdx_3 + r9_1 - 2)))
                                    zmm1.d = zmm1.d f+ zmm2
                                    zmm2 = zmm1.d
                                    zmm1.d = float.s(zx.d(*(rsi_4 - rdx_3 + r9_1 - 2)))
                                    zmm2 = zmm2 f+ zmm0.d
                                    zmm0.d = float.s(zx.d(*(r15_1 - rdx_3 + r9_1 - 2)))
                                    zmm2 = zmm2 f+ zmm1.d
                                    zmm1.d = float.s(zx.d(*(r9_1 - 1)))
                                    zmm2 = zmm2 f+ zmm0.d
                                    zmm0.d = float.s(zx.d(r8_3[rcx_8]))
                                    zmm1.d = zmm1.d f+ zmm3
                                    zmm3 = zmm1.d
                                    zmm1.d = float.s(zx.d(*r8_3))
                                    zmm3 = zmm3 f+ zmm0.d
                                    zmm0.d = float.s(zx.d(r8_3[rbp_2]))
                                    zmm3 = zmm3 f+ zmm1.d
                                    zmm1.d = float.s(zx.d(*r9_1))
                                    zmm3 = zmm3 f+ zmm0.d
                                    zmm0.d = float.s(zx.d(r8_3[rcx_8 + 1]))
                                    zmm1.d = zmm1.d f+ zmm4
                                    zmm4 = zmm1.d
                                    zmm1.d = float.s(zx.d(r8_3[1]))
                                    zmm4 = zmm4 f+ zmm0.d
                                    zmm0.d = float.s(zx.d(r8_3[rbp_2 + 1]))
                                    uint32_t rax_47 = zx.d(*(r9_1 + 1))
                                    r9_1 += rdx_2
                                    zmm4 = zmm4 f+ zmm1.d
                                    zmm1.d = float.s(rax_47)
                                    zmm4 = zmm4 f+ zmm0.d
                                    zmm1.d = zmm1.d f+ zmm5
                                    zmm0.d = float.s(zx.d(r8_3[rcx_8 + 2]))
                                    zmm5 = zmm1.d f+ zmm0.d
                                    zmm1.d = float.s(zx.d(r8_3[2]))
                                    uint32_t rax_50 = zx.d(r8_3[rbp_2 + 2])
                                    r8_3 = &r8_3[rdx_2]
                                    zmm0.d = float.s(rax_50)
                                    zmm5 = zmm5 f+ zmm1.d f+ zmm0.d
                                    k = k_2
                                    k_2 -= 1
                                while (k != 1)
                                r13 = zx.q(arg1)
                                rsi_3 = arg5
                                r14 = arg3
                            
                            if (rdi s<= rbx_1)
                                int64_t r9_2 = sx.q((r13 << 2).d)
                                char* rdx_5 = sx.q((rdi * r13.d + r10_1) << 2) + *r14
                                int64_t k_3 = sx.q(rbx_1 - rdi + 1)
                                r12_1 += k_3.d
                                void* rcx_9 = &rdx_5[2]
                                int64_t k_1
                                
                                do
                                    uint32_t rax_59 = zx.d(*rdx_5)
                                    rdx_5 = &rdx_5[r9_2]
                                    uint32_t rax_60 = zx.d(*(rcx_9 - 1))
                                    zmm0 = _mm_cvtepi32_ps(zx.o(rax_59))
                                    uint32_t rax_61 = zx.d(*rcx_9)
                                    zmm2 = zmm2 f+ zmm0.d
                                    zmm1 = _mm_cvtepi32_ps(zx.o(rax_60))
                                    uint32_t rax_62 = zx.d(*(rcx_9 + 1))
                                    zmm3 = zmm3 f+ zmm1.d
                                    rcx_9 += r9_2
                                    zmm4 = zmm4 f+ _mm_cvtepi32_ps(zx.o(rax_61)).d
                                    zmm5 = zmm5 f+ _mm_cvtepi32_ps(zx.o(rax_62)).d
                                    k_1 = k_3
                                    k_3 -= 1
                                while (k_1 != 1)
                        
                        r10_1 += 1
                    while (r10_1 s<= rsi_3)
                    
                    rdx_1 = var_f0_1
                    r8_1 = (r13 - 1).d
                    r15 = arg6
                    j_1 = j_2
                
                zmm1.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12_1)).d
                int32_t rax_63 = int.d(zmm2 f* zmm1.d)
                char rcx_10
                
                if (rax_63 s>= 0)
                    rcx_10 = -1
                    
                    if (rax_63 s< 0xff)
                        rcx_10 = rax_63.b
                else
                    rcx_10 = 0
                
                rdx_1[*r15] = rcx_10
                int32_t rax_65 = int.d(zmm3 f* zmm1.d)
                char rcx_11
                
                if (rax_65 s>= 0)
                    rcx_11 = -1
                    
                    if (rax_65 s< 0xff)
                        rcx_11 = rax_65.b
                else
                    rcx_11 = 0
                
                rdx_1[*r15 + 1] = rcx_11
                int32_t rax_67 = int.d(zmm4 f* zmm1.d)
                char rcx_12
                
                if (rax_67 s>= 0)
                    rcx_12 = -1
                    
                    if (rax_67 s< 0xff)
                        rcx_12 = rax_67.b
                else
                    rcx_12 = 0
                
                rdx_1[*r15 + 2] = rcx_12
                int32_t rax_69 = int.d(zmm5 f* zmm1.d)
                char rcx_13
                
                if (rax_69 s>= 0)
                    rcx_13 = -1
                    
                    if (rax_69 s< 0xff)
                        rcx_13 = rax_69.b
                else
                    rcx_13 = 0
                
                zmm2 = zmm6.d
                rdx_1[*r15 + 3] = rcx_13
                rdx_1 = &rdx_1[4]
                rcx_5 = var_f8_1
                j = j_1
                j_1 -= 1
                rax_4 = var_f4_1
                j_2 = j_1
                var_f0_1 = rdx_1
            while (j != 1)
            rdx_1 = var_d8_1
            rbp = zx.q(arg4)
            result = result_1
            rcx_4 = rax_3
            r12 = arg2
        
        rdx_1 = &rdx_1[rcx_4]
        zmm10.d = zmm10.d f+ zmm12.d
        i = result
        result -= 1
        var_d8_1 = rdx_1
        result_1 = result
    while (i != 1)

return result
