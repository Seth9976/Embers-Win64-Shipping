// 函数: sub_142285060
// 地址: 0x142285060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
*arg1 = *arg2
arg1[1] = arg2[1]
int32_t i = 0
arg1[2] = arg2[2]
arg1[0xb] = *(arg3 + 0x1c)
arg1[0x6d] = *(arg3 + 0x1a4)
arg1[0x7b] = *(arg3 + 0x1dc)
void* rax_6 = &arg1[0x19]
void* rcx_1 = arg3 - rbx

do
    i += 6
    *rax_6 = *(rcx_1 - 0x10 + rax_6)
    *(rax_6 + 0x38) = *(rcx_1 + 0x28 + rax_6)
    *(rax_6 + 0x70) = *(rcx_1 + 0x60 + rax_6)
    *(rax_6 + 0xa8) = *(rcx_1 + 0x98 + rax_6)
    *(rax_6 + 0xe0) = *(rcx_1 + 0xd0 + rax_6)
    *(rax_6 + 0x118) = *(rcx_1 + 0x108 + rax_6)
    rax_6 += 0x150
while (i u< 6)

int32_t rax_7 = rbx[1].d
int64_t var_28 = *rbx
int32_t var_20 = rax_7
sub_142296b00(&rbx[2], &var_28)
int64_t* rcx_9 = data_143f0f180
void arg_8
(*(*rcx_9 + 0x5a0))(rcx_9, &arg_8, &data_143f02b98, rbx[6], 0)
sub_1405d1600(&rbx[7], &arg_8)
sub_1405d1550(&arg_8)
int32_t i_1 = 0
int64_t rsi_1 = 0

do
    int32_t var_20_1 = rbx[1].d
    var_28 = *rbx
    sub_142296b00(sx.q(i_1) * 0x38 + 0x48 + rbx, &var_28)
    int64_t* rcx_15 = data_143f0f180
    (*(*rcx_15 + 0x5a0))(rcx_15, &arg_8, &data_143f02b98, *(rsi_1 + rbx + 0x68), 0)
    sub_1405d1600(&rbx[0xe] + rsi_1, &arg_8)
    sub_1405d1550(&arg_8)
    i_1 += 1
    rsi_1 += 0x38
while (i_1 u< 6)

if (*(arg3 + 0x1a8) != 0)
    int32_t rax_12 = rbx[1].d
    var_28 = *rbx
    int32_t var_20_2 = rax_12
    sub_142296b00(&rbx[0x33], &var_28)
    int64_t* rcx_20 = data_143f0f180
    (*(*rcx_20 + 0x5a0))(rcx_20, &arg_8, &data_143f02b98, rbx[0x37], 0)
    sub_1405d1600(&rbx[0x38], &arg_8)
    sub_1405d1550(&arg_8)

int32_t rax_14 = rbx[1].d
var_28 = *rbx
int32_t var_20_3 = rax_14
sub_142296b00(&rbx[0x3a], &var_28)
int64_t* rcx_24 = data_143f0f180
(*(*rcx_24 + 0x5a0))(rcx_24, &arg_8, &data_143f02b98, rbx[0x3e], 0)
sub_1405d1600(&rbx[0x3f], &arg_8)
return sub_1405d1550(&arg_8)
