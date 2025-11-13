// 函数: sub_142af3e20
// 地址: 0x142af3e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint32_t rbx = arg2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_d0 = 2
int16_t* rdi = nullptr
int32_t var_f8 = 0
int64_t* rax_2 = sub_142b68cc0(&var_f8)

if (var_f8 s> 0)
    rbx.b = 0
else
    void* var_e8
    
    if ((*(*rax_2 + 0x30))(rax_2, zx.q(rbx), &var_d8) != 0)
        int32_t var_cc
        int32_t r9_1 = var_cc
        int16_t rcx_2 = var_d0
        int32_t rax_6
        
        if (rcx_2 s< 0)
            rax_6 = r9_1
        else
            rax_6 = sx.d(rcx_2) s>> 5
        
        void var_ce
        int16_t* var_c0
        char rdx_1
        
        if (rax_6 == 1)
            int32_t rax_8
            
            if (rcx_2 s< 0)
                rax_8 = r9_1
            else
                rax_8 = sx.d(rcx_2) s>> 5
            
            rdx_1 = var_d0.b
            int16_t r8_2
            
            if (rax_8 == 0)
                r8_2 = -1
            else
                void* rax_9 = &var_ce
                
                if ((rdx_1 & 2) == 0)
                    rax_9 = var_c0
                
                r8_2 = *rax_9
            
            rbx = zx.d(r8_2)
            goto label_142af3f46
        
        int32_t rax_11
        
        if (rcx_2 s< 0)
            rax_11 = r9_1
        else
            rax_11 = sx.d(rcx_2) s>> 5
        
        int32_t rax_13
        int32_t rdx_3
        
        if (rax_11 s<= 2)
            rbx = sub_142a486d0(&var_d8, 0)
            r9_1 = var_cc
            rcx_2 = var_d0
            
            if (rcx_2 s< 0)
                rdx_3 = r9_1
            else
                rdx_3 = sx.d(rcx_2) s>> 5
            
            rax_13.b = rbx u> 0xffff
        
        if (rax_11 s> 2 || rdx_3 != rax_13 + 1)
            rdx_1 = var_d0.b
        label_142af3f58:
            
            if (rcx_2 s>= 0)
                r9_1 = sx.d(rcx_2) s>> 5
            
            int16_t* r8_3
            
            if ((rdx_1 & 0x11) == 0)
                r8_3 = &var_ce
                
                if ((rdx_1 & 2) == 0)
                    r8_3 = var_c0
            else
                r8_3 = nullptr
            
            void var_98
            int32_t rax_15 = sub_142a90a20(&var_98, 0x3e, r8_3, r9_1, 0, &var_f8)
            
            if (var_f8 s> 0)
                rbx.b = 0
            else
                int32_t rdx_5
                
                if (var_d0 s< 0)
                    rdx_5 = var_cc
                else
                    rdx_5 = sx.d(var_d0) s>> 5
                
                char rax_16 = var_d0.b
                
                if ((rax_16 & 0x11) == 0)
                    rdi = &var_ce
                    
                    if ((rax_16 & 2) == 0)
                        rdi = var_c0
                
                int32_t var_108_1
                var_108_1.b = 0
                
                if (sub_142a8bd60(rdi, rdx_5, &var_98, rax_15, var_108_1.b) == 0)
                    rbx.b = 0
                else
                    rbx.b = 1
        else
            rdx_1 = var_d0.b
        label_142af3f46:
            
            if (rbx s< 0)
                goto label_142af3f58
            
            rbx.b = sub_142a53530(rbx, &var_e8, 0) s>= 0
    else if (rbx s< 0)
        rbx.b = 0
    else
        rbx.b = sub_142a53530(rbx, &var_e8, 0) s>= 0

sub_142a47ff0(&var_d8)
__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbx.b)
