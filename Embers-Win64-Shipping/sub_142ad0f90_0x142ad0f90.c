// 函数: sub_142ad0f90
// 地址: 0x142ad0f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    *(arg1 + 8) = *(arg2 + 8)
    int64_t* rcx = *(arg1 + 0x10)
    int64_t* rsi_1 = *(arg2 + 0x10)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    int64_t rax_4 = (*(*rsi_1 + 0x10))(rsi_1)
    int64_t* rcx_2 = *(arg1 + 0x18)
    *(arg1 + 0x10) = rax_4
    int64_t* rdi_1 = *(arg2 + 0x18)
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    *(arg1 + 0x18) = (*(*rdi_1 + 0x10))(rdi_1)

return arg1
