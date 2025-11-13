// 函数: sub_142b555b0
// 地址: 0x142b555b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*arg3 s> 0)
    return 

struct icu_64::UObject::icu_64::UVector::VTable** rsi_1 = nullptr
void* rax_1 = __RTDynamicCast(arg2, 0, &class icu_64::TimeZoneRule `RTTI Type Descriptor', 
    &class icu_64::AnnualTimeZoneRule `RTTI Type Descriptor', 0)
int32_t rax_2

if (rax_1 != 0)
    rax_2 = sub_14126ceb0(rax_1)

struct icu_64::UObject::icu_64::UVector::VTable** arg_18
struct icu_64::UObject::icu_64::UVector::VTable** rax

if (rax_1 == 0 || rax_2 != 0x7fffffff)
    if (*(arg1 + 0x50) == 0)
        rax = j_sub_142a7dd00(0x28)
        arg_18 = rax
        
        if (rax != 0)
            rsi_1 = sub_142ae6d20(rax, arg3)
        
        *(arg1 + 0x50) = rsi_1
    
    if (*(arg1 + 0x50) != 0 || *arg3 s<= 0)
        sub_142ae7110(*(arg1 + 0x50), arg2, arg3)
        *(arg1 + 0x68) = 0
else
    rax = *(arg1 + 0x58)
    
    if (rax == 0)
        rax = j_sub_142a7dd00(0x28)
        arg_18 = rax
        
        if (rax != 0)
            rsi_1 = sub_142ae6d20(rax, arg3)
        
        *(arg1 + 0x58) = rsi_1
        
        if (*arg3 s<= 0)
            goto label_142b55656
    else if (rax[1].d s< 2)
    label_142b55656:
        sub_142ae7110(*(arg1 + 0x58), arg2, arg3)
        *(arg1 + 0x68) = 0
    else
        *arg3 = 0x1b
