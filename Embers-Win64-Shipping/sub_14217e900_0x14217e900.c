// 函数: sub_14217e900
// 地址: 0x14217e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0x58))
    return 

*(arg1 + 0x58) = arg2

if (arg2 == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x50) s> 0)
        do
            int64_t rdi_1 = sx.q(i) << 3
            
            if (sub_140d3c6e0(*(arg1 + 0x48) + rdi_1) != 0)
                int64_t j = sub_140d3c6e0(*(arg1 + 0x48) + rdi_1)
                int64_t* r9_1 = *(arg1 + 0x38)
                int64_t r8_1 = sx.q(*(arg1 + 0x40))
                int64_t* rdx_3 = r9_1
                void* rax = &r9_1[r8_1]
                
                if (r9_1 != rax)
                    while (*rdx_3 != j)
                        rdx_3 = &rdx_3[1]
                        
                        if (rdx_3 == rax)
                            goto label_14217ea83
                
                if (r9_1 == rax || ((rdx_3 - r9_1) s>> 3).d == 0xffffffff)
                label_14217ea83:
                    int32_t rax_4 = (r8_1 + 1).d
                    *(arg1 + 0x40) = rax_4
                    
                    if (rax_4 s> *(arg1 + 0x44))
                        sub_1405a4d70(arg1 + 0x38)
                    
                    *((r8_1 << 3) + *(arg1 + 0x38)) = j
            
            i += 1
        while (i s< *(arg1 + 0x50))
    
    bool cond:0_1 = *(arg1 + 0x54) == 0
    *(arg1 + 0x50) = 0
    
    if (not(cond:0_1))
        sub_1405c5570(arg1 + 0x48, 0)
else
    int32_t i_1 = 0
    
    if (*(arg1 + 0x40) s> 0)
        int64_t* r15_1 = nullptr
        
        do
            void* rdx = *(r15_1 + *(arg1 + 0x38))
            
            if (rdx != 0)
                void* arg_8
                sub_140d3a3a0(&arg_8, rdx)
                int32_t* r12_1 = *(arg1 + 0x48)
                int32_t* rbx_1 = r12_1
                void* rbp_1 = &r12_1[sx.q(*(arg1 + 0x50)) * 2]
                
                if (r12_1 != rbp_1)
                    while (sub_140664af0(rbx_1, &arg_8).b == 0)
                        rbx_1 = &rbx_1[2]
                        
                        if (rbx_1 == rbp_1)
                            goto label_14217e9a8
                
                if (r12_1 == rbp_1 || ((rbx_1 - r12_1) s>> 3).d == 0xffffffff)
                label_14217e9a8:
                    int64_t rbx_4 = sx.q(*(arg1 + 0x50))
                    int32_t rax_2 = (rbx_4 + 1).d
                    *(arg1 + 0x50) = rax_2
                    
                    if (rax_2 s> *(arg1 + 0x54))
                        sub_1405a4d70(arg1 + 0x48)
                    
                    *(*(arg1 + 0x48) + (rbx_4 << 3)) = arg_8
            
            i_1 += 1
            r15_1 = &r15_1[1]
        while (i_1 s< *(arg1 + 0x40))
    
    bool cond:1_1 = *(arg1 + 0x44) == 0
    *(arg1 + 0x40) = 0
    
    if (not(cond:1_1))
        sub_1405c5570(arg1 + 0x38, 0)
