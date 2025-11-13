// 函数: sub_1425b1aa0
// 地址: 0x1425b1aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
uint128_t var_a8
__builtin_memcpy(&var_a8, "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 
    0x11)
int128_t zmm0 = data_142f13080
int64_t var_94 = 0
int32_t var_8c = 0x3f800000
int32_t var_88 = 0x3f800000
char var_84 = 1
int32_t var_80 = 0x3f800000
int32_t var_7c = 0x3f800000
int64_t var_68 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_2 = *(arg2 + 0x20)
uint128_t var_58 = var_a8
int64_t rcx_1
rcx_1.b = rax_2 != 0
char var_98
int128_t var_48 = var_98.o
uint128_t var_38 = var_88.o
*(arg2 + 0x20) = rcx_1 + rax_2
int128_t var_28 = zmm0
uint64_t var_18 = var_68
return sub_141f9bfb0(arg1, &var_58)
