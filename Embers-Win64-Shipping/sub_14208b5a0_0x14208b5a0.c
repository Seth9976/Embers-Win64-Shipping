// 函数: sub_14208b5a0
// 地址: 0x14208b5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t rax_2 = (*(*arg1 + 0x260))() - 1
int32_t r8 = 0

if (rdi.d s> 0)
    r8 = *(arg1[0xe] + rdi * 0x14 - 4)

if (rdi.d s>= rax_2)
    return r8 + 0xa

int32_t rdx_1 = *(arg1[0xe] + rdi * 0x14 + 0x24)
int32_t rcx_1 = r8 + 0x14

if (rdx_1 != 0)
    rcx_1 = rdx_1

if (rcx_1 s<= r8)
    return zx.q(r8 + 1)

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = muls.dp.d(0x66666667, r8)
int32_t rdx_3 = temp0_1 s>> 2
uint32_t result = ((rdx_3 u>> 0x1f) + 1 + rdx_3) * 0xa

if (result s> r8 && result s< rcx_1)
    return result

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rcx_1 - r8)
return zx.q(((temp3 - temp2) s>> 1) + r8)
