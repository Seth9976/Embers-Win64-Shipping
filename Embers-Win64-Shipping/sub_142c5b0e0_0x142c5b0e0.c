// 函数: sub_142c5b0e0
// 地址: 0x142c5b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4ab0) != 0)
    char* rax_1 = *(arg1 + 0xd0)
    
    if (rax_1 == 0 || (*rax_1 & 0x10) == 0)
        int64_t i = 0
        
        if (*(arg1 + 0x588) u> 0)
            int64_t r14_1 = 0
            
            do
                int64_t* rdi_2 = *(arg1 + 0x4ab0) + r14_1
                void* rcx = rdi_2[3]
                
                if (rcx != 0)
                    j_sub_1428574d0(rcx)
                    rdi_2[3] = 0
                    rdi_2[5].d = 0
                    sub_142c5aac0(&rdi_2[7])
                    data_143ccb8a0(*rdi_2)
                    int64_t rcx_3 = rdi_2[1]
                    *rdi_2 = 0
                    data_143ccb8a0(rcx_3)
                    rdi_2[1] = 0
                
                i += 1
                r14_1 -= -0x80
            while (i u< *(arg1 + 0x588))
        
        data_143ccb8a0(*(arg1 + 0x4ab0))
        *(arg1 + 0x4ab0) = 0

return _guard_check_icall(arg1) __tailcall
