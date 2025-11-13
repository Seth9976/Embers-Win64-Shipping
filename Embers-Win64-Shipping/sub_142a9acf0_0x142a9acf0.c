// 函数: sub_142a9acf0
// 地址: 0x142a9acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int64_t** i = (*(*arg1 + 0x38))(arg1, arg3)
int64_t** i_1 = i

if (i != 0)
    char rdi_1 = not.b(arg1[9].b) & 1
    int32_t arg_8 = 0xffffffff
    
    for (i = sub_142a86e70(*i, &arg_8); i != 0; i = sub_142a86e70(*i_1, &arg_8))
        void* rbx_1 = i[2]
        
        if (rdi_1 != 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 =
                j_sub_142a7dd00(0x40)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_20 = rax_1
            
            if (rax_1 != 0)
                rax_1 = sub_142a479b0(rax_1, rbx_1)
            
            i = sub_142a86f50(*arg2, rax_1, arg1, arg3)
            
            if (*arg3 s> 0)
                break
        else
            j_sub_142a868c0(*arg2, rbx_1)

return i
