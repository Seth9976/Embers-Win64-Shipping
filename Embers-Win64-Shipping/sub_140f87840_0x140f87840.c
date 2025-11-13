// 函数: sub_140f87840
// 地址: 0x140f87840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rax = arg5
float zmm4 = *arg2
float zmm3 = arg2[9]
int128_t zmm9 = arg2[0xb]
int128_t zmm10 = arg2[8]
int128_t zmm12 = arg2[7]
int64_t arg_10 = arg3
int128_t zmm7 = arg_10.d
int64_t var_e8 = arg4
float zmm5 = var_e8.d
zmm4 = zmm4 - zmm7.d * 2f
int128_t zmm11 = var_e8:4.d
int128_t zmm15 = arg_10:4.d
int128_t zmm14 = arg2[0xa]
int128_t zmm13
zmm13.d = arg2[1].d f- zmm15.d * 2f
float zmm0 = zmm11.d + rax[3]
zmm11.d = zmm11.d f- rax[1]
float zmm1 = (zmm5 + rax[2]) * zmm4 f+ zmm7.d
zmm5 = (zmm5 - *rax) * zmm4 f+ zmm7.d
zmm11.d = zmm11.d f* zmm13.d
int128_t zmm8
zmm8.d = zmm12.d f* zmm1
zmm0 = zmm0 f* zmm13.d f+ zmm15.d
int128_t zmm6
zmm6.d = zmm10.d f* zmm1
zmm11.d = zmm11.d f+ zmm15.d
zmm12.d = zmm12.d f* zmm5
float zmm2 = zmm14.d * zmm0
zmm3 = zmm3 * zmm0
zmm1 = zmm6.d + zmm2
zmm10.d = zmm10.d f* zmm5
zmm14.d = zmm14.d f* zmm11.d
zmm6.d = zmm6.d f+ zmm14.d
zmm14.d = zmm14.d f+ zmm10.d
arg5.d = zmm8.d + zmm3 f+ zmm9.d
zmm0 = arg2[0xc]
arg_10.d = zmm3 f+ zmm12.d f+ zmm9.d
zmm6.d = zmm6.d f+ zmm0
arg5:4.d = zmm1 + zmm0
zmm1 = arg2[9] f* zmm11.d
arg_10:4.d = zmm2 f+ zmm10.d + zmm0
var_e8:4.d = zmm6.d
zmm8.d = zmm8.d f+ zmm1
zmm8.d = zmm8.d f+ zmm9.d
zmm9.d = zmm9.d f+ zmm1 f+ zmm12.d
var_e8.d = zmm8.d
int32_t var_e0 = zmm9.d
float var_dc = zmm0 f+ zmm14.d
int32_t var_d8
sub_140d92ee0(&var_d8, &var_e0, &var_e8, &arg_10, &arg5)
char var_b8
int64_t* result

if ((var_b8 & 1) == 0)
    sub_140db8760(arg1, &var_d8)
    result.b = 1
else
    uint32_t zmm0_1[0x4] = var_d8
    int32_t var_c0
    zmm0_1[0] = zmm0_1[0] f- var_c0
    int32_t var_d4
    uint32_t zmm1_1[0x4] = var_d4
    int32_t var_bc
    zmm1_1[0] = zmm1_1[0] f- var_bc
    uint32_t temp0_1[0x4] = _mm_and_ps(zmm0_1, 0x7fffffff)
    uint32_t temp0_2[0x4]
    
    if (not(temp0_1[0] f<= 9.99999994e-09f))
        temp0_2 = _mm_and_ps(zmm1_1, 0x7fffffff)
    
    if (not(temp0_1[0] f<= 9.99999994e-09f) && temp0_2[0] f> 9.99999994e-09f)
        sub_140db8760(arg1, &var_d8)
        result.b = 1
    else
        result.b = 0

return result
