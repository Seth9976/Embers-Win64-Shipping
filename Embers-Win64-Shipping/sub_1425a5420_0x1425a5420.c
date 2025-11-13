// 函数: sub_1425a5420
// 地址: 0x1425a5420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
__builtin_memcpy(&var_28, "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 
    0x11)
int128_t var_58
__builtin_memset(&var_58, 0, 0x30)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int128_t* rax_2 = *(arg2 + 0x38)
int128_t* rsi = &var_58
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
return sub_141f536b0(arg1, rsi, cond:2)
