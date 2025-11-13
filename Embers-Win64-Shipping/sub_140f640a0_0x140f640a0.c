// 函数: sub_140f640a0
// 地址: 0x140f640a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x428)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ee9c90

if (result != -0x10)
    sub_140dddeb0(&result[2])
    result[2] = &data_142ee9468
    result[0x74].d = 0
    *(result + 0x3a4) = 1
    result[0x75] = 0
    result[0x76].d = 0
    result[0x77].d = 0
    *(result + 0x3bc) = 1
    result[0x78] = 0
    result[0x79].d = 0
    result[0x7a] = 0
    result[0x7b].d = 0
    result[0x7c] = data_143e244b0
    void* rax_1 = data_143e244b8
    result[0x7d] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    result[0x7e] = 0
    result[0x7f] = 0
    __builtin_memset(&result[0x81], 0, 0x20)

return result
