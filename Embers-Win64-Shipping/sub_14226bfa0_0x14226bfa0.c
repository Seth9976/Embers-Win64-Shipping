// 函数: sub_14226bfa0
// 地址: 0x14226bfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2

if (rbx == 0)
    *arg1 = data_143dbb0c0
    arg1[1] = data_143dbb0d0
    arg1[2] = data_143dbb0e0
    return arg1

int64_t* rdi_1 = nullptr
int64_t* rcx_1 = nullptr

if ((*(*rbx + 0x20))(rbx, "PxRigidBody") != 0)
    rcx_1 = rbx

int32_t var_128
int128_t var_108

if (rcx_1 == 0)
    if (rbx[1].w == 6)
        rdi_1 = rbx
    
    if (rdi_1 != 0 && (*(*rdi_1 + 0x1b8))(rdi_1, &var_108) != 0)
        var_128.o = var_108
        int32_t var_f8
        int32_t var_118_2 = var_f8.d
        int32_t var_f0
        int32_t var_110_2 = var_f0.d
        int32_t var_f4
        int32_t var_114_2 = var_f4.d
        sub_1417cbc40(arg1, &var_128)
        return arg1
    
    (*(*rbx + 0xa0))(rbx, &var_128)
    sub_1417cbc40(arg1, &var_128)
    return arg1

void var_c8
(*(*rcx_1 + 0xf0))(rcx_1, &var_c8)

if (rbx[1].w == 6)
    rdi_1 = rbx

int32_t var_e8
char rax_4

if (rdi_1 != 0)
    rax_4 = (*(*rdi_1 + 0x1b8))(rdi_1, &var_e8)

int128_t zmm6
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
int128_t zmm13
int128_t zmm14

if (rdi_1 == 0 || rax_4 == 0)
    (*(*rbx + 0xa0))(rbx, &var_128)
    int32_t var_110
    zmm14 = var_110
    int32_t var_114
    zmm13 = var_114
    int32_t var_118
    zmm6 = var_118
    int32_t var_11c
    zmm12 = var_11c
    int32_t var_120
    zmm11 = var_120
    int32_t var_124
    zmm10 = var_124
    zmm9 = var_128
else
    zmm9 = var_e8
    int32_t var_e4
    zmm10 = var_e4
    int32_t var_e0
    zmm11 = var_e0
    int32_t var_dc
    zmm12 = var_dc
    int32_t var_d8
    zmm6 = var_d8
    int32_t var_d4
    zmm13 = var_d4
    int32_t var_d0
    zmm14 = var_d0
    var_128 = zmm9.d
    int32_t var_124_1 = zmm10.d
    int32_t var_120_1 = zmm11.d
    int32_t var_11c_1 = zmm12.d
    int32_t var_118_1 = zmm6.d
    int32_t var_114_1 = zmm13.d
    int32_t var_110_1 = zmm14.d

float var_b4
float zmm3 = var_b4 + var_b4
int32_t var_b8
int128_t zmm7 = var_b8
float var_b0
float zmm5_1 = var_b0 + var_b0
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm4_1
zmm4_1.d = zmm12.d f* zmm12.d
int128_t zmm0
zmm0.d = zmm9.d f* zmm7.d
zmm4_1.d = zmm4_1.d f- 0.5f
int128_t zmm8
zmm8.d = zmm10.d f* zmm5_1
int128_t zmm1
zmm1.d = zmm11.d f* zmm5_1
float zmm2 = zmm10.d * zmm3 f+ zmm0.d
zmm0.d = zmm11.d f* zmm3
zmm8.d = zmm8.d f- zmm0.d
zmm2 = zmm2 f+ zmm1.d
zmm0.d = zmm4_1.d f* zmm7.d
zmm8.d = zmm8.d f* zmm12.d
zmm1.d = zmm9.d f* zmm2
zmm8.d = zmm8.d f+ zmm0.d
zmm0 = zmm9
zmm9.d = zmm9.d f* zmm3
zmm0.d = zmm0.d f* zmm5_1
zmm8.d = zmm8.d f+ zmm1.d
zmm1.d = zmm10.d f* zmm2
zmm10.d = zmm10.d f* zmm7.d
zmm8.d = zmm8.d f+ zmm6.d
zmm6.d = zmm11.d f* zmm7.d
zmm9.d = zmm9.d f- zmm10.d
zmm11.d = zmm11.d f* zmm2
zmm6.d = zmm6.d f- zmm0.d
zmm0.d = zmm4_1.d f* zmm3
zmm9.d = zmm9.d f* zmm12.d
zmm6.d = zmm6.d f* zmm12.d
zmm4_1.d = zmm4_1.d f* zmm5_1
zmm6.d = zmm6.d f+ zmm0.d
zmm9.d = zmm9.d f+ zmm4_1.d
zmm6.d = zmm6.d f+ zmm1.d
zmm9.d = zmm9.d f+ zmm11.d
zmm6.d = zmm6.d f+ zmm13.d
zmm9.d = zmm9.d f+ zmm14.d
float var_a8[0x4]
float* rax_6
int32_t zmm6_1
int32_t zmm8_1
int32_t zmm9_1
rax_6, zmm6_1, zmm8_1, zmm9_1 = sub_1417c7990(&var_128, &var_a8, &var_c8)
var_108.d = *rax_6
var_108:4.d = rax_6[1]
var_108:8.d = rax_6[2]
var_108:0xc.d = rax_6[3]
int32_t var_f8_1 = zmm8_1
int32_t var_f4_1 = zmm6_1
int32_t var_f0_1 = zmm9_1
sub_1417cbc40(arg1, &var_108)
return arg1
