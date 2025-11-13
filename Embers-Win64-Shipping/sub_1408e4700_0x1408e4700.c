// 函数: sub_1408e4700
// 地址: 0x1408e4700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg4
void* rbx = arg2
void* rbp = arg1
sub_1419c6730()
int32_t r8 = *(rbx + 8)
uint64_t result = 0

if (r8 s> 0)
    while (not(test_bit(rsi, result.d)))
        result = zx.q(result.d + 1)
        
        if (result.d s>= r8)
            return result
    
    int64_t rax
    uint64_t rdx
    
    if (data_143f0f21f != 0)
        rdx = zx.q(data_143f0f1a0)
        rax = sx.q(rdx.d)
    
    if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax * 0x14) u>> 0x13).b & 1) == 0
            || not(test_bit(data_143f13cd8, rdx)))
        sub_1408e29c0(rbp)
    
    int64_t* rcx_2 = *(rbp + 0x168)
    int64_t* var_90_1 = rcx_2
    result = &rcx_2[sx.q(*(rbp + 0x170))]
    uint64_t result_1 = result
    
    if (rcx_2 != result)
        do
            int64_t* rdi_1 = *rcx_2
            int512_t zmm1
            zmm1.o = *(rbp + 0x158)
            result = (*(*rdi_1 + 0x20))(rdi_1, zmm1, zx.q(*(rbp + 0x15c)))
            
            if (*(result + 0x10) != 0)
                *(rbp + 0x15d)
                *(rbp + 0x15c)
                zmm1.o = *(rbp + 0x158)
                void* rax_6
                rax_6, zmm1 = sub_1408e5610(rdi_1)
                void* r8_3 = rax_6
                result = 0
                int64_t r13_1 = 0
                int32_t var_94_1 = 0
                int64_t rcx_5 = sx.q(*(r8_3 + 0x68))
                
                if (rcx_5 s> 0)
                    do
                        int32_t i = 0
                        int32_t* rax_7 = *(r8_3 + 0x60) + sx.q(result.d) * 0xc
                        
                        if (*(rbx + 8) s> 0)
                            do
                                if (test_bit(rsi, i))
                                    int32_t rax_8 = sub_14081f8e0(arg5, 1)
                                    char var_98 = 0
                                    int64_t* r15_3 = zx.q(rax_8 s% 0x66) * 0xa0
                                        + *(*arg5 + (sx.q(rax_8 s/ 0x66) << 3))
                                    char* var_58_1 = &var_98
                                    void*** (* var_60)() = j_sub_140597fc0
                                    void*** rax_11 = sub_14081d830(0x90, 
                                        sub_140a756e0(&var_60, &data_143958018) + 0x10, 1, 0)
                                    void*** rbx_1 = rax_11
                                    
                                    if (rax_11 == 0)
                                        rbx_1 = nullptr
                                    else
                                        __builtin_memset(&rbx_1[1], 0, 0x48)
                                        *rbx_1 = &data_142e11bb8
                                        __builtin_memset(&rbx_1[0xa], 0, 0x40)
                                    
                                    int64_t rdi_2 = sx.q(arg5[0x18].d)
                                    int32_t rax_12 = (rdi_2 + 1).d
                                    arg5[0x18].d = rax_12
                                    
                                    if (rax_12 s> *(arg5 + 0xc4))
                                        sub_14083a310(&arg5[0x17], rdi_2.d)
                                    
                                    int64_t rax_13 = arg5[0x17]
                                    char var_97 = 0
                                    *(rax_13 + (rdi_2 << 3)) = rbx_1
                                    char* var_48_1 = &var_97
                                    void*** (* var_50)() = j_sub_140597fc0
                                    void*** rax_15 = sub_14081d830(0x30, 
                                        sub_140a756e0(&var_50, &data_143958018) + 0x10, 1, 0)
                                    void*** rdi_3 = rax_15
                                    
                                    if (rax_15 == 0)
                                        rdi_3 = nullptr
                                    else
                                        __builtin_memset(&rax_15[2], 0, 0x20)
                                        rax_15[4] = 0
                                        rax_15[5] = 0
                                        *rdi_3 = &data_142e0f070
                                        rdi_3[2].d = 0xffffffff
                                        *(rdi_3 + 0x14) = 4
                                        rdi_3[1] = &data_142d99570
                                        rdi_3[3].d = 2
                                    
                                    int64_t r14_1 = sx.q(arg5[0x18].d)
                                    int32_t rax_16 = (r14_1 + 1).d
                                    arg5[0x18].d = rax_16
                                    
                                    if (rax_16 s> *(arg5 + 0xc4))
                                        sub_14083a310(&arg5[0x17], r14_1.d)
                                    
                                    *(arg5[0x17] + (r14_1 << 3)) = rdi_3
                                    sub_1408df3f0(arg1, rdi_1, rax_7, rbx_1, rdi_3, r15_3)
                                    int64_t* rcx_18 = *(rdi_1[6] + (r13_1 << 3))
                                    int64_t rax_20 = (*(*rcx_18 + 0x280))(rcx_18)
                                    *(r15_3 + 0x9c) &= 0xffffffbf
                                    r15_3[0x10] = rax_20
                                    sub_1422dd2a0(arg5, i, r15_3)
                                    rbx = arg2
                                    rsi = arg4
                                
                                i += 1
                            while (i s< *(rbx + 8))
                            
                            r8_3 = rax_6
                        
                        r13_1 += 1
                        result = zx.q(var_94_1 + 1)
                        var_94_1 = result.d
                    while (r13_1 s< rcx_5)
                    
                    rbp = arg1
            
            rcx_2 = &var_90_1[1]
            var_90_1 = rcx_2
        while (rcx_2 != result_1)

return result
