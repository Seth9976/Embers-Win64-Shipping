// 函数: sub_1406ca8a0
// 地址: 0x1406ca8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void* arg_10 = arg1
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
int64_t rbp_2 = sx.q(arg2[5].d)
int64_t r14_1 = arg2[4]
arg1[5].d = rbp_2.d

if (rbp_2.d != 0)
    sub_14061cb30(&arg1[4], rbp_2.d, 0)
    memcpy(arg1[4], r14_1, (rbp_2 << 4).d)
else
    *(arg1 + 0x2c) = 0

arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7].d = arg2[7].d
*(arg1 + 0x3c) = *(arg2 + 0x3c)
arg1[8].d = arg2[8].d
*(arg1 + 0x44) = *(arg2 + 0x44)
arg_10 = &arg1[9]
arg1[9].b = arg2[9].b
arg_10 = &arg1[0xa]
arg1[0xa] = 0
int64_t rbp_3 = sx.q(arg2[0xb].d)
int64_t r15 = arg2[0xa]
arg1[0xb].d = rbp_3.d

if (rbp_3.d != 0)
    sub_14061cb30(&arg1[0xa], rbp_3.d, 0)
    memcpy(arg1[0xa], r15, (rbp_3 << 4).d)
else
    *(arg1 + 0x5c) = 0

arg1[0xc].d = arg2[0xc].d
*(arg1 + 0x64) = *(arg2 + 0x64)
arg1[0xd].d = arg2[0xd].d
sub_1406ca210(&arg1[0xe], &arg2[0xe])
return arg1
