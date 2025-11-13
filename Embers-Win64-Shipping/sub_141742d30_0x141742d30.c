// 函数: sub_141742d30
// 地址: 0x141742d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg6)
int64_t r10 = sx.q(arg4) * 3
int64_t rdx = rdi * 3
int128_t zmm7
zmm7.d = (*(arg2 + (r10 << 2))).d f- *(arg3 + (r10 << 2))
int128_t zmm6
zmm6.d = (*(arg2 + (r10 << 2) + 4)).d f- *(arg3 + (r10 << 2) + 4)
int128_t zmm8
zmm8.d = (*(arg2 + (r10 << 2) + 8)).d f- *(arg3 + (r10 << 2) + 8)
uint128_t zmm9
zmm9.d = (*(arg2 + (rdx << 2) + 4)).d f- *(arg3 + (rdx << 2) + 4)
uint128_t zmm1
zmm1.d = (*(arg2 + (rdx << 2) + 8)).d f- *(arg3 + (rdx << 2) + 8)
uint128_t zmm3
zmm3.d = (*(arg2 + (rdx << 2))).d f- *(arg3 + (rdx << 2))
int64_t r10_1 = sx.q(arg5)
zmm9.d = zmm9.d f- zmm6.d
zmm1.d = zmm1.d f- zmm8.d
int64_t rcx = r10_1 * 3
zmm3.d = zmm3.d f- zmm7.d
uint128_t zmm2
zmm2.d = (*(arg2 + (rcx << 2) + 8)).d f- *(arg3 + (rcx << 2) + 8)
uint128_t zmm10 = zmm1
uint128_t zmm5
zmm5.d = (*(arg2 + (rcx << 2))).d f- *(arg3 + (rcx << 2))
zmm2.d = zmm2.d f- zmm8.d
zmm5.d = zmm5.d f- zmm7.d
float zmm4 = *(arg2 + (rcx << 2) + 4) f- *(arg3 + (rcx << 2) + 4) f- zmm6.d
uint128_t zmm0
zmm0.d = zmm9.d f* zmm2.d
uint128_t zmm11
zmm11.d = zmm3.d f* zmm2.d
zmm1.d = zmm1.d f* zmm5.d
zmm10.d = zmm10.d f* zmm4
zmm11.d = zmm11.d f- zmm1.d
zmm9.d = zmm9.d f* zmm5.d
zmm10.d = zmm10.d f- zmm0.d
zmm3.d = zmm3.d f* zmm4
zmm9.d = zmm9.d f- zmm3.d
zmm2.d = zmm11.d f* zmm11.d
zmm0.d = zmm10.d f* zmm10.d
zmm1.d = zmm9.d f* zmm9.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
int32_t var_78
int32_t var_70

if (zmm2.d f!= 1f)
    if (zmm2.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
        zmm3.d = zmm2.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = zmm5.d f* (0.5f f- zmm3.d)
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1 = zmm5
        zmm0.d = zmm5.d f* zmm10.d
        zmm5.d = zmm5.d f* zmm9.d
        var_78 = zmm0.d
        zmm1.d = zmm1.d f* zmm11.d
        var_70 = zmm5.d
    else
        zmm1 = data_143dbb1fc
        var_78 = data_143dbb1f8.d
        var_70 = data_143dbb200.d
    
    int32_t var_74_1 = zmm1.d
else
    var_78 = zmm10.d
    int32_t var_74 = zmm11.d
    var_70 = zmm9.d

*(arg1 + 0xc) = var_78.q
arg1[5] = var_70
zmm0 = arg1[4]
zmm2 = arg1[3]
zmm1 = arg1[5]
zmm2.d = zmm2.d f* zmm2.d
zmm0.d = zmm0.d f* zmm0.d
zmm1.d = zmm1.d f* zmm1.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
int32_t result

if (zmm2.d f>= 9.99999975e-05f)
    *arg1 = arg4
    arg1[1] = r10_1.d
    arg1[2] = rdi.d
    arg1[7] = *arg7
    arg1[8] = arg7[1]
    arg1[9] = arg7[2]
    arg1[0xa] = *arg8
    arg1[0xb] = arg8[1]
    arg1[0xc] = arg8[2]
    result.b = 1
    zmm6.d = zmm6.d f* arg1[4]
    zmm7.d = zmm7.d f* arg1[3]
    zmm8.d = zmm8.d f* arg1[5]
    arg1[0xd].b = 0
    zmm6.d = zmm6.d f+ zmm7.d
    zmm6.d = zmm6.d f+ zmm8.d
    arg1[6] = zmm6.d
else
    result.b = 0

return result
