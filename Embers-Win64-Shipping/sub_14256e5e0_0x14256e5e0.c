// 函数: sub_14256e5e0
// 地址: 0x14256e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rsi
rsi.b = arg_18 != 0
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

void* rax_4 = *(arg2 + 0x38)
void* r9 = &var_a8
uint32_t rdx_6 = zx.d(arg_10)

if (rax_4 != 0)
    r9 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
char result = sub_14226cd80(arg1, rdx_6, rsi.b, r9)
*arg3 = result
return result
