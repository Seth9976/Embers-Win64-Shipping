// 函数: sub_141dc87b0
// 地址: 0x141dc87b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0xc0000000

void* rcx = *(arg1 + 0x130)
uint128_t zmm6
uint128_t var_18 = zmm6
uint64_t result_1
float* rax

if (rcx == 0)
    int32_t var_30_1 = data_14399f6a0
    rax = &result_1
    result_1 = data_14399f698.q
else
    rax = sub_141f133e0(rcx, &result_1)
    rcx = *(arg1 + 0x130)

int32_t rax_2 = rax[2]
int32_t rdx_1 = data_143dbb200
uint64_t result_3 = data_143dbb1f8.q
uint64_t var_48 = *rax
int32_t var_30_2
uint128_t result
uint128_t zmm1

if (rcx == 0)
    result_1 = result_3
    var_30_2 = rdx_1
else
    zmm1 = *(rcx + 0x1d0)
    result_1.d = zmm1.d
    result = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_30_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
    result_1:4.d = result.d

void* rax_4 = *(arg2 + 0x130)
uint64_t result_2 = result_1
int32_t var_30_3

if (rax_4 == 0)
    result_1 = result_3
    var_30_3 = rdx_1
else
    zmm1 = *(rax_4 + 0x1d0)
    result_1.d = zmm1.d
    result = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_30_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
    result_1:4.d = result.d

result = zx.o(result_1)
zmm6.d = _mm_shuffle_ps(result, result, 0x55).d f- result_2:4.d
uint128_t zmm7
zmm7.d = result.d f- result_2.d
uint128_t zmm3
zmm3.d = var_30_3.d f- var_30_2
zmm1.d = zmm6.d f* zmm6.d
result.d = zmm7.d f* zmm7.d
zmm1.d = zmm1.d f+ result.d

if (zmm1.d f!= 1f)
    if (zmm1.d f>= 9.99999994e-09f)
        zmm3.d = zmm1.d
        uint128_t zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        result.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* result.d
        result_3.d = 0.5f f- zmm1.d
        result.d = zmm5.d f* result_3.d
        zmm5.d = zmm5.d f+ result.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        result.d = zmm5.d f* (0.5f f- zmm3.d)
        zmm5.d = zmm5.d f+ result.d
        zmm7.d = zmm7.d f* zmm5.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm3 = zx.o(0)
    else
        zmm7 = data_143dbb1f8
        zmm6 = data_143dbb1fc
        zmm3 = data_143dbb200
else if (not(zmm3.d f== zx.o(0).d))
    zmm3 = zx.o(0)

result.d = var_48:4.d.d f* zmm6.d
zmm1.d = var_48.d.d f* zmm7.d
result_3.d = rax_2.d f* zmm3.d
result.d = result.d f+ zmm1.d
result.d = result.d f+ result_3.d
return result
