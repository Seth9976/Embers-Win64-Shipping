// 函数: sub_141cca070
// 地址: 0x141cca070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
__builtin_memset(&var_28, 0, 0x20)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_28
int64_t* var_48 = nullptr
int64_t var_40 = 0

if (rax_2 != 0)
    rsi = rax_2

int64_t var_38 = 0
int64_t var_30 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t** rax_4 = *(arg2 + 0x38)
int64_t** rdx_4 = &var_48

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_5 != 0
*(arg2 + 0x20) = rbx + rax_5
int64_t result = sub_141cbfce0(rsi, rdx_4)

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t* rcx_4 = var_48

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t var_18

if (var_18 != 0)
    result = sub_140a74f90(var_18)

int64_t rcx_6 = var_28

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
