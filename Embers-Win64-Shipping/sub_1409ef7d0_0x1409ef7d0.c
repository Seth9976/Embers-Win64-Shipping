// 函数: sub_1409ef7d0
// 地址: 0x1409ef7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_18
uint64_t var_28 = 0
int64_t var_20 = 0

if (rax_2 != 0)
    rsi = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

uint64_t* rax_4 = *(arg2 + 0x38)
uint64_t* r8_4 = &var_28

if (rax_4 != 0)
    r8_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
uint64_t result = sub_1409db170(arg1, rsi, r8_4)
uint64_t rcx_3 = var_28

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
