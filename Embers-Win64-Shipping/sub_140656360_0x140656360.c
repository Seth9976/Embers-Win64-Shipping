// 函数: sub_140656360
// 地址: 0x140656360
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
void* r14 = &arg_10
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    r14 = rax_2

void arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* rax_4 = *(arg2 + 0x38)
void* rdi = &arg_20

if (rax_4 != 0)
    rdi = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
void var_28
int64_t* rax_6 = sub_140b29d90(&var_28)
void var_20
int64_t* result = sub_140b21590(&var_20)
*rdi = *result - *rax_6 + *r14
return result
