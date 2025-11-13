// 函数: sub_142b2e870
// 地址: 0x142b2e870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::CollationRuleParser::Sink::icu_64::CollationBuilder::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &icu_64::CollationBuilder::`vftable'{for `icu_64::CollationRuleParser::Sink'}
arg1[1] = sub_142b68ce0(arg3)
arg1[2] = sub_142b68bf0(arg3)
arg1[3] = sub_142b68c10(arg3)
arg1[4] = arg2
arg1[5] = *(arg2 + 0x18)
void* rax_4 = *(arg2 + 0x18)
int32_t rdx = *(rax_4 + 0x88)
arg1[6] = *(rax_4 + 0x80)
arg1[7].d = rdx
arg1[8].d = 0
struct icu_64::UObject::icu_64::CollationDataBuilder::VTable** rax_5 = j_sub_142a7dd00(0x278)
struct icu_64::UObject::icu_64::CollationDataBuilder::VTable** arg_10 = rax_5
struct icu_64::UObject::icu_64::CollationDataBuilder::VTable** rax_6

if (rax_5 == 0)
    rax_6 = nullptr
else
    rax_6 = sub_142b7ca80(rax_5, arg3)

arg1[9] = rax_6
arg1[0xa].b = 1
sub_142a9db60(&arg1[0xb])
arg1[0x24] = 0
arg1[0x44].d = 0
sub_142ae7bc0(&arg1[0x45], arg3)
sub_142aeb0c0(&arg1[0x49], arg3)
sub_142b1d3d0(arg1[3], arg3)

if (*arg3 s<= 0)
    void* rcx_9 = arg1[9]
    
    if (rcx_9 != 0)
        sub_142b7fcc0(rcx_9, arg1[5], arg3)
        
        if (*arg3 s> 0)
            arg1[0x24] = "CollationBuilder initialization failed"
    else
        *arg3 = 7
else
    arg1[0x24] = "CollationBuilder fields initialization failed"

return arg1
