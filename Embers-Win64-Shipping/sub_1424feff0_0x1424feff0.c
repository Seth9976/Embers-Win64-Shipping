// 函数: sub_1424feff0
// 地址: 0x1424feff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

*(arg2 + 0x38) = 0
void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* rax_3 = *(arg2 + 0x38)
void* rbx = &var_48

if (rax_3 != 0)
    rbx = rax_3

int128_t var_28 = var_38
int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_4 != 0
*(arg2 + 0x20) = rsi + rax_4
float var_18[0x4]
float* result = sub_140ad9b20(&var_28, &var_18)
*rbx = *result
return result
