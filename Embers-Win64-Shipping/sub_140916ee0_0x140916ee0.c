// 函数: sub_140916ee0
// 地址: 0x140916ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
*arg2 = **arg1
arg2[1] = *rdi
arg2[2] = rdi[1]
arg2[3] = 0
int64_t rbp = sx.q(rdi[3].d)
int64_t r14 = rdi[2]
arg2[4].d = rbp.d

if (rbp.d != 0)
    sub_1407c3650(&arg2[3], rbp.d, 0)
    memcpy(arg2[3], r14, (rbp * 0xc).d)
else
    *(arg2 + 0x24) = 0

arg2[5] = 0
sub_140917150(&arg2[5], rdi[4], rdi[5].d, 0, 0)
arg2[7].d = rdi[6].d
return arg2
