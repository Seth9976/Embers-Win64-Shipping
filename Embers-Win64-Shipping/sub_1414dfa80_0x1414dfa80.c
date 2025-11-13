// 函数: sub_1414dfa80
// 地址: 0x1414dfa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = int.d(fconvert.t(*(data_143ee7310 + 4)))

if (r8 s< 4)
    r8 = 4

bool cond:0 = *(arg1 + 0x5058) != 0
float zmm2 = *(data_143ee7328 + 4)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(r8))
zmm2 = _mm_max_ss(zmm2, 0x3f800000) f/ zmm4.d
int32_t zmm0

if (cond:0)
    zmm0 = 0x3f800000
else
    zmm0 = (zx.o(0)).d

arg2[5] = zmm0
arg2[1] = zmm4.d
arg2[2] = 1f f/ zmm4.d
arg2[3] = zmm2
arg2[4] = 1f / zmm2
void* result = data_143ee72e0
*arg2 =
    __maxss_xmmss_memss(_mm_max_ss(*(result + 4), 0) f* 100000f, *(arg1 + 0xd30)) f* 9.99999975e-06f
return result
