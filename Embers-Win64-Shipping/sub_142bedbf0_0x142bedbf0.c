// 函数: sub_142bedbf0
// 地址: 0x142bedbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg2
void* rdx = *(rsi + 0xe8)
uint32_t rdi = zx.d(*(rdx + 0x80))

if (arg3 u>= *(rsi + 0x10))
    return 6

int32_t r8

if (arg3 != 0)
    r8 = arg3 - 1
else
    r8 = *(rsi + 0xf8)

int64_t rax_2 = *(rdx + 0x40)
uint64_t rcx_1 = zx.q(r8) * 6
int80_t zmm2 = (*(rax_2 + (rcx_1 << 3) + 0x10)).t
uint128_t var_38 = *(rax_2 + (rcx_1 << 3))
uint128_t zmm0 = *(rax_2 + (rcx_1 << 3) + 0x20)
int64_t rcx_2 = zmm2.q
*(arg1 + 0x68) = zx.d((rcx_2 u>> 0x10).w)
uint128_t temp0 = _mm_bsrli_si128(zmm0, 8)
*(arg1 + 0x6c) = zx.d(rcx_2.w)
*(arg1 + 0x70) = temp0.d
sub_142b99180(arg1, zmm0.q)

if (rdi == 1)
    *(arg1 + 0x82) = 1
else if (rdi == 2)
    *(arg1 + 0x82) = 3
else if (rdi == 4)
    *(arg1 + 0x82) = 4
else if (rdi == 8)
    *(arg1 + 0x82) = 2
    *(arg1 + 0x80) = 0x100

int32_t rcx_4 = sx.d(zmm2:4.w)
int32_t rdx_2 = sx.d(zmm2:8.w)
*(arg1 + 0x94) = rdx_2
*(arg1 + 0x3c) = rdx_2 << 6
*(arg1 + 0x90) = rcx_4
__builtin_strncpy(arg1 + 0x60, "stib", 4)
*(arg1 + 0x38) = rcx_4 << 6
*(arg1 + 0x40) = zx.d(var_38:0xe.w) << 6
*(arg1 + 0x30) = *(arg1 + 0x6c) << 6
*(arg1 + 0x34) = *(arg1 + 0x68) << 6
sub_142b9a4e0(arg1 + 0x30, zx.d(*(*(rsi + 0xe8) + 0xa)) << 6)
return 0
