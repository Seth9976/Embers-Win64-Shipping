// 函数: sub_142ad84a0
// 地址: 0x142ad84a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t rbx = arg3
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_70 = 2
int16_t rax_2 = *(arg2 + 8)
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(arg2 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

if (rbx s<= rax_4 && rbx s>= 0 && arg4 s>= 0)
    int16_t rax_5 = *(arg1 + 0x168)
    int32_t rax_7
    
    if (rax_5 s< 0)
        rax_7 = *(arg1 + 0x16c)
    else
        rax_7 = sx.d(rax_5) s>> 5
    
    if (arg4 s<= rax_7)
        void* rax_8 = __RTDynamicCast(*(arg1 + 0x150), 0, 
            &class icu_64::NumberFormat `RTTI Type Descriptor', 
            &class icu_64::DecimalFormat `RTTI Type Descriptor', 0)
        
        if (rax_8 != 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdx = &var_78
            void* rax_9
            
            if (arg5 == 0)
                rax_9 = sub_142a5d490(rax_8, rdx)
            else
                rax_9 = sub_142a5d280(rax_8, rdx)
            
            sub_142a48100(&var_78, rax_9)
        
        int32_t var_6c
        int32_t rax_12
        
        if (var_70 s< 0)
            rax_12 = var_6c
        else
            rax_12 = sx.d(var_70) s>> 5
        
        if (rax_12 s> 0)
            int32_t rax_13 = sub_142ad86a0(arg1, &var_78, arg1 + 0x160, arg4)
            int32_t rax_14 = sub_142ad86a0(arg1, &var_78, arg2, rbx)
            int32_t rcx_6
            
            if (var_70 s< 0)
                rcx_6 = var_6c
            else
                rcx_6 = sx.d(var_70) s>> 5
            
            int32_t rax_16 = sub_142ad86a0(arg1, &var_78, arg2, rbx - rcx_6)
            
            if ((rax_14 s< 0 || rax_13 s< 0 || rax_14 != rax_13) && rax_16 s>= 0 && rax_13 s>= 0
                    && rax_16 == rax_13)
                int32_t rax_19
                
                if (var_70 s< 0)
                    rax_19 = var_6c
                else
                    rax_19 = sx.d(var_70) s>> 5
                
                rbx -= rax_19

sub_142a47ff0(&var_78)
__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rbx)
