// 函数: sub_141c913c0
// 地址: 0x141c913c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
void* rax_6 = arg2[6]
arg1[6] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[7] = 0
int64_t rbp = sx.q(arg2[8].d)
int64_t r14 = arg2[7]
arg1[8].d = rbp.d

if (rbp.d != 0)
    sub_140638750(&arg1[7], rbp.d, 0)
    memcpy(arg1[7], r14, (rbp << 2).d)
else
    *(arg1 + 0x44) = 0

arg1[9].d = arg2[9].d
return arg1
