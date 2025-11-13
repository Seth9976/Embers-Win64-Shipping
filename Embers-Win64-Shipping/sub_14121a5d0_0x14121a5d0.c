// 函数: sub_14121a5d0
// 地址: 0x14121a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2 = arg1[1]
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(*(rax_2 + 0x15a0))
uint128_t zmm8 = zx.o(*(rax_2 + 0x159c))
uint128_t zmm9 = zx.o(*(rax_2 + 0x1598))
void* rax_3 = &rcx_2[5]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_2 + 0x15a4)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_3 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_2[5]

*(arg2 + 0x30) = rax_3
*(arg2 + 0x14) += 1
int64_t rbx = 0
**(arg2 + 8) = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142d54998
rcx_2[2].d = zmm9.d
*(rcx_2 + 0x14) = zmm8.d
*(rcx_2 + 0x1c) = zmm7.d
rcx_2[4].d = zmm6.d
rcx_2[3].d = 0
*(rcx_2 + 0x24) = 0
void* rdx = arg1[1]
int64_t var_128 = arg1[2]
int64_t var_120 = arg1[3]
int128_t var_118
__builtin_memset(&var_118, 0, 0x30)
int64_t var_bc
__builtin_memset(&var_bc, 0, 0x43)
int128_t var_d0 = zx.o(0)
int16_t var_78 = 0
sub_1419a3ed0(arg2, *(rdx + 0x5150), &var_128, &var_118)
int64_t rax_8 = data_1439b57b8

if (*(arg1 + 0x21) != 0)
    rax_8 = data_1439b6548

int64_t var_e8 = rax_8
sub_1419870b0(arg2, &var_118, 2)
void* rax_9 = arg1[2]

if (rax_9 != 0)
    int64_t rdx_3 = sx.q(*(rax_9 + 0x10c))
    int64_t* rsi_1 = *(arg1[3] + 0x10)
    int64_t rbx_1 = rsi_1[3]
    
    if (*(rbx_1 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rsi_1, rdx_3.d)
        rbx_1 = rsi_1[3]
    
    rbx = *(rbx_1 + (rdx_3 << 3))

sub_141216690(arg2, &arg1[2], rbx, *arg1)
sub_14199d680(arg2, 1)
__security_check_cookie(rax_1 ^ &var_148)
return &data_142f11598
