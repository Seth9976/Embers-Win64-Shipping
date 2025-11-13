// 函数: sub_140ee0c10
// 地址: 0x140ee0c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x5d8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee2160

if (result != -0x10)
    memset(&result[2], 0, 0x5c8)
    sub_140ee2d30(&result[2])
    result[2] = &data_142ee03b0
    result[0xb9] = 0
    result[0xba].d = 0

return result
