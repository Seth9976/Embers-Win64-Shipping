// 函数: sub_1405cab00
// 地址: 0x1405cab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_60
sub_140a96170(&var_60)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_60, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_10, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_18 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &arg_18, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = arg_18 != 0
int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
int64_t var_48 = var_60
*(arg2 + 0x20) = rdi + rax_6
int64_t* var_58
int64_t* var_40 = var_58

if (var_58 != 0)
    var_58[1].d += 1

bool var_78 = cond:1
int32_t var_50
int32_t var_38 = var_50
void* result = sub_1405bf690(var_68, arg_20, &var_48)
*arg3 = result

if (var_58 != 0)
    result = zx.q(var_58[1].d)
    var_58[1].d -= 1
    
    if (result.d == 1)
        result = (**var_58)(var_58)
        int32_t rdi_2 = *(var_58 + 0xc)
        *(var_58 + 0xc) -= 1
        
        if (rdi_2 == 1)
            return (*(*var_58 + 8))(var_58, zx.q(rdi_2))

return result
