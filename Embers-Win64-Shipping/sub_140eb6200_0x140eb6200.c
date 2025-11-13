// 函数: sub_140eb6200
// 地址: 0x140eb6200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d44910(arg1 + 0xc8)
int64_t var_38 = *rax
int64_t* r8_1 = rax[1]

if (r8_1 != 0)
    r8_1[1].d += 1

int32_t var_28 = rax[2].d
int64_t var_18 = 0
int32_t var_10 = 0
char var_20 = 1
int64_t* rax_2 = sub_140d44910(arg1 + 0x98)
int64_t var_68 = *rax_2
int64_t* rcx_3 = rax_2[1]

if (rcx_3 != 0)
    rcx_3[1].d += 1

int32_t var_58 = rax_2[2].d
char var_50 = 1
int64_t var_70 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int64_t arg_8 = 0
sub_140ea28e0(arg2, &var_68, &var_38, arg1 + 0x118, 0, arg1 + 0xf8, 1)
sub_140745b20(&var_48)

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**rcx_3)(rcx_3)
        int32_t rax_6 = *(rcx_3 + 0xc)
        *(rcx_3 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rcx_3 + 8))(rcx_3, 1)

int32_t result = sub_140745b20(&var_18)

if (r8_1 != 0)
    result = r8_1[1].d
    r8_1[1].d -= 1
    
    if (result == 1)
        result = (**r8_1)(r8_1)
        int32_t rdi_1 = *(r8_1 + 0xc)
        *(r8_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*r8_1 + 8))(r8_1, zx.q(rdi_1))

return result
