// 函数: sub_1425238d0
// 地址: 0x1425238d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

int64_t var_48
sub_140a96170(&var_48)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rsi
rsi.b = arg_20 != 0
int128_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int32_t var_78 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_78, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
int128_t var_58 = var_68
int64_t var_30 = var_48
*(arg2 + 0x20) = rdi + rax_7
int64_t* var_40
int64_t* var_28 = var_40

if (var_40 != 0)
    var_40[1].d += 1

int32_t var_38
int32_t var_20 = var_38
int32_t var_80 = var_78.d
int128_t* var_88 = &var_58
int32_t result = sub_14096e070(var_70, &var_30)

if (var_40 != 0)
    result = var_40[1].d
    var_40[1].d -= 1
    
    if (result == 1)
        result = (**var_40)(var_40)
        int32_t rdi_2 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_40 + 8))(var_40, zx.q(rdi_2))

return result
