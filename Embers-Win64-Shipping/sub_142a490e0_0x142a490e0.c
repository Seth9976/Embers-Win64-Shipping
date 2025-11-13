// 函数: sub_142a490e0
// 地址: 0x142a490e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* buffer2

if ((*(arg2 + 8) & 2) == 0)
    buffer2 = *(arg2 + 0x18)
else
    buffer2 = arg2 + 0xa

void* buffer1

if ((*(arg1 + 8) & 2) == 0)
    buffer1 = *(arg1 + 0x18)
else
    buffer1 = arg1 + 0xa

int32_t result
result.b = memcmp(buffer1, buffer2, sx.q(arg3 * 2)) == 0
return result
