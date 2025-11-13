// 函数: sub_141c07570
// 地址: 0x141c07570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8
sub_140d93b50(&var_a8)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_2 != 0
int64_t var_58 = var_a8
int64_t var_a0
int64_t var_50 = var_a0
int64_t var_78
int64_t var_28 = var_78
*(arg2 + 0x20) = rcx_2 + rax_2
int64_t* var_70
int64_t* var_20 = var_70
int128_t var_98
int128_t var_48 = var_98
int128_t var_88
int128_t var_38 = var_88

if (var_70 != 0)
    var_70[1].d += 1

int64_t var_68
int64_t var_18 = var_68
int32_t var_60
int32_t var_10 = var_60
char var_5c
char var_c = var_5c
int64_t result = sub_141be0fe0(arg1, &var_58)

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        result = (**var_70)(var_70)
        int32_t temp1_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_70 + 8))(var_70, 1)

return result
