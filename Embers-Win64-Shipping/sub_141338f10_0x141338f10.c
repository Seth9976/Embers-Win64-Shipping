// 函数: sub_141338f10
// 地址: 0x141338f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *arg3
int64_t r9 = r14[2]
void* r12 = *r14
int64_t rbx = *(arg3[8] + 0x1a0)
int64_t arg_18 = rbx
sub_141080ac0(arg1, arg2, rbx, r9)
j_sub_14137eb70(arg1 + 0x118, arg2, rbx, arg3, data_14395f4d0, 0, nullptr)
int64_t* var_118
var_118.d = 0
sub_1405d0e10(arg2, &arg_18, arg1 + 0x264, *arg3 + 0xab0, 0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(r14[0x1fe].d, data_142d3f770)
temp0[0] = temp0[0] f* 0.00999999978f
var_118.d = 0
uint32_t arg_8 = temp0[0]
sub_1405eb490(arg2, &arg_18, arg1 + 0x26a, &arg_8, 0)
float zmm1[0x4] = *(r14 + 0xfe0)
int32_t var_ec = 0
var_118.d = 0
float var_f8 = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_f0 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_f4 = temp0_1[0]
sub_1405d0e10(arg2, &arg_18, arg1 + 0x210, &var_f8, 0)
float zmm2 = r14[0x1ff].d
int32_t var_ec_1 = 0
float zmm1_1 = zmm2 f* data_14399f5c0.d
var_118.d = 0
float zmm0_2 = zmm2 f* data_14399f5c0:4.d
zmm2 = zmm2 f* data_14399f5c0:8.d
var_f8 = zmm1_1
float var_f4_1 = zmm0_2
float var_f0_1 = zmm2
sub_1405d0e10(arg2, &arg_18, arg1 + 0x216, &var_f8, 0)
void* rax_2 = sub_14139ce70(arg3[5])
void* rcx_6 = *arg3
int32_t r8_7 = *(rcx_6 + 0x15a4) - *(rcx_6 + 0x159c)
int64_t rax_3 = *(rax_2 + 0x14)
uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o(*(rcx_6 + 0x15a0) - *(rcx_6 + 0x1598)))
var_118.d = 0
uint128_t zmm1_2
zmm1_2.d = _mm_cvtepi32_ps(zx.o(rax_3.d)).d f/ zmm0_3.d
arg_8 = zmm1_2.d
zmm1_2.d = _mm_cvtepi32_ps(zx.o((rax_3 u>> 0x20).d)).d f/ _mm_cvtepi32_ps(zx.o(r8_7)).d
int32_t arg_c = zmm1_2.d
sub_1405d0cd0(arg2, &arg_18, arg1 + 0x21c, &arg_8, 0)
int32_t zmm1_3 = *(data_143ebc1f8 + 4)

if (zmm1_3 f>= 0f)
    zmm1_3 = __minss_xmmss_memss(zmm1_3, 0x41200000)
else
    zmm1_3 = (zx.o(0)).d

arg_8 = r14[0x23b].d
arg_c = zmm1_3
var_118.d = 0
sub_1405d0cd0(arg2, &arg_18, arg1 + 0x22e, &arg_8, 0)
float zmm1_4 = r14[0x23c].d
zmm2 = *(r14 + 0x11dc)
float var_e8 = zmm1_4
var_118.d = 0
float var_e0 = zmm2
float var_e4 = 1f - zmm1_4 * 0.5f
float zmm0_6
float zmm6
zmm0_6, zmm6 = sub_1405d0f50(arg2, &arg_18, arg1 + 0x222, &var_e8, 0)
int64_t* rcx_10 = *(r12 + 0x18)
(*(*rcx_10 + 0x20))(rcx_10)
int64_t* rcx_11 = *(r12 + 0x18)
var_f8 = zmm6 / zmm0_6
(*(*rcx_11 + 0x20))(rcx_11)
int32_t var_f0_2 = 0x3f800000
var_118.d = 0
float var_f4_2 = 2.20000005f / zmm0_6
sub_1405d0f50(arg2, &arg_18, arg1 + 0x228, &var_f8, 0)
var_118.b = *(arg4 + 0xd)
void var_d8
sub_141356ee0(&var_d8, *arg3 + 0xde0, *(arg4 + 0xb), *(arg4 + 0xc), 0)
sub_1405d0e10(arg2, &arg_18, arg1 + 0x234, &var_d8, 0)
void var_c8
sub_1405d0e10(arg2, &arg_18, arg1 + 0x23a, &var_c8, 0)
void var_b8
sub_1405d0e10(arg2, &arg_18, arg1 + 0x240, &var_b8, 0)
void var_a8
sub_1405d0e10(arg2, &arg_18, arg1 + 0x246, &var_a8, 0)
void var_98
sub_1405d0e10(arg2, &arg_18, arg1 + 0x24c, &var_98, 0)
void var_88
sub_1405d0e10(arg2, &arg_18, arg1 + 0x252, &var_88, 0)
void var_78
sub_1405d0e10(arg2, &arg_18, arg1 + 0x258, &var_78, 0)
void var_68
int32_t zmm6_1 = sub_1405d0e10(arg2, &arg_18, arg1 + 0x25e, &var_68, 0)
char arg_28

if (arg_28 == 0)
    zmm6_1 = (zx.o(0)).d

arg_28.d = zmm6_1
return sub_1405eb490(arg2, &arg_18, arg1 + 0x270, &arg_28, 0)
