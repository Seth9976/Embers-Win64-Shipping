// 函数: sub_1406abf40
// 地址: 0x1406abf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg1[9]
uint64_t result = sub_1406aa0a0(arg1)

if (result.b != 0)
    goto label_1406abf91

if (*(arg1 + 0x7c) == 0x7c)
    sub_1406ad700(&arg1[8], sub_1406aeb90(&arg1[8], 8))
label_1406abf91:
    void*** rax_1 = j_sub_140a82f30(0x20)
    void*** r14_1 = rax_1
    
    if (rax_1 == 0)
        r14_1 = nullptr
    else
        rax_1[1] = 0x11
        rax_1[2] = 0
        rax_1[3] = 0
        *r14_1 = &data_142d8b590
    
    r14_1[3] = arg1[9]
    void* rax_3 = arg1[9]
    int64_t rcx_2 = *(rax_3 + 0x10)
    
    if (rcx_2 != 0)
        r14_1[2] = rcx_2
        *(*(arg1[9] + 0x10) + 0x18) = r14_1
        rax_3 = arg1[9]
    
    *(rax_3 + 0x10) = r14_1
    arg1[9] = r14_1
    void*** rax_5 = j_sub_140a82f30(0x30)
    void*** rdx_2 = rax_5
    
    if (rax_5 == 0)
        rdx_2 = nullptr
    else
        rax_5[1] = 0x10
        rax_5[2] = 0
        rax_5[3] = 0
        *rax_5 = &data_142d8b5b0
        rax_5[4] = r14_1
        rax_5[5] = 0
    
    void* rcx_4 = *(r15 + 0x10)
    *(*(rcx_4 + 0x18) + 0x10) = rdx_2
    result = *(rcx_4 + 0x18)
    rdx_2[3] = result
    *(rcx_4 + 0x18) = rdx_2
    rdx_2[2] = rcx_4
    
    while (*(arg1 + 0x7c) == 0x7c)
        char* rcx_5 = *arg1
        int64_t rax_7 = arg1[2]
        
        if (rcx_5 != rax_7)
            if (*rcx_5 == 0x5c)
                void* rdx_3 = &rcx_5[1]
                rcx_5 = rdx_3
                
                if (rdx_3 == rax_7)
                    rcx_5 = *arg1
                else
                    char r8_1 = (arg1[0x10].d).b
                    
                    if (((r8_1 & 8) != 0 || *rdx_3 - 0x28 u> 1)
                            && ((r8_1 & 0x10) != 0 || ((*rdx_3 - 0x7b) & 0xfd) != 0))
                        rcx_5 = *arg1
            
            *arg1 = &rcx_5[1]
        
        sub_1406af960(arg1)
        
        if (sub_1406aa0a0(arg1) == 0)
            void*** rax_12 = j_sub_140a82f30(0x20)
            void*** rbx_1 = rax_12
            
            if (rax_12 == 0)
                rbx_1 = nullptr
            else
                *rax_12 = &data_142d8b590
                rax_12[1] = 8
                rax_12[2] = 0
                rax_12[3] = 0
            
            rbx_1[3] = arg1[9]
            void* rax_14 = arg1[9]
            int64_t rcx_8 = *(rax_14 + 0x10)
            
            if (rcx_8 != 0)
                rbx_1[2] = rcx_8
                *(*(arg1[9] + 0x10) + 0x18) = rbx_1
                rax_14 = arg1[9]
            
            *(rax_14 + 0x10) = rbx_1
            arg1[9] = rbx_1
            int32_t rax_16 = rbx_1[1].d
            int32_t rbp_1
            
            if (rax_16 != 8)
                rbp_1 = 0xc
                
                if (rax_16 - 0xa u> 1)
                    rbp_1 = 0xe
            else
                rbp_1 = rax_16 + 1
            
            void*** rax_18 = j_sub_140a82f30(0x28)
            void*** rdx_4 = rax_18
            
            if (rax_18 == 0)
                rdx_4 = nullptr
            else
                rax_18[1].d = rbp_1
                __builtin_memset(rax_18 + 0xc, 0, 0x14)
                *rdx_4 = &data_142d8b5a0
                rdx_4[4] = rbx_1
            
            rdx_4[3] = arg1[9]
            void* rax_20 = arg1[9]
            int64_t rcx_10 = *(rax_20 + 0x10)
            
            if (rcx_10 != 0)
                rdx_4[2] = rcx_10
                *(*(arg1[9] + 0x10) + 0x18) = rdx_4
                rax_20 = arg1[9]
            
            *(rax_20 + 0x10) = rdx_4
            arg1[9] = rdx_4
        
        void* i_1 = *(r15 + 0x10)
        void* rbp_2 = r14_1[2]
        r14_1[2] = 0
        void* rax_22 = arg1[9]
        arg1[9] = r14_1
        r14_1[2] = 0
        *(rax_22 + 0x10) = r14_1
        
        for (void* i = *(i_1 + 0x28); i != 0; i = *(i + 0x28))
            i_1 = i
        
        void*** rax_23 = j_sub_140a82f30(0x30)
        
        if (rax_23 == 0)
            rax_23 = nullptr
        else
            rax_23[1] = 0x10
            rax_23[3] = 0
            *rax_23 = &data_142d8b5b0
            rax_23[4] = r14_1
            rax_23[5] = 0
        
        *(i_1 + 0x28) = rax_23
        rax_23[2] = rbp_2
        result = *(i_1 + 0x28)
        *(rbp_2 + 0x18) = result

return result
