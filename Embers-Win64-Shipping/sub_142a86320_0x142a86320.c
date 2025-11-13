// 函数: sub_142a86320
// 地址: 0x142a86320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9_1 = arg2

if (arg1 == 0)
    return zx.q(sbb.d(arg4, arg4, r9_1 != 0))

if (r9_1 == 0)
    return 1

if (arg3 == 0)
    return 0

char* r10_1 = arg1 - r9_1

while (true)
    char rdx = *(r10_1 + r9_1)
    arg3 -= 1
    char rcx = *r9_1
    
    if (rdx == 0)
        return zx.q(sbb.d(arg4, arg4, rcx != 0))
    
    if (rcx == 0)
        return 1
    
    if (rdx - 0x41 u<= 0x19)
        rdx += 0x20
    
    if (rcx - 0x41 u<= 0x19)
        rcx += 0x20
    
    arg4 = zx.d(rcx)
    uint32_t rcx_1 = zx.d(rdx)
    
    if (rcx_1 != arg4)
        return zx.q(rcx_1 - arg4)
    
    r9_1 = &r9_1[1]
    
    if (arg3 == 0)
        return 0
