// 函数: sub_1405cff00
// 地址: 0x1405cff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &arg_10
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

void arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

float* rax_4 = *(arg2 + 0x38)
float* rcx_2 = &arg_20

if (rax_4 != 0)
    rcx_2 = rax_4

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
int32_t zmm1 = *(rsi + 4)
*rcx_2 = 1f f/ *rsi
rcx_2[1] = zmm1
return result
