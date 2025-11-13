// 函数: sub_1424f4690
// 地址: 0x1424f4690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_78

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_78, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

void* rax_2 = *(arg2 + 0x38)
void* rsi = &var_78
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rsi = rax_2

void var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int128_t* rax_4 = *(arg2 + 0x38)
int128_t* r8_4 = &var_68

if (rax_4 != 0)
    r8_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t var_58
int32_t var_48[0x10]
sub_140adf440(sub_140adb540(&var_48, rsi, r8_4), &var_58)
*arg3 = var_58
int32_t result
arg3[1].d = result
return result
