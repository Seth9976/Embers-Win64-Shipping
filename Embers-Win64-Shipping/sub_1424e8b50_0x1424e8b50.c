// 函数: sub_1424e8b50
// 地址: 0x1424e8b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* rdi = nullptr
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
void* rbp = &arg_10
int64_t r14 = var_38
uint64_t var_28 = 0

if (rax_3 != 0)
    rbp = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_4 != 0
*(arg2 + 0x20) = rcx_2 + rax_4

if (var_30 != 0)
    sub_1405a4c70(&var_28, var_30, 0)
    rdi = var_28
    memcpy(rdi, r14, var_30 * 2)

wchar16* rcx_6 = &data_142d40450

if (var_30 != 0)
    rcx_6 = rdi

char result = sub_140b247f0(rcx_6, rbp)
char result_1 = result

if (rdi != 0)
    result = sub_140a74f90(rdi)

int64_t rcx_8 = var_38
*arg3 = result_1

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
