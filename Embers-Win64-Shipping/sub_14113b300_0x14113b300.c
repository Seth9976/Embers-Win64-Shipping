// 函数: sub_14113b300
// 地址: 0x14113b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_cc
__builtin_memset(&var_cc, 0, 0x43)
int128_t var_128
__builtin_memset(&var_128, 0, 0x30)
int128_t var_e0 = zx.o(0)
int16_t var_88 = 0
sub_140fdc870(arg2, &var_128)
uint128_t zmm7 = zx.o(arg4[3].d)
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm8 = zx.o(*(arg4 + 0x14))
uint128_t zmm9 = zx.o(arg4[2].d)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg4 + 0x1c)))
void* rax_2 = &rcx_3[5]
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_2 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_3[5]

*(arg2 + 0x30) = rax_2
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142d54998
rcx_3[2].d = zmm9.d
*(rcx_3 + 0x14) = zmm8.d
*(rcx_3 + 0x1c) = zmm7.d
rcx_3[4].d = zmm6.d
rcx_3[3].d = 0
*(rcx_3 + 0x24) = 0x3f800000
int64_t var_f0 = data_14395da18
int64_t var_f8 = data_1439b5250
int64_t var_e8 = data_14395d9e8
int32_t var_d0 = 0
char rax_8 = sub_1414e0a50(arg1)
int64_t r9_1 = sub_14113bfa0(arg2, &var_128, *(arg1 + 8), arg3, rax_8, arg4)
int64_t rsi_1 = data_1439c9180
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_11[5]

if (rax_9 u> *(arg2 + 0x38))
    r9_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_11[5]

*(arg2 + 0x30) = rax_9
int64_t* rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142d56618
rcx_11[2].d = 0
rcx_11[3] = rsi_1
rcx_11[4].d = 0
int64_t rsi_2 = data_1439c9168

if (rsi_2 == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        r9_1)
    sub_140afbb40()

void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_17[6]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_17[6]

*(arg2 + 0x30) = rax_12
int64_t* rax_13 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_13 = rcx_17
*(arg2 + 8) = &rcx_17[1]
rcx_17[1] = 0
*rcx_17 = &data_142f11598
rcx_17[2] = rsi_2
rcx_17[3] = 0
rcx_17[4] = 4
rcx_17[5].d = 2
*(rcx_17 + 0x2c) = 1
__security_check_cookie(rax_1 ^ &var_158)
return &data_142f11598
