// 函数: sub_140f7c220
// 地址: 0x140f7c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)
int64_t var_38 = 0
int64_t var_30 = 0
(*(*rcx + 0x10))(rcx, &var_38, *(arg1 + 0x48))
void var_28
sub_140aae2f0(&var_28, &var_38)
int64_t rcx_2 = var_38

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_14065da90(arg2, &var_28)
void* result = arg1 + 0x780
*(arg2 + 0x28) = *(arg1 + 0x790)
*(arg2 + 0x38) = *(arg1 + 0x7a0)

if (result != arg2 + 0x18)
    if (arg2[2].b != 0)
        arg2[2].b = 0
    
    if (*(result + 8) != 0)
        result = *result
        *(arg2 + 0x18) = result
        arg2[2].b = 1

int64_t* var_20

if (var_20 != 0)
    result = zx.q(var_20[1].d)
    var_20[1].d -= 1
    
    if (result.d == 1)
        result = (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
