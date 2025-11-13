// 函数: sub_140bd6390
// 地址: 0x140bd6390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t r9

if (arg4 == 0)
    rax = arg7
    r9 = arg6
else
    rax = sx.q(*(arg4 + 0xc))
    r9 = sx.q(*(arg4 + 8))

sub_140bd6490(arg1, arg2, arg3, r9, rax)
*(arg1 + 0xb4) = 0
*arg1 = &data_142e877d8
arg1[0x17] = arg4
int32_t rax_1
rax_1.b = arg4 != 0
arg1[0x16].d = rax_1 | arg5
sub_140be3930(arg1)
return arg1
