// 函数: sub_142ac1860
// 地址: 0x142ac1860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
int16_t* rbx
int16_t* arg_10 = rbx
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
char rdi = 0
int32_t var_64 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
bool cond:0_1

if ((*(arg1 + 0xd0) & 1) == 0)
    int16_t rax_3 = *(arg1 + 0xd0)
    int32_t r8_2
    
    if (rax_3 s< 0)
        r8_2 = *(arg1 + 0xd4)
    else
        r8_2 = sx.d(rax_3) s>> 5
    
    int16_t rax_4 = *(arg1 + 0x50)
    int32_t rax_6
    
    if (rax_4 s< 0)
        rax_6 = *(arg1 + 0x54)
    else
        rax_6 = sx.d(rax_4) s>> 5
    
    if ((*(arg1 + 0x50) & 1) == 0 && r8_2 == rax_6)
        cond:0_1 = sub_142a490e0(arg1 + 0xc8, arg1 + 0x48, r8_2) == 0
        goto label_142ac18e7
    
    rbx.b = 1
else
    cond:0_1 = (*(arg1 + 0x50) & 1) == 0
label_142ac18e7:
    
    if (cond:0_1)
        rbx.b = 1
    else
        rdi = 1
        int32_t var_64_1 = 1
        
        if (sub_142ac14c0(sub_142a4ad20(arg1 + 0x88, &var_58, 1, 0x7fffffff), arg1 + 8) != 0)
            rbx.b = 1
        else
            int16_t rcx_3 = *(arg1 + 0x90)
            int32_t rax_11
            
            if (rcx_3 s< 0)
                rax_11 = *(arg1 + 0x94)
            else
                rax_11 = sx.d(rcx_3) s>> 5
            
            if (rax_11 == 0)
                rbx.b = 1
            else
                if ((rcx_3.b & 2) == 0)
                    rbx = *(arg1 + 0xa0)
                else
                    rbx = arg1 + 0x92
                
                if (*rbx != 0x2d)
                    rbx.b = 1
                else
                    rbx.b = 0

if ((rdi & 1) != 0)
    sub_142a47ff0(&var_58)

__security_check_cookie(rax_1 ^ &var_88)
return zx.q(rbx.b)
