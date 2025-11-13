// 函数: sub_1414781c0
// 地址: 0x1414781c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = &data_1439b70c8
void*** rax_1 = **arg1

if (rax_1 == 0)
    rax_1 = sub_1410fccd0(arg1[1], &data_1439b70c8, u"External", 0)

*arg2 = rax_1
arg2[1] = data_14395fa10
arg2[2] = *(data_1439b7100 + 0x10)
arg2[3] = data_14395f4d0
int64_t* rax_6 = arg1[2] + 8

if (*rax_6 != 0)
    rsi = rax_6

arg2[4] = sub_1410fccd0(arg1[1], rsi, u"External", 0)
arg2[5] = data_14395fa10
*(arg2 + 0x30) = *((sx.q(*arg1[3]) << 5) + *(arg1[2] + 0x10) + 0x10)
int128_t* rax_11 = arg1[4]
*(arg2 + 0x40) = *rax_11
*(arg2 + 0x50) = rax_11[1]
*(arg2 + 0x60) = rax_11[2]
*(arg2 + 0x70) = rax_11[3]
*(arg2 + 0x80) = rax_11[4]
sub_14142a1f0(&arg2[0x12])
sub_1405d16e0(&arg2[0x1a], *(arg1[5] + 0x10))
sub_1405d16e0(&arg2[0x1b], *(arg1[5] + 0x5050))
int64_t* rcx_7 = arg1[5]
int128_t var_68 = data_142d3f660
int64_t var_50
__builtin_memset(&var_50, 0, 0x40)
sub_14123d450(rcx_7, &var_68)
int64_t* rcx_8 = data_143f0f180
void* arg_8
(*(*rcx_8 + 0xf8))(rcx_8, &arg_8, &var_68, &data_143e81d10, 0, 1, var_68)
void* rax_13 = arg_8
void* arg_10 = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

sub_1405d1550(&arg_8)
sub_1405d1600(&arg2[0x1c], &arg_10)
return sub_1405d1550(&arg_10)
