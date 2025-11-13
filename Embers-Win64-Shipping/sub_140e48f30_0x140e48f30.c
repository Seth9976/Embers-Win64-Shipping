// 函数: sub_140e48f30
// 地址: 0x140e48f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3a0)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ed9eb8

if (result != -0x10)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ed7838
    *(result + 0x3e) &= 0xfb
    
    if (sub_140db3510(&result[5]) != 0)
        sub_140dc03a0(&result[5], *(result + 0x3e))
    
    result[7].b &= 0xfd

return result
