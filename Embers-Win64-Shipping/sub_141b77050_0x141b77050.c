// 函数: sub_141b77050
// 地址: 0x141b77050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x828)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143084f48

if (result != -0x10)
    sub_141b790d0(&result[2], 2)
    int64_t* rcx_2 = &result[0xf6]
    result[2] = &data_14307e9d8
    result[0x74] = &data_14307ec98
    result[0x9f] = &data_14307ecb8
    result[0xa1] = &data_14307ecd8
    result[0xef] = 0
    result[0xf0].d = 0
    result[0xf1] = 0
    result[0xf2].d = 0
    __builtin_memset(&result[0xf3], 0, 0x18)
    rcx_2[2] = 0
    rcx_2[3].d = 0
    *(rcx_2 + 0x1c) = 0x80
    int64_t* rax = rcx_2[2]
    
    if (rax != 0)
        rcx_2 = rax
    
    *rcx_2 = 0
    rcx_2[1] = 0
    result[0xfa].d = 0xffffffff
    *(result + 0x7d4) = 0
    result[0xfc] = 0
    result[0xfd].d = 0
    __builtin_memset(&result[0xfe], 0, 0x2c)
    result[0x104].w = 1
    *(result + 0x822) = 0
    result[0xde] = &result[0x100]

return result
