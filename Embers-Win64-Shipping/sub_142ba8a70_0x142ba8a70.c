// 函数: sub_142ba8a70
// 地址: 0x142ba8a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10_1 = *(arg1 + 8)

if (arg2 == 0)
    return zx.q((arg2 + 0x24).d)

if (r10_1 == 0)
    return zx.q((r10_1 + 0x23).d)

if (arg3.d u>= *(r10_1 + 0x10) && *(*(r10_1 + 0xd0) + 0x50) == 0)
    return 6

if ((arg4.b & 2) != 0)
    int32_t rcx_1 = arg4 & 0xfffffffd
    
    if ((*(r10_1 + 8) & 0x2000) == 0)
        rcx_1 = arg4
    
    arg4 = rcx_1
    
    if (test_bit(rcx_1, 0xf))
        arg4 |= 2

if ((arg4 & 0x401) != 0)
    arg4 |= 9
    
    if ((*(r10_1 + 8) & 0x2000) == 0)
        arg4 |= 2

void* const rax_7 = 0x48

if ((arg4.b & 2) != 0)
    rax_7 = 0x18

arg2[8] = rax_7 + arg2
return sub_142bad7c0(arg2, arg1, arg3, arg4, arg5, arg6, arg7) __tailcall
