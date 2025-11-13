// 函数: sub_1405bc6e0
// 地址: 0x1405bc6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx_1 = zx.q(*arg1) & 1

if (*(arg1 + (rbx_1 << 3) + 8) == 0)
    int64_t* rcx = *(arg1 + 0x18)
    int64_t r8_1 = *(rcx + 0x1c)
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(r8_1.d)).d f* arg1[8]
    int32_t rdx_1 = int.d(zmm0.d)
    int32_t r8_3 = *(rcx + 0x24)
    zmm0.d = _mm_cvtepi32_ps(zx.o((r8_1 u>> 0x20).d)).d f* arg1[8]
    int32_t arg_c = int.d(zmm0.d)
    *(arg1 + (rbx_1 << 3) + 8) = sub_1405c4300(rcx, rdx_1.q, r8_3)

return &arg1[rbx_1 * 2 + 2]
