// 函数: sub_141a27480
// 地址: 0x141a27480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
float arg_10 = 0f

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0xea60
int32_t arg_1c = 1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t* rax_3 = *(arg2 + 0x38)
int32_t* r8_4 = &arg_18
float zmm1 = arg_10

if (rax_3 != 0)
    r8_4 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void arg_20
int32_t* result = sub_141a25fe0(&arg_20, zmm1, r8_4)
*arg3 = *result
return result
