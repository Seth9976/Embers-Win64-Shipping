// 函数: ?cancel@agent@Concurrency@@QEAA_NXZ
// 地址: 0x142b796f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t result_1 = -1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
    sub_142a47a60(&var_58, 1, &data_14367d738, 0xffffffff)
uint64_t rbx

if ((*(arg1 + 8) & 1) == 0)
    int16_t rcx_1 = *(arg1 + 8)
    int32_t r8_2
    
    if (rcx_1 s< 0)
        r8_2 = *(arg1 + 0xc)
    else
        r8_2 = sx.d(rcx_1) s>> 5
    
    int16_t rcx_2 = rax_2[1].w
    int32_t rcx_4
    
    if (rcx_2 s< 0)
        rcx_4 = *(rax_2 + 0xc)
    else
        rcx_4 = sx.d(rcx_2) s>> 5
    
    char rax_3
    
    if ((rax_2[1].b & 1) == 0 && r8_2 == rcx_4)
        rax_3 = sub_142a490e0(arg1, rax_2, r8_2)
    
    if ((rax_2[1].b & 1) != 0 || r8_2 != rcx_4 || rax_3 == 0)
        rbx.b = 0
    else
        rbx.b = 1
else
    rbx.b = rax_2[1].b & 1

sub_142a47ff0(&var_58)
uint64_t result

if (rbx.b == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
        sub_142a47a60(&var_58, 1, &data_14367d570, 0xffffffff)
    
    if ((*(arg1 + 8) & 1) == 0)
        int16_t rcx_8 = *(arg1 + 8)
        int32_t r8_4
        
        if (rcx_8 s< 0)
            r8_4 = *(arg1 + 0xc)
        else
            r8_4 = sx.d(rcx_8) s>> 5
        
        int16_t rcx_9 = rax_4[1].w
        int32_t rcx_11
        
        if (rcx_9 s< 0)
            rcx_11 = *(rax_4 + 0xc)
        else
            rcx_11 = sx.d(rcx_9) s>> 5
        
        char rax_5
        
        if ((rax_4[1].b & 1) == 0 && r8_4 == rcx_11)
            rax_5 = sub_142a490e0(arg1, rax_4, r8_4)
        
        if ((rax_4[1].b & 1) != 0 || r8_4 != rcx_11 || rax_5 == 0)
            rbx.b = 0
        else
            rbx.b = 1
    else
        rbx.b = rax_4[1].b & 1
    
    sub_142a47ff0(&var_58)
    
    if (rbx.b != 0)
        result_1 = 0x10
    
    result = zx.q(result_1)
else
    result = 0x11

__security_check_cookie(rax_1 ^ &var_88)
return result
