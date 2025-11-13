// 函数: sub_141af9810
// 地址: 0x141af9810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31a40(arg1, arg2)
arg1[0x1c].b = 0
void* rcx = &arg1[0x27]
int32_t arg_c = 0
*arg1 = &data_143058b68
arg1[0x1d] = &data_142d9ab38
__builtin_memset(&arg1[0x1e], 0, 0x12)
__builtin_memset(&arg1[0x21], 0, 0x30)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)
int32_t arg_1c = 0

if (rax != 0)
    rcx = rax

int64_t var_18 = 2.q
int64_t var_10 = 2.q
*rcx = 0
*(rcx + 8) = 0
arg1[0x2b].d = 0xffffffff
*(arg1 + 0x15c) = 0
arg1[0x2d] = 0
arg1[0x2e].d = 0
uint8_t rax_4 = (arg1[1].d u>> 9).b
arg1[0x19].b = 1
uint8_t rax_5

if ((rax_4 & 1) == 0)
    int64_t rdx
    rdx.b = 1
    rax_5 = sub_141a6b7c0(arg1)

if ((rax_4 & 1) != 0 || rax_5 != 0)
    *(arg1 + 0x90) = var_18.o

var_18.o = data_1439a9488
int32_t rax_6

if (sub_140cdd5d0(arg1, &var_18) s>= 4)
    var_18.o = data_1439a9488
    rax_6.b = sub_140cdd5d0(arg1, &var_18) s>= 6
    rax_6.b += 1
else
    rax_6.b = 0

arg1[0xa].b = 1
*(arg1 + 0x51) = rax_6.b
sub_141b2cbd0(arg1)
return arg1
