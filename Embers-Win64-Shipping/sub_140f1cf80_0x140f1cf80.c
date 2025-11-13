// 函数: sub_140f1cf80
// 地址: 0x140f1cf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x570)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee7488

if (result != -0x10)
    sub_140f20640(&result[2])
    result[2] = &data_142ee2f38
    result[0x99].w = 0x19
    result[0x9a] = 0
    result[0x9b].d = 0
    __builtin_memset(&result[0x9c], 0, 0x21)
    __builtin_memset(&result[0xa1], 0, 0x1c)
    result[0xa5].d = 0

return result
