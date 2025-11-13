// 函数: sub_140983d00
// 地址: 0x140983d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int128_t var_50 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_50, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_70 = 0
int32_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_70, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

char arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_10, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_7 = *(arg2 + 0x20)
int64_t rsi = var_70
int64_t var_60 = 0
int64_t rcx_6
rcx_6.b = rax_7 != 0
*(arg2 + 0x20) = rcx_6 + rax_7
int32_t var_58 = var_68

if (var_68 != 0)
    sub_1405a4c70(&var_60, var_68, 0)
    memcpy(var_60, rsi, var_68 * 2)
else
    int32_t var_54_1 = 0

int64_t rax_8 = var_50.q
uint32_t rcx_10 = zx.d(arg_18)
void* rdx_14 = arg_20
int64_t var_40 = rax_8

if (rax_8 != 0)
    rdi = var_50:8.q

int64_t var_38 = rdi
void* result = sub_14095d700(var_78, rdx_14, &var_40, &var_60, rcx_10, zx.d(arg_10))
int64_t rcx_12 = var_70
*arg3 = result

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
