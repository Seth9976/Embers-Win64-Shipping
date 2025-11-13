// 函数: sub_141c3d1f0
// 地址: 0x141c3d1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t (* rbx)[0x4] = arg2

if (*(arg1 + 0x3c) == 0)
    return 0xffffffff

int32_t rax_1 = arg1[5].d

if (arg3 s> rax_1)
    arg1[5].d = arg3
    
    if (arg3 s> *(arg1 + 0x2c))
        sub_140775270(&arg1[4])
else if (arg3 s< rax_1 && arg3 != rax_1)
    arg1[5].d = arg3

int32_t rcx_2

if (arg4 != 0)
    int32_t rax_2 = 0
    
    if (0 == *(arg1 + 0x14))
        *(arg1 + 0x14) = 0
    else
        rax_2 = *(arg1 + 0x14)
    
    int32_t rax_3 = 0
    
    if (0 == arg1[3].d)
        arg1[3].d = 0
    else
        rax_3 = arg1[3].d
    
    if (rax_3 s< rax_2)
        rcx_2 = rax_3 + arg1[2].d - rax_2
    else
        rcx_2 = rax_3 - rax_2

int32_t rsi_1

if (arg4 == 0 || rcx_2 u<= arg3)
    rsi_1 = sub_141c3e440(arg1, arg1[4], arg3)
    int32_t rax_11 = 0
    
    if (0 == *(arg1 + 0x14))
        *(arg1 + 0x14) = 0
    else
        rax_11 = *(arg1 + 0x14)
    
    *(arg1 + 0x14)
    *(arg1 + 0x14) = modu.dp.d(0:(rax_11 + rsi_1), arg1[2].d)
else
    int32_t rax_6 = 0
    
    if (0 == arg1[3].d)
        arg1[3].d = 0
    else
        rax_6 = arg1[3].d
    
    int64_t rcx_3 = sx.q(rax_6 - arg3)
    
    if (rax_6 - arg3 s< 0)
        rcx_3 += zx.q(arg1[2].d)
    
    *(arg1 + 0x14) = rcx_3.d
    rsi_1 = sub_141c3e440(arg1, arg1[4], arg3)

int32_t rax_14 = 0

if (0 == arg1[6].d)
    arg1[6].d = 0
else
    rax_14 = arg1[6].d

float zmm1[0x4] = *(arg1 + 0x34)
uint32_t zmm0[0x4] = rax_14
zmm0[0] = zmm0[0] f- zmm1[0]

if (__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 9.99999994e-09f)
    int32_t rax_15 = 0
    
    if (0 == arg1[6].d)
        arg1[6].d = 0
    else
        rax_15 = arg1[6].d
    
    sub_141c3d4d0(arg1[4], rbx, rsi_1, *(arg1 + 0x34), rax_15[0])
    int32_t rax_16 = 0
    
    if (0 == arg1[6].d)
        arg1[6].d = 0
    else
        rax_16 = arg1[6].d
    
    *(arg1 + 0x34) = rax_16
else
    int64_t rdx_6 = arg1[4]
    zmm1 = zmm1[0]
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    
    if (rsi_1 s> 0)
        uint32_t (* rdx_7)[0x4] = rdx_6 - rbx
        uint64_t i_1 = zx.q(((rsi_1 - 1) u>> 2) + 1)
        uint64_t i
        
        do
            *rbx = __addps_xmmps_memps(_mm_mul_ps(*(rdx_7 + rbx), zmm1), *rbx)
            rbx = &rbx[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.q(rsi_1)
