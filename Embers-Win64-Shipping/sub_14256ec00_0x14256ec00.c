// 函数: sub_14256ec00
// 地址: 0x14256ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_c8 = 0
int64_t var_c0 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_c8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_c8
int32_t arg_18 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rbp
rbp.b = arg_18 != 0
void var_b8
memset(&var_b8, 0, 0x88)
int32_t var_b0 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_b8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int128_t* rax_6 = *(arg2 + 0x38)
int128_t* rcx_5 = &var_b8
uint32_t rdx_8 = zx.d(arg_10)

if (rax_6 != 0)
    rcx_5 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
char result = sub_14226d250(arg1, rdx_8, rsi, rbp.b, rcx_5)
int64_t rcx_7 = var_c8
*arg3 = result

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
