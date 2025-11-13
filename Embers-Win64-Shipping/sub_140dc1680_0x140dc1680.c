// 函数: sub_140dc1680
// 地址: 0x140dc1680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x28) |= 1

if (*(arg1 + 0x290) == 0)
    return 

int64_t* rcx = *(arg1 + 0x288)

if (rcx == 0 || (*(*rcx + 0x28))(rcx) == 0)
    return 

int64_t* rcx_1

if (*(arg1 + 0x290) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x288)

(*(*rcx_1 + 0x48))(rcx_1, arg2, arg3)
