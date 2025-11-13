// 函数: sub_14269b060
// 地址: 0x14269b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xa0)
float rax_1
float zmm0[0x4]
float zmm1[0x4]

if (rax == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_1 = data_143dbb200
else
    void* rdx_1 = *(rax + 0x130)
    
    if (rdx_1 == 0)
        zmm0 = zx.o(data_143dbb1f8.q)
        rax_1 = data_143dbb200
    else
        zmm1 = *(rdx_1 + 0x1d0)
        int64_t var_58
        var_58.d = zmm1[0]
        var_58:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        zmm0 = zx.o(var_58)
        rax_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]

uint128_t zmm5 = zx.o(zmm0.q)
uint128_t zmm6
zmm6.d = zmm5.d f+ 100f
zmm1 = rax_1
int64_t zmm3 = zmm5.q:4.d
zmm1[0] = zmm1[0] + 100f
zmm1[0] = zmm1[0] - 100f
zmm5.d = zmm5.d f- 100f
int64_t zmm4
zmm4.d = zmm3.d f+ 100f
zmm3.d = zmm3.d f- 100f
float var_50_4 = zmm1[0]
float var_40_1 = zmm1[0]
int64_t var_30 = (_mm_unpacklo_ps(zmm6, zmm4)).q
float var_34 = var_40_1
float var_28 = var_50_4
int32_t result = 1.d
float var_3c[0x4]
var_3c[0].q = (_mm_unpacklo_ps(zmm5, zmm3)).q
*(arg1 + 0xb8) = var_3c
*(arg1 + 0xc8) = var_30
*(arg1 + 0xd0) = result
return result
