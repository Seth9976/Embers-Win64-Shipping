// 函数: sub_1424f3280
// 地址: 0x1424f3280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* rbx = &var_28

if (rax_2 != 0)
    rbx = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_3 != 0
*(arg2 + 0x20) = rsi + rax_3
void var_18
int32_t* result = sub_140adc6e0(&var_18)
*rbx = *result
return result
