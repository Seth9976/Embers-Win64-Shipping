// 函数: sub_140862700
// 地址: 0x140862700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
void var_58
int64_t* rax = sub_140843200(&var_58)
*arg2 = *rbx
arg2[1] = *rax
arg2[2] = 0
int64_t rbp = sx.q(rax[2].d)
int64_t r14 = rax[1]
arg2[3].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a00(&arg2[2], rbp.d, 0)
    memcpy(arg2[2], r14, (rbp << 3).d)
else
    *(arg2 + 0x1c) = 0

arg2[4] = 0
int64_t rbp_1 = sx.q(rax[4].d)
int64_t r14_1 = rax[3]
arg2[5].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a00(&arg2[4], rbp_1.d, 0)
    memcpy(arg2[4], r14_1, (rbp_1 << 3).d)
else
    *(arg2 + 0x2c) = 0

arg2[6] = 0
int64_t rbp_2 = sx.q(rax[6].d)
int64_t r14_2 = rax[5]
arg2[7].d = rbp_2.d

if (rbp_2.d != 0)
    sub_140638750(&arg2[6], rbp_2.d, 0)
    memcpy(arg2[6], r14_2, (rbp_2 << 2).d)
else
    *(arg2 + 0x3c) = 0

arg2[8].d = rax[7].d
sub_140846de0(&var_58)
return arg2
