// 函数: sub_142633d60
// 地址: 0x142633d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
uint64_t i_2
uint64_t i_3 = i_2
int128_t zmm10 = arg4
float zmm11[0x4]
float var_98[0x4] = zmm11
int128_t zmm13
int128_t var_b8 = zmm13
int128_t zmm15
int128_t var_d8 = zmm15
int32_t* var_170 = arg2
sub_14262df10(arg1, arg2, arg7)
float zmm8[0x4] = 0x3f800000
*arg1 = *arg9
float zmm0[0x4] = 0x3f800000
arg1[1].q = arg9[1].q
*(arg1 + 0x18) = *(arg9 + 0x18)
arg1[2].d = zmm10.d
zmm0[0] = 1f f/ *(arg1 + 0x14)
uint128_t zmm1
zmm1.d = 1f f/ zmm10.d
*(arg1 + 0x1c) = zmm0[0]
*(arg1 + 0x24) = zmm1.d
*arg8 = 0
arg8[2] = 0

if (arg10 != 0)
    *arg10 = 0

float zmm7[0x4] = arg7[2]
uint128_t zmm12 = *arg7
int32_t* rdi_2 = zx.q(*(arg1 + 0x18)) * 0x84 + arg1[3].q
int32_t* r12 = &rdi_2[0x20]
uint128_t zmm6 = atan2f(zmm7[0], zmm12.d)
int32_t i_4 = *r12
void var_164
float zmm0_1[0x4]
int512_t zmm9
float zmm14[0x4]

if (i_4 s> 0)
    void* rsi_1 = &var_164
    i_2 = zx.q(i_4)
    uint64_t i
    
    do
        zmm0_1 = zx.o(0)
        zmm1.d = zmm6.d f+ *rdi_2
        zmm0_1[0] = zmm1.d
        zmm0_1, zmm6, zmm7, zmm8, zmm9, zmm10, zmm12, zmm14 = __libm_sse2_sincosf_(zmm0_1)
        zmm1.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 1).d f* rdi_2[0x10]
        zmm0_1[0] = zmm0_1[0] f* rdi_2[0x10]
        rdi_2 = &rdi_2[1]
        *(rsi_1 - 4) = zmm1.d
        *rsi_1 = zmm0_1[0]
        rsi_1 += 8
        i = i_2
        i_2 -= 1
    while (i != 1)

zmm13 = *arg1
zmm11 = zmm8
zmm0_1 = arg5
zmm11[0] = zmm11[0] f- zmm13.d
zmm9.o = 0x7f7fffff
zmm10.d = zmm10.d f* zmm0_1[0]
i_2.b = 0
int32_t i_1 = 0
zmm15.d = zmm13.d f* zmm12.d
zmm13.d = zmm13.d f* zmm7[0]
zmm11[0] = zmm11[0] f* zmm10.d

if (i_4 s> 0)
    zmm10.d = zmm10.d f+ 0.00100000005f
    zmm8 = arg3
    int32_t* rsi_2 = &var_164
    float var_c8_1[0x4] = zmm14
    zmm14 = 0x41a00000
    zmm10.d = zmm10.d f* zmm10.d
    int32_t var_18c_1 = 0
    
    do
        zmm6.d = zmm11.d f* rsi_2[-1]
        zmm11[0] = zmm11[0] f* *rsi_2
        zmm6.d = zmm6.d f+ zmm15.d
        zmm11[0] = zmm11[0] f+ zmm13.d
        zmm0_1 = zmm6
        int32_t var_190 = zmm6.d
        zmm0_1[0] = zmm0_1[0] f* zmm6.d
        float var_188_1 = zmm11[0]
        zmm1.d = zmm11.d f* zmm11[0]
        zmm1.d = zmm1.d f+ zmm0_1[0]
        
        if (not(zmm1.d f> zmm10.d))
            float zmm9_1
            int32_t zmm12_1
            zmm0_1, zmm6, zmm7, zmm8, zmm9_1, zmm10, zmm11, zmm12_1, zmm13, zmm14, zmm15 =
                sub_14262e0e0(arg1, &var_190, zmm14, var_170, zmm8[0], arg6, arg7, arg10)
            
            if (not(zmm0_1[0] >= zmm9_1) && not(zmm0_1[0] f< zmm12_1))
                *arg8 = zmm6.d
                i_2.b = 1
                arg8[2] = zmm7[0]
                zmm0_1[0]
                arg8[1] = 0
        
        i_1 += 1
        rsi_2 = &rsi_2[2]
    while (i_1 s< *r12)
    
    zmm8 = 0x3f800000
    zmm0_1 = arg5

if (i_2.b != 0)
    zmm8[0] = zmm8[0] / zmm0_1[0]
    zmm8[0] = zmm8[0] f* *arg8
    zmm1.d = zmm8.d f* arg8[1]
    zmm8[0] = zmm8[0] f* arg8[2]
    *arg8 = zmm8[0]
    arg8[1] = zmm1.d
    arg8[2] = zmm8[0]
else
    *arg8 = *arg7
    arg8[1] = arg7[1]
    arg8[2] = arg7[2]

uint64_t result = zx.q(*r12)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
