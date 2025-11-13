// 函数: sub_14248e430
// 地址: 0x14248e430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_28 = 0
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_4 = *(arg2 + 0x20)
int64_t zmm0 = arg_18
void* r8_6 = arg_10
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void arg_20
uint64_t* result = sub_142416fd0(arg1, &arg_20, r8_6, &var_28, zmm0)
int64_t rcx_4 = var_28
*arg3 = *result

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
