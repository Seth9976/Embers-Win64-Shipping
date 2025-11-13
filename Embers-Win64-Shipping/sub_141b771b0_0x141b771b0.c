// 函数: sub_141b771b0
// 地址: 0x141b771b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x478)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_1430849d0

if (result != -0x10)
    sub_140f67000(&result[2])
    result[2] = &data_14307fde8
    int128_t var_38
    __builtin_memcpy(&var_38, 
        "\x00\x00\x20\xc2\x00\x00\x87\xc2\x00\x00\x00\x00\x00\x00\x80\x3f\xdb\x0f\x49\x40", 0x14)
    __builtin_memset(&result[0x82], 0, 0x20)
    int128_t var_50_1 = zx.o(0)
    int32_t var_54
    int32_t var_54_1 = (var_54 & 0xffffffad) | 0x2d
    int64_t var_18_1 = _mm_unpackhi_pd(zx.o(0), 0)
    sub_142287da0(&result[0x86], &var_38)

return result
