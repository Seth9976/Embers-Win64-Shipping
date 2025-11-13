// 函数: sub_142ad1990
// 地址: 0x142ad1990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::Calendar::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::GregorianCalendar::icu_64::JapaneseCalendar::VTable** result = arg1
sub_142a72670(arg1, arg2)
*result = &icu_64::JapaneseCalendar::`vftable'{for `icu_64::GregorianCalendar'}
int32_t arg_18 = 0
char rax_1

if (data_144016678 != 2)
    rax_1 = sub_142a85f00(&data_144016678)

if (data_144016678 == 2 || rax_1 == 0)
    int32_t rcx_2 = arg_18
    int32_t rax_6 = data_14401667c
    
    if (rax_6 s> 0)
        rcx_2 = rax_6
    
    arg_18 = rcx_2
else
    int64_t rdi
    rdi.b = 0
    char* rax_2 = getenv(data_143ccb0d8)
    
    if (rax_2 != 0)
        rdi = 0
        
        if (sub_142a862b0(rax_2, "true", rax_2.d) == 0)
            rdi = 1
    
    int64_t* rax_4 = sub_142b53b80("japanese", rdi.b, &arg_18)
    data_144016670 = rax_4
    int32_t rdx_1 = arg_18
    
    if (rdx_1 s<= 0)
        data_144016680 = *(rax_4 + 0xc)
    
    data_14401667c = rdx_1
    sub_142a85e80(&data_144016678)

sub_142aa75d0(6, sub_142ad2080)
return result
