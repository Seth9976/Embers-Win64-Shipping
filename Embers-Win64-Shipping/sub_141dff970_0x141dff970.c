// 函数: sub_141dff970
// 地址: 0x141dff970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10
int128_t var_58 = zmm10
int32_t rbx = *(*(*(arg3 + 0x10) + 0x10) + (sx.q((arg4 << 2).d) << 2) + 4)
int32_t rbx_1
int32_t rdi
float zmm2[0x4]
uint128_t zmm9

if (rbx s>= 2)
    uint128_t zmm0 = *(arg3 + 0x1c)
    
    if (zmm0.d f> 0f)
        rbx_1 = rbx - 1
        
        if (zmm0.d f< 1f)
            zmm9.d = _mm_cvtepi32_ps(zx.o(rbx_1)).d f* zmm0.d
            zmm2 = zmm9
            int32_t rcx_1 = int.d(zmm2[0])
            
            if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm2[0]))
                zmm2 = _mm_cvtepi32_ps(zx.o(rcx_1
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
            
            rdi = rbx_1
            int32_t rax_4 = int.d(zmm2.d)
            
            if (rax_4 s<= rbx_1)
                rdi = rax_4
            
            if (*(arg3 + 4) != 1)
                zmm9.d = zmm9.d f- zmm2[0]
            else
                zmm9 = zx.o(0)
            
            if (rdi + 1 s<= rbx_1)
                rbx_1 = rdi + 1
        else
            rdi = rbx_1
            zmm9 = zx.o(0)
    else
        rbx_1 = 0
        zmm9 = zx.o(0)
        rdi = 0
else
    rbx_1 = 0
    zmm9 = zx.o(0)
    rdi = 0

sub_140af98a0("Unknown", 0x26f, u"%i: unknown or unsupported animation compression format", 5)
int64_t result = sub_140afbb40()
int64_t zmm0_1
float zmm3[0x4]

if (rdi == rbx_1)
    zmm0_1 = data_143dbb200
    zmm2 = data_143dbb1fc
    zmm3 = data_143dbb1f8
else
    int128_t zmm6 = data_143dbb1f8
    int128_t zmm7 = data_143dbb1fc
    int128_t zmm8 = data_143dbb200
    sub_140af98a0("Unknown", 0x26f, u"%i: unknown or unsupported animation compression format", 5)
    result = sub_140afbb40()
    zmm3 = data_143dbb1f8
    zmm2 = data_143dbb1fc
    zmm3[0] = zmm3[0] f- zmm6.d
    zmm0_1 = data_143dbb200
    zmm2[0] = zmm2[0] f- zmm7.d
    zmm0_1.d = zmm0_1.d f- zmm8.d
    zmm3[0] = zmm3[0] f* zmm9.d
    zmm2[0] = zmm2[0] f* zmm9.d
    zmm0_1.d = zmm0_1.d f* zmm9.d
    zmm3[0] = zmm3[0] f+ zmm6.d
    zmm2[0] = zmm2[0] f+ zmm7.d
    zmm0_1.d = zmm0_1.d f+ zmm8.d

float temp0_6[0x4] = _mm_unpacklo_ps(zmm2, (zx.o(0)).q)
*(arg2 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1), temp0_6[0].q)
return result
