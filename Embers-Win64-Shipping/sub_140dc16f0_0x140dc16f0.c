// 函数: sub_140dc16f0
// 地址: 0x140dc16f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x28) &= 0xfe

if (*(arg1 + 0x2a0) == 0)
    return 

int64_t* rcx = *(arg1 + 0x298)

if (rcx == 0 || (*(*rcx + 0x28))(rcx) == 0)
    return 

int64_t* rcx_1

if (*(arg1 + 0x2a0) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x298)

(*(*rcx_1 + 0x48))(rcx_1, arg2)
