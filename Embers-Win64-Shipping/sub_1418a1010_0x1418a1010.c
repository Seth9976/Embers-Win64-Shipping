// 函数: sub_1418a1010
// 地址: 0x1418a1010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x120)

if (result == 0)
    return nullptr

result[1].d = arg1
void* rcx = &result[4]
*result = &data_142fe9620
result[6] = 0
result[7] = 0
__builtin_memset(&result[8], 0, 0x20)
__builtin_memset(&result[2], 0, 0x2c)
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
result[8].d = 0xffffffff
*(result + 0x44) = 0
result[0xa] = 0
result[0xb].d = 0
result[0xc] = arg2
result[0xd] = arg3
result[0xe] = arg4
InitializeCriticalSection(&result[0xf])
SetCriticalSectionSpinCount(&result[0xf], 0xfa0)
result[0x14] = 0
result[0x16] = 0
__builtin_memset(&result[0x1c], 0, 0x18)
InitializeCriticalSection(&result[0x1f])
SetCriticalSectionSpinCount(&result[0x1f], 0xfa0)
int64_t* rcx_5 = result[0xe]
(*(*rcx_5 + 0x28))(rcx_5, zx.q(result[1].d))
return result
