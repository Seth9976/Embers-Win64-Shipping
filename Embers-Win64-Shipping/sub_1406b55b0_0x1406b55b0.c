// 函数: sub_1406b55b0
// 地址: 0x1406b55b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d
void* arg_10 = &arg1[3]
arg1[3] = 0
int32_t rbp = arg2[4].d
int64_t r14 = arg2[3]
arg1[4].d = rbp

if (rbp != 0)
    sub_1405a4c70(&arg1[3], rbp, 0)
    memcpy(arg1[3], r14, rbp * 2)
else
    *(arg1 + 0x24) = 0

arg_10 = &arg1[5]
arg1[5] = 0
int32_t rbp_1 = arg2[6].d
int64_t r14_1 = arg2[5]
arg1[6].d = rbp_1

if (rbp_1 != 0)
    sub_1405a4c70(&arg1[5], rbp_1, 0)
    memcpy(arg1[5], r14_1, rbp_1 * 2)
else
    *(arg1 + 0x34) = 0

arg_10 = &arg1[7]
arg1[7] = 0
int32_t rbp_2 = arg2[8].d
int64_t r14_2 = arg2[7]
arg1[8].d = rbp_2

if (rbp_2 != 0)
    sub_1405a4c70(&arg1[7], rbp_2, 0)
    memcpy(arg1[7], r14_2, rbp_2 * 2)
else
    *(arg1 + 0x44) = 0

arg1[9].d = arg2[9].d
return arg1
