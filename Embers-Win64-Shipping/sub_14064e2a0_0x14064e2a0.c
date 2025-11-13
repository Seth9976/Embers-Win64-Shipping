// 函数: sub_14064e2a0
// 地址: 0x14064e2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

*(arg2 + 0x38) = 0
void var_c8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_c8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_c8
char arg_10 = 0

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = arg_18 != 0
int128_t var_b8
__builtin_memset(&var_b8, 0, 0x88)
int64_t r14
r14.b = cond:1
*(arg2 + 0x38) = 0
var_b8:8.d = 0x3f800000

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_b8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int128_t* rax_7 = *(arg2 + 0x38)
int128_t* rcx_5 = &var_b8
uint32_t r8_10 = zx.d(arg_10)

if (rax_7 != 0)
    rcx_5 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t* rcx_6 = arg_20
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
char result = sub_140631140(rcx_6, rsi, r8_10, r14.b, rcx_5)
*arg3 = result
return result
