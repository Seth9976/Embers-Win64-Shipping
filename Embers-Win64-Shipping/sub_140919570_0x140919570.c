// 函数: sub_140919570
// 地址: 0x140919570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1f948
arg1[1] = 0
arg1[2] = 0
int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 8)
int32_t rsi = var_20 + 8

if (rsi s> 0)
    sub_140594770(&var_28)

int64_t rbp = var_28
UnDecorator::getReferenceType(rbp, u"INVALID", 0x10)
void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"NULL", 1)
arg1[4] = 0
arg1[5] = 0
arg1[3] = &data_142e1f860
arg1[6] = 0
arg1[7].d = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[6], rsi, 0)
    memcpy(arg1[6], rbp, rsi * 2)
else
    *(arg1 + 0x3c) = 0

arg1[8] = rbx
arg1[3] = &data_142e1f860

if (rbp != 0)
    sub_140a74f90(rbp)

return arg1
