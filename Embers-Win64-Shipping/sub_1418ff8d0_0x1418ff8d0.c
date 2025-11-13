// 函数: sub_1418ff8d0
// 地址: 0x1418ff8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa0)
void*** r10 = rax

if (rax == 0)
    r10 = nullptr
else
    int64_t rcx = *(arg1 + 0x58)
    *r10 = &data_142d3ff08
    r10[1].d = 0
    *(r10 + 0xc) = 0
    r10[2].w = 0x100
    r10[3] = rcx
    *r10 = &data_142ff1c18
    r10[4].d = zx.d(*arg4)
    *(r10 + 0x24) = *(arg4 + 4)
    r10[5] = arg3
    
    if (arg3 != 0)
        *(arg3 + 8) += 1
    
    __builtin_memset(&r10[6], 0, 0x14)
    r10[9] = 0
    r10[0xa].d = zx.d(arg4[1])
    *(r10 + 0x54) = zx.d(arg4[2])
    r10[0xb].d = *(arg4 + 8)
    *(r10 + 0x5c) = *(arg4 + 0xc)
    __builtin_memset(&r10[0xc], 0, 0x1c)
    __builtin_memset(&r10[0x10], 0, 0x18)
    r10[0x13].d = 0xffffffff

*arg2 = r10

if (r10 != 0)
    r10[1].d += 1

return arg2
