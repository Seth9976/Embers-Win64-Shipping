// 函数: sub_1424e4bf0
// 地址: 0x1424e4bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char result_1 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

bool cond:1 = *(arg2 + 0x20) == 0
char result_4 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &result_4, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_4)

int64_t rax_3 = *(arg2 + 0x20)
char result_3 = result_4
char result_2 = result_3
int64_t rcx_2
rcx_2.b = rax_3 != 0
char result = result_1
*(arg2 + 0x20) = rcx_2 + rax_3

if (result u<= result_3)
    result_2 = result

*arg3 = result_2
return result
