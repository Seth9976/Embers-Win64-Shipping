// 函数: sub_1418e7590
// 地址: 0x1418e7590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x68)
void*** rcx = rax

if (rax == 0)
    rcx = nullptr
else
    int32_t r10_1 = 1
    *rcx = &data_142d3ff08
    int32_t r8 = 2
    rcx[1].d = 0
    *rcx = &data_142feedf8
    *(rcx + 0xc) = 0
    rcx[2].w = 0x100
    *(rcx + 0x58) = *arg3
    rcx[3].d = 0x17
    __builtin_memset(rcx + 0x1c, 0, 0x20)
    rcx[8] = 0
    rcx[9] = 0
    rcx[0xa] = 0x3f800000
    *(rcx + 0x3c) = 1
    uint32_t rdx = zx.d(rcx[0xb].b)
    int32_t rax_1
    
    if (rdx == 0)
        rax_1 = 2
    else if (rdx == 1)
        rax_1 = 1
    else if (rdx == 2)
        rax_1 = 0
    else
        rax_1 = 0x7fffffff
    
    uint32_t rdx_2 = zx.d(*(rcx + 0x59))
    *(rcx + 0x34) = rax_1
    
    if (rdx_2 == 0)
        r8 = 0
    else if (rdx_2 == 1)
        r8 = 1
    else if (rdx_2 != 2)
        r8 = 0
    
    float zmm1 = *(rcx + 0x5c)
    rcx[7].d = r8
    
    if (not(zmm1 != 0f))
        r10_1 = 0
    
    *(rcx + 0x4c) = rcx[0xc].d
    *(rcx + 0x44) = zmm1
    rcx[8].d = r10_1

*arg2 = rcx

if (rcx != 0)
    rcx[1].d += 1

return arg2
