// 函数: sub_142020d40
// 地址: 0x142020d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t* r15 = arg4
TEB* gsbase
uint128_t zmm6

if (data_143f406e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f406e8)
    
    if (data_143f406e8 == 0xffffffff)
        zmm6 = sub_140b58170(&data_143f406e0, "ComponentIsVisibleFrom", 1)
        _Init_thread_footer(&data_143f406e8)

arg4.b = 1
void var_1c8
void var_e8
sub_141eb54c0(&var_e8, data_143f406e0, &var_1c8, arg4.b, arg3)
sub_141eb8b70(&var_e8, r15)
void* rax_4 = *(arg1 + 0xa8)

if (rax_4 == 0)
    rax_4 = sub_141ee69e0(arg1)

uint128_t zmm1 = zx.o(*(arg1 + 0x100))
bool cond:0 = zmm1.d f!= *arg2
int32_t rcx_5 = *(arg1 + 0x108)
int32_t rcx_6 = arg2[2]
uint64_t var_1a0 = *arg2
uint64_t var_1b0 = zmm1.q
uint128_t zmm0

if (not(cond:0) && not(var_1b0:4.d.d f!= arg2[1]) && not(rcx_5.d f!= arg2[2]))
    zmm0.d = rcx_6.d f+ 0.00999999978f
    int32_t var_198_1 = zmm0.d

int128_t* rbx
float zmm7[0x4]
uint128_t zmm8

if (arg5 == 0x21)
label_142020ea8:
    zmm0 = *(arg1 + 0x1d0)
    uint128_t var_48_1 = zmm6
    zmm6 = *arg2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
    zmm6.d = zmm6.d f- zmm0.d
    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    float var_188_1 = temp0_1[0]
    float var_58_1[0x4] = zmm7
    zmm7 = arg2[1]
    zmm7[0] = zmm7[0] f- zmm1.d
    uint128_t var_68_1 = zmm8
    zmm8.d = arg2[2].d f- temp0_1[0]
    int32_t var_190 = zmm0.d
    int32_t var_18c_1 = zmm1.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm1.d = zmm8.d f* zmm8.d
    zmm7[0] = zmm7[0] f+ zmm0.d
    zmm7[0] = zmm7[0] f+ zmm1.d
    int32_t var_1c0
    
    if (zmm7[0] != 1f)
        if (zmm7[0] >= 9.99999994e-09f)
            zmm0 = zmm7
            uint128_t zmm5_1 = _mm_rsqrt_ss(zmm0.d, zmm0.d)
            float zmm2[0x4] = 0x3f000000
            uint128_t zmm3
            zmm3.d = zmm0.d f* 0.5f
            zmm0.d = zmm5_1.d f* zmm5_1.d
            zmm1.d = zmm3.d f* zmm0.d
            zmm2[0] = 0.5f f- zmm1.d
            zmm0.d = zmm5_1.d f* zmm2[0]
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm1.d = zmm5_1.d f* zmm5_1.d
            zmm3.d = zmm3.d f* zmm1.d
            zmm0.d = zmm5_1.d f* (0.5f f- zmm3.d)
            zmm5_1.d = zmm5_1.d f+ zmm0.d
            zmm1 = zmm5_1
            zmm0.d = zmm5_1.d f* zmm6.d
            zmm5_1.d = zmm5_1.d f* zmm8.d
            var_1c0 = zmm0.d
            zmm1.d = zmm1.d f* zmm7[0]
            int32_t var_1b8_3 = zmm5_1.d
        else
            zmm1 = data_143dbb1fc
            var_1c0 = data_143dbb1f8.d
            int32_t var_1b8_2 = data_143dbb200.d
        
        int32_t var_1bc_2 = zmm1.d
    else
        var_1c0 = zmm6.d
        float var_1bc_1 = zmm7[0]
        int32_t var_1b8_1 = zmm8.d
    
    void var_17c
    int128_t* rax_7 = sub_141eb5cd0(&var_17c, *(arg1 + 0xa0), arg1, &var_190, &var_1c0)
    *arg6 = *rax_7
    arg6[1] = rax_7[1]
    arg6[2] = rax_7[2]
    arg6[3] = rax_7[3]
    arg6[4] = rax_7[4]
    arg6[5] = rax_7[5]
    arg6[6] = rax_7[6]
    arg6[7] = rax_7[7]
    arg6[8].q = rax_7[8].q
    rbx.b = 1
else
    void* var_1e8
    var_1e8.d = arg5
    char rax_5
    int32_t r8_2
    rax_5, r8_2, zmm6, zmm7, zmm8 =
        sub_141ec6a20(rax_4, arg6, &var_1a0, &var_1b0, var_1e8.b, &var_e8, &data_143f3a660)
    
    if (rax_5 == 0)
        goto label_142020ea8
    
    rbx.b = sub_1405a66e0(&arg6[7], arg1, r8_2) != 0
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t var_a8

if (var_a8 != 0)
    sub_140a74f90(var_a8)

__security_check_cookie(rax_1 ^ &var_208)
return zx.q(rbx.b)
