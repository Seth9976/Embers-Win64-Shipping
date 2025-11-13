// 函数: sub_141eac150
// 地址: 0x141eac150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(arg2 + 0x10)
int64_t arg_10 = r8
uint32_t r8_1 = (r8 u>> 4).d
int32_t rcx_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t rdi_2 = neg.d(rcx_1 + r8_1) ^ rcx_1 u>> 0xd
int32_t r8_4 = (r8_1 - rcx_1 - rdi_2) ^ rdi_2 u>> 0xc
int32_t rcx_4 = (rcx_1 - r8_4 - rdi_2) ^ r8_4 << 0x10
int32_t rdi_5 = (rdi_2 - rcx_4 - r8_4) ^ rcx_4 u>> 5
int32_t r8_7 = (r8_4 - rcx_4 - rdi_5) ^ rdi_5 u>> 3
int32_t rcx_7 = (rcx_4 - r8_7 - rdi_5) ^ r8_7 << 0xa
int32_t rdi_8 = (rdi_5 - rcx_7 - r8_7) ^ rcx_7 u>> 0xf
int32_t result_1
sub_141e8de00(arg1 + 0x58, &result_1, rdi_8, &arg_10)
int64_t result = sx.q(result_1)
int64_t rbx_2

if (result.d != 0xffffffff)
    rbx_2 = result << 5

int64_t result_2

if (result.d == 0xffffffff || rbx_2 == neg.q(*(arg1 + 0x58)))
    result = sub_141e8dcf0(arg1 + 0x58, rdi_8, &arg_10)
    result_2 = result
else
    result_2 = rbx_2 + *(arg1 + 0x58) + 8

int64_t rdi_9 = sx.q(*(result_2 + 8))

if (rdi_9.d s< 5)
    int32_t rcx_11 = (rdi_9 + 1).d
    *(result_2 + 8) = rcx_11
    
    if (rcx_11 s> *(result_2 + 0xc))
        sub_1405a4d70(result_2)
    
    result = *result_2
    *(result + (rdi_9 << 3)) = arg2

return result
