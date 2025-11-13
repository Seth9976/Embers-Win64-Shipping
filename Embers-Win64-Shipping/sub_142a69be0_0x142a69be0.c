// 函数: sub_142a69be0
// 地址: 0x142a69be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char* rbp = arg2
arg2.b = 1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
sub_142a47a60(&var_78, arg2.b, u"calendar=", 0xffffffff)
int16_t var_70
int32_t var_6c
int32_t rdi_1

if (var_70 s< 0)
    rdi_1 = var_6c
else
    rdi_1 = sx.d(var_70) s>> 5

int32_t rsi = 0
int16_t rax_3 = *(arg1 + 8)
int32_t r9_1

if (rax_3 s< 0)
    r9_1 = *(arg1 + 0xc)
else
    r9_1 = sx.d(rax_3) s>> 5

int32_t rax_4 = sub_142a491f0(arg1, 0x3d, 0, r9_1)
int16_t rdx = *(arg1 + 8)
int32_t rcx_3

if (rdx s< 0)
    rcx_3 = *(arg1 + 0xc)
else
    rcx_3 = sx.d(rdx) s>> 5

if (rcx_3 != 0)
    void* rax_5 = arg1 + 0xa
    
    if ((rdx.b & 2) == 0)
        rax_5 = *(arg1 + 0x18)
    
    if (*rax_5 == 0x40)
        char rax_6
        
        if ((var_70.b & 1) == 0)
            int32_t rax_8
            
            if (var_70 s< 0)
                rax_8 = var_6c
            else
                rax_8 = sx.d(var_70) s>> 5
            
            int32_t rdx_1 = 0
            
            if (rax_8 s< 0)
                rdx_1 = rax_8
            
            if (rdi_1 s>= 0)
                int32_t rax_9 = rax_8 - rdx_1
                
                if (rdi_1 s> rax_9)
                    rdi_1 = rax_9
            else
                rdi_1 = 0
            
            void var_6e
            void* r9_2 = &var_6e
            void* var_60
            
            if ((var_70.b & 2) == 0)
                r9_2 = var_60
            rax_6 = sub_142a48fb0(arg1, 1, rax_4, r9_2, rdx_1, rdi_1)
        else
            rax_6 = not.b(*(arg1 + 8)) & 1
        
        if (rax_6 == 0)
            int16_t rax_10 = *(arg1 + 8)
            int32_t r8_2
            
            if (rax_10 s< 0)
                r8_2 = *(arg1 + 0xc)
            else
                r8_2 = sx.d(rax_10) s>> 5
            
            int32_t var_90_2 = 0
            rsi = sub_142a49990(arg1, rax_4 + 1, r8_2, rbp, arg3)

*(sx.q(rsi) + rbp) = 0
sub_142a47ff0(&var_78)
__security_check_cookie(rax_1 ^ &var_b8)
return &icu_64::UObject::`vftable'
