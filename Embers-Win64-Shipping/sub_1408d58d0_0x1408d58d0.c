// 函数: sub_1408d58d0
// 地址: 0x1408d58d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rsi = &var_28
int64_t var_20 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

char arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

char arg_8 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

char* rax_7 = *(arg2 + 0x38)
char* rcx_5 = &arg_8
uint64_t r9 = zx.q(arg_20)
int64_t r8_10 = var_20

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
char rax_9 = arg_10
*(arg2 + 0x20) = rdi + rax_8
return (*(*arg1 + 0x260))(arg1, rsi, r8_10, r9, rax_9, rcx_5)
