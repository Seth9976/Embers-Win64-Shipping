// 函数: sub_141c1d050
// 地址: 0x141c1d050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
sub_141b7bae0(&var_48)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void** rax_2 = *(arg2 + 0x38)
void** rsi = &var_48

if (rax_2 != 0)
    rsi = rax_2

int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_70, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int128_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_68, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = arg_10 != 0
int32_t arg_20 = (zx.o(0)).d
int64_t rbp
rbp.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_8 = *(arg2 + 0x20)
int128_t zmm0_1 = var_68
int64_t r8_12 = var_78
int32_t zmm1 = arg_20
int64_t rdx_12 = var_70
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
int128_t var_58 = zmm0_1
return sub_141ba40e0(rsi, rdx_12, r8_12, &var_58, rbp.b, zmm1)
