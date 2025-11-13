// 函数: sub_141b777c0
// 地址: 0x141b777c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x420)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_1430849f0

if (result != -0x10)
    memset(&result[2], 0, 0x410)
    sub_140dddeb0(&result[2])
    result[2] = &data_143080b58
    sub_1420f36f0(&result[0x74])
    void* rcx_4 = &result[0x7a]
    result[0x78] = 0
    result[0x79] = 0
    *(rcx_4 + 0x10) = 0
    *(rcx_4 + 0x18) = 0
    *(rcx_4 + 0x1c) = 0x80
    void* rax = *(rcx_4 + 0x10)
    
    if (rax != 0)
        rcx_4 = rax
    
    *rcx_4 = 0
    *(rcx_4 + 8) = 0
    result[0x7e].d = 0xffffffff
    *(result + 0x3f4) = 0
    result[0x80] = 0
    result[0x81].d = 0
    result[0x82] = 0
    result[0x83] = 0

return result
