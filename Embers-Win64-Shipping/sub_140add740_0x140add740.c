// 函数: sub_140add740
// 地址: 0x140add740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_1[0x4] = arg1
int32_t rcx = int.d(result_1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== result_1[0]))
    result_1 =
        _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(result_1, result_1[0].q)) & 1)))

uint128_t result
result.d = arg1.d f- result_1[0]
char rax_3 = (int.d(result_1[0])).b
uint128_t zmm1
zmm1.d = result.d f* 6f
result_1 = result
uint64_t rcx_2 = zx.q(rax_3)
arg1.d = result.d f* result.d
zmm1.d = zmm1.d f- 15f
arg1.d = arg1.d f* result.d
zmm1.d = zmm1.d f* result.d
result.d = result.d f- 1f
result_1[0] = result_1[0] f* *(((zx.q(*((rcx_2 << 2) + 0x142e6baf0)) & 0xf) << 2) + 0x142e6d360)
zmm1.d = zmm1.d f+ 10f
result.d = result.d f* *(((zx.q(*((rcx_2 << 2) + 0x142e6baf4)) & 0xf) << 2) + 0x142e6d360)
zmm1.d = zmm1.d f* arg1.d
result.d = result.d f- result_1[0]
zmm1.d = zmm1.d f+ zmm1.d
result.d = result.d f* zmm1.d
result.d = result.d f+ result_1[0]
result.d = result.d f+ result_1[0]
return result
