// 函数: sub_140f1ce80
// 地址: 0x140f1ce80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x618)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee7518

if (result != -0x10)
    memset(&result[2], 0, 0x608)
    sub_140f20c30(&result[2])
    result[2] = &data_142ee6a08
    result[0xc1] = 0
    result[0xc2] = 0

return result
