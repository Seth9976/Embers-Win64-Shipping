// 函数: sub_141135bf0
// 地址: 0x141135bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_1d8
__builtin_memset(&var_1d8, 0, 0x20)
int32_t rdi = 0
int64_t* rcx = *(arg4 + 8)
float var_1b8[0x4] = *(rcx + 0x80)
float var_1a8[0x4] = *(rcx + 0x90)
float var_198[0x4] = *(rcx + 0xa0)
float var_188[0x4] = *(rcx + 0xb0)
int128_t var_158 = zx.o(0)
int64_t var_178
__builtin_memset(&var_178, 0, 0x1c)
int32_t var_148 = 0xffffffff
void var_138
int64_t arg_18
int64_t arg_20
(*(*rcx + 0xa0))(zx.o(0), &arg_18, &var_138, &arg_20, &var_1d8)
int32_t rax_1 = sub_141fe0f60(&data_143f3d8f0, arg_18)

if (rax_1 == 0xffffffff)
    rax_1.b = 0
    return rax_1

float var_238
int32_t r15_3
float zmm1[0x4]

if (arg1 == 0)
    void* rcx_8 = arg4 + 0x88
    void* rax_10 = *(rcx_8 + 8)
    
    if (rax_10 != 0)
        rcx_8 = rax_10
    
    r15_3 = *rcx_8
else
    *(arg3 + 0x18b4) += 1
    int64_t r13_1 = sx.q(*(arg3 + 0x18f0))
    int32_t rax_2 = (r13_1 + 1).d
    *(arg3 + 0x18f0) = rax_2
    
    if (rax_2 s> *(arg3 + 0x18f4))
        sub_1405a4d70(arg3 + 0x18e8)
    
    void* const rbx_1 = 0x1a58
    *(*(arg3 + 0x18e8) + (r13_1 << 3)) = arg4
    void* rcx_2 = *(arg4 + 8)
    zmm1 = *(rcx_2 + 0xc0)
    int32_t rax_4 = *(rcx_2 + 0xd8)
    bool cond:0_1 = *(rcx_2 + 0x32) == 2
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    
    if (cond:0_1)
        rbx_1 = 0x1a68
    
    var_238 = zmm1[0]
    void* rbx_2 = rbx_1 + arg3
    float var_234_1 = temp0_1[0]
    float var_230_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    int64_t r15_1 = sx.q(*(rbx_2 + 8))
    float var_22c_1 = rax_4[0]
    int32_t rax_5 = (r15_1 + 1).d
    *(rbx_2 + 8) = rax_5
    
    if (rax_5 s> *(rbx_2 + 0xc))
        sub_1405a4f90(rbx_2)
    
    void* rbx_3 = arg4 + 0x88
    *(*rbx_2 + r15_1 * 0x10) = var_238.o
    r15_3 = arg5 + arg6[1].d
    bool cond:1_1 = *(rbx_3 + 0x14) == 1
    *(rbx_3 + 0x10) = 0
    
    if (not(cond:1_1))
        sub_1410b3a30(rbx_3, 1)
        rdi = *(arg4 + 0x98)
    
    *(rbx_3 + 0x10) = rdi + 1
    
    if (rdi + 1 s> *(rbx_3 + 0x14))
        sub_1405e3f00(rbx_3, rdi)
    
    void* rax_8 = *(rbx_3 + 8)
    
    if (rax_8 != 0)
        rbx_3 = rax_8
    
    *(rbx_3 + (sx.q(rdi) << 2)) = r15_3

int64_t rbx_4 = sx.q(arg6[1].d)
int32_t rax_11 = (rbx_4 + 1).d
arg6[1].d = rax_11

if (rax_11 s> *(arg6 + 0xc))
    sub_1405a4cf0(arg6)

