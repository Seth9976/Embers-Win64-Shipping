// 函数: sub_140e75760
// 地址: 0x140e75760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88
sub_140d45b10(sub_140d449f0(), &var_88, arg2, arg3)
int64_t* rcx_1 = *(arg1 + 0x4e8)
int64_t* r14 = data_143e20d18
int32_t rax_2 = (*(*rcx_1 + 8))(rcx_1)
int64_t r13 = var_88
int64_t* var_78

if (var_78 != 0)
    var_78[1].d += 1

int64_t r8_1 = *r14
void arg_20
int16_t rcx_3 = *(*(r8_1 + 0x58))(r14, &arg_20, r8_1)
void** const var_70 = &data_142d7f6a8
int64_t var_80
int64_t var_50 = var_80
int16_t var_68 = rcx_3
char r9
char var_66 = r9
int32_t var_64 = rax_2
int64_t var_60 = 0
int64_t var_58 = r13

if (var_78 != 0)
    var_78[1].d += 1

int32_t var_40 = arg3
int32_t var_3c = arg2

if (var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        (**var_78)(var_78)
        int32_t temp2_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_78 + 8))(var_78, 1)

char rax_8 = sub_140e7c340(arg1 - 0x118, &var_70)

if (var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        int64_t rdx_3 = *var_78
        (*rdx_3)(var_78, rdx_3)
        int32_t temp4_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_78 + 8))(var_78, 1)

var_70 = &data_142d7f690

if (var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        (**var_78)(var_78)
        int32_t temp5_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_78 + 8))(var_78, 1)

return zx.q(rax_8)
