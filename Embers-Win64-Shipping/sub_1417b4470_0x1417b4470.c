// 函数: sub_1417b4470
// 地址: 0x1417b4470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int32_t rcx = *(arg1 + 0x10)
int32_t r9_2 = rcx - r11.d - 1

if (r9_2 s>= 1)
    r9_2 = 1

if (r9_2 != 0)
    int64_t r10_1 = *(arg1 + 8)
    memcpy(r10_1 + r11 * 0x28, r10_1 + sx.q(rcx - r9_2) * 0x28, r9_2 * 0x28)
    rcx = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx - 1
return sub_1409da680(arg1 + 8) __tailcall
