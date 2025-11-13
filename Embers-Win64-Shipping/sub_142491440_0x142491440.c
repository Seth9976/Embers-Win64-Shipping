// 函数: sub_142491440
// 地址: 0x142491440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c0)

int64_t var_c8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_c8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rsi
rsi.b = arg_8 != 0
void var_b8
memset(&var_b8, 0, 0x88)
int32_t var_b0 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_b8, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

void* rax_7 = *(arg2 + 0x38)
void* rcx_7 = &var_b8
int64_t r9 = arg_20
int64_t r8_12 = var_c8
int64_t rdx_12 = var_c0

if (rax_7 != 0)
    rcx_7 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
int32_t rax_9 = arg_10
*(arg2 + 0x20) = rdi + rax_8
return (*(*arg1 + 0x8e8))(arg1, rdx_12, r8_12, r9, rax_9, rsi.b, rcx_7)
