// 函数: sub_14064a2c0
// 地址: 0x14064a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int128_t var_38 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int128_t var_78 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int128_t var_48 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

*(arg2 + 0x38) = 0
int128_t var_58 = zx.o(0)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_58, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int128_t* rax_6 = *(arg2 + 0x38)
int128_t* rcx_5 = &var_58
int128_t zmm0_4 = var_48

if (rax_6 != 0)
    rcx_5 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int128_t var_68 = var_78
int128_t zmm1 = var_38
int64_t* rcx_6 = arg_10
int64_t rdi
rdi.b = rax_7 != 0
int128_t var_28 = zmm0_4
int128_t var_18 = zmm1
*(arg2 + 0x20) = rdi + rax_7
return sub_14062af90(rcx_6, &var_18, &var_68, &var_28, rcx_5)
