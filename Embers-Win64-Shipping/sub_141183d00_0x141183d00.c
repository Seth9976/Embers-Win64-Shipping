// 函数: sub_141183d00
// 地址: 0x141183d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* rbx = *arg4
wchar16 const* const var_88 = u"UnknownTexture"
int32_t var_e8 = 2
int32_t var_a8 = 1
void*** rbx_1 = *(rbx + 0x44)
int32_t var_e0 = 0
float zmm1[0x4] = var_e8.o
int16_t var_80 = 1
int16_t var_a0 = 1
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
temp0[0] = 0
void*** var_108 = rbx_1
int32_t rax_2 = var_108:4.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
int32_t var_b0 = rax_2
var_e8.o = temp0_1
int32_t var_a4 = 0x10000
float var_c8[0x4] = temp0_1
int16_t var_90 = 0
char var_7e = 0
int32_t var_b4 = rbx_1.d
int32_t var_ac = 0
int64_t var_9c = 0x25
int32_t var_94 = 9
void*** rax_4 = sub_141188e50(arg1, &var_c8, u"HairDummyTexture", 0)
float zmm1_1 = 1f f/ _mm_cvtepi32_ps(zx.o((rbx_1 * 2).d)).d
int32_t rcx_5 = data_1439b5f68
float zmm6 = 1f f/ _mm_cvtepi32_ps(zx.o((rbx_1 u>> 0x20).d * 2)).d
int32_t rax_5

if (rcx_5 s>= 0)
    rax_5 = 0x200
    
    if (rcx_5 s< 0x200)
        rax_5 = rcx_5
else
    rax_5 = 0

int64_t* rdx_1 = *(arg1 + 8)
_mm_min_ss(zmm6, zmm1_1)
_mm_cvtepi32_ps(zx.o(rax_5))
void*** rax_6
int32_t zmm6_1
rax_6, zmm6_1 = sub_14081d830(0xa0, rdx_1, 1, 0)
void*** rsi = rax_6

if (rax_6 == 0)
    rsi = nullptr
else
    rax_6[1] = 0
    sub_14117af20(&rax_6[2])

memset(rsi, 0, 0xa0)
rsi[1] = *arg3
*rsi = zmm6_1
var_108 = rax_4
int16_t var_100 = 0
char var_fe = 0
int32_t var_fc = 0xffffffff
*(rsi + 0x10) = var_108.o
var_108 = *arg4
int16_t var_100_1 = 0x101
char var_fe_1 = 0
int32_t var_fc_1 = 0x20
*(rsi + 0x90) = var_108.o
int16_t rdi_1 = *(*arg3 + 0x58)
sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143ed5e80, 0)
int128_t zmm9 = var_108.o
int32_t r9
r9.b = rdi_1 == 4
char rcx_10 = sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143e6bbc0, r9)
int128_t zmm8 = var_108.o
int128_t zmm7 = *(arg2 + 0x1598)
var_e8.o = sub_14118f890(rcx_10)
sub_141998c50(zmm8.q, &data_143e72de0, rsi)
int64_t* rdx_4 = *(arg1 + 8)
var_c8[0].q = rsi
var_c8 = zmm9
var_90.q = rbx_1
var_b0.o = zmm8
var_a0.o = zmm7
void*** rax_10
char rcx_12
rax_10, rcx_12 = sub_14081d830(0x80, rdx_4, 1, 0)
void*** rbx_2 = rax_10

if (rax_10 == 0)
    rbx_2 = nullptr
else
    var_108 = rsi
    sub_14118f890(rcx_12)
    var_100_1.q = &data_143e72e10
    var_e8.o = var_108.o
    void var_f8
    sub_141992bd0(rbx_2, &var_f8, &var_e8, 1)
    float zmm0_3[0x4] = var_c8
    *rbx_2 = &data_142f2c908
    *(rbx_2 + 0x38) = zmm0_3
    int32_t var_d8
    *(rbx_2 + 0x48) = var_d8.o
    *(rbx_2 + 0x58) = var_a8.o
    *(rbx_2 + 0x68) = var_9c:4.o
    rbx_2[0xf] = arg2

int64_t result = sub_1419968d0(arg1, rbx_2)
__security_check_cookie(rax_1 ^ &var_128)
return result
