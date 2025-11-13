// 函数: sub_1408ff600
// 地址: 0x1408ff600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xc8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e1a2f0
result[2] = &data_142e1ac98
result[3] = &data_142e1ad60
result[4] = &data_142e1ad78
result[5] = &data_142e1add8
result[6] = &data_142e1ae10
result[7] = &data_142e1ae78
__builtin_memset(&result[8], 0, 0x29)
result[0xe] = arg1
result[0xf] = -0x8000000000000000
__builtin_memset(&result[0x10], 0, 0x11)
result[0x13] = *arg2
void* rax_1 = arg2[1]
result[0x14] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

result[0x15].d = 0xffffffff
*(result + 0xac) = 0
result[0x16] = *arg3
void* rax_3 = arg3[1]
result[0x17] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

result[0x18].b = 1
return result
