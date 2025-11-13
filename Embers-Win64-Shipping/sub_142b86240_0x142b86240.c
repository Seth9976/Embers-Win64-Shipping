// 函数: sub_142b86240
// 地址: 0x142b86240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_258 = -2
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    rax_2 = j_sub_142a7dd00(0x290)
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    var_250 = rax_2
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    result_1 = nullptr
struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    result_2

if (rax_2 == 0)
    result_2 = nullptr
else
    result_2 = sub_142b85d30(rax_2, arg3, arg4)

struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::LongNameHandler::VTable** 
    result

if (result_2 != 0)
    int64_t (* var_268_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
        sub_142a47ff0
    void var_248
    `eh vector constructor iterator'(&var_248, 0x40, 8)
    sub_142b86540(arg1, arg2, &var_248, arg5)
    
    if (*arg5 s<= 0)
        sub_142b87170(result_2, &var_248, 7, arg5)
        result_1 = result_2
    
    `eh vector vbase constructor iterator'(&var_248, 0x40, 8)
    result = result_1
else
    *arg5 = 7
    result = nullptr

__security_check_cookie(rax_1 ^ &var_288)
return result
