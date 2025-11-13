// 函数: sub_1407b12c0
// 地址: 0x1407b12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeSRWLock(&arg2[1])
arg2[2] = 0
arg2[3] = 0
__builtin_memset(&arg2[5], 0, 0x3c)
*arg2 = arg3

if (arg3 != 0)
    void* rcx_1 = *(arg3 + 0x28)
    void* rax = *(rcx_1 + 0xa8)
    
    if (rax == 0)
        rax = sub_141ee69e0(rcx_1)
    
    arg2[5] = *(arg3 + 0xe0)
    arg2[0xd] = rax
    sub_14078b720(&arg2[6], 0)
    sub_14078b720(&arg2[8], 0)
    arg2[0xc].d = 0

int64_t result
result.b = 1
return result
