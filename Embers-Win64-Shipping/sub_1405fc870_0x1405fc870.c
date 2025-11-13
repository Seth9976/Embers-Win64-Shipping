// 函数: sub_1405fc870
// 地址: 0x1405fc870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x40)

if (rcx != arg2)
    if (arg2 != 0)
        (*(*arg2 + 8))(arg2)
        rcx = *(arg1 + 0x40)
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)
    
    *(arg1 + 0x40) = arg2
    rcx = arg2

(*(*rcx + 8))(rcx)
return 0
