// 函数: sub_1424fba90
// 地址: 0x1424fba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int64_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_3 != 0
uint64_t result = result_1
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t rcx_4 = arg_18

if (result.d == rcx_4.d)
    result u>>= 0x20
    
    if (result.d == (rcx_4 u>> 0x20).d)
        *arg3 = 0
        return result

*arg3 = 1
return result
