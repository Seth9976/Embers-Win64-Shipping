// 函数: sub_141b77350
// 地址: 0x141b77350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x498)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143084970

if (result != -0x10)
    memset(&result[2], 0, 0x488)
    sub_140dddeb0(&result[2])
    result[2] = &data_143078408
    result[0x75] = data_143e202b8
    result[0x76] = data_143e202c0
    void* rax_2 = data_143e202c8
    result[0x77] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    result[0x78].d &= 0xfffffff0
    result[0x79].b = 0
    result[0x7a] = 0
    result[0x7b].d = 0
    __builtin_memset(&result[0x7c], 0, 0x11)
    result[0x7f] = 0
    result[0x80].d = 0
    sub_140a96170(&result[0x81])
    sub_140a96170(&result[0x84])
    __builtin_memset(&result[0x88], 0, 0x1c)
    result[0x8c] = 0
    result[0x8d].d = 0
    __builtin_memset(&result[0x8e], 0, 0x20)

return result
