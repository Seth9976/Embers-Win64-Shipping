// 函数: sub_14178e9a0
// 地址: 0x14178e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
float zmm1 = *(arg2 + 0x30) * arg8[2]
float var_168 = *(arg2 + 0x28) * *arg8
float var_160 = zmm1
float var_164 = *(arg2 + 0x2c) * arg8[1]
void** var_f8
sub_141703a00(&var_f8, *(arg2 + 0x10), &var_168, (zx.o(0)).d)
bool cond:0 = *(arg1 + 0x70) == 0
float zmm0_1[0x4] = arg3[1]
void* var_148
int64_t* rcx_1 = &var_148
int128_t zmm5 = *arg3
zmm0_1[0] = zmm0_1[0] * *arg8
void*** var_158 = &var_f8
float temp0[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
temp0[0] = temp0[0] * arg8[1]
int128_t var_68
int128_t* var_150 = &var_68
int32_t* var_140 = &arg_20
float zmm3[0x4] = data_14399f668
float var_78[0x4] = zmm0_1
float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
temp0_1[0] = temp0_1[0] * arg8[2]
void**** var_120 = &var_158
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, 0)
float temp0_3[0x4] = _mm_unpacklo_ps(zmm0_1, temp0_1[0].q)
zmm0_1 = data_14399f670
float temp0_4[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
int64_t var_118 = arg7
float temp0_5[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
int64_t var_110 = arg5
float var_48[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1[0].q), temp0_5[0].q)
int128_t var_98 = zmm5
int128_t var_88 = zmm5
var_68 = zmm5
float var_58[0x4] = temp0_4
var_148 = arg2
int128_t* var_138 = arg3
void* var_130 = arg1
float* var_128 = arg8
int64_t var_108 = arg6
char rax_5

if (cond:0)
    rax_5 = sub_141784110(rcx_1, arg1 + 0x60)
else
    rax_5 = sub_141788990(rcx_1, arg1 + 0x50)

var_f8 = &data_142fc5020
int64_t* var_d8

if (var_d8 != 0)
    var_d8[1].d -= 1
    
    if (var_d8[1].d == 1)
        (**var_d8)(var_d8)
        int32_t rbx_1 = *(var_d8 + 0xc)
        *(var_d8 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*var_d8 + 8))(var_d8, zx.q(rbx_1))

sub_141706890(&var_f8)
__security_check_cookie(rax_1 ^ &var_188)
return zx.q(rax_5)
