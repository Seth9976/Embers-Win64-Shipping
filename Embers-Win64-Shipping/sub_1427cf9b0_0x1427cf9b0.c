// 函数: sub_1427cf9b0
// 地址: 0x1427cf9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)

if (arg2 u> (*(arg1 + 0xc) & 0x7fffffff))
    sub_1427cf4a0(arg1, rsi.d)

int64_t r8_2 = (rsi << 4) + *arg1
int64_t* i

for (i = (zx.q(arg1[1].d) << 4) + *arg1; i u< r8_2; i = &i[2])
    if (i != 0)
        *i = *arg3
        i[1].d = arg3[1].d
        *(i + 0xc) = *(arg3 + 0xc)

arg1[1].d = rsi.d
return i
