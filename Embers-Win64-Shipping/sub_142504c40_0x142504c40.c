// 函数: sub_142504c40
// 地址: 0x142504c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int64_t rax_2 = *(arg2 + 0x20)
float result = result_1
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
result = result * result
float var_14
float var_10
*arg3 = var_14 * var_14 + result + var_10 * var_10
return result
