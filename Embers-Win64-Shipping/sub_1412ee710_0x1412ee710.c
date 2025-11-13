// 函数: sub_1412ee710
// 地址: 0x1412ee710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint128_t zmm7 = zx.o(arg5[2])
uint128_t zmm8 = zx.o(arg5[1])
uint128_t zmm9 = zx.o(*arg5)
void*** rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg5[3]))
void* rax_3 = &rcx_3[5]
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_3 u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_3[5]

*(arg1 + 0x30) = rax_3
void** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
int64_t rsi = 0
*rax_4 = rcx_3
*(arg1 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142d54998
rcx_3[2].d = zmm9.d
*(rcx_3 + 0x14) = zmm8.d
*(rcx_3 + 0x1c) = zmm7.d
rcx_3[4].d = zmm6.d
rcx_3[3].d = 0
*(rcx_3 + 0x24) = 0x3f800000
int64_t var_148 = *arg3
int64_t var_140 = arg3[1]
int128_t var_138
__builtin_memset(&var_138, 0, 0x30)
int64_t var_dc
__builtin_memset(&var_dc, 0, 0x43)
int128_t var_f0 = zx.o(0)
int16_t var_98 = 0
sub_1419a3ed0(arg1, arg2, &var_148, &var_138)
int64_t var_108
int64_t rax_8 = var_108

if (arg6 != 0)
    rax_8 = arg6

int64_t var_108_1 = rax_8
int64_t var_100
int64_t rax_9 = var_100

if (arg7 != 0)
    rax_9 = arg7

int64_t var_100_1 = rax_9
int64_t var_f8
int64_t rax_10 = var_f8

if (arg8 != 0)
    rax_10 = arg8

int64_t var_f8_1 = rax_10
sub_1419870b0(arg1, &var_138, 2)
void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_12[3]

if (rax_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_12[3]

*(arg1 + 0x30) = rax_11
int64_t* rax_12 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_12 = rcx_12
*(arg1 + 8) = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142f18bb8
rcx_12[2].d = arg9
void* rax_15 = *arg3

if (rax_15 != 0)
    int64_t rdx_2 = sx.q(*(rax_15 + 0x10c))
    int64_t* rdi_1 = *(arg3[1] + 0x10)
    int64_t rsi_1 = rdi_1[3]
    
    if (*(rsi_1 + (rdx_2 << 3)) == 0)
        sub_1419ccf30(rdi_1, rdx_2.d)
        rsi_1 = rdi_1[3]
    
    rsi = *(rsi_1 + (rdx_2 << 3))

sub_1412f37c0(arg1, arg3, rsi, arg4)
sub_14199d680(arg1, 1)
__security_check_cookie(rax_1 ^ &var_178)
return &data_142f11598
