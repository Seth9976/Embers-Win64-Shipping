// 函数: sub_141d58430
// 地址: 0x141d58430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f37a1e != 0)
    return zx.q(arg3)

data_143f37a1e = 1
void* rax_1 = *(arg1 + 0x58)

if (rax_1 == 0)
    uint64_t rax_4 = sub_141d58130(arg1, arg2, arg3)
    data_143f37a1e = 0
    return rax_4

int64_t rax_3 = (*(*(rax_1 + 0x28) + 0x28))(rax_1 + 0x28)
data_143f37a1e = 0
return rax_3