*(*arg6 + (rbx_4 << 2)) = r15_3
int128_t* rax_14 = *(arg4 + 8) + 0xc0
int64_t rdi_1 = sx.q(arg7[1].d)
int128_t zmm3 = *(rax_14 + 8)
float zmm0[0x4] = *(rax_14 + 0x14)
int128_t zmm5 = *rax_14
int128_t zmm11
zmm11.d = zmm3.d f- zmm0[0]
int128_t zmm4 = *(rax_14 + 4)
float zmm8[0x4] = zmm0
int128_t zmm2 = *(rax_14 + 0xc)
zmm8[0] = zmm8[0] f+ zmm3.d
zmm1 = rax_14[1].d
zmm0 = *(rax_14 + 0x18)
int128_t zmm6
zmm6.d = zmm2.d f+ zmm5.d
int32_t rax_15 = (rdi_1 + 1).d
var_238 = zmm5.d
zmm1[0] = zmm1[0] f+ zmm4.d
int128_t zmm9
zmm9.d = zmm5.d f- zmm2.d
int32_t var_234_2 = zmm4.d
int128_t zmm10
zmm10.d = zmm4.d f- zmm1[0]
int32_t var_230_2 = zmm3.d
float var_22c_2 = zmm0[0]
arg7[1].d = rax_15

