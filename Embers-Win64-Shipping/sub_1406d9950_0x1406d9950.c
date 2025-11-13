// 函数: sub_1406d9950
// 地址: 0x1406d9950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &arg_20

if (rax_2 != 0)
    rsi = rax_2

uint64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0
int64_t r8_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_8 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_8[4]
    r8_7 = sub_140d30490(arg2, &arg_10, r8_8)
else
    r8_7 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int32_t zmm3 = arg_10
int512_t zmm2
zmm2.o = arg_18
uint64_t rdx_8 = var_28
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
char result = sub_1406d2ce0(rsi, rdx_8, r8_7, zmm3)
*arg3 = result
return result
