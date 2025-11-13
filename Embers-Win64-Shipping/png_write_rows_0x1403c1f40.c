// 函数: png_write_rows
// 地址: 0x1403c1f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0)
    return 

int64_t rsi_1 = 0

do
    png_write_row(arg1, *(arg2 + (rsi_1 << 3)))
    rsi_1 += 1
while (arg3 != rsi_1.d)
