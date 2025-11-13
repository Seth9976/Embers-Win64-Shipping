// 函数: sub_140e92160
// 地址: 0x140e92160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x4c0)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142edf140

if (result != -0x10)
    memset(&result[2], 0, 0x4b0)
    sub_140dddeb0(&result[2])
    void* rcx_3 = &result[0x85]
    result[0x74] = 0
    result[0x75] = 0
    result[2] = &data_142edb810
    __builtin_memset(&result[0x76], 0, 0x49)
    result[0x80] = 0
    result[0x81] = 0
    result[0x82].d = 0xffffffff
    result[0x83] = 0
    result[0x84] = 0
    *(rcx_3 + 0x10) = 0
    *(rcx_3 + 0x18) = 0
    *(rcx_3 + 0x1c) = 0x80
    void* rax = *(rcx_3 + 0x10)
    
    if (rax != 0)
        rcx_3 = rax
    
    *rcx_3 = 0
    *(rcx_3 + 8) = 0
    result[0x89].d = 0xffffffff
    *(result + 0x44c) = 0
    result[0x8b] = 0
    result[0x8c].d = 0
    __builtin_memset(&result[0x8d], 0, 0x20)
    sub_140a96170(&result[0x91])
    result[0x95].d = 0
    *(result + 0x4ac) = 0
    result[0x96] = 0
    result[0x97].d = 0

return result
