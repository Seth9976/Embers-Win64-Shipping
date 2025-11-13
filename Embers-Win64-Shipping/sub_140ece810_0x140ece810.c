// 函数: sub_140ece810
// 地址: 0x140ece810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
float zmm9[0x4] = *arg3
float zmm6[0x4] = 0x40a00000
zmm9[0] = zmm9[0] * 0.300000012f
float zmm7[0x4]

if (zmm9[0] >= 5f)
    zmm7 = _mm_min_ss(zmm9[0], 0x43160000)
else
    zmm7 = 0x40a00000

float zmm8[0x4] = *(arg3 + 4)
zmm8[0] = zmm8[0] * 0.300000012f

if (not(zmm8[0] < 5f))
    zmm6 = _mm_min_ss(zmm8[0], 0x43160000)

int32_t var_d0 = 1
zmm9[0] = zmm9[0] - zmm7[0]
int32_t* var_d8 = nullptr
zmm8[0] = zmm8[0] - zmm6[0]
sub_1405a4d70(&var_d8)
int32_t* rax_2 = var_d8
*rax_2 = zmm7[0]
rax_2[1] = zmm6[0]
int64_t rdi = sx.q(var_d0)
int32_t rax_3 = (rdi + 1).d

if (rax_3 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_4 = var_d8
rax_4[rdi * 2] = zmm9[0]
rax_4[rdi * 2 + 1] = zmm6[0]
int64_t rdi_1 = sx.q(rax_3)
int32_t rax_5 = (rdi_1 + 1).d

if (rax_5 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_6 = var_d8
rax_6[rdi_1 * 2] = zmm9[0]
rax_6[rdi_1 * 2 + 1] = zmm8[0]
int64_t rdi_2 = sx.q(rax_5)
int32_t rax_7 = (rdi_2 + 1).d

if (rax_7 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_8 = var_d8
rax_8[rdi_2 * 2] = zmm7[0]
rax_8[rdi_2 * 2 + 1] = zmm8[0]
int64_t rdi_3 = sx.q(rax_7)
int32_t rax_9 = (rdi_3 + 1).d
var_d0 = rax_9

if (rax_9 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_10 = var_d8
int32_t var_e0 = 0x3f800000
rax_10[rdi_3 * 2] = zmm7[0]
rax_10[rdi_3 * 2 + 1] = zmm6[0]
char rcx_5 = *(arg3 + 0x34) & 1
int128_t zmm0_1 = arg3[1].d
int32_t zmm2 = *(arg3 + 8)
int32_t var_c8 = (*(arg3 + 0xc)).d
int32_t var_c4 = zmm0_1.d
int64_t var_b4 = *arg3
int32_t var_c0 = zmm2
int64_t var_bc = 0
int128_t var_ac = *(arg3 + 0x1c)
int64_t var_9c = *(arg3 + 0x2c)
sub_140db3b20(arg4, arg5, &var_c8, &var_d8, 0, &data_14399f5c0, 1, var_e0)
int32_t* rcx_7 = var_d8

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

var_d8 = nullptr
int32_t var_d0_1 = 1
sub_1405a4d70(&var_d8)
*var_d8 = 0
int64_t rdi_4 = sx.q(var_d0_1)
int32_t rax_13 = (rdi_4 + 1).d

if (rax_13 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_14 = var_d8
rax_14[rdi_4 * 2] = zmm9[0]
rax_14[rdi_4 * 2 + 1] = 0
int64_t rdi_5 = sx.q(rax_13)
int32_t rax_15 = (rdi_5 + 1).d

if (rax_15 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_16 = var_d8
rax_16[rdi_5 * 2] = zmm9[0]
rax_16[rdi_5 * 2 + 1] = zmm8[0]
int64_t rdi_6 = sx.q(rax_15)
int32_t rax_17 = (rdi_6 + 1).d

if (rax_17 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_18 = var_d8
rax_18[rdi_6 * 2 + 1] = zmm8[0]
rax_18[rdi_6 * 2] = 0
int64_t rdi_7 = sx.q(rax_17)
int32_t rax_19 = (rdi_7 + 1).d
var_d0_1 = rax_19

if (rax_19 s> 0)
    sub_1405a4d70(&var_d8)

int32_t var_e0_1 = 0x3f800000
char var_e8_1 = 1
int128_t* var_f0_1 = &data_14399f5c0
*(var_d8 + (rdi_7 << 3)) = 0
char rcx_13 = *(arg3 + 0x34) & 1
int128_t zmm1_1 = arg3[1].d
int32_t zmm2_1 = *(arg3 + 8)
var_c8 = (*(arg3 + 0xc)).d
int32_t var_c4_1 = zmm1_1.d
int64_t var_b4_1 = *arg3
int32_t var_c0_1 = zmm2_1
int64_t var_bc_1 = 0
int128_t var_ac_1 = *(arg3 + 0x1c)
int64_t var_9c_1 = *(arg3 + 0x2c)
int32_t zmm6_1 = sub_140db3b20(arg4, arg5, &var_c8, &var_d8, 0, var_f0_1, var_e8_1, var_e0_1)
int32_t* rcx_15 = var_d8

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

var_d8 = nullptr
int32_t var_d0_2 = 1
sub_1405a4d70(&var_d8)
*var_d8 = 0
int64_t rdi_8 = sx.q(var_d0_2)
int32_t rax_23 = (rdi_8 + 1).d
var_d0_2 = rax_23

if (rax_23 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_24 = var_d8
int32_t var_e0_2 = 0x3f800000
char var_e8_2 = 1
int128_t* var_f0_2 = &data_14399f5c0
rax_24[rdi_8 * 2] = zmm7[0]
rax_24[rdi_8 * 2 + 1] = zmm6_1
char rcx_18 = *(arg3 + 0x34) & 1
int128_t zmm1_2 = arg3[1].d
int32_t zmm2_2 = *(arg3 + 8)
var_c8 = (*(arg3 + 0xc)).d
int32_t var_c4_2 = zmm1_2.d
int64_t var_b4_2 = *arg3
int32_t var_c0_2 = zmm2_2
int64_t var_bc_2 = 0
int128_t var_ac_2 = *(arg3 + 0x1c)
int64_t var_9c_2 = *(arg3 + 0x2c)
int32_t zmm6_2 = sub_140db3b20(arg4, arg5, &var_c8, &var_d8, 0, var_f0_2, var_e8_2, var_e0_2)
int32_t* rcx_20 = var_d8

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

var_d8 = nullptr
int32_t var_d0_3 = 1
sub_1405a4d70(&var_d8)
int32_t* rax_26 = var_d8
*rax_26 = zmm9[0]
rax_26[1] = 0
int64_t rdi_9 = sx.q(var_d0_3)
int32_t rax_27 = (rdi_9 + 1).d
var_d0_3 = rax_27

if (rax_27 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_28 = var_d8
int32_t var_e0_3 = 0x3f800000
char var_e8_3 = 1
int128_t* var_f0_3 = &data_14399f5c0
rax_28[rdi_9 * 2] = zmm9[0]
rax_28[rdi_9 * 2 + 1] = zmm6_2
char rcx_23 = *(arg3 + 0x34) & 1
int128_t zmm1_3 = arg3[1].d
int32_t zmm2_3 = *(arg3 + 8)
var_c8 = (*(arg3 + 0xc)).d
int32_t var_c4_3 = zmm1_3.d
int64_t var_b4_3 = *arg3
int32_t var_c0_3 = zmm2_3
int64_t var_bc_3 = 0
int128_t var_ac_3 = *(arg3 + 0x1c)
int64_t var_9c_3 = *(arg3 + 0x2c)
sub_140db3b20(arg4, arg5, &var_c8, &var_d8, 0, var_f0_3, var_e8_3, var_e0_3)
int32_t* rcx_25 = var_d8

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

var_d8 = nullptr
int32_t var_d0_4 = 1
sub_1405a4d70(&var_d8)
int32_t* rax_30 = var_d8
*rax_30 = zmm9[0]
rax_30[1] = zmm8[0]
int64_t rdi_10 = sx.q(var_d0_4)
int32_t rax_31 = (rdi_10 + 1).d
var_d0_4 = rax_31

if (rax_31 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_32 = var_d8
int32_t var_e0_4 = 0x3f800000
char var_e8_4 = 1
int128_t* var_f0_4 = &data_14399f5c0
rax_32[rdi_10 * 2] = zmm9[0]
rax_32[rdi_10 * 2 + 1] = zmm8[0]
char rcx_28 = *(arg3 + 0x34) & 1
int128_t zmm1_4 = arg3[1].d
int32_t zmm2_4 = *(arg3 + 8)
var_c8 = (*(arg3 + 0xc)).d
int32_t var_c4_4 = zmm1_4.d
int64_t var_b4_4 = *arg3
int32_t var_c0_4 = zmm2_4
int64_t var_bc_4 = 0
int128_t var_ac_4 = *(arg3 + 0x1c)
int64_t var_9c_4 = *(arg3 + 0x2c)
sub_140db3b20(arg4, arg5, &var_c8, &var_d8, 0, var_f0_4, var_e8_4, var_e0_4)
int32_t* rcx_30 = var_d8

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

var_d8 = nullptr
int32_t var_d0_5 = 1
sub_1405a4d70(&var_d8)
int32_t* rax_34 = var_d8
rax_34[1] = zmm8[0]
*rax_34 = 0
int64_t rdi_11 = sx.q(var_d0_5)
int32_t rax_35 = (rdi_11 + 1).d
var_d0_5 = rax_35

if (rax_35 s> 0)
    sub_1405a4d70(&var_d8)

int32_t* rax_36 = var_d8
int32_t var_e0_5 = 0x3f800000
char var_e8_5 = 1
int128_t* var_f0_5 = &data_14399f5c0
rax_36[rdi_11 * 2] = zmm7[0]
rax_36[rdi_11 * 2 + 1] = zmm8[0]
char rdx_23 = *(arg3 + 0x34) & 1
int128_t zmm1_5 = arg3[1].d
char var_94
char rax_37 = ((rcx_28 * 2) | (((rcx_23 * 2)
    | (((rcx_18 * 2) | (((rcx_13 * 2) | (((rcx_5 * 2) | (var_94 & 0xfc)) & 0xfc)) & 0xfc)) & 0xfc))
    & 0xfc)) & 0xfc
int32_t zmm2_5 = *(arg3 + 8)
var_c8 = (*(arg3 + 0xc)).d
int32_t var_c4_5 = zmm1_5.d
char var_94_6 = (rdx_23 * 2) | rax_37
int64_t var_b4_5 = *arg3
int32_t var_c0_5 = zmm2_5
int64_t var_bc_5 = 0
int128_t var_ac_5 = *(arg3 + 0x1c)
int64_t var_9c_5 = *(arg3 + 0x2c)
sub_140db3b20(arg4, arg5, &var_c8, &var_d8, 0, var_f0_5, var_e8_5, var_e0_5)
int32_t* rcx_34 = var_d8

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(arg5)
