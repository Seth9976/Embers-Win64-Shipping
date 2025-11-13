// 函数: sub_14256e740
// 地址: 0x14256e740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = 0
int64_t var_b0 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_b8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_b8
int32_t arg_10 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rbp
rbp.b = arg_10 != 0
void var_a8
memset(&var_a8, 0, 0x88)
int32_t var_a0 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_a8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int128_t* rax_5 = *(arg2 + 0x38)
int128_t* r9 = &var_a8

if (rax_5 != 0)
    r9 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
char result = sub_14226cee0(arg1, rsi, rbp.b, r9)
int64_t rcx_5 = var_b8
*arg3 = result

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
