// 函数: sub_140f1d050
// 地址: 0x140f1d050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x2f8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee74f8

if (result != -0x10)
    sub_140dde0c0(&result[2])
    result[2] = &data_142ee5448
    result[0x58] = &result[2]
    result[0x59] = 0
    result[0x5a] = 0
    result[0x57] = &data_142ec8d60
    result[0x5b].b = 0
    *(result + 0x2ec) = 0

return result
