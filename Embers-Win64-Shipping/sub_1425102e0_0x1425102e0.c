// 函数: sub_1425102e0
// 地址: 0x1425102e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int64_t var_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int16_t* var_28 = nullptr
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
char result = sub_1420ce170(&var_18, &var_28)
int16_t* rcx_3 = var_28
*arg3 = result

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int16_t* rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
