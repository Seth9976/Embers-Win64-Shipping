// 函数: sub_142a9a330
// 地址: 0x142a9a330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142ae76a0(arg2)

if (*arg4 s<= 0)
    sub_142a9a540()
    sub_142a860a0(&data_144015d10)
    int64_t** rax_1 = sub_142a9a240(arg1, arg4)
    
    if (rax_1 != 0)
        int64_t r9 = *arg1
        int64_t* rax_2 = (*(r9 + 0x60))(arg1, arg3, arg4, r9, -2, &data_144015d10)
        int32_t arg_20 = 0xffffffff
        
        for (void* i = sub_142a86e70(*rax_1, &arg_20); i != 0; i = sub_142a86e70(*rax_1, &arg_20))
            void* rdi_1 = *(i + 0x10)
            char rax_4
            
            if (rax_2 != 0)
                rax_4 = (*(*rax_2 + 0x38))(rax_2, rdi_1)
            
            if (rax_2 == 0 || rax_4 != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 =
                    j_sub_142a7dd00(0x40)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_28_1 = rax_5
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdi_2
                
                if (rax_5 == 0)
                    rdi_2 = nullptr
                else
                    rdi_2 = sub_142a479b0(rax_5, rdi_1)
                
                if (rdi_2 == 0)
                    *arg4 = 7
                    break
                
                if ((rdi_2[1].b & 1) != 0)
                    if (rdi_2 != 0)
                        (*rdi_2)->__offset(0x0).q(rdi_2, 1)
                    
                    *arg4 = 7
                    break
                
                sub_142ae7110(arg2, rdi_2, arg4)
                
                if (*arg4 s> 0)
                    (*rdi_2)->__offset(0x0).q(rdi_2, 1)
                    break
        
        if (rax_2 != 0)
            (**rax_2)(rax_2, 1)
    
    sub_142a860d0(&data_144015d10)
    
    if (*arg4 s> 0)
        sub_142ae76a0(arg2)

return arg2
