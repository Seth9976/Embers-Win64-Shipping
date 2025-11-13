// 函数: sub_142ab6ad0
// 地址: 0x142ab6ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
*(arg1 + 8) = arg3
arg1[4] = 0

if (arg3 != 0)
    sub_142ab5d10(arg3)
    int64_t* rcx_1 = *(arg1 + 8)
    int32_t* rax_1 = *rcx_1
    
    if (*rax_1 == 1 && *(rax_1 + 9) == 1 && sub_142ab5ca0(rcx_1) == 0)
        int64_t* rdi_1 = *(arg1 + 8)
        *arg1 += *(*rdi_1 + 4)
        
        if (rdi_1 != 0)
            if (*(rdi_1 + 0xc) != 0)
                sub_142a7dcd0(*rdi_1)
            
            sub_142a47920(rdi_1)
        
        *(arg1 + 8) = 0

return arg1
