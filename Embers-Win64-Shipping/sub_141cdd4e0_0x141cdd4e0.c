// 函数: sub_141cdd4e0
// 地址: 0x141cdd4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t r9_1 = sx.q(arg2)

if (r9_1.d s>= *(arg1 + 0xa0))
    return 

void* r10_1 = arg1 + 0xa8
void* rax_1 = *(r10_1 + 0x10)

if (rax_1 != 0)
    r10_1 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(r9_1.d)

if (not(test_bit(*(r10_1 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), r9_1.d & 0x1f)))
    return 

int64_t rbx_1 = 0
int64_t r14_1 = r9_1 * 0x18
int32_t rdx_3 = *(*(arg1 + 0x98) + r14_1 + 0x10)
arg3[1].d = 0

if (rdx_3 s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdx_3)

int64_t rax_7 = *(arg1 + 0x98)
int32_t* rdi_1 = *(rax_7 + r14_1 + 8)
uint64_t r14_3 = sx.q(*(rax_7 + r14_1 + 0x10)) << 2 u>> 2

if (rdi_1 u> &rdi_1[sx.q(*(rax_7 + r14_1 + 0x10))])
    r14_3 = 0

if (r14_3 == 0)
    return 

do
    sub_1408d92c0(arg3, *(arg1 + 0xd0) + 0xc + (sx.q(*rdi_1) << 4))
    rbx_1 += 1
    rdi_1 = &rdi_1[1]
while (rbx_1 != r14_3)
