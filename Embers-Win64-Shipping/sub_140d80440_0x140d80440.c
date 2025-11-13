// 函数: sub_140d80440
// 地址: 0x140d80440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)

if (rcx == 0 || arg2 != rcx)
    return 0x8000ffff

(*(*rcx + 0x10))(rcx)
*(arg1 + 0x50) = 0
int64_t* rcx_1 = *(arg1 + 0x10)
(*(*rcx_1 + 0x70))(rcx_1)
return 0
