// 函数: sub_140f81a20
// 地址: 0x140f81a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int128_t zmm8
zmm8.d = arg4.d f+ *(arg3 + 0x30)
int96_t zmm0 = (*(arg10 + 0x10)).12
*(arg3 + 0x34)
int128_t zmm12 = *(arg3 + 0x40)
float zmm0_1
float zmm8_1
float zmm9_1
zmm0_1, zmm8_1, zmm9_1 = sub_140f01250(arg6 + 8)
float zmm0_2[0x4] = sub_140eec280(zmm0_1)
int64_t* rcx_2 = data_143e29f28
float zmm13[0x4] = zmm0_2
(*(*rcx_2 + 0x50))(rcx_2)
void* rsi = *(arg1 + 8)
zmm0_2[0].q = zmm0_2[0].q f- *(rsi + 0x10)
float zmm7 = 1f f/ *(arg7 + 8)
float zmm2[0x4]

if (zmm0_2[0].q f>= 0.10000000149011612)
    zmm0_2[0] = fconvert.s(zmm0_2[0].q)
    zmm0_2[0] = zmm0_2[0] * 3.14159274f
    zmm0_2[0] = zmm0_2[0] + zmm0_2[0]
    zmm0_2[0] = zmm0_2[0] + 1.57079637f
    zmm2 = sinf(zmm0_2[0])
    zmm2[0] = zmm2[0] * 0.5f
    zmm2[0] = zmm2[0] + 1f
    int32_t rcx_3 = int.d(zmm2[0])
    
    if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm2[0]))
        zmm2 =
            _mm_cvtepi32_ps(zx.o(rcx_3 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
else
    zmm2 = 0x3f800000

bool cond:0 = *(rsi + 9) != 1
bool rax_5 = *(rsi + 8)
zmm2[0] = zmm2[0] * zmm2[0]

if (not(cond:0))
    rax_5 = rax_5 == 0

int64_t var_108

if (rax_5 != 1)
    var_108 = data_143dbb1f0
else
    var_108.d = arg5[0]
    var_108:4.d = 0

bool cond:2 = *(arg1 + 0x28) == 0
zmm0_2 = zmm0.d
zmm0_2[0] = zmm0_2[0] f* *arg10
uint128_t zmm1_1
zmm1_1.d = zmm0:4.d.d f* arg10[1]
zmm2[0] = zmm2[0] f* arg10[3]
float zmm10[0x4] = var_108.d
float zmm11[0x4] = var_108:4.d
float var_f8 = zmm0_2[0]
zmm0_2 = zmm0:8.d
zmm0_2[0] = zmm0_2[0] f* arg10[2]
int32_t var_f4 = zmm1_1.d
float var_ec = zmm2[0]
float var_f0 = zmm0_2[0]

if (not(cond:2))
    int64_t* rcx_5 = *(arg1 + 0x20)
    
    if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
        int64_t* rcx_6
        
        if (*(arg1 + 0x28) == 0)
            rcx_6 = nullptr
        else
            rcx_6 = *(arg1 + 0x20)
        
        *(arg1 + 0x10) = (*(*rcx_6 + 0x48))(rcx_6)

int32_t zmm4 = *(arg7 + 0x24)
zmm11[0] = zmm11[0] + zmm9_1
zmm2 = *(arg7 + 0x1c)
zmm10[0] = zmm10[0] + zmm8_1
zmm8_1 = *(arg7 + 8)
int32_t zmm3 = *(arg7 + 0x28)
zmm1_1 = *(arg7 + 0x20)
char rdx = *(arg7 + 0x34) & 1
void* r9 = *(arg1 + 0x10)
zmm10[0] = zmm10[0] * zmm7
zmm11[0] = zmm11[0] * zmm7
int128_t* var_110 = &var_f8
zmm12.d = zmm12.d f* zmm7
char var_a4
char var_a4_1 = (rdx * 2) | (var_a4 & 0xfc)
zmm11[0] = zmm11[0] f* zmm4
zmm10[0] = zmm10[0] * zmm2[0]
int64_t var_cc = 0
zmm9_1 = zmm8_1 * zmm13[0]
zmm10[0] = zmm10[0] + zmm11[0]
var_108.d = zmm2[0]
var_108:4.d = zmm1_1.d
float temp0_5 = _mm_max_ss(zmm9_1, 0x3f800000)
int32_t var_100 = zmm4
int32_t var_fc = zmm3
zmm10[0] = zmm10[0] f+ *(arg7 + 0x2c)
zmm9_1 = temp0_5 * zmm7
zmm7 = zmm8_1 * zmm10[0]
zmm10[0] = zmm10[0] f* zmm1_1.d
zmm7 = zmm7 f+ *(arg7 + 0xc)
float var_bc[0x4] = var_108.o
float zmm6 = zmm8_1 * zmm11[0]
zmm11[0] = zmm11[0] f* zmm3
zmm6 = zmm6 f+ *(arg7 + 0x10)
float var_d8 = zmm7
zmm10[0] = zmm10[0] + zmm11[0]
float var_d0 = zmm8_1
float var_c4 = zmm9_1
int32_t var_c0 = zmm12.d
float var_d4 = zmm6
zmm10[0] = zmm10[0] f+ *(arg7 + 0x30)
int64_t var_ac = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
sub_140db3600(arg8, arg9, &var_d8, r9, (arg11 ^ 1) << 5, var_110)
__security_check_cookie(rax_1 ^ &var_138)
return zx.q(arg9)
