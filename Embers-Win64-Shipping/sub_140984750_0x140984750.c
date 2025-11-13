// 函数: sub_140984750
// 地址: 0x140984750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* var_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int64_t var_28 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

char arg_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char* rax_5 = *(arg2 + 0x38)
char* rsi = &arg_10
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    rsi = rax_5

int32_t arg_20 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_20, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t* rax_7 = *(arg2 + 0x38)
int32_t* rcx_5 = &arg_20
int64_t r8_10 = var_28
void* rdx_10 = var_20

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t* rcx_6 = var_18
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
return sub_140960a20(rcx_6, rdx_10, r8_10, rsi, rcx_5)
