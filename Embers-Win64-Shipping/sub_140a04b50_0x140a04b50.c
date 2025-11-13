// 函数: sub_140a04b50
// 地址: 0x140a04b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
__builtin_memset(arg1, 0, 0x14)
*(arg1 + 0x14) = 0x3f800000
*(arg1 + 0x24) = 0
int128_t zmm6 = arg4
float zmm7[0x4] = zx.o(0)
arg1[3] = (_mm_unpacklo_ps(0x3f800000, 0)).q
int32_t var_30 = 0
arg1[4].d = 0
arg1[5].d = 0xffffffff
__builtin_memset(arg1 + 0x2c, 0, 0x20)
zmm7[0].q = fconvert.d(zmm6.d)
int32_t rax = _isnan(zmm7[0].q)
int32_t rax_1

if (rax == 0)
    rax_1 = _finite(zmm7[0].q)

if (rax != 0 || rax_1 == 0)
    *arg1 = *arg3
    *(arg1 + 0x10) = arg3[1]
    *(arg1 + 0x20) = arg3[2]
    *(arg1 + 0x30) = arg3[3]
    arg1[8] = arg3[4].q
    arg1[9].d = *(arg3 + 0x48)
else
    float zmm4_1[0x4] = *arg3
    zmm4_1[0] = zmm4_1[0] f- *arg2
    float zmm0[0x4] = *(arg3 + 8)
    zmm0[0] = zmm0[0] f- arg2[2]
    int64_t zmm2
    zmm2.d = (*(arg3 + 4)).d f- arg2[1]
    zmm4_1[0] = zmm4_1[0] f* zmm6.d
    zmm0[0] = zmm0[0] f* zmm6.d
    zmm4_1[0] = zmm4_1[0] f+ *arg2
    zmm2.d = zmm2.d f* zmm6.d
    zmm0[0] = zmm0[0] f+ arg2[2]
    zmm2.d = zmm2.d f+ arg2[1]
    float var_30_1 = zmm0[0]
    *arg1 = (_mm_unpacklo_ps(zmm4_1, zmm2)).q
    arg1[1].d = var_30_1
    zmm4_1 = *(arg3 + 0xc)
    zmm4_1[0] = zmm4_1[0] f- arg2[3]
    zmm0 = *(arg3 + 0x14)
    zmm0[0] = zmm0[0] f- arg2[5]
    zmm2.d = arg3[1].d.d f- arg2[4]
    zmm4_1[0] = zmm4_1[0] f* zmm6.d
    zmm0[0] = zmm0[0] f* zmm6.d
    zmm4_1[0] = zmm4_1[0] f+ arg2[3]
    zmm2.d = zmm2.d f* zmm6.d
    zmm0[0] = zmm0[0] f+ arg2[5]
    zmm2.d = zmm2.d f+ arg2[4]
    float var_30_2 = zmm0[0]
    *(arg1 + 0xc) = (_mm_unpacklo_ps(zmm4_1, zmm2)).q
    *(arg1 + 0x14) = var_30_2
    zmm0 = arg3[2].d
    zmm0[0] = zmm0[0] f- arg2[8]
    zmm4_1 = *(arg3 + 0x18)
    zmm4_1[0] = zmm4_1[0] f- arg2[6]
    zmm2.d = (*(arg3 + 0x1c)).d f- arg2[7]
    zmm0[0] = zmm0[0] f* zmm6.d
    zmm4_1[0] = zmm4_1[0] f* zmm6.d
    zmm0[0] = zmm0[0] f+ arg2[8]
    zmm2.d = zmm2.d f* zmm6.d
    zmm4_1[0] = zmm4_1[0] f+ arg2[6]
    zmm2.d = zmm2.d f+ arg2[7]
    float var_30_3 = zmm0[0]
    arg1[3] = (_mm_unpacklo_ps(zmm4_1, zmm2)).q
    arg1[4].d = var_30_3
    *(arg1 + 0x24) = arg2[9].b
    uint128_t zmm1
    zmm1.d = arg3[3].d.d f- arg2[0xc]
    arg4.d = (*(arg3 + 0x2c)).d f- arg2[0xb]
    zmm1.d = zmm1.d f* zmm6.d
    arg4.d = arg4.d f* zmm6.d
    zmm1.d = zmm1.d f+ arg2[0xc]
    arg4.d = arg4.d f+ arg2[0xb]
    arg1[6].d = zmm1.d
    *(arg1 + 0x2c) = arg4.d
    uint32_t rax_7 = zx.d(*(arg3 + 0x2a))
    float temp0_4[0x4] = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x2a)))
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_7)).d f- temp0_4[0]
    zmm1.d = zmm1.d f* zmm6.d
    zmm1.d = zmm1.d f+ temp0_4[0]
    int32_t rcx = int.d(zmm1.d)
    char rax_8
    
    if (rcx s>= 0)
        rax_8 = -1
        
        if (rcx s< 0xff)
            rax_8 = rcx.b
    else
        rax_8 = 0
    
    *(arg1 + 0x2a) = rax_8
    uint32_t rax_10 = zx.d(*(arg3 + 0x29))
    float temp0_6[0x4] = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x29)))
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f- temp0_6[0]
    zmm1.d = zmm1.d f* zmm6.d
    zmm1.d = zmm1.d f+ temp0_6[0]
    int32_t rcx_1 = int.d(zmm1.d)
    char rax_11
    
    if (rcx_1 s>= 0)
        rax_11 = -1
        
        if (rcx_1 s< 0xff)
            rax_11 = rcx_1.b
    else
        rax_11 = 0
    
    *(arg1 + 0x29) = rax_11
    uint32_t rax_13 = zx.d(*(arg3 + 0x28))
    float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(arg2[0xa].b))
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_13)).d f- temp0_8[0]
    zmm1.d = zmm1.d f* zmm6.d
    zmm1.d = zmm1.d f+ temp0_8[0]
    int32_t rcx_2 = int.d(zmm1.d)
    char rax_14
    
    if (rcx_2 s>= 0)
        rax_14 = -1
        
        if (rcx_2 s< 0xff)
            rax_14 = rcx_2.b
    else
        rax_14 = 0
    
    arg1[5].b = rax_14
    uint32_t rax_16 = zx.d(*(arg3 + 0x2b))
    float temp0_10[0x4] = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x2b)))
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_16)).d f- temp0_10[0]
    zmm1.d = zmm1.d f* zmm6.d
    zmm1.d = zmm1.d f+ temp0_10[0]
    int32_t rax_17 = int.d(zmm1.d)
    
    if (rax_17 s>= 0)
        rdi = -1
        
        if (rax_17 s< 0xff)
            rdi = rax_17.b
    
    *(arg1 + 0x2b) = rdi

return arg1
