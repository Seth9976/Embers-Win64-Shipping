// 函数: sub_142a20d60
// 地址: 0x142a20d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x10))
uint64_t r12 = zx.q(*(arg1 + 0x64))
uint64_t i_3 = zx.q(r12.d)
int64_t rsi_3 = sx.q(*(arg1 + 4) * rdx.d) + *(arg1 + 0x38) - r12 - rdx
int64_t rbx = rdx + rsi_3

if (r12.d s> 0)
    uint64_t i
    
    do
        memcpy(rbx, rsi_3, rdx.d)
        rbx += rdx
        i = i_3
        i_3 -= 1
    while (i != 1)

int64_t rcx_1 = sx.q(*(arg1 + 0x24))
int32_t result = *(arg1 + 0x18) * rcx_1.d
uint32_t i_6 = r12.d u>> 1
uint64_t i_4 = zx.q(i_6)
int64_t result_1 = sx.q(result)
int64_t r14_3 = *(arg1 + 0x40) - i_4 - rcx_1 + result_1
int64_t rdi_1 = rcx_1 + r14_3

if (i_6 != 0)
    uint64_t i_5 = zx.q(i_4.d)
    uint64_t i_1
    
    do
        result = memcpy(rdi_1, r14_3, rcx_1.d)
        rdi_1 += rcx_1
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

int64_t rsi_7 = *(arg1 + 0x48) - i_4 - rcx_1 + result_1
int64_t rdi_2 = rcx_1 + rsi_7

if (i_6 != 0)
    uint64_t i_2
    
    do
        result = memcpy(rdi_2, rsi_7, rcx_1.d)
        rdi_2 += rcx_1
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

return result
