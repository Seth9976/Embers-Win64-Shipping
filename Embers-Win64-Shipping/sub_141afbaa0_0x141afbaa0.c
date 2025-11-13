// 函数: sub_141afbaa0
// 地址: 0x141afbaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141afaa60(arg1, sub_140d20910())
*arg1 = &data_143055468
int32_t arg_14 = 0
int32_t arg_c = 0
int64_t var_18 = 2.q
int64_t var_10 = 2.q
uint8_t rax_4 = (arg1[1].d u>> 9).b
arg1[0x19].b = 1
uint8_t rax_5

if ((rax_4 & 1) == 0)
    int64_t rdx_1
    rdx_1.b = 1
    rax_5 = sub_141a6b7c0(arg1)

if ((rax_4 & 1) != 0 || rax_5 != 0)
    *(arg1 + 0x90) = var_18.o

*(arg1 + 0x114) = 1
arg1[0x22].d = 0x3f800000
var_18.o = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_18) s>= 6
arg1[0xa].b = 1
int32_t rax_6
rax_6.b = cond:0
rax_6.b += 1
*(arg1 + 0x51) = rax_6.b
return arg1
