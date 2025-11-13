// 函数: sub_1424b8a80
// 地址: 0x1424b8a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = 0
int32_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_28 = 0
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi = var_38
int64_t var_18 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_10 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_18, var_30, 0)
    memcpy(var_18, rdi, var_30 * 2)
else
    int32_t var_c_1 = 0

char result = sub_14202fb80(&var_18, &var_28)
int64_t rcx_7 = var_28
*arg3 = result

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_38

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
