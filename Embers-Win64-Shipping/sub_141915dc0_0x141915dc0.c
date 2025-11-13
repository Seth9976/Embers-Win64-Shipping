// 函数: sub_141915dc0
// 地址: 0x141915dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r11 = zx.d(*(arg2 + 0x2c))
int32_t r10 = 0

if (r11 == 0)
    r10 = data_1439c7494
else if (r11 == 1)
    r10 = data_1439c74a0 + data_1439c749c + data_1439c7494
else if (r11 == 2)
    r10 = data_1439c74a4 + data_1439c74a0 + data_1439c749c + data_1439c7494
else if (r11 != 3 && r11 == 4)
    r10 = data_1439c749c + data_1439c7494

int64_t result = *(arg1 + 0x140)
*(result + (sx.q(r10 + arg3) << 3)) = arg4
return result
