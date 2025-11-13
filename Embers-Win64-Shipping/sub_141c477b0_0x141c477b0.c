// 函数: sub_141c477b0
// 地址: 0x141c477b0
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
        memset(arg2, 0, sx.q(arg3) * 2)
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
    
    *(arg1 + 0x15c) = zmm1
    int64_t r8 = sx.q(arg3)
    *(arg1 + 0x154) = zmm2
    int64_t i_1 = 0
    uint128_t zmm0
    
    if (r8 s>= 4)
        void* rdx = arg2 + 4
        int64_t i_2 = ((r8 - 4) u>> 2) + 1
        i_1 = i_2 << 2
        int64_t i
        
        do
            zmm1 = *(arg1 + 0x150) f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm1
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx - 4)))).d f* zmm1
            *(rdx - 4) = (int.d(zmm0.d)).w
            zmm1 = *(arg1 + 0x150) f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm1
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx - 2)))).d f* zmm1
            *(rdx - 2) = (int.d(zmm0.d)).w
            zmm1 = *(arg1 + 0x150) f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm1
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*rdx))).d f* zmm1
            *rdx = (int.d(zmm0.d)).w
            zmm1 = *(arg1 + 0x150) f+ *(arg1 + 0x15c)
            *(arg1 + 0x150) = zmm1
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx + 2)))).d f* zmm1
            *(rdx + 2) = (int.d(zmm0.d)).w
            rdx += 8
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    for (; i_1 s< r8; i_1 += 1)
        zmm1 = *(arg1 + 0x150) f+ *(arg1 + 0x15c)
        *(arg1 + 0x150) = zmm1
        zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(arg2 + (i_1 << 1))))).d f* zmm1
        *(arg2 + (i_1 << 1)) = (int.d(zmm0.d)).w
    
    int32_t rax_12 = 1
    
    if (not(0f f== *(arg1 + 0x14c)))
        rax_12 = 0
    
    *(arg1 + 0x1cc) = rax_12
    *(arg1 + 0x1c8) = 0
    int64_t* rcx = *(arg1 + 0x138)
    (*(*rcx + 0x10))(rcx, zmm1)

int32_t result = *(arg1 + 0x158)
*(arg1 + 0x150) = result
*(arg1 + 0x15c) = 0
return result
