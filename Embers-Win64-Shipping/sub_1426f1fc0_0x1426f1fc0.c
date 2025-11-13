// 函数: sub_1426f1fc0
// 地址: 0x1426f1fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426f21f0(arg1, arg2)
*(arg1 + 0x80) = 0
int64_t rbp = sx.q(arg2[0x22])
int64_t rbx_1 = *(arg2 + 0x80)
arg1[0x22] = rbp.d

if (rbp.d != 0)
    sub_140638750(&arg1[0x20], rbp.d, 0)
    memcpy(*(arg1 + 0x80), rbx_1, (rbp << 2).d)
else
    arg1[0x23] = 0

return arg1
