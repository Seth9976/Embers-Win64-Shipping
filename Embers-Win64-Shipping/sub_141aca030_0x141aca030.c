// 函数: sub_141aca030
// 地址: 0x141aca030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
uint128_t zmm6 = arg3

if (*(arg1 + 0x35) == 0)
    return 

int64_t r8_1 = sx.q(arg1[1].d) * 0x3c
int64_t rax_2 = *arg1
uint128_t zmm0 = zx.o(*(r8_1 + rax_2 - 0x3c))
int32_t rax_4 = *(arg1 + 0x24)
float zmm5[0x4] = *(r8_1 + rax_2 - 0x34)
uint64_t var_48 = zmm0.q
uint128_t zmm7 = var_48.d
uint128_t zmm4 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float zmm1
float zmm3

if (rax_4 s> 2)
    arg3.d = (*arg2).d f- zmm7.d
    zmm3 = *(arg2 + 4) f- zmm4.d
    zmm1 = arg1[4].d
    zmm0.d = (*(arg2 + 8)).d f- zmm5[0]
    arg3.d = arg3.d f* arg3.d
    zmm0.d = zmm0.d f* zmm0.d

if (rax_4 s> 2 && not(zmm3 * zmm3 f+ arg3.d f+ zmm0.d >= zmm1 * zmm1))
    int64_t rcx
    int64_t rsi_1
    
    if (rax_4 == 3)
        rsi_1 = data_143f2ba20
        
        if (data_143de5480 == 0)
            rcx = 0
        else
            rcx.b = GetCurrentThreadId() != data_143de5470
    
    uint128_t zmm15
    
    if (rax_4 != 3 || *(rsi_1 + (rcx << 2)) != 1)
        sub_141ace840(arg1, rdi, zmm6, arg4, zmm15)
    else
        sub_141acf3d0(arg1, rdi)
    return 

zmm6.d = (*arg2).d f- zmm7.d
zmm7.d = (*(arg2 + 4)).d f- zmm4.d
int128_t zmm8
zmm8.d = (*(arg2 + 8)).d f- zmm5[0]
zmm0.d = zmm6.d f* zmm6.d
arg3.d = zmm7.d f* zmm7.d
arg3.d = arg3.d f+ zmm0.d
arg3.d = arg3.d f+ zmm8.d f* zmm8.d

if (arg3.d f== 1f)
    goto label_141aca221

if (arg3.d f>= 9.99999994e-09f)
    zmm3 = arg3.d
    float temp0_2[0x4] = _mm_rsqrt_ss(arg3[0], zmm3)
    zmm3 = zmm3 * 0.5f
    zmm0.d = temp0_2.d f* temp0_2[0]
    arg3.d = 0.5f - zmm3 f* zmm0.d
    zmm0.d = temp0_2.d f* arg3.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm4.d = 0.5f - zmm3 * temp0_2[0] * temp0_2[0]
    zmm0.d = temp0_2.d f* zmm4.d
    temp0_2[0] = temp0_2[0] f+ zmm0.d
    zmm6.d = zmm6.d f* temp0_2[0]
    zmm7.d = zmm7.d f* temp0_2[0]
    zmm8.d = zmm8.d f* temp0_2[0]
label_141aca221:
    int32_t var_40_3 = zmm8.d
    var_48:4.d = zmm7.d
    var_48.d = zmm6.d
else
    var_48.d = data_143dbb1f8.d
    int32_t var_40_2 = data_143dbb200.d
    var_48:4.d = data_143dbb1fc

sub_141ac8520(arg1, &var_48)
