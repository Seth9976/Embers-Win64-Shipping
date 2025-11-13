// 函数: sub_14083f1d0
// 地址: 0x14083f1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ddad60(arg1, arg2, arg3, arg4)
int32_t rax = arg1[0x4d].d

if ((rax.b & 1) != 0)
    arg1[0x4d].d = rax & 0xfffffffe
    sub_14082b700(arg1)

return sub_14083f510(arg1) __tailcall
