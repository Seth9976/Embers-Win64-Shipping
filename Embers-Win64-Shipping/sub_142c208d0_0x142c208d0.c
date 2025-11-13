// 函数: sub_142c208d0
// 地址: 0x142c208d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg1
__builtin_memset(arg1 + 0x20, 0, 0x18)
void* rdx = *(arg1 + 8)
*(arg1 + 0x10) = *(rdx + 0xc0)
int32_t rax
rax.b = *(rdx + 0xb8) == 1
*(arg1 + 0x14) = rax.b
rax.b = *(rdx + 0xce) != 0
*(arg1 + 0x15) = rax.b
*(arg1 + 0x18) = *(rdx + 0xb4)
*(arg1 + 0x48) = arg1
__builtin_memset(arg1 + 0x60, 0, 0x18)
void* rdx_1 = *(arg1 + 0x48)
*(arg1 + 0x50) = *(rdx_1 + 0xc0)
int32_t result

if (*(rdx_1 + 0xb8) != 1 && *(rdx_1 + 0xcd) == 0)
    result.b = 0
    *(arg1 + 0x55) = 1
    *(arg1 + 0x54) = 0
    *(arg1 + 0x58) = 0xffffffff
    return result

result.b = 1
*(arg1 + 0x58) = 0xffffffff
*(arg1 + 0x54) = 1
*(arg1 + 0x55) = 1
return result
