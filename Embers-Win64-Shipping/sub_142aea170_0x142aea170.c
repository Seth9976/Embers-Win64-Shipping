// 函数: sub_142aea170
// 地址: 0x142aea170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 0

uint32_t count_1 = *(arg2 + 0x18)
int32_t* result = sub_142aead70(arg1, count_1, arg3)

if (*arg3 s> 0)
    return result

uint32_t count = *(arg2 + 0xc)
int32_t rbx_1 = result[1]

if (count s> result[3])
    count = result[3]

int64_t r14_1 = *(result + 0x40)
memcpy(result, arg2, count)
*(result + 0x40) = r14_1
result[1] = rbx_1

if (count_1 s> 0)
    memcpy(r14_1, *(arg2 + 0x40), count_1)

int64_t rcx_2 = *(result + 0x48)
int64_t rdx_3 = *(arg2 + 0x40)

if (rcx_2 u>= rdx_3 && rcx_2 u< sx.q(*(arg2 + 0x18)) + rdx_3)
    *(result + 0x48) = *(result + 0x40) - rdx_3 + rcx_2
else if (rcx_2 u>= arg2 && rcx_2 u< sx.q(*(arg2 + 0xc)) + arg2)
    *(result + 0x48) = rcx_2 - arg2 + result

int64_t rcx_5 = *(result + 0x50)
int64_t rdx_4 = *(arg2 + 0x40)

if (rcx_5 u>= rdx_4 && rcx_5 u< sx.q(*(arg2 + 0x18)) + rdx_4)
    *(result + 0x50) = *(result + 0x40) - rdx_4 + rcx_5
else if (rcx_5 u>= arg2 && rcx_5 u< sx.q(*(arg2 + 0xc)) + arg2)
    *(result + 0x50) = rcx_5 - arg2 + result

int64_t rcx_8 = *(result + 0x58)
int64_t rdx_5 = *(arg2 + 0x40)

if (rcx_8 u>= rdx_5 && rcx_8 u< sx.q(*(arg2 + 0x18)) + rdx_5)
    *(result + 0x58) = *(result + 0x40) - rdx_5 + rcx_8
else if (rcx_8 u>= arg2 && rcx_8 u< sx.q(*(arg2 + 0xc)) + arg2)
    *(result + 0x58) = rcx_8 - arg2 + result

int64_t rcx_11 = *(result + 0x60)
int64_t rdx_6 = *(arg2 + 0x40)

if (rcx_11 u>= rdx_6 && rcx_11 u< sx.q(*(arg2 + 0x18)) + rdx_6)
    *(result + 0x60) = *(result + 0x40) - rdx_6 + rcx_11
else if (rcx_11 u>= arg2 && rcx_11 u< sx.q(*(arg2 + 0xc)) + arg2)
    *(result + 0x60) = rcx_11 - arg2 + result

int64_t rcx_14 = *(result + 0x30)
int64_t rdx_7 = *(arg2 + 0x40)

if (rcx_14 u>= rdx_7 && rcx_14 u< sx.q(*(arg2 + 0x18)) + rdx_7)
    *(result + 0x30) = *(result + 0x40) - rdx_7 + rcx_14
else if (rcx_14 u>= arg2 && rcx_14 u< sx.q(*(arg2 + 0xc)) + arg2)
    *(result + 0x30) = rcx_14 - arg2 + result

result[2] &= 0xffffffdf
return result
