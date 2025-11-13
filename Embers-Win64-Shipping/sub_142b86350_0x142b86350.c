// 函数: sub_142b86350
// 地址: 0x142b86350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_290 = -2
void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_280
sub_142ab6010(&var_280, arg2)
char* rax_2 = sub_142ab63b0(arg3)
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    result_1 = nullptr
int64_t rcx_2 = 0
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    result

while (true)
    char rdx = rax_2[rcx_2]
    rcx_2 += 1
    
    if (rdx != *(rcx_2 + 0x143653f23))
        char var_298 = 0
        struct icu_64::UObject::icu_64::MeasureUnit::VTable* var_268
        sub_142ab6610(&var_268, &var_280, arg3, &var_298)
        
        if (var_298 == 0)
            result_1 = sub_142b85ec0(arg1, &var_280, arg3, arg4, arg5, arg6, arg7)
            sub_142ab6080(&var_268)
        else
            sub_142ab6090(&var_280, &var_268)
            sub_142ab6080(&var_268)
        label_142b8641d:
            struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable
                ** rax_3 = j_sub_142a7dd00(0x290)
            struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable
                ** var_288_1 = rax_3
            
            if (rax_3 == 0)
                result = nullptr
            else
                result = sub_142b85d30(rax_3, arg5, arg6)
            
            if (result != 0)
                int64_t (* var_2b8_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                    arg1) = sub_142a47ff0
                void var_248
                `eh vector constructor iterator'(&var_248, 0x40, 8)
                sub_142b866d0(arg1, &var_280, arg4, &var_248, arg7)
                
                if (*arg7 s<= 0)
                    sub_142b87170(result, &var_248, 0xb, arg7)
                
                `eh vector vbase constructor iterator'(&var_248, 0x40, 8)
                break
            
            *arg7 = 7
    else
        if (rcx_2 == 5)
            goto label_142b8641d
        
        continue
    
    result = result_1
    break

sub_142ab6080(&var_280)
__security_check_cookie(rax_1 ^ &var_2d8)
return result
