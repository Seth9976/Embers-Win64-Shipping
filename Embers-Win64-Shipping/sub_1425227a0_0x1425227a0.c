// 函数: sub_1425227a0
// 地址: 0x1425227a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_80
__builtin_memset(&var_80, 0, 0x18)
int32_t var_90 = 0xffffffff
int64_t var_8c = 0
int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_90, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

int128_t var_b8
sub_140d3a3a0(&var_b8, nullptr)
int64_t var_b0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_b8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t var_a8 = -1
int64_t var_a0 = 0
int64_t var_98 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rcx_5
rcx_5.b = rax_5 != 0
int128_t var_28 = var_a8.o
int128_t zmm0 = var_b8
*(arg2 + 0x20) = rcx_5 + rax_5
int64_t var_58
__builtin_memset(&var_58, 0, 0x18)
int64_t var_68 = var_90.q
int32_t var_60 = var_8c:4.d
int64_t var_18 = var_98
int128_t var_38 = zmm0
arg_20 = 0
sub_141ddfdd0(&var_58, &var_80)
void* result = sub_1420cbcf0(arg_10, &var_68, &var_38, &var_28)
int64_t var_78

if (var_78 == 0)
    return result

return sub_140a74f90(var_78)
