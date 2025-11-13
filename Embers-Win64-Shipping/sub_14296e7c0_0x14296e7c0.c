// 函数: sub_14296e7c0
// 地址: 0x14296e7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*arg2)
int32_t rax_2 = neg.d(r8.d & 1)
uint64_t r10 = zx.q(rax_2)
int64_t r9_2 = (zx.q(rax_2) & 0xab5844f3) + r8
*arg1 = r9_2.d
uint64_t rdx_2 = zx.q(arg2[1]) + (zx.q(r10.d) & 0x2378c292) + (r9_2 u>> 0x20)
arg1[1] = rdx_2.d
int64_t r8_3 = zx.q(arg2[2]) + (zx.q(r10.d) & 0x8dc58f55) + (rdx_2 u>> 0x20)
arg1[2] = r8_3.d
uint64_t rdx_6 = zx.q(arg2[3]) + (zx.q(r10.d) & 0x216cc272) + (r8_3 u>> 0x20)
arg1[3] = rdx_6.d
int64_t r8_7 = zx.q(arg2[4]) + (zx.q(r10.d) & 0xaed63690) + (rdx_6 u>> 0x20)
arg1[4] = r8_7.d
int64_t rdx_10 = zx.q(arg2[5]) + (zx.q(r10.d) & 0xc44edb49) + (r8_7 u>> 0x20)
arg1[5] = rdx_10.d
uint64_t r8_11 = zx.q(arg2[6]) + (zx.q(r10.d) & 0x7cca23e9) + (rdx_10 u>> 0x20)
arg1[6] = r8_11.d
uint64_t r8_13 = (r8_11 u>> 0x20) + zx.q(arg2[7]) + r10
arg1[7] = r8_13.d
uint64_t r8_15 = (r8_13 u>> 0x20) + zx.q(arg2[8]) + r10
arg1[8] = r8_15.d
uint64_t r8_17 = (r8_15 u>> 0x20) + zx.q(arg2[9]) + r10
arg1[9] = r8_17.d
uint64_t r8_19 = (r8_17 u>> 0x20) + zx.q(arg2[0xa]) + r10
arg1[0xa] = r8_19.d
uint64_t r8_21 = (r8_19 u>> 0x20) + zx.q(arg2[0xb]) + r10
arg1[0xb] = r8_21.d
void* rbx = &arg1[0xc]
uint64_t r8_23 = (r8_21 u>> 0x20) + zx.q(arg2[0xc]) + r10
*rbx = r8_23.d
uint64_t r9_6 = zx.q(arg2[0xd]) + (zx.q(r10.d) & 0x3fffffff) + (r8_23 u>> 0x20)
void* r8_25 = &arg1[0xd]
*r8_25 = r9_6.d
int64_t i_1 = 3
int64_t i

do
    int32_t zmm1[0x4] = *(arg1 + 4)
    int32_t zmm0[0x4] = *arg1
    arg1 = &arg1[4]
    *(arg1 - 0x10) = _mm_sll_epi32(zmm1, 0x1f) | _mm_srl_epi32(zmm0, 1)
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rdx_12 = *r8_25
uint32_t result = *rbx u>> 1
*rbx = rdx_12 << 0x1f | result
*r8_25 = (r9_6 u>> 0x20 << 0x1f).d | rdx_12 u>> 1
return result
