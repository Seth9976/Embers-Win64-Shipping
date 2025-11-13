// 函数: sub_142515240
// 地址: 0x142515240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int64_t var_40 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t var_38
sub_140a96170(&var_38)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
int64_t var_20 = var_38
*(arg2 + 0x20) = rdi + rax_4
int64_t* var_30
int64_t* var_18 = var_30

if (var_30 != 0)
    var_30[1].d += 1

int32_t var_28
int32_t var_10 = var_28
int32_t result = sub_1420b2c70(&var_48, &var_20)
*arg3 = 0xffffffff

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        result = (**var_30)(var_30)
        int32_t rdi_2 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_2 == 1)
            result = (*(*var_30 + 8))(var_30, zx.q(rdi_2))

int64_t rcx_7 = var_48

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
