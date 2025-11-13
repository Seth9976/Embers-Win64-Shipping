// 函数: sub_142284e00
// 地址: 0x142284e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
int32_t i = 0
arg1[2] = arg2[2]
arg1[0xb] = *(arg3 + 0x2c)
arg1[0x6d] = *(arg3 + 0x1b4)
int32_t* r8 = arg3 - arg1
arg1[0x7b] = *(arg3 + 0x1ec)
void* rax_6 = &arg1[0x19]

do
    i += 6
    *rax_6 = *(r8 + rax_6)
    *(rax_6 + 0x38) = *(r8 + rax_6 + 0x38)
    *(rax_6 + 0x70) = *(r8 + rax_6 + 0x70)
    *(rax_6 + 0xa8) = *(r8 + rax_6 + 0xa8)
    *(rax_6 + 0xe0) = *(r8 + rax_6 + 0xe0)
    *(rax_6 + 0x118) = *(r8 + rax_6 + 0x118)
    rax_6 += 0x150
while (i u< 6)

int32_t rax_7 = arg1[2]
int64_t var_28 = *arg1
int32_t var_20 = rax_7
sub_142296b00(&arg1[4], &var_28)
int64_t* rcx_7 = data_143f0f180
void arg_8
(*(*rcx_7 + 0x5a0))(rcx_7, &arg_8, &data_143f02b98, *(arg1 + 0x30), 0)
sub_1405d1600(&arg1[0xe], &arg_8)
sub_1405d1550(&arg_8)
int32_t i_1 = 0
int64_t rsi = 0

do
    int32_t var_20_1 = arg1[2]
    var_28 = *arg1
    sub_142296b00(sx.q(i_1) * 0x38 + 0x48 + arg1, &var_28)
    int64_t* rcx_13 = data_143f0f180
    (*(*rcx_13 + 0x5a0))(rcx_13, &arg_8, &data_143f02b98, *(rsi + arg1 + 0x68), 0)
    sub_1405d1600(&arg1[0x1c] + rsi, &arg_8)
    sub_1405d1550(&arg_8)
    i_1 += 1
    rsi += 0x38
while (i_1 u< 6)

if (*(arg3 + 0x1b8) != 0)
    int32_t rax_12 = arg1[2]
    var_28 = *arg1
    int32_t var_20_2 = rax_12
    sub_142296b00(&arg1[0x66], &var_28)
    int64_t* rcx_18 = data_143f0f180
    (*(*rcx_18 + 0x5a0))(rcx_18, &arg_8, &data_143f02b98, *(arg1 + 0x1b8), 0)
    sub_1405d1600(&arg1[0x70], &arg_8)
    sub_1405d1550(&arg_8)

int32_t rax_14 = arg1[2]
var_28 = *arg1
int32_t var_20_3 = rax_14
sub_142296b00(&arg1[0x74], &var_28)
int64_t* rcx_22 = data_143f0f180
(*(*rcx_22 + 0x5a0))(rcx_22, &arg_8, &data_143f02b98, *(arg1 + 0x1f0), 0)
sub_1405d1600(&arg1[0x7e], &arg_8)
return sub_1405d1550(&arg_8)
