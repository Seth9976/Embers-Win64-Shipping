// 函数: sub_142ab7a50
// 地址: 0x142ab7a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t r8 = *arg2
*arg1 = r8
struct icu_64::UObject::icu_64::NumberingSystem::VTable** arg_8
struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax

if (r8 == 1)
    if (*(arg2 + 8) == 0)
        *(arg1 + 8) = 0
    else
        rax = j_sub_142a7dd00(0xb00)
        arg_8 = rax
        
        if (rax != 0)
            rax = sub_142aabc60(rax, *(arg2 + 8))
        
        *(arg1 + 8) = rax
else if (r8 == 2)
    if (*(arg2 + 8) == 0)
        *(arg1 + 8) = 0
    else
        rax = j_sub_142a7dd00(zx.q(r8 + 0x56))
        arg_8 = rax
        
        if (rax != 0)
            rax = sub_142aab1e0(rax, *(arg2 + 8))
        
        *(arg1 + 8) = rax
