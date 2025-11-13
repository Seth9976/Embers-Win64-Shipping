// 函数: sub_141c1ee70
// 地址: 0x141c1ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_98 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int32_t r9 = arg_10
int32_t r8_6 = arg_20
void* rdx_6 = var_98
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void** var_90
sub_140693270(arg3, sub_141bb9d10(&var_90, rdx_6, r8_6, r9))
void** const result = &data_142d8ad18
var_90 = &data_142d8ad18
int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        result = (**var_18)(var_18)
        int32_t temp2_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_18 + 8))(var_18, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        result = (**var_50)(var_50)
        int32_t temp3_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*var_50 + 8))(var_50, 1)

return result
