// 函数: sub_142517430
// 地址: 0x142517430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
__builtin_memset(&var_38, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t var_48 = 0
int64_t var_40 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rbx = &var_48

if (rax_3 != 0)
    rbx = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_4 != 0
int64_t var_20 = var_38
*(arg2 + 0x20) = rsi + rax_4
int64_t var_30
void var_18
sub_140596d10(&var_18, &var_30)
int64_t* result = sub_1420b3ed0(&var_20, rbx)
int64_t rcx_4 = var_48

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_30

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
