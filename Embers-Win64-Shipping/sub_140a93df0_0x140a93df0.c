// 函数: sub_140a93df0
// 地址: 0x140a93df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x98)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e666a8
result[2] = &data_142e64248
result[3] = 0
result[4] = 0
result[5] = &data_142e63698
result[6].w = *(sub_140aae970() + 0x120)
result[5] = &data_142e63778
sub_140a964b0(&result[7])
result[9] = 0
void* rcx_2 = &result[0xb]
result[0xa] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
result[0xf].d = 0xffffffff
*(result + 0x7c) = 0
result[0x11] = 0
result[0x12].d = 0
result[2] = &data_142e64298
return result
