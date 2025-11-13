// 函数: sub_1425db340
// 地址: 0x1425db340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141d43680(arg2)
void* i = *(arg1 + 0x20)
int64_t result = sx.q(*(arg1 + 0x28))
void* rdi_2 = result * 0x1f0 + i

if (i != rdi_2)
    if (arg3 != 0)
        do
            result = sub_141d430d0(arg2, i + 0x68)
            i += 0x1f0
        while (i != rdi_2)
    else
        for (; i != rdi_2; i += 0x1f0)
            result = sub_141d430d0(arg2, sx.q(*(i + 0x60)) * 0x158 + *(*i + 0xc8) + 0xf8)

return result
