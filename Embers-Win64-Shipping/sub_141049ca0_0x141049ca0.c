// 函数: sub_141049ca0
// 地址: 0x141049ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0
*(arg1 + 0x2fb0) = 1
*(arg1 + 0x7e0) = 1
*(arg1 + 0x48) = 1
*(arg1 + 0x36) = 1
*(arg1 + 0x650) = 0

if (*(arg1 + 0x5ec) != 0)
    *(arg1 + 0x30) = 1

char result = 0
*(arg1 + 0x628) = 0
*(arg1 + 0x630) = 0

if (*(arg1 + 0x5f0) != 0)
    *(arg1 + 0x32) = 1

if (*(arg1 + 0x7c0) != 0 || *(arg1 + 0x7c8) != 0)
    *(arg1 + 0x31) = 1

if (*(arg1 + 0x60) != 0)
    *(arg1 + 0x34) = 1

if (*(arg1 + 0x758) != 0)
    *(arg1 + 0x35) = 1

if (1f f!= *(arg1 + 0x50) || 1f f!= *(arg1 + 0x54) || 1f f!= *(arg1 + 0x58)
        || not(1f f== *(arg1 + 0x5c)))
    *(arg1 + 0x37) = 1

if (*(arg1 + 0x4c) != 0)
    *(arg1 + 0x38) = 1

if (0f f!= *(arg1 + 0x7d0) || not(1f f== *(arg1 + 0x7d4)))
    result = data_143f0f1c3
    *(arg1 + 0x39) = result

int128_t zmm2 = data_142d3f800

do
    *(arg1 + (i << 3) + 0x7e8) |= zmm2
    i += 2
while (i s< 6)

*(arg1 + 0x2670) = -1
*(arg1 + 0x2678) = 0xffffffff
*(arg1 + 0x2060) = -1
*(arg1 + 0x2068) = 0xffffffff
*(arg1 + 0x2c98) = -1
*(arg1 + 0x2ca0) = 0xffffffff
return result
