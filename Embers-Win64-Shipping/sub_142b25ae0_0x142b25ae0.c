// 函数: sub_142b25ae0
// 地址: 0x142b25ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

int64_t var_88_1 = -2
void var_a8
int64_t rax_2 = __security_cookie ^ &var_a8
int32_t rbx_1 = arg2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
sub_142a479b0(&var_78, arg1 + 0x1b8)

do
    sub_142a48580(&var_78, rbx_1)
    void* rdx_2 = *(arg1 + 0x1f8)
    
    if (rdx_2 != 0)
        int16_t rax_3 = *(rdx_2 + 8)
        int32_t r9_1
        
        if (rax_3 s< 0)
            r9_1 = *(rdx_2 + 0xc)
        else
            r9_1 = sx.d(rax_3) s>> 5
        
        sub_142a48d00(&var_78, rdx_2, 0, r9_1)
    
    sub_142a9e730(arg4, &var_78)
    int16_t rax_4 = *(arg1 + 0x1c0)
    int32_t rax_6
    
    if (rax_4 s< 0)
        rax_6 = *(arg1 + 0x1c4)
    else
        rax_6 = sx.d(rax_4) s>> 5
    
    char var_70
    
    if ((var_70 & 1) == 0 || rax_6 != 0)
        int16_t rcx_5 = var_70.w
        int32_t var_6c
        int32_t rdx_5
        
        if (rcx_5 s< 0)
            rdx_5 = var_6c
        else
            rdx_5 = sx.d(rcx_5) s>> 5
        
        if (rax_6 u< rdx_5)
            if (rax_6 s> 0x3ff)
                rcx_5 |= 0xffe0
                var_6c = rax_6
            else
                rax_6.w <<= 5
                rcx_5 = (rcx_5 & 0x1f) | rax_6.w
            
            var_70.w = rcx_5
    else
        sub_142a4afe0(&var_78)
    
    rbx_1 += 1
while (rbx_1 s<= arg3)

sub_142a47ff0(&var_78)
__security_check_cookie(rax_2 ^ &var_a8)
