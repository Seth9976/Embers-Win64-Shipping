// 函数: sub_1406cabe0
// 地址: 0x1406cabe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* arg_10 = arg1
*arg1 = 0
int32_t rsi = arg2[1].d
int64_t rbp = *arg2
arg1[1].d = rsi

if (rsi != 0)
    sub_1405a4c70(arg1, rsi, 0)
    memcpy(*arg1, rbp, rsi * 2)
else
    *(arg1 + 0xc) = 0

arg_10 = &arg1[2]
arg_10 = &arg1[2]
arg1[2] = 0
int32_t rbp_1 = arg2[3].d
int64_t r14 = arg2[2]
arg1[3].d = rbp_1

if (rbp_1 != 0)
    sub_1405a4c70(&arg1[2], rbp_1, 0)
    memcpy(arg1[2], r14, rbp_1 * 2)
else
    *(arg1 + 0x1c) = 0

arg_10 = &arg1[4]
arg_10 = &arg1[4]
arg1[4] = 0
int32_t rbp_2 = arg2[5].d
int64_t r14_1 = arg2[4]
arg1[5].d = rbp_2

if (rbp_2 != 0)
    sub_1405a4c70(&arg1[4], rbp_2, 0)
    memcpy(arg1[4], r14_1, rbp_2 * 2)
else
    *(arg1 + 0x2c) = 0

arg_10 = &arg1[6]
arg_10 = &arg1[6]
arg1[6] = 0
int32_t rbp_3 = arg2[7].d
int64_t rdi_1 = arg2[6]
arg1[7].d = rbp_3

if (rbp_3 != 0)
    sub_1405a4c70(&arg1[6], rbp_3, 0)
    memcpy(arg1[6], rdi_1, rbp_3 * 2)
else
    *(arg1 + 0x3c) = 0

return arg1
