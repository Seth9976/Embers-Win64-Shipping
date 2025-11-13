// 函数: sub_141df3580
// 地址: 0x141df3580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != *arg1 && (*(arg2 + 0x31) & 0x10) == 0)
    return 

uint64_t rax = sub_140d1fd20(arg2, arg1[2])
uint64_t rdx_1 = rax

if (rax == 0)
    return 

rax = zx.q(*(rax + 0xb4))

if (rax.b == 0)
    jump(*(*arg2 + 0x210))

if (rax.b != 1)
    return 

rax = *(rdx_1 + 0x70)

if (rax == 0 || ((zx.q(*(*(rax + 8) + 0x10)) u>> 0x10).b & 1) == 0)
    return 

int64_t rax_2 = *arg2
int64_t arg_8 = *(arg1[1] + 0x48)
(*(rax_2 + 0x210))(arg2, rdx_1, &arg_8)
