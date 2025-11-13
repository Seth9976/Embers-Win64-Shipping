// 函数: sub_140f96c80
// 地址: 0x140f96c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x620)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ef1780

if (result != -0x10)
    memset(&result[2], 0, 0x610)
    sub_140ee2d30(&result[2])
    result[2] = &data_142eee598
    result[0xb9] = 0
    result[0xba].d = 0
    result[0xbb] = 0
    result[0xbc].d = 0
    result[0xbd] = 0
    result[0xbe].d = 0
    result[0xbf].d = 0
    *(result + 0x5fc) = 0
    result[0xc0] = 0
    result[0xc1].d = 0
    result[0xc3].b = 0

return result
