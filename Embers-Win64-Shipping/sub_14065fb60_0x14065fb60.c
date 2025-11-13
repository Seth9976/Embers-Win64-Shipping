// 函数: sub_14065fb60
// 地址: 0x14065fb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x68] = 0

if (arg2[0x68] != 0)
    *arg1 ^= (*arg2 ^ *arg1) & 1
    arg1[1] = arg2[1]
    arg1[2] = arg2[2]
    *(arg1 + 8) = *(arg2 + 8)
    void* rax_5 = *(arg2 + 0x10)
    *(arg1 + 0x10) = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    *(arg1 + 0x18) = *(arg2 + 0x18)
    arg1[0x20] = arg2[0x20]
    *(arg1 + 0x28) = 0
    *(arg1 + 0x30) = 0
    
    if (&arg2[0x28] != &arg1[0x28] && *(arg2 + 0x30) != 0)
        int64_t* rcx_1 = *(arg2 + 0x28)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1)
    
    *(arg1 + 0x38) = *(arg2 + 0x38)
    void* rax_10 = *(arg2 + 0x40)
    *(arg1 + 0x40) = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
    
    *(arg1 + 0x48) = *(arg2 + 0x48)
    char rax_12 = arg2[0x50]
    *(arg1 + 0x58) = 0
    arg1[0x50] = rax_12
    *(arg1 + 0x60) = 0
    
    if (&arg2[0x58] != &arg1[0x58] && *(arg2 + 0x60) != 0)
        int64_t* rcx_3 = *(arg2 + 0x58)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3)
    
    arg1[0x68] = 1

return arg1
