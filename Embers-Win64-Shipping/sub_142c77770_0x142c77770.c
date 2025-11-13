// 函数: sub_142c77770
// 地址: 0x142c77770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(*arg1 + 0x250)
__builtin_memset(arg2, 0, 0x24)
*(arg2 + 2) = htons(arg4 + 0x20)
*(arg2 + 0xe) = 0x41
*(arg2 + 4) = 0x424d53ff
*(arg2 + 8) = arg3
*(arg2 + 0xd) = 0x18
*(arg2 + 0x20) = *(arg1 + 0x6bc)
*(arg2 + 0x1c) = *(rdi + 0x18)
int32_t result = _getpid()
*(arg2 + 0x10) = (result u>> 0x10).w
*(arg2 + 0x1e) = result.w
return result
