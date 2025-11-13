// 函数: sub_140d80c00
// 地址: 0x140d80c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) != 0)
    *arg3 = 0
    return 0

if (arg2 != 0)
    (*(*arg2 + 8))(arg2)
    int64_t* rcx_1 = *(arg1 + 0x50)
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x10))(rcx_1)
    
    *(arg1 + 0x50) = arg2

int64_t* rcx_2 = *(arg1 + 0x10)

if ((*(*rcx_2 + 8))(rcx_2) == 0)
    int64_t* rcx_3 = *(arg1 + 0x10)
    (*(*rcx_3 + 0x60))(rcx_3)

*arg3 = 1
return 0
