// 函数: sub_140a940f0
// 地址: 0x140a940f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xb8)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e66818
memset(&result[3], 0, 0xa0)
void* rcx_1 = &result[5]
result[2] = &data_142e64fe0
result[3] = 0
result[4] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &result[0xf]
result[9].d = 0xffffffff
*(result + 0x4c) = 0
result[0xb] = 0
result[0xc].d = 0
result[0xd] = 0
result[0xe] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
result[0x13].d = 0xffffffff
*(result + 0x9c) = 0
result[0x15] = 0
result[0x16].d = 0
return result
