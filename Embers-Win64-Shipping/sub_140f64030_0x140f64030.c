// 函数: sub_140f64030
// 地址: 0x140f64030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x728)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee9c80

if (result != -0x10)
    memset(&result[2], 0, 0x718)
    sub_140f66890(&result[2])

return result
