// 函数: sub_141ce45e0
// 地址: 0x141ce45e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = data_143a1c6b0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_28 = 0
int64_t var_20 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_28
uint64_t var_38 = 0
int64_t var_30 = 0

if (rax_3 != 0)
    rsi = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

uint64_t* rax_5 = *(arg2 + 0x38)
uint64_t* rcx_3 = &var_38
int32_t r8_6 = arg_10

if (rax_5 != 0)
    rcx_3 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
void arg_18
int32_t* result = sub_141cda5e0(arg1, &arg_18, r8_6, rsi, rcx_3)
*arg3 = *result
uint64_t rcx_6 = var_38

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
