// 函数: sub_14229f6c0
// 地址: 0x14229f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0x28))
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg1 + 0x28))
int32_t r14_1 = ((temp2 & 3) + temp3) s>> 2
int32_t rcx = *(arg2 + 0xc)

if (*(arg1 + 0x3c) == 0)
    r14_1 = (temp1 - temp0) s>> 1

int64_t i = 0
arg2[1].d = 0
int32_t rdx_3 = 0

if (rcx != r14_1)
    sub_1405dadb0(arg2, r14_1)
    rdx_3 = arg2[1].d
    rcx = *(arg2 + 0xc)

int32_t rax_6 = r14_1 + rdx_3
arg2[1].d = rax_6

if (rax_6 s> rcx)
    sub_1405a4cf0(arg2)

void* result = arg1 + 0x20
void* rdx_5 = *result

if (*(arg1 + 0x3c) != 0)
    if ((rdx_5.b & 1) != 0)
        rdx_5 = (rdx_5 s>> 1) + result
    
    return memcpy(*arg2, rdx_5, *(arg1 + 0x28))

if ((rdx_5.b & 1) != 0)
    rdx_5 = (rdx_5 s>> 1) + result

if (r14_1 s> 0)
    do
        result = *arg2
        *(result + (i << 2)) = zx.d(*(rdx_5 + (i << 1)))
        i += 1
    while (i s< sx.q(r14_1))

return result
