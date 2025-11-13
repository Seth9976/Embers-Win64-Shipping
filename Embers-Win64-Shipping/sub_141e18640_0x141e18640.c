// 函数: sub_141e18640
// 地址: 0x141e18640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_38 = arg5
uint128_t zmm7 = arg1
uint64_t var_d8
int32_t* rax

if (arg3 == 0)
    int32_t var_d0_1 = arg4[1].d
    rax = &var_d8
    var_d8 = *arg4
else
    rax, zmm7 = sub_141e13530(arg3, &var_d8, arg4)

int32_t rax_2 = rax[2]
uint64_t var_60 = *rax
int32_t* rax_3

if (arg6 == 0)
    int32_t var_d0_2 = arg7[1].d
    rax_3 = &var_d8
    var_d8 = *arg7
else
    rax_3, zmm7 = sub_141e13530(arg6, &var_d8, arg7)

arg1 = zx.o(*rax_3)
int32_t* var_c8
int64_t* rcx_3 = &var_c8
arg5 = arg1
arg1.d = arg1.d f- var_60.d
int32_t rax_5 = rax_3[2]
uint128_t zmm3 = arg9
arg1.d = arg1.d f* *arg8
int32_t rax_6 = arg4[1].d
arg5.d = _mm_shuffle_ps(arg5, arg5, 0x55).d f- var_60:4.d
int32_t var_b0 = rax_6
int32_t var_a4 = arg7[1].d
int32_t rax_8 = arg8[2]
arg5.d = arg5.d f* arg8[1]
var_c8 = arg3
uint128_t zmm2
zmm2.d = 1f f/ zmm7.d
int32_t* var_c0 = arg6
int32_t var_98 = rax_8
arg5.d = arg5.d f+ arg1.d
arg1.d = rax_5.d f- rax_2
arg1.d = arg1.d f* arg8[2]
arg5.d = arg5.d f+ arg1.d
arg1.d = zmm3.d f- arg10
bool cond:0 = __andps_xmmxud_memxud(arg1, data_142d3f770).d f>= 9.99999994e-09f
uint64_t var_b8 = *arg4
uint64_t var_ac = *arg7
uint64_t var_a0 = *arg8
int32_t var_88
uint128_t var_78
int64_t var_68

if (cond:0)
    uint128_t zmm1
    zmm1.d = arg5.d f- zmm3.d
    int32_t var_84_1 = 0
    arg5.d = arg5.d f- arg10
    zmm1.d = zmm1.d f* zmm2.d
    arg5.d = arg5.d f* zmm2.d
    int32_t var_94_1 = zmm1.d
    int32_t var_90_1 = zmm1.d
    zmm1 = arg12
    int32_t var_88_1 = _mm_max_ss(zmm1.d, 0).d
    int32_t var_8c_1 = _mm_min_ss(zmm1.d, 0).d
    int32_t zmm6_1
    int32_t zmm7_1
    zmm6_1, zmm7_1 = sub_141e328d0(rcx_3)
    int64_t r12_1 = sx.q(arg2[1].d)
    int32_t rax_9 = (r12_1 + 1).d
    arg2[1].d = rax_9
    
    if (rax_9 s> *(arg2 + 0xc))
        sub_1405fde00(arg2)
    
    int64_t rax_10 = *arg2
    uint128_t zmm0_1 = var_c8.o
    var_c8 = arg3
    uint128_t* rcx_5 = r12_1 * 0x68
    int32_t* var_c0_1 = arg6
    *(rcx_5 + rax_10) = zmm0_1
    *(rcx_5 + rax_10 + 0x10) = var_b8.o
    *(rcx_5 + rax_10 + 0x20) = var_ac:4.o
    int32_t var_84_2 = 0
    *(rcx_5 + rax_10 + 0x30) = var_98.o
    *(rcx_5 + rax_10 + 0x40) = var_88_1.o
    *(rcx_5 + rax_10 + 0x50) = var_78
    uint128_t zmm1_2 = arg11
    *(rcx_5 + rax_10 + 0x60) = var_68
    var_b8 = *arg4
    var_ac = *arg7
    uint64_t var_a0_1 = *arg8
    int32_t var_b0_1 = arg4[1].d
    zmm0_1 = _mm_min_ss(zmm1_2.d, zmm7_1)
    int32_t var_a4_1 = arg7[1].d
    int32_t var_94_2 = zmm6_1
    int32_t var_8c_2 = zmm0_1.d
    int32_t var_90_2 = zmm6_1
    var_88 = _mm_max_ss(zmm1_2.d, zmm7_1).d
    var_98 = arg8[2]
    sub_141e328d0(&var_c8)
else
    zmm2.d = zmm2.d f* arg5.d
    int32_t var_94 = zmm2.d
    int32_t var_90 = zmm2.d
    zmm2 = arg11
    int32_t var_8c = __minss_xmmss_memss(zmm2.d, arg12).d
    int32_t var_84 = 0
    var_88 = __maxss_xmmss_memss(zmm2.d, arg12).d
    sub_141e328d0(rcx_3)

int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_14 = (rdi_1 + 1).d
arg2[1].d = rax_14

if (rax_14 s> *(arg2 + 0xc))
    sub_1405fde00(arg2)

int64_t result = *arg2
int512_t zmm6
zmm6.o = var_38
int128_t* rcx_8 = rdi_1 * 0x68
*(rcx_8 + result) = var_c8.o
*(rcx_8 + result + 0x10) = var_b8.o
*(rcx_8 + result + 0x20) = var_ac:4.o
*(rcx_8 + result + 0x30) = var_98.o
*(rcx_8 + result + 0x40) = var_88.o
*(rcx_8 + result + 0x50) = var_78
*(rcx_8 + result + 0x60) = var_68
return result
