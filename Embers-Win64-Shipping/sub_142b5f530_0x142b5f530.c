// 函数: sub_142b5f530
// 地址: 0x142b5f530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_458 = -2
void var_488
int64_t rax_1 = __security_cookie ^ &var_488
struct icu_64::Format::icu_64::number::impl::LocalizedNumberFormatterAsFormat::VTable** result

if (*arg6 s<= 0)
    struct icu_64::Format::icu_64::number::impl::LocalizedNumberFormatterAsFormat::VTable** rbx_1 =
        nullptr
    int64_t r15_1 = sx.q(sub_142b5fb70(arg2, &data_143670d48))
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_448
    
    if (r15_1.d u> 5)
        *arg4 = 3
        *arg6 = 1
    else
        switch (r15_1)
            case 0
                *arg4 = 1
                int32_t rax_6 = sub_142b5fb70(arg3, &data_143670db8)
                
                if (rax_6 == 0)
                    rbx_1 = sub_142a586f0(arg1 + 0x148, arg6)
                else if (rax_6 == 1)
                    rbx_1 = sub_142a58660(arg1 + 0x148, arg6)
                else if (rax_6 == 2)
                    rbx_1 = sub_142a588d0(arg1 + 0x148, arg6)
                else if (rax_6 == 3)
                    *arg4 = 2
                    rbx_1 = sub_142b5f960(arg1, arg1 + 0x148, arg6)
                else
                    int32_t rax_7 = sub_142b13810(arg3, 0)
                    
                    if (sub_142a48fb0(arg3, rax_7, 2, &data_143671378, 0, 2) != 0)
                        struct icu_64::Format::icu_64::number::impl::LocalizedNumberFormatterAsFormat::VTable
                            ** inptr = sub_142a586f0(arg1 + 0x148, arg6)
                        rbx_1 = inptr
                        
                        if (inptr != 0)
                            int64_t* rax_12 = __RTDynamicCast(inptr, 0, 
                                &class icu_64::Format `RTTI Type Descriptor', 
                                &class icu_64::DecimalFormat `RTTI Type Descriptor', 0)
                            
                            if (rax_12 != 0)
                                (*(*rax_12 + 0x230))(rax_12, arg3, arg5, arg6)
                    else
                        sub_142a4ad20(arg3, &var_448, rax_7 + 2, 0x7fffffff)
                        uint64_t var_408[0x2]
                        uint64_t var_238[0x3c]
                        rbx_1 = sub_142ab8540(
                            sub_142ab8330(sub_142ab7af0(&var_408, &var_448, arg6), &var_238, 
                                arg1 + 0x148), 
                            arg6)
                        sub_142ab72b0(&var_238)
                        struct icu_64::UObject::icu_64::Locale::VTable* var_328
                        sub_142a45a20(&var_328)
                        void var_360
                        sub_142ab6b80(&var_360)
                        void var_380
                        sub_142ab74c0(&var_380)
                        struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_3e0
                        sub_142ab6080(&var_3e0)
                        struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_3f8
                        sub_142ab6080(&var_3f8)
                        sub_142a47ff0(&var_448)
            case 1, 2
                *arg4 = 0
                int32_t rax_17 = sub_142b13810(arg3, 0)
                int32_t rbx_2 = 2
                
                if (sub_142a48fb0(arg3, rax_17, 2, &data_143671378, 0, 2) != 0)
                    int32_t rax_20 = sub_142b5fb70(arg3, &data_143670e20)
                    int64_t rdi_1 = sx.q(rax_20)
                    
                    if (rax_20 s>= 0)
                        rbx_2 = *((rdi_1 << 2) + 0x143670e70)
                    
                    struct icu_64::Format::icu_64::number::impl::LocalizedNumberFormatterAsFormat::VTable
                        ** inptr_1
                    
                    if (r15_1.d != 1)
                        inptr_1 = sub_142a6d740(rbx_2, arg1 + 0x148)
                    else
                        inptr_1 = sub_142a6d490(rbx_2, arg1 + 0x148)
                    
                    rbx_1 = inptr_1
                    
                    if (rdi_1.d s< 0 && inptr_1 != 0)
                        int64_t* rax_21 = __RTDynamicCast(inptr_1, 0, 
                            &class icu_64::Format `RTTI Type Descriptor', 
                            &class icu_64::SimpleDateFormat `RTTI Type Descriptor', 0)
                        
                        if (rax_21 != 0)
                            int64_t r8_7 = *rax_21
                            (*(r8_7 + 0xf8))(rax_21, arg3, r8_7)
                else
                    sub_142a4ad20(arg3, &var_448, rax_17 + 2, 0x7fffffff)
                    rbx_1 = sub_142a6d4d0(&var_448, arg1 + 0x148, arg6)
                    sub_142a47ff0(&var_448)
            case 3
                *arg4 = 1
                rbx_1 = sub_142b61480(0, arg1 + 0x148, arg3, arg6)
            case 4
                *arg4 = 1
                rbx_1 = sub_142b61480(1, arg1 + 0x148, arg3, arg6)
            case 5
                *arg4 = 1
                rbx_1 = sub_142b61480(2, arg1 + 0x148, arg3, arg6)
    result = rbx_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_488)
return result
