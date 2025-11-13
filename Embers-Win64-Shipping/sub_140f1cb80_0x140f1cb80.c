// 函数: sub_140f1cb80
// 地址: 0x140f1cb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x588)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf220

if (result != -0x10)
    memset(&result[2], 0, 0x578)
    sub_140f1dc90(&result[2])
    result[2] = &data_142ee44d8
    result[3] = &data_142ee7118

return result
