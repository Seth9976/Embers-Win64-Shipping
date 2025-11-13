// 函数: sub_141180600
// 地址: 0x141180600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_18 = arg3
int32_t* arg_10 = arg2
void*** r13 = nullptr
uint128_t zmm7 = zx.o(0)
void*** arg_20 = nullptr
uint128_t zmm8 = zx.o(0)
uint128_t zmm9 = zx.o(0)

if (arg4 != 0)
    r13 = sub_1410fccd0(arg1, arg5 + 0x10, u"DOMDepthTexture", 0)
    void*** rax_2 = sub_1410fccd0(arg1, arg5 + 0x18, u"DOMLayerTexture", 0)
    int32_t rdx_2 = *(arg4 + 0x4c)
    int32_t rcx_1 = *(arg4 + 0x50)
    arg_20 = rax_2
    int32_t rax_4 = *(arg4 + 0x54) - rdx_2
    float zmm2 = 1f f/ _mm_cvtepi32_ps(zx.o(*(r13 + 0x44))).d
    int32_t rax_6 = *(arg4 + 0x58) - rcx_1
    float zmm1_1 = 1f f/ _mm_cvtepi32_ps(zx.o(r13[9].d)).d
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(rdx_2))
    zmm7 = _mm_cvtepi32_ps(zx.o(rcx_1))
    zmm8 = _mm_cvtepi32_ps(zx.o(rax_4))
    zmm7.d = zmm7.d f* zmm1_1
    zmm9.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* zmm1_1
    zmm6_1.d = zmm6_1.d f* zmm2
    zmm8.d = zmm8.d f* zmm2

uint128_t zmm11 = *(arg2 + 0x1598)
int64_t* rdx_3 = *(arg1 + 8)
int64_t rax_7 = zmm11.q
int64_t r14 = _mm_bsrli_si128(zmm11, 8).q
int32_t r12_1 = r14.d - rax_7.d
uint32_t r14_2 = (r14 u>> 0x20).d - (rax_7 u>> 0x20).d
uint32_t arg_c = r14_2
int32_t* rax_9
int32_t zmm6_2
rax_9, zmm6_2 = sub_14081d830(0xf0, rdx_3, 1, 0)
int32_t* rdi_1 = rax_9

if (rax_9 == 0)
    rdi_1 = nullptr
else
    __builtin_memset(&rax_9[0x10], 0, 0x20)
    sub_14117af20(&rax_9[0x18])

memset(rdi_1, 0, 0xf0)
int64_t rbx_2 = r12_1.q
*rdi_1 = data_1439b5fac.d
rdi_1[2] = zmm6_2
rdi_1[3] = zmm7.d
rdi_1[4] = zmm8.d
rdi_1[5] = zmm9.d
*(rdi_1 + 0x40) = r13
int16_t var_110 = 1
char var_10e = 0
int32_t var_10c = 0xffffffff
rdi_1[6] = _mm_cvtepi32_ps(zx.o(r12_1)).d
*(rdi_1 + 0x48) = arg_20
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o((rbx_2 u>> 0x20).d))
int32_t* r14_3 = arg_10
rdi_1[7] = zmm0_1.d
zmm0_1 = _mm_cvtepi32_ps(zx.o(r12_1))
int128_t zmm10
zmm10.d = 1f f/ _mm_cvtepi32_ps(zx.o(r14_2)).d
rdi_1[8] = 1f f/ zmm0_1.d
rdi_1[9] = zmm10.d
*(rdi_1 + 0x50) = data_14395f4d0
int32_t* rax_14 = arg_18
int32_t r8 = *rax_14
int32_t rdx_4 = rax_14[1]
int32_t rcx_5 = rax_14[2] - r8
int32_t rax_15 = rax_14[3]
rdi_1[0xc] = r8
rdi_1[0xf] = rax_15 - rdx_4
rdi_1[0xd] = rdx_4
rdi_1[0xe] = rcx_5
int32_t* var_118 = *arg6
*(rdi_1 + 0x60) = var_118.o
sub_1419a2ec0(*(r14_3 + 0x5150), &var_118, &data_143ed5e80, 0)
zmm8 = var_118.o
int32_t r9
r9.b = arg4 == 0
char rcx_9 = sub_1419a2ec0(*(r14_3 + 0x5150), &var_118, &data_143e6c160, r9)
zmm7 = var_118.o
int128_t var_108 = sub_14118d4a0(rcx_9)
sub_141998c50(zmm7.q, &data_143e73400, rdi_1)
int64_t var_c0 = rbx_2
void*** rax_18
char rcx_11
rax_18, rcx_11 = sub_14081d830(0x80, *(arg1 + 8), 1, 0)
void*** rbx_3 = rax_18

if (rax_18 == 0)
    rbx_3 = nullptr
else
    var_118 = rdi_1
    sub_14118d4a0(rcx_11)
    int32_t** rdx_8 = &arg_18
    var_110.q = &data_143e73430
    var_108 = var_118.o
    
    if (arg4 != 0)
        rdx_8 = &arg_10
    
    sub_141992bd0(rbx_3, rdx_8, &var_108, 1)
    *rbx_3 = &data_142f2c958
    *(rbx_3 + 0x38) = rdi_1.o
    *(rbx_3 + 0x48) = zmm8
    *(rbx_3 + 0x58) = zmm7
    *(rbx_3 + 0x68) = zmm11
    rbx_3[0xf] = r14_3

return sub_1419968d0(arg1, rbx_3)
