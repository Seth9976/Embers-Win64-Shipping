// 函数: sub_141d58280
// 地址: 0x141d58280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f37a21 != 0)
    sub_140596d10(arg2, arg4)
    return arg2

data_143f37a21 = 1
void* rcx_1 = *(arg1 + 0x58)

if (rcx_1 == 0)
    sub_141d57dc0(arg1, arg2, arg3, arg4, arg5)
    data_143f37a21 = 0
    return arg2

(*(*(rcx_1 + 0x28) + 0x10))(rcx_1 + 0x28)
data_143f37a21 = 0
return arg2
