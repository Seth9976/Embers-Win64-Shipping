// 函数: sub_1425235b0
// 地址: 0x1425235b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_40 = 0xffffffff
int64_t var_3c = 0
int64_t arg_10 = 0
int64_t var_30
__builtin_memset(&var_30, 0, 0x18)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rsi = &var_40
int64_t var_50 = 0
int64_t var_48 = 0

if (rax_2 != 0)
    rsi = rax_2

int32_t var_68 = 0xffffffff
int64_t var_64 = 0
arg_10 = 0
int64_t var_58 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t* rax_5 = *(arg2 + 0x38)
int32_t* rdx_4 = &var_68

if (rax_5 != 0)
    rdx_4 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_6 != 0
*(arg2 + 0x20) = rbx + rax_6
bool result = sub_1420ce110(rsi, rdx_4)
*arg3 = result

if (var_50 != 0)
    result = sub_140a74f90(var_50)

int64_t var_28

if (var_28 == 0)
    return result

return sub_140a74f90(var_28)
