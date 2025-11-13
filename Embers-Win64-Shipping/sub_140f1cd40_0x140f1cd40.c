// 函数: sub_140f1cd40
// 地址: 0x140f1cd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x5c0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee74d8

if (result != -0x10)
    memset(&result[2], 0, 0x5b0)
    sub_140f20640(&result[2])
    result[2] = &data_142ee33d0
    result[0x99] = &data_142ee3618
    sub_140d93b50(&result[0x9a])
    result[0xa4].b = 0
    result[0xa5] = 0
    result[0xa6].d = 0
    result[0xa7].w = 0x19
    result[0xa8] = 0
    result[0xa9].d = 0
    result[0xaa] = 0
    result[0xab] = 0
    sub_140d91ed0(&result[0xac])

return result