if (rax_15 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

zmm0 = var_238.o
zmm6.d = zmm6.d f- zmm9.d
int64_t rax_16 = *arg7
zmm1[0] = zmm1[0] f- zmm10.d
int32_t var_22c_3 = 0
zmm8[0] = zmm8[0] f- zmm11.d
*(rax_16 + rdi_1 * 0x10) = zmm0
int64_t rdi_2 = sx.q(arg7[1].d)
zmm6.d = zmm6.d f* 0.5f
zmm1[0] = zmm1[0] * 0.5f
int32_t rax_17 = (rdi_2 + 1).d
zmm8[0] = zmm8[0] * 0.5f
arg7[1].d = rax_17
var_238 = zmm6.d
float var_234_3 = zmm1[0]
float var_230_3 = zmm8[0]

if (rax_17 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

*(*arg7 + rdi_2 * 0x10) = var_238.o
uint32_t var_108[0x4][0x4]
uint32_t (* rax_19)[0x4] = sub_140631b10(&var_1b8, &var_108)
int64_t rdi_3 = sx.q(arg7[1].d)
uint32_t zmm9_1 = *rax_19
uint32_t zmm7_1 = rax_19[1][0]
uint32_t zmm13 = rax_19[2][0]
float zmm6_1[0x4] = (*rax_19)[1]
uint32_t zmm11_1 = (*rax_19)[5]
float zmm8_1 = (*rax_19)[9]
uint32_t zmm10_1 = (*rax_19)[2]
uint32_t zmm12 = (*rax_19)[6]
uint32_t zmm14 = (*rax_19)[0xa]
float var_20c = rax_19[3][0][0]
float var_1fc = (*rax_19)[0xd][0]
int32_t rax_20 = (rdi_3 + 1).d
uint32_t var_214 = zmm7_1
uint32_t var_210 = zmm13
float var_208 = zmm6_1[0]
uint32_t var_204 = zmm11_1
float var_200 = zmm8_1
uint32_t var_1f4 = zmm12
uint32_t var_1f0 = zmm14
float var_1ec = (*rax_19)[0xe][0]
arg7[1].d = rax_20

if (rax_20 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

*(*arg7 + rdi_3 * 0x10) = zmm9_1.o
int64_t rdi_4 = sx.q(arg7[1].d)
int32_t rax_22 = (rdi_4 + 1).d
arg7[1].d = rax_22

if (rax_22 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

*(*arg7 + rdi_4 * 0x10) = var_208.o
int64_t rdi_5 = sx.q(arg7[1].d)
int32_t rax_24 = (rdi_5 + 1).d
arg7[1].d = rax_24

if (rax_24 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

int64_t rax_25 = *arg7
int32_t var_22c_4 = 0
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
*(rax_25 + rdi_5 * 0x10) = zmm10_1.o
float zmm0_1[0x4] = zx.o(0)
int64_t rdi_6 = sx.q(arg7[1].d)
int64_t var_170
int64_t var_168
zmm0_1[0] = float.s(var_168.d - var_170.d)
zmm6_1[0] = zmm6_1[0] f+ zmm9_1 f* zmm9_1
var_238 = zmm0_1[0]
zmm0_1 = zx.o(0)
zmm0_1[0] = float.s(var_168:4.d - var_170:4.d)
int32_t rax_30 = (rdi_6 + 1).d
arg7[1].d = rax_30
float var_234_4 = zmm0_1[0]
zmm6_1[0] = zmm6_1[0] f+ zmm10_1 f* zmm10_1
float temp0_3[0x4] = _mm_sqrt_ss(0, zmm6_1[0])
float temp0_4[0x4] = _mm_sqrt_ss(0, zmm7_1 f* zmm7_1 f+ zmm11_1 f* zmm11_1 f+ zmm12 f* zmm12)
float temp0_5[0x4] = _mm_min_ss(temp0_3[0], temp0_4[0])
float temp0_6[0x4] = _mm_sqrt_ss(0, zmm8_1 * zmm8_1 f+ zmm13 f* zmm13 f+ zmm14 f* zmm14)
float var_230_4 = _mm_min_ss(temp0_5[0], temp0_6[0])[0]

if (rax_30 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

*(*arg7 + rdi_6 * 0x10) = var_238.o
int32_t var_228
sub_141fe0fd0(&data_143f3d8f0, &var_228, rax_1)
uint32_t temp0_8[0x4] = __andps_xmmxud_memxud(var_1d8.d, data_142d3f770)
temp0_8[0] = temp0_8[0] f* var_228
int64_t rdi_7 = sx.q(arg7[1].d)
float zmm1_1[0x4] = var_1d8:8.d
zmm1_1[0] = zmm1_1[0] f* var_228
var_238 = temp0_8[0]
int32_t rax_32 = (rdi_7 + 1).d
uint32_t zmm0_2[0x4] = var_1d8:4.d
int32_t var_224
zmm0_2[0] = zmm0_2[0] f* var_224
arg7[1].d = rax_32
int32_t var_220
zmm1_1[0] = zmm1_1[0] f+ var_220
uint32_t var_234_5 = zmm0_2[0]
zmm0_2 = var_1d8:0xc.d
zmm0_2[0] = zmm0_2[0] f* var_224
float var_230_5 = zmm1_1[0]
int32_t var_21c
zmm0_2[0] = zmm0_2[0] f+ var_21c
uint32_t var_22c_5 = zmm0_2[0]

if (rax_32 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

zmm6_1 = zx.o(0)
var_238.o = zx.o(0)
*(*arg7 + rdi_7 * 0x10) = var_238.o
int64_t rdx_17 = arg_20

if (rdx_17 != 0)
    int32_t rax_34 = sub_141fe0f60(&data_143f3dad0, rdx_17)
    
    if (rax_34 != 0xffffffff)
        sub_141fe0fd0(&data_143f3dad0, &var_238, rax_34)
        zmm1_1 = var_238
        uint128_t zmm0_3 = _mm_cvtepi32_ps(zx.o(var_168.d - var_170.d))
        zmm1_1[0] = zmm1_1[0] f/ zmm0_3.d
        zmm6_1 = zmm1_1
        zmm1_1 = var_234_5
        float temp0_10[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
        zmm0_3 = _mm_cvtepi32_ps(zx.o(var_168:4.d - var_170:4.d))
        zmm1_1[0] = zmm1_1[0] f/ zmm0_3.d
        temp0_10[0] = zmm1_1[0]
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        temp0_12[0] = var_230_5
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
        temp0_13[0] = var_22c_5.d
        zmm6_1 = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)

int64_t rdi_8 = sx.q(arg7[1].d)
int32_t rax_39 = (rdi_8 + 1).d
arg7[1].d = rax_39

if (rax_39 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

*(*arg7 + rdi_8 * 0x10) = zmm6_1
int64_t rax_40
rax_40.b = 1
return rax_40
