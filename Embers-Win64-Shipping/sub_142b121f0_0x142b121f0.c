// 函数: sub_142b121f0
// 地址: 0x142b121f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
sub_142a479b0(&var_58, arg2)
sub_142a9a5e0(&var_58)
int16_t var_50
int32_t var_4c
int32_t rdx_1

if (var_50 s< 0)
    rdx_1 = var_4c
else
    rdx_1 = sx.d(var_50) s>> 5

int16_t rcx_2 = *(arg1 + 0x58)
uint64_t r9_1

if (rcx_2 s< 0)
    r9_1 = zx.q(*(arg1 + 0x5c))
else
    r9_1 = zx.q(sx.d(rcx_2) s>> 5)

void* rbx

if ((*(arg1 + 0x58) & 1) != 0)
    rbx.b = 0
else
    int32_t rax_4
    
    if (rcx_2 s< 0)
        rax_4 = *(arg1 + 0x5c)
    else
        rax_4 = sx.d(rcx_2) s>> 5
    
    int32_t r8_1 = 0
    
    if (rax_4 s< 0)
        r8_1 = rax_4
    
    if (r9_1.d s< 0)
        rbx.b = 0
    else
        int32_t rax_5 = rax_4 - r8_1
        
        if (r9_1.d s> rax_5)
            r9_1 = zx.q(rax_5)
        
        if (r9_1.d s<= 0)
            rbx.b = 0
        else
            void* rax_6 = arg1 + 0x5a
            
            if ((rcx_2.b & 2) == 0)
                rax_6 = *(arg1 + 0x68)
            
            if (sub_142a4a330(&var_58, rax_6, r8_1, r9_1, 0, rdx_1) != 0)
                rbx.b = 0
            else
                int32_t rax_8 = var_4c
                int32_t rdx_4
                
                if (var_50 s< 0)
                    rdx_4 = rax_8
                else
                    rdx_4 = sx.d(var_50) s>> 5
                
                int16_t r8_2 = *(arg1 + 0x58)
                int32_t r8_4
                
                if (r8_2 s< 0)
                    r8_4 = *(arg1 + 0x5c)
                else
                    r8_4 = sx.d(r8_2) s>> 5
                
                if (rdx_4 == r8_4)
                    rbx.b = 1
                else
                    int16_t rdx_5 = *(arg1 + 0x58)
                    int32_t rdx_7
                    
                    if (rdx_5 s< 0)
                        rdx_7 = *(arg1 + 0x5c)
                    else
                        rdx_7 = sx.d(rdx_5) s>> 5
                    
                    if (var_50 s>= 0)
                        rax_8 = sx.d(var_50) s>> 5
                    
                    if (rdx_7 u>= rax_8)
                        rbx.b = 0
                    else
                        void var_4e
                        void* rcx_5 = &var_4e
                        void* var_40
                        
                        if ((var_50.b & 2) == 0)
                            rcx_5 = var_40
                        
                        if (*(rcx_5 + (sx.q(rdx_7) << 1)) != 0x5f)
                            rbx.b = 0
                        else
                            rbx.b = 1

sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_98)
return zx.q(rbx.b)
