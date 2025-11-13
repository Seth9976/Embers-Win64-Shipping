// 函数: sub_141c42cd0
// 地址: 0x141c42cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 1 && arg6 == arg3)
    return 

char rax = *(arg1 + 0x8c8)

if (rax == 0)
    if (*(arg1 + 0x8c9) != rax)
        goto label_141c42d39
    
    *arg4 = *arg2
    arg4[1] = arg2[1]
    return 

uint128_t zmm1
uint128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9

if (*(arg1 + 0x8c9) == 0)
    zmm1 = *arg2
    arg5 = arg2[1]
else
label_141c42d39:
    float var_88
    zmm6, zmm7, zmm8, zmm9 = sub_141c42a40(arg1 + 0x38, arg2, arg3, &var_88, arg5.d, arg6)
    rax = *(arg1 + 0x8c8)
    int32_t var_84
    arg5 = var_84
    zmm1 = var_88

if (rax != 0)
    arg5.d = arg5.d f+ zmm1.d
    arg5.d = arg5.d f* 0.5f
    uint128_t var_38 = zmm6
    int128_t var_48 = zmm7
    int128_t var_58 = zmm8
    int128_t var_68 = zmm9
    (*(*(arg1 + 0x448) + 8))(arg1 + 0x448, arg5)
    zmm1.d = arg5.d f* *(arg1 + 0x1c)
    arg5.d = (*(arg1 + 0x494)).d f* *(arg1 + 0x49c)
    zmm1.d = zmm1.d f* *(arg1 + 0x498)
    zmm1.d = zmm1.d f+ arg5.d
    
    if (not(zmm1.d f<= -1.17549435e-38f) && not(zmm1.d f>= 1.17549435e-38f))
        zmm1 = zx.o(0)
    
    *(arg1 + 0x49c) = zmm1.d
    (*(*(arg1 + 0x4a0) + 8))(arg1 + 0x4a0)
    (*(*(arg1 + 0x4f0) + 8))(arg1 + 0x4f0, arg5)
    (*(*(arg1 + 0x540) + 8))(arg1 + 0x540, arg5)
    (*(*(arg1 + 0x590) + 8))(arg1 + 0x590, arg5)
    void* r10 = *(arg1 + 0x5e0)
    uint128_t zmm10 = arg5
    float zmm5 = *(r10 + 0x20)
    int64_t r8 = *(r10 + 8)
    int32_t r9_2 = *(r10 + 0x10)
    uint128_t zmm2 = *(r10 + 0x28)
    int32_t rcx_6 = int.d(zmm5)
    float i = zmm2.d
    zmm2.d = zmm2.d f+ *(r10 + 0x24)
    i = i + zmm5
    float zmm4 = zmm5 f- _mm_cvtepi32_ps(zx.o(rcx_6)).d
    zmm1 = *(r8 + (sx.q(rcx_6) << 2))
    int32_t rcx_7 = int.d(fconvert.t(*(r10 + 0x24)))
    zmm6.d = (*(r8 + (sx.q(mods.dp.d(sx.q(rcx_6 + 1), r9_2)) << 2))).d f- zmm1.d
    arg5 = *(r8 + (sx.q(rcx_7) << 2))
    zmm6.d = zmm6.d f* zmm4
    zmm6.d = zmm6.d f+ zmm1.d
    zmm1 = zmm2
    zmm6.d = zmm6.d f* *(r10 + 0x2c)
    zmm7.d = (*(r8 + (sx.q(mods.dp.d(sx.q(rcx_7 + 1), r9_2)) << 2))).d f- arg5.d
    *(r10 + 0x20) = i
    *(r10 + 0x24) = zmm2.d
    zmm6.d = zmm6.d f+ *(r10 + 0x30)
    zmm7.d = zmm7.d f* zmm4
    zmm7.d = zmm7.d f+ arg5.d
    arg5 = _mm_cvtepi32_ps(zx.o(r9_2))
    zmm7.d = zmm7.d f* *(r10 + 0x2c)
    zmm7.d = zmm7.d f+ *(r10 + 0x30)
    
    if (not(i f< arg5.d))
        do
            i = i f- arg5.d
        while (i f>= arg5.d)
        
        *(r10 + 0x20) = i
        zmm1 = zmm2
    
    if (not(zmm1.d f< arg5.d))
        do
            zmm2.d = zmm2.d f- arg5.d
        while (zmm2.d f>= arg5.d)
        
        *(r10 + 0x24) = zmm2.d
    
    zmm6.d = zmm6.d f* *(arg1 + 0x738)
    zmm7.d = zmm7.d f* *(arg1 + 0x888)
    zmm6.d = zmm6.d f+ *(arg1 + 0x734)
    zmm7.d = zmm7.d f+ *(arg1 + 0x884)
    sub_141c46000(arg1 + 0x5f0, zmm6.d)
    uint128_t zmm0 = sub_141c46000(arg1 + 0x740, zmm7.d)
    uint128_t zmm1_2 = *(arg1 + 0x730)
    
    if (not(zmm1_2.d f<= -1.17549435e-38f) && not(zmm1_2.d f>= 1.17549435e-38f))
        zmm1_2 = zx.o(0)
    
    zmm1_2.d = zmm1_2.d f+ zmm10.d
    (*(*(arg1 + 0x740) + 8))(arg1 + 0x740, zmm1_2)
    (*(*(arg1 + 0x790) + 8))(arg1 + 0x790, zmm0)
    float zmm2_1 = (1f f- *(arg1 + 0x24)) f* zmm0.d
    zmm0.d = (*(arg1 + 0x7dc)).d f* *(arg1 + 0x7e4)
    zmm2_1 = zmm2_1 f* *(arg1 + 0x7e0) f+ zmm0.d
    
    if (not(zmm2_1 <= -1.17549435e-38f) && not(zmm2_1 >= 1.17549435e-38f))
        zmm2_1 = (zx.o(0)).d
    
    *(arg1 + 0x7e4) = zmm2_1
    zmm1_2.d = 1f f- *(arg1 + 0x28)
    zmm1_2.d = zmm1_2.d f* zmm2_1
    (*(*(arg1 + 0x7e8) + 8))(arg1 + 0x7e8, zmm1_2)
    (*(*(arg1 + 0x838) + 8))(arg1 + 0x838, zmm0)
    zmm1_2.d = 1f f- *(arg1 + 0x28)
    zmm1_2.d = zmm1_2.d f* zmm0.d
    *(arg1 + 0x880) = zmm1_2.d
    
    if (not(zmm1_2.d f<= -1.17549435e-38f) && not(zmm1_2.d f>= 1.17549435e-38f))
        zmm1_2 = zx.o(0)
    
    zmm1_2.d = zmm1_2.d f+ zmm10.d
    (*(*(arg1 + 0x5f0) + 8))(arg1 + 0x5f0, zmm1_2)
    (*(*(arg1 + 0x640) + 8))(arg1 + 0x640, zmm0)
    zmm2_1 = (1f f- *(arg1 + 0x24)) f* zmm0.d
    zmm0.d = (*(arg1 + 0x68c)).d f* *(arg1 + 0x694)
    zmm2_1 = zmm2_1 f* *(arg1 + 0x690) f+ zmm0.d
    
    if (not(zmm2_1 <= -1.17549435e-38f) && not(zmm2_1 >= 1.17549435e-38f))
        zmm2_1 = (zx.o(0)).d
    
    *(arg1 + 0x694) = zmm2_1
    zmm1_2.d = 1f f- *(arg1 + 0x28)
    zmm1_2.d = zmm1_2.d f* zmm2_1
    (*(*(arg1 + 0x698) + 8))(arg1 + 0x698, zmm1_2)
    (*(*(arg1 + 0x6e8) + 8))(arg1 + 0x6e8, zmm0)
    zmm6.d = 1f f- *(arg1 + 0x28)
    zmm6.d = zmm6.d f* zmm0.d
    *(arg1 + 0x730) = zmm6.d
    zmm7.d = sub_141c449d0(arg1 + 0x640, *(arg1 + 0x8b0)).d
        f+ sub_141c449d0(arg1 + 0x640, *(arg1 + 0x8ac))
    zmm7.d = zmm7.d f- sub_141c449d0(arg1 + 0x698, *(arg1 + 0x8b4))
    zmm7.d = zmm7.d f+ sub_141c449d0(arg1 + 0x6e8, *(arg1 + 0x8b8))
    zmm7.d = zmm7.d f- sub_141c449d0(arg1 + 0x790, *(arg1 + 0x8bc))
    zmm7.d = zmm7.d f- sub_141c449d0(arg1 + 0x7e8, *(arg1 + 0x8c0))
    zmm7.d = zmm7.d f- sub_141c449d0(arg1 + 0x838, *(arg1 + 0x8c4))
    zmm6.d = sub_141c449d0(arg1 + 0x790, *(arg1 + 0x894)).d
        f+ sub_141c449d0(arg1 + 0x790, *(arg1 + 0x890))
    zmm6.d = zmm6.d f- sub_141c449d0(arg1 + 0x7e8, *(arg1 + 0x898))
    zmm6.d = zmm6.d f+ sub_141c449d0(arg1 + 0x838, *(arg1 + 0x89c))
    zmm6.d = zmm6.d f- sub_141c449d0(arg1 + 0x640, *(arg1 + 0x8a0))
    zmm6.d = zmm6.d f- sub_141c449d0(arg1 + 0x698, *(arg1 + 0x8a4))
    int64_t rax_24
    float zmm0_14
    zmm0_14, rax_24 = sub_141c449d0(arg1 + 0x6e8, *(arg1 + 0x8a8))
    zmm6.d = zmm6.d f- zmm0_14
    zmm6.d = zmm6.d f* *(arg1 + 0x30)
    *arg4 = zmm6.d
    zmm7.d = zmm7.d f* *(arg1 + 0x30)
    arg4[1] = zmm7.d
    return 

zmm1.d = zmm1.d f* *(arg1 + 0x30)
*arg4 = zmm1.d
arg5.d = arg5.d f* *(arg1 + 0x30)
arg4[1] = arg5.d
