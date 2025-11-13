// 函数: sub_140e92060
// 地址: 0x140e92060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x5d0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf200

if (result != -0x10)
    memset(&result[2], 0, 0x5c0)
    sub_140ee2d30(&result[2])
    result[2] = &data_142ede300

return result
