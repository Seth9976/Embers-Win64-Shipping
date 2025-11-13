// 函数: sub_141c07c90
// 地址: 0x141c07c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140a96170(&var_38)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_2 != 0
int64_t var_20 = var_38
*(arg2 + 0x20) = rcx_2 + rax_2
int64_t* var_30
int64_t* var_18 = var_30

if (var_30 != 0)
    var_30[1].d += 1

int32_t var_28
int32_t var_10 = var_28
int32_t result = sub_141be26d0(arg1, &var_20)

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        result = (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_30 + 8))(var_30, zx.q(rdi_1))

return result
