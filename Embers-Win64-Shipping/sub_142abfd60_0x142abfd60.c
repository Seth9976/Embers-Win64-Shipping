// 函数: sub_142abfd60
// 地址: 0x142abfd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_50 = arg1
int16_t rax_2 = arg1[1].w
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(arg1 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

if (rax_4 == 0)
    sub_142a4afe0(arg1)
    int16_t rax_5 = arg1[1].w
    int32_t r8_1
    
    if (rax_5 s< 0)
        r8_1 = *(arg1 + 0xc)
    else
        r8_1 = sx.d(rax_5) s>> 5
    
    sub_142a49390(arg1, 0, r8_1, &data_14365598c, 0, 0xffffffff)

int16_t rax_6 = *(arg2 + 8)
int32_t r12_1

if (rax_6 s< 0)
    r12_1 = *(arg2 + 0xc)
else
    r12_1 = sx.d(rax_6) s>> 5

int16_t rax_7 = arg1[1].w
int32_t rcx_2

if (rax_7 s< 0)
    rcx_2 = *(arg1 + 0xc)
else
    rcx_2 = sx.d(rax_7) s>> 5

if (rcx_2 != 1)
    int16_t var_68 = 0x27
    sub_142a49390(arg2, arg3, 0, &var_68, 0, 1)
    int32_t rbp_1 = 1
    int32_t rsi_1 = 0
    
    if (sub_142a4a1f0(arg1) s> 0)
        int16_t* r14_1 = nullptr
        int32_t rax_18
        
        do
            int16_t rcx_7 = arg1[1].w
            int32_t rax_14
            
            if (rcx_7 s< 0)
                rax_14 = *(arg1 + 0xc)
            else
                rax_14 = sx.d(rcx_7) s>> 5
            
            int32_t rax_16
            int16_t rax_17
            
            if (rsi_1 u>= rax_14)
                rax_17 = -1
            label_142abff4f:
                var_68 = rax_17
                sub_142a49390(arg2, arg3 + rbp_1, 0, &var_68, 0, 1)
                rax_16 = 1
            else
                void* rax_15 = arg1 + 0xa
                
                if ((rcx_7.b & 2) == 0)
                    rax_15 = arg1[3]
                
                rax_17 = *(r14_1 + rax_15)
                
                if (rax_17 != 0x27)
                    goto label_142abff4f
                
                sub_142a49390(arg2, arg3 + rbp_1, 0, &data_143655278, 0, 0xffffffff)
                rax_16 = 2
            rsi_1 += 1
            r14_1 = &r14_1[1]
            rbp_1 += rax_16
            rax_18 = sub_142a4a1f0(arg1)
        while (rsi_1 s< rax_18)
    
    var_68 = 0x27
    sub_142a49390(arg2, arg3 + rbp_1, 0, &var_68, 0, 1)
else
    int32_t r8_3
    
    if (rax_7 s< 0)
        r8_3 = *(arg1 + 0xc)
    else
        r8_3 = sx.d(rax_7) s>> 5
    
    if (sub_142a48fb0(arg1, 0, r8_3, &data_143655a58, 0, 0xffffffff) != 0)
        int16_t rax_9 = arg1[1].w
        int32_t rax_11
        
        if (rax_9 s< 0)
            rax_11 = *(arg1 + 0xc)
        else
            rax_11 = sx.d(rax_9) s>> 5
        
        sub_142a49310(arg2, arg3, 0, arg1, 0, rax_11)
    else
        sub_142a49390(arg2, arg3, 0, &data_143655278, 0, 0xffffffff)

int16_t rax_19 = *(arg2 + 8)
int32_t rdi_2

if (rax_19 s< 0)
    rdi_2 = *(arg2 + 0xc)
else
    rdi_2 = sx.d(rax_19) s>> 5

sub_142a47ff0(arg1)
__security_check_cookie(rax_1 ^ &var_98)
return zx.q(rdi_2 - r12_1)
