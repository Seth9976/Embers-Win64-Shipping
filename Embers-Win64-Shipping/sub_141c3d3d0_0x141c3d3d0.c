// 函数: sub_141c3d3d0
// 地址: 0x141c3d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[1].d
float (* r8)[0x4] = *arg2
int64_t rdx = *arg1
float zmm1[0x4] = arg3
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)

if (result s> 0)
    void* rdx_1 = rdx - r8
    uint64_t i_1 = zx.q(((result - 1) u>> 2) + 1)
    uint64_t i
    
    do
        *r8 = __addps_xmmps_memps(_mm_mul_ps(*(rdx_1 + r8), temp0), *r8)
        r8 = &r8[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
