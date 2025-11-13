// 函数: sub_140d16b40
// 地址: 0x140d16b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x60)

if (result == 0)
    return 0

*result = &data_142d40488
result[1].d = GetCurrentThreadId()
void* rcx = &result[4]
*result = &data_142eaefe0
result[2] = 0
result[3] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
result[8].d = 0xffffffff
*(result + 0x44) = 0
result[0xa] = 0
result[0xb].d = 0
return result
