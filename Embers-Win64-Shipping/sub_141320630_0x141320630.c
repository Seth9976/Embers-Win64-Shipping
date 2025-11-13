// 函数: sub_141320630
// 地址: 0x141320630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[1]
uint64_t r8_2 = zx.q(r9 s/ 5)
int32_t r9_1 = r9 - (r8_2 * 5).d
uint64_t rdx_2 = zx.q(r8_2.d s/ 3)
int32_t r8_3 = r8_2.d - (rdx_2 * 3).d
int32_t var_24 = r8_3
int32_t rdx_3 = rdx_2.d & 0x80000001

if (rdx_3 s< 0)
    rdx_3 = ((rdx_3 - 1) | 0xfffffffe) + 1

int64_t zmm0 = r9_1.q
rdx_3.b = rdx_3 == 1
char rcx = rdx_3.b

if ((r9_1.q u>> 0x20).d != 2)
    rcx = 0

if (zmm0.d == r9_1 && (zmm0 u>> 0x20).d == r8_3 && rcx == rdx_3.b && r8_3 != 0
        && (r9_1 & 0xfffffffd) == 0)
    return sub_1413198a0(*arg1) __tailcall

uint32_t result
result.b = 0
return result
