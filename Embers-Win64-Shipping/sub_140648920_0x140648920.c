// 函数: sub_140648920
// 地址: 0x140648920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

void* rax_2 = *(arg2 + 0x38)
void* rbp = &var_38
int64_t var_18 = 0
int64_t var_10 = 0

if (rax_2 != 0)
    rbp = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rsi = &var_18
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rsi = rax_4

void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

uint64_t* rax_6 = *(arg2 + 0x38)
uint64_t* r8_6 = &var_28

if (rax_6 != 0)
    r8_6 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
int64_t result
int32_t zmm0
zmm0, result = sub_1406291b0(rbp, rsi, r8_6)
int64_t rcx_4 = var_18
*arg3 = zmm0

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
