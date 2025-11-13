// 函数: sub_1414786f0
// 地址: 0x1414786f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
int64_t r8 = arg2
int32_t i = 0

if (*(result + 0xa8) s> 0)
    int64_t rcx = 0
    uint128_t var_58_1 = arg3
    uint128_t var_68_1 = arg4
    uint128_t var_78_1 = arg5
    uint128_t var_88_1 = arg6
    int128_t __saved_zmm10_1 = arg7
    arg7 = 0x3b800000
    int64_t arg_18 = 0
    int64_t arg_20 = 0
    
    do
        void* rsi_1 = arg1[1]
        int64_t* r15_2 = *(result + 0xa0) + rcx
        int32_t rbx_1 = *(rsi_1 + 0x8c)
        int32_t rax = r15_2[0x15b].d
        
        if (rbx_1 != rax)
            bool cond:0_1 = *(rsi_1 + 0x14) u> 0
            *(rsi_1 + 0x8c) = rax
            
            if (cond:0_1)
                void*** rdx_2 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_1 = &rdx_2[3]
                
                if (rax_1 u> *(rsi_1 + 0x38))
                    sub_140b0e3d0(rsi_1 + 0x30, 0x20)
                    r8 = arg2
                    rdx_2 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_1 = &rdx_2[3]
                
                *(rsi_1 + 0x30) = rax_1
                int64_t* rax_2 = *(rsi_1 + 8)
                *(rsi_1 + 0x14) += 1
                *rax_2 = rdx_2
                int32_t rax_3 = *(rsi_1 + 0x8c)
                *(rsi_1 + 8) = &rdx_2[1]
                rdx_2[1] = 0
                *rdx_2 = &data_142f11588
                rdx_2[2].d = rax_3
            else
                *(rsi_1 + 0x90) = rax
        
        int128_t* r12_1 = nullptr
        
        if (r8 != 0)
            r12_1 = sx.q(i) * 0xe8 + *r8
        
        void* rbp_1 = arg1[1]
        arg4 = zx.o(r15_2[0x2b4].d)
        arg5 = zx.o(*(r15_2 + 0x159c))
        arg6 = zx.o(r15_2[0x2b3].d)
        void*** rcx_5 = (*(rbp_1 + 0x30) + 7) & 0xfffffffffffffff8
        arg3 = _mm_cvtepi32_ps(zx.o(*(r15_2 + 0x15a4)))
        void* rax_5 = &rcx_5[5]
        arg4 = _mm_cvtepi32_ps(arg4)
        arg5 = _mm_cvtepi32_ps(arg5)
        arg6 = _mm_cvtepi32_ps(arg6)
        
        if (rax_5 u> *(rbp_1 + 0x38))
            arg3 = sub_140b0e3d0(rbp_1 + 0x30, 0x30)
            rcx_5 = (*(rbp_1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_5[5]
        
        *(rbp_1 + 0x30) = rax_5
        *(rbp_1 + 0x14) += 1
        int64_t* r14_1 = nullptr
        void* const var_b8_1 = nullptr
        **(rbp_1 + 8) = rcx_5
        *(rbp_1 + 8) = &rcx_5[1]
        rcx_5[1] = 0
        *rcx_5 = &data_142d54998
        rcx_5[2].d = arg6.d
        *(rcx_5 + 0x14) = arg5.d
        *(rcx_5 + 0x1c) = arg4.d
        rcx_5[4].d = arg3.d
        rcx_5[3].d = 0
        *(rcx_5 + 0x24) = 0x3f800000
        int64_t* rcx_10 = *(*arg1[2] + 0x20)
        char var_b0
        char var_a8
        int128_t* var_a0
        (*(*rcx_10 + 0xd8))(rcx_10, arg1[1], r15_2, &r15_2[0x2b3], 0, var_b0, var_a8, var_a0, 
            __saved_zmm10_1, var_88_1, var_78_1, var_68_1, var_58_1)
        sub_141405870(*(*arg1 + 8) + 0x20, r15_2, 1)
        int64_t* rax_11 = arg1[3]
        int32_t j = 0
        
        if (rax_11[1].d s> 0)
            do
                void* r10_1 = *(r14_1 + *rax_11)
                char rdx_7 = (*(r10_1 + 0x570)).b
                
                if ((rdx_7 & 1) != 0)
                    void* rcx_13 = r10_1 + 0x558
                    void* rax_13 = *(rcx_13 + 8)
                    
                    if (rax_13 != 0)
                        rcx_13 = rax_13
                    
                    if (not(arg7.d f>= *(rcx_13 + arg_18)))
                        uint64_t rdx_8 = arg1[1]
                        
                        if ((rdx_7 & 0x20) == 0)
                            var_a0 = r12_1
                            var_a8 = *arg1[5]
                            var_b0 = *arg1[4]
                            arg7 =
                                sub_141495f60(r10_1, rdx_8, i, r15_2, *arg1, var_b0, var_a8, var_a0)
                        else
                            var_b0.q = r12_1
                            var_b8_1.b = *arg1[4]
                            arg7 = sub_141494d20(r10_1, rdx_8, i, r15_2, var_b8_1.b, var_b0)
                
                rax_11 = arg1[3]
                j += 1
                r14_1 = &r14_1[1]
            while (j s< rax_11[1].d)
        
        if (*(rsi_1 + 0x8c) != rbx_1)
            bool cond:1_1 = *(rsi_1 + 0x14) u> 0
            *(rsi_1 + 0x8c) = rbx_1
            
            if (cond:1_1)
                void*** rdx_11 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_20 = &rdx_11[3]
                
                if (rax_20 u> *(rsi_1 + 0x38))
                    sub_140b0e3d0(rsi_1 + 0x30, 0x20)
                    rdx_11 = (*(rsi_1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_20 = &rdx_11[3]
                
                *(rsi_1 + 0x30) = rax_20
                int64_t* rax_21 = *(rsi_1 + 8)
                *(rsi_1 + 0x14) += 1
                *rax_21 = rdx_11
                int32_t rax_22 = *(rsi_1 + 0x8c)
                *(rsi_1 + 8) = &rdx_11[1]
                rdx_11[1] = 0
                *rdx_11 = &data_142f11588
                rdx_11[2].d = rax_22
            else
                *(rsi_1 + 0x90) = rbx_1
        
        i += 1
        result = *arg1
        rcx = arg_20 + 0x5240
        arg_18 += 4
        r8 = arg2
        arg_20 = rcx
    while (i s< *(result + 0xa8))

return result
