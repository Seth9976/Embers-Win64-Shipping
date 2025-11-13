// 函数: sub_1418a5950
// 地址: 0x1418a5950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x20)
*(arg1 + 0x20) -= 1
*(arg1 + 0x18)
*(arg1 + 0x18) += sx.q(rax - 1)
*(arg1 + 0x10) += 1
EnterCriticalSection(arg1 + 0x48)
void arg_8
int32_t rdi_1 = *sub_140b162a0(arg1 + 0x70, &arg_8, arg2)

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)

int32_t rax_5

if (rdi_1 == 0xffffffff)
    rax_5 = 0
    
    if (0 == *(arg1 + 0x38))
        *(arg1 + 0x38) = 0
    else
        rax_5 = *(arg1 + 0x38)
else
    int32_t rbp_1 = *(arg1 + 0x38)
    *(arg1 + 0x38) -= 1
    rax_5 = rbp_1 - 1

int64_t result = *(arg1 + 0x30)
*(arg1 + 0x30) += sx.q(rax_5)
*(arg1 + 0x28) += 1
return result
