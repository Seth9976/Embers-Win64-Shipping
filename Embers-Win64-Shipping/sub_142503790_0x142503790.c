// 函数: sub_142503790
// 地址: 0x142503790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

*(arg2 + 0x38) = 0
void arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void* rax_3 = *(arg2 + 0x38)
void* rdi = &arg_10
int64_t rbp = var_38
int64_t var_28 = 0

if (rax_3 != 0)
    rdi = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_4 != 0
*(arg2 + 0x20) = rcx_2 + rax_4
int32_t var_20 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_28, var_30, 0)
    memcpy(var_28, rbp, var_30 * 2)
else
    int32_t var_1c_1 = 0

char result = sub_140b41450(&var_28, rdi)
int64_t rcx_7 = var_28
char result_1 = result

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_38
*arg3 = result_1

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
