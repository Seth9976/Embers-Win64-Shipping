// 函数: sub_141ff4960
// 地址: 0x141ff4960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9420
sub_14068def0(&arg1[1], arg2 + 8)
sub_14068def0(&arg1[0x50], arg2 + 0x280)
sub_14068def0(&arg1[0x9f], arg2 + 0x4f8)
sub_14068def0(&arg1[0xee], arg2 + 0x770)
arg1[0x13d] = &data_142ec9228
arg1[0x13e] = *(arg2 + 0x9f0)
arg1[0x13f] = *(arg2 + 0x9f8)
*(arg1 + 0xa00) = *(arg2 + 0xa00)
*(arg1 + 0xa10) = *(arg2 + 0xa10)
arg1[0x144] = *(arg2 + 0xa20)
void* rax_3 = *(arg2 + 0xa28)
arg1[0x145] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[0x146] = *(arg2 + 0xa30)
arg1[0x147].d = *(arg2 + 0xa38)
*(arg1 + 0xa3c) = *(arg2 + 0xa3c)
*(arg1 + 0xa40) = *(arg2 + 0xa40)
arg1[0x14a].b = *(arg2 + 0xa50)
arg1[0x14b] = *(arg2 + 0xa58)
void* rax_9 = *(arg2 + 0xa60)
arg1[0x14c] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

arg1[0x14d] = *(arg2 + 0xa68)
*(arg1 + 0xa70) = *(arg2 + 0xa70)
*(arg1 + 0xa80) = *(arg2 + 0xa80)
arg1[0x152].b = *(arg2 + 0xa90)
arg1[0x153] = *(arg2 + 0xa98)
void* rax_12 = *(arg2 + 0xaa0)
arg1[0x154] = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

*(arg1 + 0xaa8) = *(arg2 + 0xaa8)
sub_14068e310(&arg1[0x157], arg2 + 0xab8)
sub_14068e310(&arg1[0x168], arg2 + 0xb40)
sub_14068e310(&arg1[0x179], arg2 + 0xbc8)
sub_14068e310(&arg1[0x18a], arg2 + 0xc50)
sub_14068e310(&arg1[0x19b], arg2 + 0xcd8)
sub_14068e310(&arg1[0x1ac], arg2 + 0xd60)
*(arg1 + 0xde8) = *(arg2 + 0xde8)
arg1[0x1bf].b = *(arg2 + 0xdf8)
arg1[0x1c0] = *(arg2 + 0xe00)
void* rax_15 = *(arg2 + 0xe08)
arg1[0x1c1] = rax_15

if (rax_15 != 0)
    *(rax_15 + 8) += 1

sub_14068e310(&arg1[0x1c2], arg2 + 0xe10)
*(arg1 + 0xe98) = *(arg2 + 0xe98)
arg1[0x1d5].b = *(arg2 + 0xea8)
arg1[0x1d6] = *(arg2 + 0xeb0)
void* rax_18 = *(arg2 + 0xeb8)
arg1[0x1d7] = rax_18

if (rax_18 != 0)
    *(rax_18 + 8) += 1

sub_14068e310(&arg1[0x1d8], arg2 + 0xec0)
sub_14068e310(&arg1[0x1e9], arg2 + 0xf48)
sub_14068e310(&arg1[0x1fa], arg2 + 0xfd0)
return arg1
