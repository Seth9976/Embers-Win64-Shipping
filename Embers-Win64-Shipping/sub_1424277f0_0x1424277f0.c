// 函数: sub_1424277f0
// 地址: 0x1424277f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_142427730(arg1, &arg_8, arg2, arg3)
int64_t rax = sx.q(arg_8)
int64_t rax_2

if (rax.d != 0xffffffff)
    rax_2 = *arg1 + rax * 0x28

if (rax.d == 0xffffffff || rax_2 == 0)
    void* arg_20 = arg3
    sub_142427540(arg1, &arg_8, arg2, &arg_20, nullptr)
    rax_2 = *arg1 + sx.q(arg_8) * 0x28

return rax_2 + 0x18
