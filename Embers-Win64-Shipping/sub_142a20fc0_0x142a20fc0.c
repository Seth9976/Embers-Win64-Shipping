// 函数: sub_142a20fc0
// 地址: 0x142a20fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(*(arg1 + 0x64))
int64_t rcx = sx.q(*(arg1 + 0x10))
uint64_t i_4 = zx.q(r14.d)
int64_t rbp_1 = *(arg1 + 0x38) - r14
int64_t rbx_1 = rbp_1 - zx.q(rcx.d * r14.d)

if (r14.d s> 0)
    uint64_t i
    
    do
        memcpy(rbx_1, rbp_1, rcx.d)
        rbx_1 += rcx
        i = i_4
        i_4 -= 1
    while (i != 1)

int64_t r12 = sx.q(*(arg1 + 0x24))
uint32_t i_6 = r14.d u>> 1
uint64_t result = zx.q(r12.d * i_6)
uint64_t i_5 = zx.q(i_6)
int64_t r15_1 = *(arg1 + 0x40) - i_5
int64_t rbx_3 = r15_1 - result

if (i_6 != 0)
    uint64_t i_3 = zx.q(i_5.d)
    uint64_t i_1
    
    do
        memcpy(rbx_3, r15_1, r12.d)
        rbx_3 += r12
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int64_t rbp_3 = *(arg1 + 0x48) - i_5
int64_t rbx_5 = rbp_3 - result

if (i_6 != 0)
    uint64_t i_2
    
    do
        result = memcpy(rbx_5, rbp_3, r12.d)
        rbx_5 += r12
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
