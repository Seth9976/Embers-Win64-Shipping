// 函数: sub_1426be7d0
// 地址: 0x1426be7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1[0xc].d
int128_t zmm7 = *(arg1 + 0x64)
zmm6[0] = zmm6[0] f- zmm7.d
float temp0[0x4] = _mm_max_ss(zmm6[0], 0)
int32_t result = rand()
bool cond:0 = (arg1[0xb].b & 8) == 0
zmm7.d = zmm7.d f+ zmm6[0]
uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(result))
zmm7.d = zmm7.d f- temp0[0]
zmm9.d = zmm9.d f* 3.05185094e-05f
zmm9.d = zmm9.d f* zmm7.d
zmm9.d = zmm9.d f+ temp0[0]

if (not(cond:0))
    result = zx.d((*(*arg1 + 0x298))(arg1))
    void* const rbx_1
    
    if (result == 0)
        rbx_1 = nullptr
    else
        rbx_1 = arg2 - (zx.q(result + 3) & 0xfffffffffffffffc)
    
    *(rbx_1 + 4) = zmm9.d

return result
