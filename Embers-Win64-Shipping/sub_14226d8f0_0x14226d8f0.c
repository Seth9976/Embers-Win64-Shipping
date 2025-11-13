// 函数: sub_14226d8f0
// 地址: 0x14226d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x348)

if (rcx == 0)
    *arg3 = 0
    *arg2 = 0
    return 0

int64_t var_28 = data_143e1df90
int64_t var_20 = data_143e1df98
void* rax_2 = data_143e1dfa0
void* var_18 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1
    rcx = *(arg1 + 0x348)

*arg2 = sub_142411a80(rcx, &var_28)
var_28 = data_143e1dfa8
int64_t var_20_1 = data_143e1dfb0
void* rax_5 = data_143e1dfb8
void* var_18_1 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int64_t result
int32_t zmm0_1
zmm0_1, result = sub_142411a80(*(arg1 + 0x348), &var_28)
*arg3 = zmm0_1
return result
