// 函数: sub_141c3f0a0
// 地址: 0x141c3f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2

if (*(arg1 + 0x3c) == 0)
    return 0xffffffff

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
    
    int32_t rcx_1
    
    if (rax_3 s< rax_2)
        rcx_1 = rax_3 + arg1[2].d - rax_2
    else
        rcx_1 = rax_3 - rax_2
    
    if (rcx_1 u> arg3)
        int32_t rax_6 = 0
        
        if (0 == arg1[3].d)
            arg1[3].d = 0
        else
            rax_6 = arg1[3].d
        
        int64_t rcx_2 = sx.q(rax_6 - arg3)
        
        if (rax_6 - arg3 s< 0)
            rcx_2 += zx.q(arg1[2].d)
        
        *(arg1 + 0x14)
        *(arg1 + 0x14) = rcx_2.d

int32_t rax_9 = sub_141c3e440(arg1, rbx, arg3)
int32_t rax_10 = 0

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
else
    rax_10 = *(arg1 + 0x14)

float rax_12 = 0f
*(arg1 + 0x14)
*(arg1 + 0x14) = modu.dp.d(0:(rax_10 + rax_9), arg1[2].d)

if (0 == arg1[6].d)
    arg1[6].d = 0
else
    rax_12 = arg1[6].d

float zmm1[0x4] = *(arg1 + 0x34)
uint32_t zmm0[0x4] = rax_12
zmm0[0] = zmm0[0] f- zmm1[0]

if (__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 9.99999994e-09f)
    float rax_13 = 0f
    
    if (0 == arg1[6].d)
        arg1[6].d = 0
    else
        rax_13 = arg1[6].d
    
    sub_141c37840(rbx, rax_9, *(arg1 + 0x34), rax_13)
    int32_t rax_14 = 0
    
    if (0 == arg1[6].d)
        arg1[6].d = 0
    else
        rax_14 = arg1[6].d
    
    *(arg1 + 0x34) = rax_14
else
    zmm1 = zmm1[0]
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    
    if (rax_9 s> 0)
        uint64_t i_1 = zx.q(((rax_9 - 1) u>> 2) + 1)
        uint64_t i
        
        do
            zmm0 = *rbx
            rbx += 0x10
            *(rbx - 0x10) = _mm_mul_ps(zmm0, zmm1)
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.q(rax_9)
