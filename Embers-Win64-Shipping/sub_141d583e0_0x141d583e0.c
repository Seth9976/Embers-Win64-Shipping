// 函数: sub_141d583e0
// 地址: 0x141d583e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f37a20 != 0)
    return arg3

data_143f37a20 = 1
void* rax_1 = *(arg1 + 0x58)

if (rax_1 == 0)
    int64_t rax_4 = sub_141d58000(arg1, arg2, arg3, arg4)
    data_143f37a20 = 0
    return rax_4

int64_t rax_3 = (*(*(rax_1 + 0x28) + 0x18))(rax_1 + 0x28)
data_143f37a20 = 0
return rax_3
