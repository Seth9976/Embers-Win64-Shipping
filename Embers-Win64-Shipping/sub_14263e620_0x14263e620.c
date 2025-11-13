// 函数: sub_14263e620
// 地址: 0x14263e620
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
int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t var_68 = 0
int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78 = 0
int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_78, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rsi = var_78
int64_t var_58 = 0
int64_t rcx_5
rcx_5.b = rax_6 != 0
*(arg2 + 0x20) = rcx_5 + rax_6
int64_t rbx_1 = sx.q(var_70)
int32_t var_50 = rbx_1.d

if (rbx_1.d != 0)
    sub_1405c4a00(&var_58, rbx_1.d, 0)
    memcpy(var_58, rsi, (rbx_1 << 3).d)
else
    int32_t var_4c_1 = 0

int64_t rbx_2 = sx.q(var_60)
int64_t rsi_1 = var_68
int64_t var_48 = 0
int32_t var_40 = rbx_2.d

if (rbx_2.d != 0)
    sub_1405c4a00(&var_48, rbx_2.d, 0)
    memcpy(var_48, rsi_1, (rbx_2 << 3).d)
else
    int32_t var_3c_1 = 0

int64_t rax_7 = var_38.q
char r8_14 = arg_10
int64_t* rdx_14 = arg_18
int64_t var_28 = rax_7

if (rax_7 != 0)
    rdi = var_38:8.q

int64_t var_20 = rdi
char result = sub_14263ab30(&var_28, rdx_14, r8_14, &var_48, &var_58)
int64_t rcx_12 = var_78
*arg3 = result

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = var_68

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
