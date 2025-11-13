// 函数: sub_141b776e0
// 地址: 0x141b776e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x430)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_1430849c0

if (result != -0x10)
    sub_140f20750(&result[2])
    result[2] = &data_142ee5208
    __builtin_memset(&result[0x7b], 0, 0x11)
    result[0x7e] = 0
    result[0x7f].d = 0
    result[0x80] = 0
    result[0x81] = 0
    __builtin_memset(&result[0x83], 0, 0x18)
    *(result + 0x3e) &= 0xfb
    
    if (sub_140db3510(&result[5]) != 0)
        sub_140dc03a0(&result[5], *(result + 0x3e))
    
    result[7].b &= 0xfd

return result
