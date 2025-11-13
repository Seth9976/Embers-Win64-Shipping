// 函数: sub_1408ebde0
// 地址: 0x1408ebde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8
__builtin_memset(&var_b8, 0, 0x70)
int64_t var_28
__builtin_memset(&var_28, 0, 0x18)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_b8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rdx_2 = &var_b8

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_3 != 0
*(arg2 + 0x20) = rbx + rax_3
sub_1408e7f10(arg1, rdx_2)
return sub_1408dac20(&var_b8)
