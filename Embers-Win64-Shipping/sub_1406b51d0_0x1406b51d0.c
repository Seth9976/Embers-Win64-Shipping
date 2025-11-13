// 函数: sub_1406b51d0
// 地址: 0x1406b51d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* arg_10 = &arg1[2]
arg1[2] = 0
int32_t rbp = arg2[3].d
int64_t r14 = arg2[2]
arg1[3].d = rbp

if (rbp != 0)
    sub_1405a4c70(&arg1[2], rbp, 0)
    memcpy(arg1[2], r14, rbp * 2)
else
    *(arg1 + 0x1c) = 0

arg1[4].b = arg2[4].b
arg1[5] = arg2[5]
void* rax_4 = arg2[6]
arg1[6] = rax_4

if (rax_4 != 0)
    *(rax_4 + 0xc) += 1

arg1[7] = arg2[7]
return arg1
