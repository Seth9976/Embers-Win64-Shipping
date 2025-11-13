// 函数: sub_142b810d0
// 地址: 0x142b810d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct icu_64::UObject::icu_64::NFSubstitution::VTable** var_90 = arg1
*arg1 = &icu_64::NFSubstitution::`vftable'{for `icu_64::UObject'}
arg1[1].d = arg2
struct icu_64::NumberFormat::icu_64::DecimalFormat::VTable** rdi = nullptr
arg1[2] = 0
arg1[3] = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
sub_142a479b0(&var_78, arg4)
int16_t rcx_1 = *(arg4 + 8)
int32_t rax_3

if (rcx_1 s< 0)
    rax_3 = *(arg4 + 0xc)
else
    rax_3 = sx.d(rcx_1) s>> 5

int16_t rdx_1
int16_t r9

if (rax_3 s>= 2)
    int32_t rax_5
    
    if (rcx_1 s< 0)
        rax_5 = *(arg4 + 0xc)
    else
        rax_5 = sx.d(rcx_1) s>> 5
    
    rdx_1 = -1
    
    if (rax_5 == 0)
        r9 = -1
    else
        void* rax_6 = arg4 + 0xa
        
        if ((rcx_1.b & 2) == 0)
            rax_6 = *(arg4 + 0x18)
        
        r9 = *rax_6
    
    int32_t rax_8
    
    if (rcx_1 s< 0)
        rax_8 = *(arg4 + 0xc)
    else
        rax_8 = sx.d(rcx_1) s>> 5
    
    int32_t rax_10
    
    if (rcx_1 s< 0)
        rax_10 = *(arg4 + 0xc)
    else
        rax_10 = sx.d(rcx_1) s>> 5
    
    if (rax_8 - 1 u< rax_10)
        void* rdx_2 = arg4 + 0xa
        
        if ((rcx_1.b & 2) == 0)
            rdx_2 = *(arg4 + 0x18)
        
        rdx_1 = *(rdx_2 + (sx.q(rax_8 - 1) << 1))

if (rax_3 s>= 2 && r9 == rdx_1)
    int32_t rdx_4
    
    if (rcx_1 s< 0)
        rdx_4 = *(arg4 + 0xc)
    else
        rdx_4 = sx.d(rcx_1) s>> 5
    
    sub_142a49390(&var_78, rdx_4 - 1, 1, 0, 0, 0)
    sub_142a49390(&var_78, 0, 1, 0, 0, 0)
    goto label_142b81223

int32_t rax_13

if (rcx_1 s< 0)
    rax_13 = *(arg4 + 0xc)
else
    rax_13 = sx.d(rcx_1) s>> 5

if (rax_13 != 0)
    *arg5 = 9
else
label_142b81223:
    int32_t var_6c
    int32_t rdx_9 = var_6c
    int16_t var_70
    int32_t rax_15
    
    if (var_70 s< 0)
        rax_15 = rdx_9
    else
        rax_15 = sx.d(var_70) s>> 5
    
    if (rax_15 != 0)
        int32_t rax_17
        
        if (var_70 s< 0)
            rax_17 = rdx_9
        else
            rax_17 = sx.d(var_70) s>> 5
        
        void var_6e
        void* var_60
        void* rax_18
        
        if (rax_17 != 0)
            rax_18 = &var_6e
            
            if ((var_70.b & 2) == 0)
                rax_18 = var_60
        
        if (rax_17 == 0 || *rax_18 != 0x25)
            int32_t rax_21
            
            if (var_70 s< 0)
                rax_21 = rdx_9
            else
                rax_21 = sx.d(var_70) s>> 5
            
            void* rax_22
            
            if (rax_21 != 0)
                rax_22 = &var_6e
                
                if ((var_70.b & 2) == 0)
                    rax_22 = var_60
            
            int32_t rax_24
            void* rax_25
            
            if (rax_21 == 0 || *rax_22 != 0x23)
                if (var_70 s< 0)
                    rax_24 = rdx_9
                else
                    rax_24 = sx.d(var_70) s>> 5
                
                if (rax_24 != 0)
                    rax_25 = &var_6e
                    
                    if ((var_70.b & 2) == 0)
                        rax_25 = var_60
            
            if ((rax_21 == 0 || *rax_22 != 0x23) && (rax_24 == 0 || *rax_25 != 0x30))
                if (var_70 s>= 0)
                    rdx_9 = sx.d(var_70) s>> 5
                
                if (rdx_9 == 0)
                    *arg5 = 9
                else
                    void* rax_30 = &var_6e
                    
                    if ((var_70.b & 2) == 0)
                        rax_30 = var_60
                    
                    if (*rax_30 != 0x3e)
                        *arg5 = 9
                    else
                        arg1[2] = arg3
                        arg1[3] = rdi
            else
                void* rax_26 = sub_142aaf0c0(*(arg3 + 0x80))
                
                if (rax_26 != 0)
                    struct icu_64::UObject::icu_64::Format::VTable** rax_27 = j_sub_142a7dd00(0x178)
                    struct icu_64::UObject::icu_64::Format::VTable** var_88_1 = rax_27
                    
                    if (rax_27 != 0)
                        rdi = sub_142a5aa40(rax_27, &var_78, rax_26, arg5)
                    
                    if (rdi == 0)
                        *arg5 = 7
                    else if (*arg5 s<= 0)
                        arg1[3] = rdi
                    else
                        (*rdi)->__offset(0x0).q(rdi, 1)
                else
                    *arg5 = 2
        else
            arg1[2] = sub_142aae540(*(arg3 + 0x80), &var_78, arg5)
    else
        arg1[2] = arg3

sub_142a47ff0(&var_78)
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
