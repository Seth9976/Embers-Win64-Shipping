// 函数: sub_1427cfaa0
// 地址: 0x1427cfaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg2 u> (*(arg1 + 0xc) & 0x7fffffff))
    sub_1427cf640(arg1, rdi.d)

int64_t r9 = *arg1
int64_t* i

for (i = r9 + (zx.q(arg1[1].d) << 3); i u< r9 + (rdi << 3); i = &i[1])
    if (i != 0)
        *i = *arg3

arg1[1].d = rdi.d
return i
