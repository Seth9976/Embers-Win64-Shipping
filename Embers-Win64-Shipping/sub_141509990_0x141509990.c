// 函数: sub_141509990
// 地址: 0x141509990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x60)
int32_t rax_1 = r10 & 0x55555555
int32_t r10_2 = r10 u>> 1 & 0x55555555
int32_t r14 = 0
int32_t rdi = 0
int32_t r12_1 = *(arg1 + 0x40) * *(arg1 + 0x48)
int32_t r13_1 = *(arg1 + 0x44) * *(arg1 + 0x4c)
int32_t rsi = *(arg1 + 0xc)
int32_t r9_3 = (rax_1 u>> 1 ^ rax_1) & 0x33333333
int32_t rax_5 = (r9_3 u>> 2 ^ r9_3) & 0xf0f0f0f
int32_t rcx_3 = (rax_5 u>> 4 ^ rax_5) & 0xff00ff
int32_t rax_13 = (r10_2 u>> 1 ^ r10_2) & 0x33333333
int32_t rcx_7 = (rax_13 u>> 2 ^ rax_13) & 0xf0f0f0f
int32_t rdx_3 = (rcx_7 u>> 4 ^ rcx_7) & 0xff00ff
int32_t rax_16 = rdx_3 u>> 8 ^ rdx_3
uint64_t rflags
int32_t temp0
temp0, rflags = __bsr_gprv_memv(*(arg1 + 8))

if (rax_16 != 0)
    rdi = temp0

int32_t rax_19 = sub_142437020()
bool cond:1 = rax_19 != 1

if (rax_19 s>= 1)
    cond:1 = rax_19 != rsi
    
    if (rax_19 s< rsi)
        rsi = rax_19
else
    rsi = 1

float zmm2 = 1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rsi)

if (cond:1)
    r14 = temp0_1

if (arg3 == 0)
    *arg2 = 0x3f800000
else
    *arg2 = 1f / float.s(zx.q(*(arg1 + 0x48)))
    zmm2 = 1f / float.s(zx.q(*(arg1 + 0x4c)))

arg2[1] = zmm2
arg2[5] = (rdi << 0xc | zx.d(rax_16.w)) << 0xc | (zx.d((rcx_3 u>> 8).w) ^ zx.d(rcx_3.w))
arg2[2] = float.s(zx.q(r12_1))
arg2[3] = float.s(zx.q(r13_1))
arg2[4] = float.s(zx.q(r14))
arg2[6] = *(arg1 + 0x5c)
int32_t result = *(arg1 + 0x58) << 0x1c
arg2[7] = result
return result
