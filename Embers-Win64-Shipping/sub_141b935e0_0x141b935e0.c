// 函数: sub_141b935e0
// 地址: 0x141b935e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int64_t var_30
sub_140d3a3a0(&var_30, nullptr)
var_30 = *arg3
int64_t rax_1 = arg3[1]
int64_t rbx_1 = sx.q(*(arg1 + 0x1d8))
int64_t var_1c = 0
char var_20 = 1
int32_t rax_2 = (rbx_1 + 1).d
*(arg1 + 0x1d8) = rax_2

if (rax_2 s> *(arg1 + 0x1dc))
    sub_1405c4ec0(arg1 + 0x1d0)

int64_t result = *(arg1 + 0x1d0)
int64_t rcx_2 = rbx_1 * 5
*(result + (rcx_2 << 3)) = arg2.o
*(result + (rcx_2 << 3) + 0x10) = rax_1.o
*(result + (rcx_2 << 3) + 0x20) = var_1c
return result
