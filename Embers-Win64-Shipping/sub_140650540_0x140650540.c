// 函数: sub_140650540
// 地址: 0x140650540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int64_t var_28 = 0
int64_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_28
int64_t var_38 = 0
int32_t var_30 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rbp = var_38
uint64_t var_18 = 0
int64_t rcx_2
rcx_2.b = rax_4 != 0
*(arg2 + 0x20) = rcx_2 + rax_4

if (var_30 != 0)
    sub_1405a4c70(&var_18, var_30, 0)
    rdi = var_18
    memcpy(rdi, rbp, var_30 * 2)

uint64_t rdx_6 = &data_142d40450

if (var_30 != 0)
    rdx_6 = rdi

char result = sub_140b1f370(rsi, rdx_6, 0, 0)
char result_1 = result

if (rdi != 0)
    result = sub_140a74f90(rdi)

int64_t rcx_8 = var_38
*arg3 = result_1

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_28

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
