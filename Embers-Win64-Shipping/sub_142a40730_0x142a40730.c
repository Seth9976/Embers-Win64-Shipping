// 函数: sub_142a40730
// 地址: 0x142a40730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142a3f0a0(arg1 & 0xffffffffffc00000, arg1, *(arg1 + 0x30), nullptr)
uint64_t r8_1 = zx.q(*(arg1 + 2))
int64_t r9 = *(arg1 + 0x30)
void* rdx_4 = (arg2 - 1 + r8_1) * r9 + rax
void* result_2 = zx.q(r8_1.d) * r9 + rax
void* result = result_2

if (result_2 u<= rdx_4)
    void* result_1
    
    do
        result_1 = result + r9
        *result = result_1
        result = result_1
    while (result_1 u<= rdx_4)

*rdx_4 = 0
*(arg1 + 8) = result_2
return result
