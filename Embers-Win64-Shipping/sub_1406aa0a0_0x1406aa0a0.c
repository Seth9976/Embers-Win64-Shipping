// 函数: sub_1406aa0a0
// 地址: 0x1406aa0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_8 = rdi
uint64_t result
result.b = 0
int32_t i = *(arg1 + 0x7c)

if (i != 0xffffffff)
    while (i != 0x7c)
        if (i == 0x29)
            if (*(arg1 + 0x1c) != 0)
                break
            
            if ((arg1[0x10].d & 0x10000000) == 0)
                sub_1406ad7b0(arg1, error_paren)
                noreturn
            
        label_1406aa595:
            sub_1406a95f0(&arg1[8], arg1[0xf].b)
            goto label_1406aa59a
        
        if (i == 0x2e)
            sub_1406aeb90(&arg1[8], 5)
        label_1406aa59a:
            int64_t rax_39 = arg1[2]
            char* rcx_33 = *arg1
            
            if (rcx_33 != rax_39)
                if (*rcx_33 == 0x5c)
                    void* rdx_18 = &rcx_33[1]
                    rcx_33 = rdx_18
                    
                    if (rdx_18 == rax_39)
                        rcx_33 = *arg1
                    else
                        char r8_10 = (arg1[0x10].d).b
                        
                        if (((r8_10 & 8) != 0 || *rdx_18 - 0x28 u> 1)
                                && ((r8_10 & 0x10) != 0 || ((*rdx_18 - 0x7b) & 0xfd) != 0))
                            rcx_33 = *arg1
                
                *arg1 = &rcx_33[1]
            
            sub_1406af960(arg1)
            sub_1406aeca0(arg1)
        else
            int32_t rdx_2
            
            if (i != 0x5c)
                if (i == 0x5b)
                    char* rcx_5 = *arg1
                    int64_t rax_6 = arg1[2]
                    
                    if (rcx_5 != rax_6)
                        if (*rcx_5 == 0x5c)
                            void* rdx_3 = &rcx_5[1]
                            rcx_5 = rdx_3
                            
                            if (rdx_3 == rax_6)
                                rcx_5 = *arg1
                            else
                                char r8_2 = (arg1[0x10].d).b
                                
                                if (((r8_2 & 8) != 0 || *rdx_3 - 0x28 u> 1)
                                        && ((r8_2 & 0x10) != 0 || ((*rdx_3 - 0x7b) & 0xfd) != 0))
                                    rcx_5 = *arg1
                        
                        *arg1 = &rcx_5[1]
                    
                    sub_1406af960(arg1)
                    sub_1406a9840(&arg1[8])
                    int32_t rax_10 = *(arg1 + 0x7c)
                    
                    if (rax_10 == 0x5e)
                        void* rax_11 = arg1[9]
                        *(rax_11 + 0xc) ^= 1
                        char* rcx_8 = *arg1
                        int64_t rax_12 = arg1[2]
                        
                        if (rcx_8 != rax_12)
                            if (*rcx_8 == 0x5c)
                                void* rdx_4 = &rcx_8[1]
                                rcx_8 = rdx_4
                                
                                if (rdx_4 == rax_12)
                                    rcx_8 = *arg1
                                else
                                    char r8_3 = (arg1[0x10].d).b
                                    
                                    if (((r8_3 & 8) != 0 || *rdx_4 - 0x28 u> 1) &&
                                            ((r8_3 & 0x10) != 0 || ((*rdx_4 - 0x7b) & 0xfd) != 0))
                                        rcx_8 = *arg1
                            
                            *arg1 = &rcx_8[1]
                        
                        sub_1406af960(arg1)
                        rax_10 = *(arg1 + 0x7c)
                    
                    if ((arg1[0x10].d & 0x20000000) != 0 && rax_10 == 0x5d)
                        sub_1406a97c0(&arg1[8], rax_10.b)
                        char* rcx_11 = *arg1
                        int64_t rax_16 = arg1[2]
                        
                        if (rcx_11 != rax_16)
                            if (*rcx_11 == 0x5c)
                                void* rdx_6 = &rcx_11[1]
                                rcx_11 = rdx_6
                                
                                if (rdx_6 == rax_16)
                                    rcx_11 = *arg1
                                else
                                    char r8_4 = (arg1[0x10].d).b
                                    
                                    if (((r8_4 & 8) != 0 || *rdx_6 - 0x28 u> 1) &&
                                            ((r8_4 & 0x10) != 0 || ((*rdx_6 - 0x7b) & 0xfd) != 0))
                                        rcx_11 = *arg1
                            
                            *arg1 = &rcx_11[1]
                        
                        sub_1406af960(arg1)
                    
                    sub_1406ab460(arg1)
                    
                    if (*(arg1 + 0x7c) == 0x5d)
                        goto label_1406aa59a
                    
                    sub_1406ad7b0(arg1, error_brack)
                    noreturn
                
                if (i != 0x28)
                    if (i != 0x5e)
                        if (i == 0x24)
                            rdx_2 = i - 0x21
                            goto label_1406aa4e5
                        
                        if (i - 0x2a u<= 1 || i == 0x3f || i == 0x7b)
                            sub_1406ad7b0(arg1, error_badrepeat)
                            noreturn
                        
                        if (i != 0x7d)
                            if (i != 0x5d || (arg1[0x10].d & 0x10000000) != 0)
                                goto label_1406aa595
                            
                            sub_1406ad7b0(arg1, error_brack)
                            noreturn
                        
                        if ((arg1[0x10].d & 0x10000000) != 0)
                            goto label_1406aa595
                        
                        sub_1406ad7b0(arg1, error_brace)
                        noreturn
                    
                    rdx_2 = i - 0x5c
                label_1406aa4e5:
                    sub_1406aeb90(&arg1[8], rdx_2)
                label_1406aa4ea:
                    int64_t rax_34 = arg1[2]
                    char* rcx_30 = *arg1
                    
                    if (rcx_30 != rax_34)
                        if (*rcx_30 == 0x5c)
                            void* rdx_16 = &rcx_30[1]
                            rcx_30 = rdx_16
                            
                            if (rdx_16 == rax_34)
                                rcx_30 = *arg1
                            else
                                char r8_9 = (arg1[0x10].d).b
                                
                                if (((r8_9 & 8) != 0 || *rdx_16 - 0x28 u> 1)
                                        && ((r8_9 & 0x10) != 0 || ((*rdx_16 - 0x7b) & 0xfd) != 0))
                                    rcx_30 = *arg1
                        
                        *arg1 = &rcx_30[1]
                    
                    sub_1406af960(arg1)
                else
                    char* rcx_14 = *arg1
                    int64_t rax_20 = arg1[2]
                    
                    if (rcx_14 != rax_20)
                        if (*rcx_14 == 0x5c)
                            void* rdx_7 = &rcx_14[1]
                            rcx_14 = rdx_7
                            
                            if (rdx_7 == rax_20)
                                rcx_14 = *arg1
                            else
                                char r8_5 = (arg1[0x10].d).b
                                
                                if (((r8_5 & 8) != 0 || *rdx_7 - 0x28 u> 1)
                                        && ((r8_5 & 0x10) != 0 || ((*rdx_7 - 0x7b) & 0xfd) != 0))
                                    rcx_14 = *arg1
                        
                        *arg1 = &rcx_14[1]
                    
                    sub_1406af960(arg1)
                    *(arg1 + 0x1c) += 1
                    int32_t rax_24 = arg1[0x10].d
                    
                    if (not(test_bit(rax_24, 0x1b)) && *(arg1 + 0x7c) == 0x29)
                        sub_1406ad7b0(arg1, error_paren)
                        noreturn
                    
                    if ((rax_24.b & 0x20) != 0 && *(arg1 + 0x7c) == 0x3f)
                        sub_1406aec20(arg1)
                        rdi = zx.q(*(arg1 + 0x7c))
                        sub_1406aec20(arg1)
                        
                        if (rdi.d == 0x3a)
                            sub_1406ace40(arg1)
                            *(arg1 + 0x1c) -= 1
                            rdi.b = 1
                        else if (rdi.d != 0x21)
                            if (rdi.d != 0x3d)
                                sub_1406ad7b0(arg1, error_syntax)
                                noreturn
                            
                            sub_1406ac250(arg1, 0)
                            *(arg1 + 0x1c) -= 1
                            rdi.b = 0
                        else
                            sub_1406ac250(arg1, 1)
                            *(arg1 + 0x1c) -= 1
                            rdi.b = 0
                    else if ((arg1[0xe].d & 0x200) == 0)
                        arg1[3].d += 1
                        void*** rax_26 = sub_1406aa820(&arg1[8], arg1[3].d)
                        sub_1406abf40(arg1)
                        sub_1406ad700(&arg1[8], rax_26)
                        sub_1406b0a30(&arg1[4], zx.q(arg1[3].d + 1), 0)
                        int32_t r8_6 = rax_26[4].d
                        int64_t rax_27 = arg1[4]
                        uint64_t rcx_26 = zx.q(r8_6) u>> 5
                        *(rax_27 + (rcx_26 << 2)) |= 1 << ((r8_6 & 0x1f) u% 0x20)
                        *(arg1 + 0x1c) -= 1
                        rdi.b = 1
                    else
                        uint64_t rax_25 = sub_1406aeb90(&arg1[8], 8)
                        sub_1406abf40(arg1)
                        sub_1406ad700(&arg1[8], rax_25)
                        *(arg1 + 0x1c) -= 1
                        rdi.b = 1
                    
                    if (*(arg1 + 0x7c) != 0x29)
                        sub_1406ad7b0(arg1, error_paren)
                        noreturn
                    
                    char* rcx_27 = *arg1
                    int64_t rax_30 = arg1[2]
                    
                    if (rcx_27 != rax_30)
                        if (*rcx_27 == 0x5c)
                            void* rdx_15 = &rcx_27[1]
                            rcx_27 = rdx_15
                            
                            if (rdx_15 == rax_30)
                                rcx_27 = *arg1
                            else
                                char r8_8 = (arg1[0x10].d).b
                                
                                if (((r8_8 & 8) != 0 || *rdx_15 - 0x28 u> 1)
                                        && ((r8_8 & 0x10) != 0 || ((*rdx_15 - 0x7b) & 0xfd) != 0))
                                    rcx_27 = *arg1
                        
                        *arg1 = &rcx_27[1]
                    
                    sub_1406af960(arg1)
                    
                    if (rdi.b != 0)
                        sub_1406aeca0(arg1)
            else
                char* rcx_1 = *arg1
                int64_t rax = arg1[2]
                
                if (rcx_1 != rax)
                    if (*rcx_1 == 0x5c)
                        void* rdx_1 = &rcx_1[1]
                        rcx_1 = rdx_1
                        
                        if (rdx_1 == rax)
                            rcx_1 = *arg1
                        else
                            char r8_1 = (arg1[0x10].d).b
                            
                            if (((r8_1 & 8) != 0 || *rdx_1 - 0x28 u> 1)
                                    && ((r8_1 & 0x10) != 0 || ((*rdx_1 - 0x7b) & 0xfd) != 0))
                                rcx_1 = *arg1
                    
                    *arg1 = &rcx_1[1]
                
                sub_1406af960(arg1)
                
                if ((arg1[0x10].b & 0x80) == 0)
                    sub_1406aa660(arg1)
                    sub_1406aeca0(arg1)
                else
                    char rax_4 = arg1[0xf].b
                    
                    if (rax_4 == 0x62)
                        rdx_2 = 4
                        goto label_1406aa4e5
                    
                    if (rax_4 == 0x42)
                        sub_1406aeb90(&arg1[8], 4)
                        void* rax_5 = arg1[9]
                        *(rax_5 + 0xc) ^= 1
                        goto label_1406aa4ea
                    
                    sub_1406aa660(arg1)
                    sub_1406aeca0(arg1)
        
        i = *(arg1 + 0x7c)
        result.b = 1
        
        if (i == 0xffffffff)
            break

return result
