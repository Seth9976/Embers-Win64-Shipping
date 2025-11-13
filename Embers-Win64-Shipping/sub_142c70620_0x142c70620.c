// 函数: sub_142c70620
// 地址: 0x142c70620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[5]

if (r11 s< 0x46)
    return -1

int32_t r8 = arg1[4]
int32_t r11_1 = r11 + 0x76c
int32_t r10 = r8

if (r8 s< 0)
    uint64_t rdx_3 = zx.q((0xb - r8) s/ 0xc)
    r11_1 += rdx_3.d
    r10 = 0xb - (0xb - r8 - ((rdx_3 * 3).d << 2))
else if (r10 s>= 0xc)
    int32_t rdx_6 = r10 s/ 0xc
    r11_1 -= rdx_6
    r10 += rdx_6 * 0xfffffff4

int32_t rax_9
rax_9.b = r8 s<= 1
int32_t r9_1 = r11_1 - rax_9
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(r9_1)
int64_t rdx_15 = sx.q((((temp6 & 3) + temp7) s>> 2) - 0x1dd + r9_1 s/ 0x190 - r9_1 s/ 0x64)
    + sx.q(*(&data_1436b56b0 + (sx.q(r10) << 2))) + sx.q(r11_1 - 0x7b2) * 0x16d
return ((sx.q(arg1[2]) + (rdx_15 + sx.q(arg1[3]) - 1) * 0x18) * 0x3c + sx.q(arg1[1])) * 0x3c
    + sx.q(*arg1)
