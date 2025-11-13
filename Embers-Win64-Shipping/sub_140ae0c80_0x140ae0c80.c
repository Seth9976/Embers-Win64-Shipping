// 函数: sub_140ae0c80
// 地址: 0x140ae0c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t (* rbx)[0x4] = arg2
uint32_t zmm7[0x4] = 0x3f800000
int128_t zmm9 = *arg3
int128_t zmm10 = *(arg3 + 4)
int128_t zmm11 = *(arg3 + 8)
int128_t zmm12 = *(arg3 + 0xc)
int128_t zmm13 = *arg2
int128_t zmm14 = *(arg2 + 4)
int128_t zmm15 = *(arg2 + 8)
float zmm2 = zmm9.d f* zmm13.d + zmm10.d f* zmm14.d + zmm11.d f* zmm15.d + zmm12.d f* *(arg2 + 0xc)
float _X = -1f

if (zmm2 >= -1f)
    zmm2 = _mm_min_ss(zmm2, 0x3f800000)
    
    if (not(zmm2 < -1f))
        _X = _mm_min_ss(zmm2, 0x3f800000)
else
    _X = _mm_min_ss(-1f, 0x3f800000)

uint32_t zmm0[0x4] = acosf(_X)

if (__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f>= 9.99999975e-05f)
    float zmm0_1 = sinf(zmm0[0])
    zmm7[0] = 1f f- arg4
    int128_t zmm6
    zmm6.d = 1f / zmm0_1
    zmm7[0] = zmm7[0] f* zmm0[0]
    uint32_t zmm0_2[0x4] = sinf(zmm7[0])
    zmm0[0] = zmm0[0] f* arg4
    zmm0_2[0] = zmm0_2[0] f* zmm6.d
    uint32_t zmm0_3 = sinf(zmm0[0]) f* zmm6.d
    zmm13.d = zmm13.d f* zmm0_2[0]
    zmm9.d = zmm9.d f* zmm0_3
    zmm10.d = zmm10.d f* zmm0_3
    zmm11.d = zmm11.d f* zmm0_3
    zmm9.d = zmm9.d f+ zmm13.d
    zmm12.d = zmm12.d f* zmm0_3
    zmm0_3 = (*rbx)[3]
    *arg1 = zmm9.d
    zmm14.d = zmm14.d f* zmm0_2[0]
    zmm15.d = zmm15.d f* zmm0_2[0]
    zmm10.d = zmm10.d f+ zmm14.d
    zmm11.d = zmm11.d f+ zmm15.d
    zmm12.d = zmm12.d f+ zmm0_3 f* zmm0_2[0]
    (*arg1)[1] = zmm10.d
    (*arg1)[2] = zmm11.d
    (*arg1)[3] = zmm12.d
else
    *arg1 = *rbx

return arg1
