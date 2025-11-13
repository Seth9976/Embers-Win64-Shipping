// 函数: sub_140652590
// 地址: 0x140652590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_18

if (rax_2 != 0)
    rsi = rax_2

float result_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &result_1, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

*(arg2 + 0x38) = 0
float arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

float* rax_5 = *(arg2 + 0x38)
float* rcx_3 = &arg_10
float result = result_1

if (rax_5 != 0)
    rcx_3 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
result = result f* *rsi
float var_24
float var_20
*rcx_3 = var_24 f* *(rsi + 4) + result + var_20 f* *(rsi + 8) f- *(rsi + 0xc)
return result
