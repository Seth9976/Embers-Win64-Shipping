// 函数: sub_141c1d5a0
// 地址: 0x141c1d5a0
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
void** r14 = &var_48

if (rax_2 != 0)
    r14 = rax_2

void var_88
sub_140a96170(&var_88)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_88, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_4 = *(arg2 + 0x38)
void* rsi = &var_88

if (rax_4 != 0)
    rsi = rax_4

int64_t var_90

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_90, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

void* var_98 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_98, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_10, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int128_t* arg_20 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &arg_20, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int128_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_13 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_13[4]
    sub_140d30490(arg2, &var_70, r8_13)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t rax_10 = *(arg2 + 0x20)
void* r9 = var_98
int64_t r8_14 = var_90
int64_t rdi
rdi.b = rax_10 != 0
int128_t var_58 = var_70
int128_t* var_a8 = &var_58
int128_t* rax_11 = arg_20
int32_t rax_12 = arg_10
*(arg2 + 0x20) = rdi + rax_10
int32_t result = sub_141ba4560(r14, rsi, r8_14, r9, rax_12, rax_11)
int64_t* var_80

if (var_80 != 0)
    result = var_80[1].d
    var_80[1].d -= 1
    
    if (result == 1)
        result = (**var_80)(var_80)
        int32_t rdi_2 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_80 + 8))(var_80, zx.q(rdi_2))

return result
