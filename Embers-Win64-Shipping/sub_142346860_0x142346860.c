// 函数: sub_142346860
// 地址: 0x142346860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int64_t* rax_1 = (*(*arg1 + 0x18))(arg1, &arg_8)
void* r8 = data_143e29f28
int64_t r9 = *rax_1
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(arg2)).d f/ _mm_cvtepi32_ps(zx.o(r9.d)).d
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg3))
zmm3.d = zmm3.d f* arg1[0x3d].d
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o((r9 u>> 0x20).d)).d
zmm1.d = zmm1.d f* *(arg1 + 0x1ec)
uint128_t zmm0
zmm0.d = zmm3.d f* *(arg1 + 0x204)
uint128_t zmm2
zmm2.d = zmm1.d f* *(arg1 + 0x20c)
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ *(arg1 + 0x214)
zmm2.d = zmm2.d f+ 0.5f
int32_t rcx = int.d(zmm2.d)

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm2.d))
    zmm2 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2.q)) & 1)))

zmm1.d = zmm1.d f* arg1[0x42].d
zmm3.d = zmm3.d f* arg1[0x41].d
arg_8 = zmm2.d
zmm1.d = zmm1.d f+ zmm3.d
zmm1.d = zmm1.d f+ arg1[0x43].d
zmm1.d = zmm1.d f+ 0.5f
int32_t rdx_1 = int.d(zmm1.d)

if (rdx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_1)).d f== zmm1.d))
    zmm1 = _mm_cvtepi32_ps(zx.o(rdx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))

int32_t arg_c = zmm1.d
int64_t result = (*(*(r8 + 0x118) + 0x1a8))(r8 + 0x118, &arg_8)
arg1[0x3c].d = arg2
*(arg1 + 0x1e4) = arg3
return result
