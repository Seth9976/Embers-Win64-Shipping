// 函数: sub_1417b4600
// 地址: 0x1417b4600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t r11_1 = arg1[1].d
int64_t rsi_1 = sx.q(arg2)
int32_t r10_3 = r11_1 - rsi_1.d - arg3

if (arg3 s<= r10_3)
    r10_3 = arg3

if (r10_3 != 0)
    int64_t r9 = *arg1
    memcpy(r9 + rsi_1 * 0xc, r9 + sx.q(r11_1 - r10_3) * 0xc, r10_3 * 0xc)
    r11_1 = arg1[1].d

arg1[1].d = r11_1 - arg3

if (arg4 != 0)
    sub_140775970(arg1)
