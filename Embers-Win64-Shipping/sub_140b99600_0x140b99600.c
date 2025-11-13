// 函数: sub_140b99600
// 地址: 0x140b99600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xb0)

if (result == 0)
    return 0

memset(&result[1], 0, 0xa8)
*result = &data_142d40488
result[1].d = GetCurrentThreadId()
void* rcx_1 = &result[4]
*result = &data_142e82c40
result[2] = 0
result[3] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &result[0xe]
result[8].d = 0xffffffff
*(result + 0x44) = 0
result[0xa] = 0
result[0xb].d = 0
result[0xc] = 0
result[0xd] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
result[0x12].d = 0xffffffff
*(result + 0x94) = 0
result[0x14] = 0
result[0x15].d = 0
return result
