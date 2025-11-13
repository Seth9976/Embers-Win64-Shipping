// 函数: sub_140d7d460
// 地址: 0x140d7d460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0x80070057

int64_t* rcx = *(arg1 + 0x18)
char rax_2 = (*(*rcx + 0x10))(rcx)
arg2[1] = 8
int32_t rcx_1
rcx_1.b = rax_2 != 0
*arg2 = rcx_1
return 0
