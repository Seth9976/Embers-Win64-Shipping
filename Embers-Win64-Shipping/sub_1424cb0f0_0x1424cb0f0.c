// 函数: sub_1424cb0f0
// 地址: 0x1424cb0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

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
int64_t* rsi = &var_48
int32_t arg_8 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

bool cond:1 = arg_8 != 0
int32_t arg_10 = 0
int64_t r14
r14.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = arg_10 != 0
int32_t arg_18 = 0
int64_t rbp
rbp.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:3 = arg_18 != 0
int64_t rax_7 = *(arg2 + 0x20)
uint64_t rdx_10 = zx.q(arg_20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
char result = (*(*arg1 + 0x920))(arg1, rdx_10, rsi, zx.q(r14.b), rbp.b, cond:3)
int64_t rcx_7 = var_48
*arg3 = result

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
