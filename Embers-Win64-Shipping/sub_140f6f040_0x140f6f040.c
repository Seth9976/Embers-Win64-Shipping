// 函数: sub_140f6f040
// 地址: 0x140f6f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x6a].d = 0
arg1[0x55] = *(arg2 + 0x1a0)
char var_24 = 0
int32_t var_28

if (*(arg2 + 0x1b4) != 0)
    var_28 = *(arg2 + 0x1b0)
    char var_24_1 = 1

char var_20 = *(arg2 + 0x1b8)
int64_t var_18 = 0
int32_t var_10 = 0
sub_1407473e0(&var_18, arg2 + 0x1c0)
sub_140f8c6f0(arg1, &var_28)
arg1[0x5a].d = *(arg2 + 0x1a8)
arg1[0x5b] = *(arg2 + 0x230)
arg1[0x5c] = *(arg2 + 0x238)
arg1[0x5d] = *(arg2 + 0x240)
sub_140693390(&arg1[0x5e], arg2 + 0x1d0)
arg1[0x63].b = *(arg2 + 0x1f8)
sub_140692f90(&arg1[0x64], arg2 + 0x200)
arg1[0x66] = *(arg2 + 0x210)
arg1[0x67].b = *(arg2 + 0x218)
sub_140692f90(&arg1[0x68], arg2 + 0x220)
arg1[0x6d].d = 0
*(arg1 + 0x36c) = *(arg2 + 0x248)
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

return sub_140f908f0(arg1) __tailcall
