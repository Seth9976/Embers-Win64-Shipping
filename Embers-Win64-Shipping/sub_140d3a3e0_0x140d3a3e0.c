// 函数: sub_140d3a3e0
// 地址: 0x140d3a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x78)

if (result == 0)
    return 0

*result = &data_142d40488
result[1].d = GetCurrentThreadId()
void* rcx = &result[5]
*result = &data_142eb1260
result[2] = &data_142eb1248
result[3] = 0
result[4] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
result[9].d = 0xffffffff
*(result + 0x4c) = 0
result[0xb] = 0
result[0xc].d = 0
result[0xd] = 0
result[0xe].d = 0
return result
