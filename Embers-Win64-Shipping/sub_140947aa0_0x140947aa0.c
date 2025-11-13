// 函数: sub_140947aa0
// 地址: 0x140947aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x80)

if (result == 0)
    return 0

result[1].d = 1
void* rcx = &result[8]
*(result + 0xc) = 1
*result = &data_142e335a8
result[2] = &data_142e20cf0
__builtin_memset(&result[3], 0, 0x12)
__builtin_memset(result + 0x2c, 0, 0x14)
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
result[0xc].d = 0xffffffff
*(result + 0x64) = 0
result[0xe] = 0
result[0xf].d = 0
return result
