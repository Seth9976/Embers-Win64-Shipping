// 函数: sub_140f93ce0
// 地址: 0x140f93ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rdi = sx.q(arg2[1].d)
int64_t rsi = *arg2
arg1[1].d = rdi.d

if (rdi.d != 0)
    sub_14061cb30(arg1, rdi.d, 0)
    memcpy(*arg1, rsi, (rdi << 4).d)
else
    *(arg1 + 0xc) = 0

arg1[2].b = 1
arg1[3] = 0
arg1[4].d = 0
return arg1
