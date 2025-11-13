// 函数: sub_142a6d750
// 地址: 0x142a6d750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::FieldPosition::VTable* var_30 =
    &icu_64::FieldPosition::`vftable'{for `icu_64::UObject'}
int32_t var_28 = 0xffffffff
int64_t var_24 = 0
int64_t* rcx = arg1[0x29]

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x10))(rcx)
    
    if (rax_2 != 0)
        int32_t arg_8 = 0
        sub_142a6c1a0(rax_2, arg2.q, &arg_8)
        
        if (arg_8 s<= 0)
            (*(*arg1 + 0x40))(arg1, rax_2, arg3, &var_30, -2)
        
        (**rax_2)(rax_2, 1)

sub_142aa8290(&var_30)
return arg3
