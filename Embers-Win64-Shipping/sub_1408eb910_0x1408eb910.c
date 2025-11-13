// 函数: sub_1408eb910
// 地址: 0x1408eb910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8
__builtin_memset(&var_c8, 0, 0x70)
int64_t var_38
__builtin_memset(&var_38, 0, 0x18)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_c8
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int128_t zmm2 = arg_10
int64_t rbx
rbx.b = rax_4 != 0
*(arg2 + 0x20) = rbx + rax_4
sub_1408de7a0(arg1, rsi, zmm2)
return sub_1408dac20(&var_c8)
