// 函数: sub_142b91960
// 地址: 0x142b91960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

arg1[0x2e].d -= 1

if (arg1[0x2e].d s<= 0)
    int64_t i_2 = 2
    int64_t r13_1 = *arg1
    char const* const var_38
    int64_t* r15_1 = &var_38
    var_38 = "type42"
    int64_t var_30_1 = 0
    int64_t i
    
    do
        uint64_t rbx_1 = 0
        
        if (*(arg1 + 0x14) u> 0)
            int64_t rbp_1 = *r15_1
            
            do
                int64_t* rdi_1 = arg1[rbx_1 + 3]
                uint32_t j
                uint32_t rdx_1
                
                if (rbp_1 != 0)
                    char* rax_3 = *(*rdi_1 + 8)
                    void* rsi_2 = rbp_1 - rax_3
                    
                    do
                        rdx_1 = zx.d(*rax_3)
                        j = zx.d(*(rax_3 + rsi_2))
                        
                        if (rdx_1 != j)
                            break
                        
                        rax_3 = &rax_3[1]
                    while (j != 0)
                
                if ((rbp_1 == 0 || rdx_1 - j == 0) && (**rdi_1 & 1) != 0)
                    for (void* j_1 = rdi_1[4]; j_1 != 0; j_1 = rdi_1[4])
                        sub_142b917e0(*(j_1 + 0x10))
                
                rbx_1 = zx.q(rbx_1.d + 1)
            while (rbx_1.d u< *(arg1 + 0x14))
        
        r15_1 = &r15_1[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    
    while (*(arg1 + 0x14) u> 0)
        uint64_t rcx_1 = zx.q(*(arg1 + 0x14))
        uint64_t rsi_3 = zx.q((rcx_1 - 1).d)
        int64_t* rbx_2 = arg1[rsi_3 + 3]
        
        if (rbx_2 != 0)
            void* i_1 = &arg1[3]
            
            for (void* rdx_3 = i_1 + (rcx_1 << 3); i_1 u< rdx_3; i_1 += 8)
                if (*i_1 == rbx_2)
                    *(arg1 + 0x14) = rsi_3.d
                    
                    if (i_1 u< rdx_3 - 8)
                        __builtin_memcpy(i_1, i_1 + 8, (((rdx_3 - 8 - i_1 - 1) u>> 3) + 1) << 3)
                    
                    *(rdx_3 - 8) = 0
                    void* rax_5 = rbx_2[1]
                    int64_t rdi_2 = rbx_2[2]
                    void* rsi_5 = *rbx_2
                    
                    if (rax_5 != 0 && *(rax_5 + 0x130) == rbx_2)
                        *(rax_5 + 0x130) = 0
                    
                    if ((**rbx_2 & 2) != 0)
                        sub_142b9a390(rbx_2)
                    
                    if ((**rbx_2 & 1) != 0)
                        sub_142b91240(rbx_2)
                    
                    int64_t rax_8 = *(rsi_5 + 0x28)
                    
                    if (rax_8 != 0)
                        rax_8(rbx_2)
                    
                    (*(rdi_2 + 0x10))(rdi_2, rbx_2)
                    break
    
    (*(r13_1 + 0x10))(r13_1, arg1)

return 0
