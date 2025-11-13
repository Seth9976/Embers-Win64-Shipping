// 函数: sub_14256f5b0
// 地址: 0x14256f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rsi = &arg_10
int32_t arg_18 = 0
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    r9 = sub_140d30490(arg2, &arg_18, r8_3)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t* rax_4 = *(arg2 + 0x38)
int32_t* r8_4 = &arg_18

if (rax_4 != 0)
    r8_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
char result = sub_14226df60(arg1, rsi, r8_4, r9)
*arg3 = result
return result
