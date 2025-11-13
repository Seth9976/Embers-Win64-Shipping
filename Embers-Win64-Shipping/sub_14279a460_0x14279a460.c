// 函数: sub_14279a460
// 地址: 0x14279a460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t var_d8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_d8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

void var_98
memset(&var_98, 0, 0x88)
int32_t var_90 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_4 = *(arg2 + 0x38)
void* r9 = &var_98
int64_t var_b8 = var_d8

if (rax_4 != 0)
    r9 = rax_4

int64_t var_a8 = var_c8
int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
int32_t var_d0
int32_t var_b0 = var_d0
int32_t var_c0
int32_t var_a0 = var_c0
*(arg2 + 0x20) = rdi + rax_5
char result = sub_142795860(arg1, &var_a8, &var_b8, r9)
*arg3 = result
return result
