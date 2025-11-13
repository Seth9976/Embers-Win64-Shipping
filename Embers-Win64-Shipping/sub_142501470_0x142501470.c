// 函数: sub_142501470
// 地址: 0x142501470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_2 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_2, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_2)

int64_t result_1 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &result_1, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
int64_t result = result_1
bool cond:0 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_4

if (cond:0)
    result = result_2

*arg3 = result
return result
