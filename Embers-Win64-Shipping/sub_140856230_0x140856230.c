// 函数: sub_140856230
// 地址: 0x140856230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xd68))
void* rsi = arg2
void* rbp = arg1

if ((result.b & 2) == 0 && arg2 != 0)
    *(arg1 + 0xd68) = result.d | 2
    sub_140853070(arg1 + 0xb20, arg1 + 0x2b0, rsi + 0x150)
    sub_140853070(rbp + 0xb40, rbp + 0x380, rsi + 0x150)
    int64_t i_2 = sx.q(*(rsi + 0xa8))
    sub_14085b6d0(rbp + 0xc40, i_2.d, 1)
    sub_14085b6d0(rbp + 0xc50, i_2.d, 1)
    void* r13_1 = rbp + 0xc60
    int64_t rdi_1 = sx.q(*(r13_1 + 8))
    void* var_90_1 = r13_1
    
    if (i_2.d s> rdi_1.d)
        *(r13_1 + 8) = i_2.d
        
        if (i_2.d s> *(r13_1 + 0xc))
            sub_1405a4f90(r13_1)
        
        memset((rdi_1 << 4) + *r13_1, 0, sx.q(i_2.d - rdi_1.d) << 4)
        rsi = arg2
    else if (i_2.d s< rdi_1.d)
        sub_140858be0(r13_1, i_2.d, rdi_1.d - i_2.d, 1)
    
    sub_14085b6d0(rbp + 0xc70, i_2.d, 1)
    int64_t* r12_1 = nullptr
    int64_t var_c0 = 0
    int32_t var_b8_1 = 0
    sub_1405947f0(&var_c0, 8)
    int32_t rax_1 = var_b8_1 + 8
    var_b8_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_c0)
    
    int64_t r14_1 = var_c0
    result = UnDecorator::getReferenceType(r14_1, u"Emitter", 0x10)
    int32_t arg_20 = 0
    int32_t rdi_3 = 0
    int64_t i_1 = i_2
    
    if (i_2.d s> 0)
        int64_t* var_88_1 = nullptr
        int64_t i
        
        do
            result = *(rsi + 0xa0)
            void* r14_2 = *(r12_1 + result)
            void* var_68_1 = r14_2
            
            if (*(r14_2 + 0x24) != 4)
                int64_t var_60
                sub_140800130(*(r14_2 + 0x788), &var_60)
                void* r15_1 = rbp + 0x40
                int64_t rbx_2 = sx.q(rdi_3) << 5
                void* var_b0_1 = r15_1
                sub_140853070(*(rbp + 0xc40) + rbx_2, r15_1, r14_2 + 0x80)
                result = sub_140853070(*(rbp + 0xc50) + rbx_2, r15_1, r14_2 + 0x3e8)
                void* r8_11 = *(r14_2 + 0x728)
                
                if (r8_11 != 0)
                    result = sub_140853070(*(rbp + 0xc70) + rbx_2, r15_1, r8_11 + 0x58)
                
                int64_t j_5 = sx.q(*(r14_2 + 0x738))
                int64_t* rbp_2 = *r13_1 + r12_1
                int64_t rdi_4 = sx.q(rbp_2[1].d)
                
                if (j_5.d s> rdi_4.d)
                    rbp_2[1].d = j_5.d
                    int32_t j_2 = j_5.d - rdi_4.d
                    
                    if (j_5.d s> *(rbp_2 + 0xc))
                        result = sub_1405c4e40(rbp_2)
                    
                    int64_t* rcx_23 = (rdi_4 << 5) + *rbp_2
                    
                    if (j_2 != 0)
                        result = rcx_23 + 0x1c
                        int32_t j
                        
                        do
                            *rcx_23 = 0
                            rcx_23 = &rcx_23[4]
                            __builtin_memset(result - 0x14, 0, 0x18)
                            result += 0x20
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                else if (j_5.d s< rdi_4.d)
                    result = sub_140858a10(rbp_2, j_5.d, rdi_4.d - j_5.d, 1)
                
                int64_t j_4 = j_5
                int64_t j_3 = j_5
                
                if (j_5.d s> 0)
                    int64_t rdx_14 = 0
                    int64_t rcx_25 = 0
                    int64_t var_a0_1 = 0
                    int64_t var_a8_1 = 0
                    int64_t j_1
                    
                    do
                        int64_t* rdi_7 = rcx_25 + 0x28 + *(r14_2 + 0x730)
                        int64_t* r13_2 = *r15_1
                        int64_t* var_70_1 = rdi_7
                        int64_t* r14_4 = *(r12_1 + *r13_1) + rdx_14
                        result = &r13_2[sx.q(*(r15_1 + 8)) * 5]
                        uint64_t result_1 = result
                        
                        if (r13_2 != result)
                            do
                                int32_t* rax_5 = sub_1408011e0(r15_1, r13_2)
                                result = (*(*rdi_7 + 0x30))(rdi_7, r13_2)
                                int32_t r8_14 = 0
                                int32_t r12_2 = 0
                                int32_t arg_18 = 0
                                
                                if (result != 0 && rax_5 != 0)
                                    int32_t rdx_17 = *result
                                    int32_t k = 0
                                    int32_t var_c8_1 = rdx_17
                                    
                                    if (rax_5[4] u> 0)
                                        do
                                            int64_t rdi_8 = sx.q(r14_4[1].d)
                                            int32_t r15_3 = *rax_5 + r12_2
                                            r12_2 += 1
                                            int32_t rax_8 = (rdi_8 + 1).d
                                            int32_t rbp_4 =
                                                *(*(rax_5 + 8) + (sx.q(k) << 2)) + rdx_17
                                            r14_4[1].d = rax_8
                                            
                                            if (rax_8 s> *(r14_4 + 0xc))
                                                sub_1405a4d70(r14_4)
                                                rdx_17 = var_c8_1
                                            
                                            result = *r14_4
                                            k += 1
                                            *(result + (rdi_8 << 3)) = rbp_4
                                            *(result + (rdi_8 << 3) + 4) = r15_3
                                        while (k u< rax_5[4])
                                        
                                        r8_14 = 0
                                    
                                    int32_t k_1 = 0
                                    
                                    if (rax_5[0xc] u> 0)
                                        do
                                            int64_t rsi_3 = sx.q(r14_4[3].d)
                                            int32_t r12_4 = rax_5[1] + r8_14
                                            r8_14 += 1
                                            int32_t rax_10 = (rsi_3 + 1).d
                                            int32_t r15_5 =
                                                *(*(rax_5 + 0x28) + (sx.q(k_1) << 2)) + rdx_17
                                            r14_4[3].d = rax_10
                                            
                                            if (rax_10 s> *(r14_4 + 0x1c))
                                                sub_1405a4d70(&r14_4[2])
                                                rdx_17 = var_c8_1
                                            
                                            result = r14_4[2]
                                            k_1 += 1
                                            *(result + (rsi_3 << 3)) = r15_5
                                            *(result + (rsi_3 << 3) + 4) = r12_4
                                        while (k_1 u< rax_5[0xc])
                                
                                rdi_7 = var_70_1
                                r13_2 = &r13_2[5]
                                r15_1 = var_b0_1
                            while (r13_2 != result_1)
                            
                            rdx_14 = var_a0_1
                            j_3 = j_4
                            r12_1 = var_88_1
                        
                        rdx_14 += 0x20
                        r14_2 = var_68_1
                        rcx_25 = var_a8_1 + 0x368
                        r13_1 = var_90_1
                        j_1 = j_3
                        j_3 -= 1
                        j_4 = j_3
                        var_a8_1 = rcx_25
                        var_a0_1 = rdx_14
                    while (j_1 != 1)
                
                int64_t rcx_34 = var_60
                
                if (rcx_34 != 0)
                    result = sub_140a74f90(rcx_34)
                
                rsi = arg2
                rbp = arg1
                rdi_3 = arg_20
            
            rdi_3 += 1
            r12_1 = &r12_1[2]
            i = i_1
            i_1 -= 1
            arg_20 = rdi_3
            var_88_1 = r12_1
        while (i != 1)
        r14_1 = var_c0
    
    if (r14_1 != 0)
        return sub_140a74f90(r14_1)

return result
