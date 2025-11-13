// 函数: sub_142a66530
// 地址: 0x142a66530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_180 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_178
sub_142a479b0(&var_178, arg1)
void var_138
sub_142a45710(&var_138, &data_1434cce10, nullptr, nullptr, nullptr)
sub_142a4b180(&var_178, &var_138)
sub_142a45a20(&var_138)
int16_t rax_2 = *(arg1 + 8)
int32_t rax_4

if (rax_2 s< 0)
    rax_4 = *(arg1 + 0xc)
else
    rax_4 = sx.d(rax_2) s>> 5

char rax_5

if (rax_4 s> 3)
    char* var_1a8
    var_1a8.d = 0
    rax_5 = sub_142a48fb0(&var_178, 0, 3, &data_14363e010, var_1a8.d, 3)

int32_t* rbx

if (rax_4 s<= 3 || rax_5 != 0)
    rbx.b = 0
else
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_198 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_190_1 = 3
    int32_t var_18c_1 = 0xffffffff
    *arg2 = 1
    *arg3 = 0
    *arg4 = 0
    *arg5 = 0
    int16_t rax_6 = *(arg1 + 8)
    int32_t rcx_6
    
    if (rax_6 s< 0)
        rcx_6 = *(arg1 + 0xc)
    else
        rcx_6 = sx.d(rax_6) s>> 5
    
    void* rcx_7
    
    if (rcx_6 u> 3)
        rcx_7 = arg1 + 0xa
        
        if ((rax_6.b & 2) == 0)
            rcx_7 = *(arg1 + 0x18)
    
    if (rcx_6 u<= 3 || *(rcx_7 + 6) != 0x2d)
        int32_t rcx_9
        
        if (rax_6 s< 0)
            rcx_9 = *(arg1 + 0xc)
        else
            rcx_9 = sx.d(rax_6) s>> 5
        
        if (rcx_9 u<= 3)
            rbx.b = 0
        else
            void* rax_7 = arg1 + 0xa
            
            if ((rax_6.b & 2) == 0)
                rax_7 = *(arg1 + 0x18)
            
            if (*(rax_7 + 6) == 0x2b)
                goto label_142a66691
            
            rbx.b = 0
    else
        *arg2 = 0xffffffff
    label_142a66691:
        int32_t var_190_2 = 4
        int32_t var_188 = 0
        int32_t* rax_8
        int64_t rdx_2
        rax_8, rdx_2 = sub_142a58680(&var_188)
        
        if (var_188 s> 0)
            rbx.b = 0
        else
            int64_t r8 = *rax_8
            rdx_2.b = 1
            (*(r8 + 0xb0))(rax_8, rdx_2, r8)
            sub_142aa7690(&var_138, 0xfffe7961)
            (*(*rax_8 + 0xa0))(rax_8, arg1, &var_138, &var_198)
            
            if (var_190_2 == var_190_2)
                (**rax_8)(rax_8, 1)
                rbx.b = 0
            else
                int32_t var_130
                *arg3 = var_130
                int16_t rax_10 = *(arg1 + 8)
                int32_t rax_12
                
                if (rax_10 s< 0)
                    rax_12 = *(arg1 + 0xc)
                else
                    rax_12 = sx.d(rax_10) s>> 5
                
                if (var_190_2 s>= rax_12)
                    int32_t rsi_3 = 0
                    
                    if (rsi_3 - 1 u<= 5)
                        if (rsi_3 s>= 3)
                            int32_t rdx_16
                            
                            if (rsi_3 s<= 4)
                                *arg4 = var_130 s% 0x64
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = muls.dp.d(0x51eb851f, *arg3)
                                rdx_16 = temp2_1 s>> 5
                                *arg3 = rdx_16 + (rdx_16 u>> 0x1f)
                            else if (rsi_3 s<= 6)
                                *arg5 = var_130 s% 0x64
                                int32_t temp6_1
                                int32_t temp7_1
                                temp6_1:temp7_1 = muls.dp.d(0x51eb851f, *arg3)
                                int32_t r8_7 = temp6_1 s>> 5
                                *arg4 = (r8_7 + (r8_7 u>> 0x1f)) s% 0x64
                                int32_t temp10_1
                                int32_t temp11_1
                                temp10_1:temp11_1 = muls.dp.d(0x68db8bad, *arg3)
                                rdx_16 = temp10_1 s>> 0xc
                                *arg3 = rdx_16 + (rdx_16 u>> 0x1f)
                        
                        goto label_142a668db
                    
                    (**rax_8)(rax_8, 1)
                    rbx.b = 0
                else if (0 s> 2)
                    (**rax_8)(rax_8, 1)
                    rbx.b = 0
                else if (sub_142a4a1a0(arg1, var_190_2) != 0x3a)
                    (**rax_8)(rax_8, 1)
                    rbx.b = 0
                else
                    sub_142aa8170(&var_138, 0xfffe7961)
                    (*(*rax_8 + 0xa0))(rax_8, arg1, &var_138, &var_198)
                    
                    if (0 != 2)
                        (**rax_8)(rax_8, 1)
                        rbx.b = 0
                    else
                        *arg4 = var_130
                        int16_t rax_20 = *(arg1 + 8)
                        int32_t rax_22
                        
                        if (rax_20 s< 0)
                            rax_22 = *(arg1 + 0xc)
                        else
                            rax_22 = sx.d(rax_20) s>> 5
                        
                        if (var_190_2 + 1 s>= rax_22)
                            goto label_142a668db
                        
                        if (sub_142a4a1a0(arg1, var_190_2 + 1) != 0x3a)
                            (**rax_8)(rax_8, 1)
                            rbx.b = 0
                        else
                            sub_142aa8170(&var_138, 0xfffe7961)
                            (*(*rax_8 + 0xa0))(rax_8, arg1, &var_138, &var_198)
                            int16_t rax_25 = *(arg1 + 8)
                            int32_t rcx_21
                            
                            if (rax_25 s< 0)
                                rcx_21 = *(arg1 + 0xc)
                            else
                                rcx_21 = sx.d(rax_25) s>> 5
                            
                            if (var_190_2 + 2 != rcx_21 || 0 != 2)
                                (**rax_8)(rax_8, 1)
                                rbx.b = 0
                            else
                                *arg5 = var_130
                            label_142a668db:
                                (**rax_8)(rax_8, 1)
                                
                                if (*arg3 s> 0x17 || *arg4 s> 0x3b || *arg5 s> 0x3b)
                                    rbx.b = 0
                                else
                                    rbx.b = 1
            
            sub_142aa7840(&var_138)
    
    sub_142aa8450(&var_198)

sub_142a47ff0(&var_178)
__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(rbx.b)
