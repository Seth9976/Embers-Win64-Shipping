// 函数: sub_141bc6960
// 地址: 0x141bc6960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x795) & 1) != 0)
    int64_t rdi_1 = sx.q(*(arg1 + 0x7a0))
    int32_t rax = (rdi_1 + 1).d
    *(arg1 + 0x7a0) = rax
    
    if (rax s> *(arg1 + 0x7a4))
        sub_1405a4cf0(arg1 + 0x798)
    
    int64_t rax_1 = *(arg1 + 0x798)
    *(rax_1 + (rdi_1 << 2)) = 1
    return rax_1

int32_t r8 = *(arg1 + 0x740)
int64_t rdx_2 = *(arg1 + 0x744)
int32_t arg_8
arg_8.q = r8.q
float zmm2[0x4] = rdx_2:4.d
zmm2[0] = zmm2[0] + 0f
*(arg1 + 0x758) = 0
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] - 0.5f
float zmm1[0x4] = zmm2
int32_t rax_6 = (int.d(zmm2[0]) s>> 1) + rdx_2.d + r8
int32_t rcx_1 = int.d(zmm1[0])

if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm2[0] = zmm2[0] - zmm1[0]

if (zmm2[0] >= 0f)
    float arg_c = _mm_min_ss(zmm2[0], 0x3f7fffff)[0]
else
    arg_c = 0f

int64_t arg_10
arg_10.d = r8
arg_10:4.d = 0
zmm2 = rdx_2:4.d
zmm2[0] = zmm2[0] f+ arg_10:4.d
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] - 0.5f
zmm1 = zmm2
int32_t rcx_3 = int.d(zmm1[0])
arg_10.d = (int.d(zmm2[0]) s>> 1) + rdx_2.d + r8

if (rcx_3 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_3)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_3 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm2[0] = zmm2[0] - zmm1[0]

if (zmm2[0] >= 0f)
    arg_10:4.d = _mm_min_ss(zmm2[0], 0x3f7fffff)[0]
else
    arg_10:4.d = 0

void var_98
char* rax_16 = sub_141a2f570(&var_98, arg_10, rax_6.q, *(arg1 + 0x738), 0)
char var_a4
char var_a4_1 = var_a4 & 0xc0
int64_t var_cc = 0
int64_t var_c0 = 0
int64_t var_b8 = 0
int128_t zmm1_1 = *(rax_16 + 0x10)
int32_t var_ac = 0x80000000
uint128_t var_f8 = *rax_16
int128_t var_e8 = zmm1_1
int32_t var_d0 = 0x3f800000
uint64_t var_d8 = *(rax_16 + 0x20)
int32_t var_b0 = *(arg1 + 0x758)
int32_t var_a8 = 0
void var_70
sub_141a474c0(arg1 + 0x418, sub_141a2f010(&var_70, &var_f8), arg1 + 0x28, data_143f312e0)
int64_t rax_19 = sub_141b91d30(arg1)

if (var_c0 == 0)
    return rax_19

return sub_140a74f90(var_c0)
