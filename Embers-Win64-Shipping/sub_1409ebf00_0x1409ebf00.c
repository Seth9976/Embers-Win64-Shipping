// 函数: sub_1409ebf00
// 地址: 0x1409ebf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t var_10 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_18
int32_t arg_10 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_4 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_4[4]
    sub_140d30490(arg2, &arg_10, r8_4)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
bool cond:2 = arg_10 != 0
*(arg2 + 0x20) = rdi + rax_4
int64_t* result = sub_1409b5be0(arg1, rsi, cond:2)
int64_t rcx_3 = var_18

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
