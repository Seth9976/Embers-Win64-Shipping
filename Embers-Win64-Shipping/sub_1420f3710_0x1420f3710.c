// 函数: sub_1420f3710
// 地址: 0x1420f3710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
*arg1 = rax

if (rax != 0)
    *(rax + 0x1c) += 1

void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0x18) += 1

arg1[2] = 0
int64_t rbp = sx.q(arg2[3].d)
int64_t r14 = arg2[2]
arg1[3].d = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&arg1[2], rbp.d, 0)
    memcpy(arg1[2], r14, (rbp << 4).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int64_t rbp_1 = sx.q(arg2[5].d)
int64_t r14_1 = arg2[4]
arg1[5].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405a4be0(&arg1[4], rbp_1.d, 0)
    memcpy(arg1[4], r14_1, (rbp_1 << 4).d)
else
    *(arg1 + 0x2c) = 0

arg1[6] = arg2[6]
return arg1
