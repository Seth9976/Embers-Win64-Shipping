// 函数: sub_142b5fcf0
// 地址: 0x142b5fcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rsi = sx.q(arg2)
int32_t r14 = *(arg1 + 0x288)
int64_t rdi
rdi.b = *((rsi << 4) + *(arg1 + 0x280)) - 0xc u<= 1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
sub_142a47a60(&var_68, 0, u"other", 5)
int32_t rbx = (rsi + 1).d

if (rdi.b == 0)
    rbx = rsi.d

int32_t var_5c
int32_t rdx = var_5c
int16_t var_60
int16_t r8 = var_60
int32_t rbx_1

while (true)
    int32_t* rax_9 = (sx.q(rbx) << 4) + *(arg1 + 0x280)
    rbx_1 = rbx + 1
    
    if (*rax_9 != 6)
        int32_t rax_11
        
        if (r8 s< 0)
            rax_11 = rdx
        else
            rax_11 = sx.d(r8) s>> 5
        
        char rax_12
        
        if ((r8.b & 1) == 0)
            if (r8 s>= 0)
                rdx = sx.d(r8) s>> 5
            
            int32_t rcx_1 = 0
            
            if (rdx s< 0)
                rcx_1 = rdx
            
            if (rax_11 s>= 0)
                int32_t rdx_2 = rdx - rcx_1
                
                if (rax_11 s> rdx_2)
                    rax_11 = rdx_2
            else
                rax_11 = 0
            
            void var_5e
            void* r9_1 = &var_5e
            void* var_50
            
            if ((r8.b & 2) == 0)
                r9_1 = var_50
            rax_12 = sub_142a48fb0(arg1 + 0x238, rax_9[1], zx.d(rax_9[2].w), r9_1, rcx_1, rax_11)
            rdx = var_5c
            r8 = var_60
        else
            rax_12 = not.b(*(arg1 + 0x240)) & 1
        
        if (rax_12 == 0)
            break
        
        int64_t rcx_3 = *(arg1 + 0x280)
        
        if (*(rcx_3 + sx.q(rbx_1) * 0x10) - 0xc u> 1)
            rbx_1 = rbx
        
        int32_t rbx_2 = rbx_1 + 1
        int32_t rcx_4 = *(rcx_3 + sx.q(rbx_2) * 0x10 + 0xc)
        
        if (rcx_4 s>= rbx_2)
            rbx_2 = rcx_4
        
        rbx = rbx_2 + 1
        
        if (rbx s< r14)
            continue
    
    rbx_1 = 0
    break

sub_142a47ff0(&var_68)
__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(rbx_1)
