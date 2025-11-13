// 函数: sub_141cca2c0
// 地址: 0x141cca2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78
__builtin_memset(&var_78, 0, 0x20)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_78

if (rax_2 != 0)
    rsi = rax_2

void var_58
sub_141cbe4d0(&var_58)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_4 = *(arg2 + 0x38)
void* rdx_4 = &var_58

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
char result = sub_141cc19d0(rsi, rdx_4)
*arg3 = result
int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t var_30

if (var_30 != 0)
    result = sub_140a74f90(var_30)

int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int64_t var_50

if (var_50 != 0)
    result = sub_140a74f90(var_50)

int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_9 = var_78

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
