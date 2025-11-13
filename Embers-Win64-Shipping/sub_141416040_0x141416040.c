// 函数: sub_141416040
// 地址: 0x141416040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = arg2[3]
float zmm4 = *arg2
float zmm3 = arg2[4]
float zmm5 = arg2[5]
void* r13 = *(arg1 + 8)
int128_t zmm6 = arg2[1]
int128_t zmm7 = arg2[2]
float zmm1 = zmm5 f- zmm7.d
zmm7.d = zmm7.d f+ zmm5
int64_t rdi
rdi.b = 0
float var_d8 = (zmm2 - zmm4) * 0.5f
float zmm0 = zmm3 f- zmm6.d
zmm6.d = zmm6.d f+ zmm3
zmm7.d = zmm7.d f* 0.5f
float var_d0 = zmm1 * 0.5f
zmm6.d = zmm6.d f* 0.5f
float var_d4 = zmm0 * 0.5f
float var_c8 = (zmm4 + zmm2) * 0.5f
int32_t var_c4 = zmm6.d
float var_c0 = zmm7.d
char rax
float zmm8
int128_t zmm9
int128_t zmm10
int128_t zmm11
int128_t zmm12
rax, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_141f8d780(arg1 + 0xbf0, &var_c8, &var_d8)

if (rax != 0)
    float zmm6_1[0x4] = arg2[3]
    uint32_t zmm7_1[0x4] = arg2[4]
    int128_t var_68_1 = zmm9
    zmm9 = arg2[5]
    int128_t var_78_1 = zmm10
    zmm10 = *arg2
    zmm6_1[0] = zmm6_1[0] f- zmm10.d
    int128_t var_88_1 = zmm11
    zmm11 = arg2[1]
    zmm7_1[0] = zmm7_1[0] f- zmm11.d
    int128_t var_98_1 = zmm12
    zmm12 = arg2[2]
    zmm9.d = zmm9.d f- zmm12.d
    uint32_t zmm3_1[0x4] = zmm6_1
    zmm3_1[0] = zmm3_1[0] f* zmm8
    zmm7_1[0] = zmm7_1[0] f* zmm8
    zmm10.d = zmm10.d f+ zmm3_1[0]
    float zmm1_1 = zmm9.d * zmm8
    zmm11.d = zmm11.d f+ zmm7_1[0]
    zmm12.d = zmm12.d f+ zmm1_1
    int64_t var_ac_1 = (_mm_unpacklo_ps(zmm3_1, zmm7_1[0].q)).q
    zmm7_1[0] = zmm7_1[0] f* zmm7_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
    var_c0 = zmm1_1
    zmm7_1[0] = zmm7_1[0] f+ zmm6_1[0]
    float var_a4_1 = var_c0
    int32_t var_b8 = zmm10.d
    int32_t var_b4_1 = zmm11.d
    int32_t var_b0_1 = zmm12.d
    zmm7_1[0] = zmm7_1[0] f+ zmm9.d f* zmm9.d
    zmm7_1[0] = zmm7_1[0] f* 0.25f
    float var_a0_1 = _mm_sqrt_ss(0, zmm7_1[0])[0]
    
    if (*(arg1 + 0xd10) == 0)
        bool c_1
        
        if (1f f> *(arg1 + 0x2bc))
            zmm7_1[0] f- 1.09951163e+12f
            c_1 = zmm7_1[0] f< 1.09951163e+12f
        else
            float zmm0_2 = (*sub_1422f9c00(arg1, &var_c8, &var_b8))[2] - var_a0_1 f* *(arg1 + 0x2a8)
            zmm0_2 - 1f
            c_1 = zmm0_2 < 1f
        
        rdi.b = c_1
    else
        uint32_t zmm2_1[0x4] = *(arg1 + 0xd24)
        float zmm5_1[0x4] = *(arg1 + 0xd20)
        float zmm4_1 = zmm2_1[0]
        zmm3_1 = *(arg1 + 0xd28)
        zmm5_1[0] = zmm5_1[0] * zmm6_1[0]
        zmm1_1 = zmm3_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm8
        zmm2_1[0] = zmm2_1[0] f* zmm7_1[0]
        zmm5_1[0] = zmm5_1[0] f* zmm10.d
        zmm3_1[0] = zmm3_1[0] f* zmm9.d
        zmm4_1 = zmm4_1 f* zmm11.d + zmm5_1[0]
        zmm2_1[0] = zmm2_1[0] f* zmm8
        zmm5_1 = _mm_and_ps(zmm5_1, 0x7fffffff)
        zmm2_1 = _mm_and_ps(zmm2_1, 0x7fffffff)
        zmm3_1[0] = zmm3_1[0] f* zmm8
        zmm5_1[0] = zmm5_1[0] f+ zmm2_1[0]
        zmm3_1 = _mm_and_ps(zmm3_1, 0x7fffffff)
        zmm5_1[0] = zmm5_1[0] f+ zmm3_1[0]
        rdi.b = (zmm5_1 ^ data_142d3f780)[0] > zmm4_1 + zmm1_1 f* zmm12.d f- *(arg1 + 0xd2c)

int32_t r14 = *(r13 + 0x214)
void* rax_3 = sub_1412526a0(r13 + 0x2c8, arg2[0x1d], &arg2[0x1d])
int32_t temp1 = mods.dp.d(sx.q(r14), arg3)
void* rbx_3 = (zx.q(temp1) << 4) + rax_3
uint64_t r15_1 = zx.q(temp1)
int64_t* rcx_3 = *(rbx_3 + 8)

if (rcx_3 != 0 && *rbx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3, rbx_3)
    *(rbx_3 + 8) = 0

float* rdx_6 = &var_c8

if (rdi.b == 0)
    var_c8.o = zx.o(0)
    sub_1413c6650(rbx_3, rdx_6)
    int64_t* rcx_8 = var_c0.q
    *(rax_3 + (r15_1 << 2) + 0x30) = r14
    
    if (rcx_8 != 0 && var_c8.q != 0)
        (*(*rcx_8 + 0x10))(rcx_8, &var_c8)
        var_c0.q = 0
else
    int64_t* rcx_4 = *(r13 + 0x130)
    (*(*rcx_4 + 8))(rcx_4, rdx_6)
    *arg4 = var_c8.q
    sub_1413c6650(rbx_3, &var_c8)
    int64_t* rcx_6 = var_c0.q
    *(rax_3 + (r15_1 << 2) + 0x30) = r14
    
    if (rcx_6 != 0 && var_c8.q != 0)
        int64_t r8_3 = *rcx_6
        (*(r8_3 + 0x10))(rcx_6, &var_c8, r8_3)
        var_c0.q = 0

sub_14081c9d0(&var_c8)
return zx.q(rdi.b)
