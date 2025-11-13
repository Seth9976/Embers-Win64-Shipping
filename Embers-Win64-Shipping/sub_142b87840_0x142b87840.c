// 函数: sub_142b87840
// 地址: 0x142b87840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
struct icu_64::ResourceSink::icu_64::number::impl::CompactData::CompactDataSink::VTable* const 
    var_b0 = &icu_64::number::impl::CompactData::CompactDataSink::`vftable'{for `icu_64::ResourceSink'}
void* var_a8 = arg1
char** rax_2 = sub_142a641c0(nullptr, *(arg2 + 0x28), arg6)
char** var_98 = rax_2

if (*arg6 s<= 0)
    int64_t rax_3 = 0
    bool cond:0_1
    
    while (true)
        char rcx = arg3[rax_3]
        rax_3 += 1
        char temp0_1 = *(rax_3 + 0x143652e8b)
        cond:0_1 = rcx == temp0_1
        
        if (rcx != temp0_1)
            break
        
        if (rax_3 == 5)
            cond:0_1 = rcx == *(rax_3 + 0x143652e8b)
            break
    
    int64_t r12
    r12.b = cond:0_1
    int16_t var_7c
    void* var_88 = &var_7c:1
    int32_t var_80_1 = 0x28
    var_7c = 0
    int32_t var_50_1 = 0
    sub_142b875d0(arg3, arg4, arg5, &var_88, arg6)
    int32_t var_b8 = 0
    sub_142a61e60(rax_2, var_88, &var_b0, &var_b8)
    
    if (*(arg1 + 0x319) != 0)
        if (r12.b == 0)
            sub_142b875d0("latn", arg4, arg5, &var_88, arg6)
            var_b8 = 0
            sub_142a61e60(rax_2, var_88, &var_b0, &var_b8)
        
        if (*(arg1 + 0x319) != 0)
            if (arg4 != 0)
                sub_142b875d0(arg3, 0, arg5, &var_88, arg6)
                var_b8 = 0
                sub_142a61e60(rax_2, var_88, &var_b0, &var_b8)
            
            if (*(arg1 + 0x319) != 0)
                if (r12.b == 0 && arg4 != 0)
                    sub_142b875d0("latn", 0, arg5, &var_88, arg6)
                    var_b8 = 0
                    sub_142a61e60(rax_2, var_88, &var_b0, &var_b8)
                
                if (*(arg1 + 0x319) != 0)
                    *arg6 = 5
    
    if (var_7c.b != 0)
        sub_142a7dcd0(var_88)

if (rax_2 != 0)
    sub_142a5f860(rax_2)

sub_142ac3f40(&var_b0)
__security_check_cookie(rax_1 ^ &var_e8)
return &icu_64::UObject::`vftable'
