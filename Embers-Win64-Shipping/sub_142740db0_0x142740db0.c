// 函数: sub_142740db0
// 地址: 0x142740db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t var_b8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_b8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

void var_98
memset(&var_98, 0, 0x88)
int32_t var_90 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_5 = *(arg2 + 0x38)
void* rcx_5 = &var_98
int64_t r8_8 = arg_8
int64_t rdx_8 = arg_10

if (rax_5 != 0)
    rcx_5 = rax_5

int64_t var_a8 = var_b8
int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
int32_t var_b0
int32_t var_a0 = var_b0
return (*(*arg1 + 0x488))(arg1, rdx_8, r8_8, &var_a8, rcx_5)
