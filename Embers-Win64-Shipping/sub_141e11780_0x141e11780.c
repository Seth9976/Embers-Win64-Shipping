// 函数: sub_141e11780
// 地址: 0x141e11780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x158)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143246210
memset(&result[2], 0, 0x148)
void* rcx_1 = &result[0x24]
result[0x22] = 0
result[0x23].d = 0
*(result + 0x11c) = 4
*(rcx_1 + 8) = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x14) = 0x20
void* rax = *(rcx_1 + 8)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
result[0x27].d = 0xffffffff
*(result + 0x13c) = 0
result[0x29] = 0
result[0x2a].d = 0
return result
