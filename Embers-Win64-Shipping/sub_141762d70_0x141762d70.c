// 函数: sub_141762d70
// 地址: 0x141762d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
int64_t rdx = **arg1
void* rbx = arg1[2]
int64_t r8 = r14 * 3
int64_t r9 = sx.q(*(rdx + (r8 << 2) + 8))
int64_t rdx_1 = *(arg1[1] + 0x28)
int64_t var_68 = *(rdx + (r8 << 2))
int64_t r15 = r9 * 3
int32_t var_60 = r9.d
int64_t rcx = sx.q((var_68 u>> 0x20).d) * 3
int64_t rbp = sx.q(var_68.d) * 3
int128_t zmm6
zmm6.d = (*(rdx_1 + (rbp << 2) + 4)).d f+ *(rdx_1 + (rcx << 2) + 4)
int128_t zmm7
zmm7.d = (*(rdx_1 + (rcx << 2) + 8)).d f+ *(rdx_1 + (rbp << 2) + 8)
int64_t zmm0
zmm0.d = (*(rdx_1 + (rbp << 2))).d f+ *(rdx_1 + (rcx << 2))
zmm6.d = zmm6.d f+ *(rdx_1 + (r15 << 2) + 4)
zmm7.d = zmm7.d f+ *(rdx_1 + (r15 << 2) + 8)
zmm0.d = zmm0.d f+ *(rdx_1 + (r15 << 2))
zmm6.d = zmm6.d f* 0.333333343f
zmm0.d = zmm0.d f* 0.333333343f
zmm7.d = zmm7.d f* 0.333333343f
float var_78 = zmm0.d
float var_74 = zmm6.d
float var_70 = zmm7.d
float var_58
sub_1417a9150(rbx + 0x10, &var_58, &var_78)
float zmm0_2[0x4]
int32_t zmm6_2
uint32_t zmm8[0x4]
zmm0_2, zmm6_2, zmm8 = sub_1417920a0(rbx + 0x10, rbx + 0x40, &var_58)
float zmm1_2[0x4]

if (zmm6_2 f== 0f)
    zmm1_2 = zmm0_2
else
    zmm1_2 = _mm_sqrt_ss(0, zmm6_2)
    zmm1_2[0] = zmm1_2[0] + zmm0_2[0]

int128_t* result = arg1[3]
zmm0_2 = *result
zmm0_2[0] = zmm0_2[0] * -2f

if (not(zmm1_2[0] <= zmm0_2[0]))
    int64_t i = 0
    uint32_t var_48_1[0x4] = zmm8
    *(*arg1[4] + (r14 << 2)) = _mm_and_ps(zmm1_2, 0x7fffffff)[0]
    uint32_t zmm0_3[0x4]
    
    do
        int64_t rbx_1 = *arg1[4]
        uint32_t zmm6_3[0x4]
        zmm0_3, zmm6_3 =
            sub_14177ffe0(arg1[2], *(arg1[1] + 0x28) + sx.q(*(&var_68 + (i << 2))) * 0xc)
        uint32_t temp0_3[0x4] = _mm_and_ps(zmm0_3, zmm6_3)
        i += 1
        temp0_3[0] = temp0_3[0] f+ *(rbx_1 + (r14 << 2))
        *(rbx_1 + (r14 << 2)) = temp0_3[0]
    while (i s< 3)
    
    int64_t rcx_6 = *arg1[4]
    zmm0_3 = *(rcx_6 + (r14 << 2))
    int64_t rdx_6 = *(arg1[1] + 0x28)
    zmm0_3[0] = zmm0_3[0] f* 0.25f
    int64_t rax_12 = sx.q(var_68:4.d)
    *(rcx_6 + (r14 << 2)) = zmm0_3[0]
    uint32_t zmm8_1[0x4] = *(rdx_6 + (r15 << 2) + 4)
    int64_t rcx_7 = rax_12 * 3
    zmm8_1[0] = zmm8_1[0] f- *(rdx_6 + (rbp << 2) + 4)
    uint32_t zmm3_1[0x4] = *(rdx_6 + (rcx_7 << 2) + 4)
    uint32_t zmm4_1[0x4] = *(rdx_6 + (rcx_7 << 2))
    zmm3_1[0] = zmm3_1[0] f- *(rdx_6 + (rbp << 2) + 4)
    float zmm1_3 = *(rdx_6 + (rcx_7 << 2) + 8) f- *(rdx_6 + (rbp << 2) + 8)
    float zmm7_1 = *(rdx_6 + (r15 << 2)) f- *(rdx_6 + (rbp << 2))
    zmm4_1[0] = zmm4_1[0] f- *(rdx_6 + (rbp << 2))
    float zmm5_1 = *(rdx_6 + (r15 << 2) + 8) f- *(rdx_6 + (rbp << 2) + 8)
    result = arg1[5]
    zmm8_1[0] = zmm8_1[0] f* zmm1_3
    float zmm2_1 = zmm7_1 * zmm1_3
    int64_t rcx_8 = *result
    zmm8_1[0] = zmm8_1[0] f* zmm4_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm5_1
    zmm7_1 = zmm7_1 f* zmm3_1[0]
    zmm3_1[0] = zmm3_1[0] f- zmm8_1[0]
    zmm4_1[0] = zmm4_1[0] f* zmm5_1
    zmm8_1[0] = zmm8_1[0] f- zmm7_1
    zmm2_1 = zmm2_1 f- zmm4_1[0]
    zmm3_1[0] = zmm3_1[0] f* zmm3_1[0]
    zmm8_1[0] = zmm8_1[0] f* zmm8_1[0]
    zmm0_3 = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 f+ zmm3_1[0] f+ zmm8_1[0])
    zmm0_3[0] = zmm0_3[0] f* 0.5f
    *(rcx_8 + (r14 << 2)) = zmm0_3[0]

return result
