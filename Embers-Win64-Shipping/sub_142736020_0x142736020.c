// 函数: sub_142736020
// 地址: 0x142736020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t var_14
int32_t var_14_1 = var_14 & 0xfffffffe
int64_t var_38
__builtin_memset(&var_38, 0, 0x20)
char var_18 = 0xff
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_38
char arg_10 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
char r8_6 = arg_10
void* rcx_3 = arg_20
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
uint64_t result = sub_1426be9e0(rcx_3, rsi, r8_6)
int64_t rcx_4 = var_38

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
