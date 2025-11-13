// 函数: sub_142298cd0
// 地址: 0x142298cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
zmm6.d = (*arg3).d f- *arg2
uint128_t zmm7
zmm7.d = (*(arg3 + 4)).d f- arg2[1]
uint128_t result_2
result_2.d = (*(arg3 + 8)).d f- arg2[2]
uint128_t result_1
result_1.d = zmm7.d f* zmm7.d
uint128_t zmm0
zmm0.d = zmm6.d f* zmm6.d
result_1.d = result_1.d f+ zmm0.d
uint128_t zmm1
zmm1.d = result_2.d f* result_2.d
result_1.d = result_1.d f+ zmm1.d
float temp0[0x4] = _mm_sqrt_ss(0, result_1.d)

if (not(temp0[0] == 0f))
    result_1.d = 1f / temp0[0]
    zmm0.d = result_1.d f* zmm6.d
    zmm1.d = result_1.d f* zmm7.d
    result_1.d = result_1.d f* result_2.d
    zmm6 = zmm0
    zmm7 = zmm1
    result_2 = result_1

int128_t zmm11 = arg5
int128_t zmm13 = arg7
int128_t zmm12
zmm12.d = zmm11.d f+ zmm11.d
char var_c8 = 0
(*(*arg1 + 0x20))(arg1, zx.q(arg6))
bool cond:0 = temp0[0] f<= zmm11.d
int32_t result = arg2[2]
uint64_t var_a8 = *arg2
zmm6.d = zmm6.d f* zmm11.d
zmm7.d = zmm7.d f* zmm11.d
result_2.d = result_2.d f* zmm11.d
uint64_t var_98

if (not(cond:0))
    result_1 = result
    float zmm3 = var_a8:4.d
    zmm1 = var_a8.d
    
    do
        zmm0.d = zmm6.d f+ zmm1.d
        zmm1.d = zmm7.d f+ zmm3
        var_98.d = zmm0.d
        zmm0.d = result_2.d f+ result_1.d
        var_98:4.d = zmm1.d
        int32_t var_90_1 = zmm0.d
        result = (*(*arg1 + 0x30))(arg1, &var_a8, &var_98, arg4, arg6, 0, zmm13.d, 0)
        temp0[0] = temp0[0] f- zmm12.d
        zmm1.d = zmm6.d f+ var_98.d
        zmm3 = zmm7.d f+ var_98:4.d
        result_1.d = result_2.d f+ var_90_1
        var_a8.d = zmm1.d
        var_a8:4.d = zmm3
        int32_t var_a0_1 = result_1.d
    while (temp0[0] f> zmm11.d)

if (temp0[0] <= 0f)
    return result

int32_t var_90_2 = *(arg3 + 8)
int64_t rax_3 = *arg1
var_98 = *arg3
return (*(rax_3 + 0x30))(arg1, &var_a8, &var_98, arg4, arg6, 0, zmm13.d, 0)
