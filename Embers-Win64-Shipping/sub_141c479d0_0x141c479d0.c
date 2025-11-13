// 函数: sub_141c479d0
// 地址: 0x141c479d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x1c8))
    *(arg1 + 0x1c8) = 0
    z = true
else
    *(arg1 + 0x1c8)
    z = false

if (z)
    bool z_1
    
    if (0 == *(arg1 + 0x1cc))
        *(arg1 + 0x1cc) = 0
        z_1 = true
    else
        *(arg1 + 0x1cc)
        z_1 = false
    
    if (not(z_1))
        memset(arg2, 0, sx.q(arg3) << 2)
else
    float zmm1 = *(arg1 + 0x14c)
    *(arg1 + 0x158) = zmm1
    float zmm2
    
    if (*(arg1 + 0x160) != 0 || arg3 == 0)
        *(arg1 + 0x150) = zmm1
        zmm2 = zmm1
        zmm1 = (zx.o(0)).d
        *(arg1 + 0x160) = 0
    else
        zmm2 = *(arg1 + 0x150)
        zmm1 = (zmm1 - zmm2) f/ _mm_cvtepi32_ps(zx.o(arg3)).d
    
    int64_t rdx = sx.q(arg3)
    int64_t i_1 = 0
    *(arg1 + 0x15c) = zmm1
    *(arg1 + 0x154) = zmm2
    uint128_t zmm0
    
    if (rdx s>= 4)
        int32_t* rcx = arg2 + 8
        int64_t i_2 = ((rdx - 4) u>> 2) + 1
        i_1 = i_2 << 2
        int64_t i
        
        do
            zmm0.d = (*(arg1 + 0x150)).d f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm0.d
            zmm0.d = zmm0.d f* rcx[-2]
            rcx[-2] = zmm0.d
            zmm1 = *(arg1 + 0x150) f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm1
            rcx[-1] = zmm1 f* rcx[-1]
            zmm0.d = (*(arg1 + 0x150)).d f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm0.d
            zmm0.d = zmm0.d f* *rcx
            *rcx = zmm0.d
            zmm1 = *(arg1 + 0x150) f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm1
            rcx[1] = zmm1 f* rcx[1]
            rcx = &rcx[4]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    for (; i_1 s< rdx; i_1 += 1)
        zmm0.d = (*(arg1 + 0x150)).d f+ *(arg1 + 0x15c)
        *(arg1 + 0x150) = zmm0.d
        zmm0.d = zmm0.d f* *(arg2 + (i_1 << 2))
        *(arg2 + (i_1 << 2)) = zmm0.d
    
    int32_t rax_2 = 1
    
    if (not(0f f== *(arg1 + 0x14c)))
        rax_2 = 0
    
    *(arg1 + 0x1cc) = rax_2
    *(arg1 + 0x1c8) = 0
    int64_t* rcx_1 = *(arg1 + 0x138)
    (*(*rcx_1 + 0x10))(rcx_1)

int32_t result = *(arg1 + 0x158)
*(arg1 + 0x150) = result
*(arg1 + 0x15c) = 0
return result
