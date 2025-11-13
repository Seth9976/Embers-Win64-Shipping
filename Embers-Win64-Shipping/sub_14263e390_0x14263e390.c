// 函数: sub_14263e390
// 地址: 0x14263e390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_38 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rdi = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rsi = var_58
int64_t var_48 = 0
int64_t rcx_4
rcx_4.b = rax_5 != 0
*(arg2 + 0x20) = rcx_4 + rax_5
int64_t rbx_1 = sx.q(var_50)
int32_t var_40 = rbx_1.d

if (rbx_1.d != 0)
    sub_1405c4a00(&var_48, rbx_1.d, 0)
    memcpy(var_48, rsi, (rbx_1 << 3).d)
else
    int32_t var_3c_1 = 0

int64_t rax_6 = var_38.q
int64_t r9 = arg_18
char r8_10 = arg_10
int64_t var_28 = rax_6

if (rax_6 != 0)
    rdi = var_38:8.q

int64_t var_20 = rdi
void* result = sub_14263a060(&var_28, &var_48, r8_10, r9)
int64_t rcx_9 = var_58
*arg3 = result

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
