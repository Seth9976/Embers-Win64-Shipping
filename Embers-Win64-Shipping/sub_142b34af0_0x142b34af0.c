// 函数: sub_142b34af0
// 地址: 0x142b34af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int16_t rax_2 = *(arg2 + 8)
int32_t r9_1

if (rax_2 s< 0)
    r9_1 = *(arg2 + 0xc)
else
    r9_1 = sx.d(rax_2) s>> 5

int32_t rax_3 = sub_142a491f0(arg2, 0x3a, 0, r9_1)

if (rax_3 == 0xffffffff)
    goto label_142b35095

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80_1 = 2
sub_142a4afe0(&var_88)
int32_t var_7c
int32_t r8_1

if (var_80_1 s< 0)
    r8_1 = var_7c
else
    r8_1 = sx.d(var_80_1) s>> 5

sub_142a49310(&var_88, 0, r8_1, arg2, 0, rax_3)
int32_t rbx_1 = rax_3 + 1
int16_t r12_1 = -1

if (rbx_1 s< sub_142a4a1f0(arg2))
    int64_t rdi_1 = sx.q(rbx_1) * 2
    int32_t rax_11
    
    do
        int16_t rcx_4 = *(arg2 + 8)
        int32_t rax_8
        
        if (rcx_4 s< 0)
            rax_8 = *(arg2 + 0xc)
        else
            rax_8 = sx.d(rcx_4) s>> 5
        
        int16_t rcx_5
        
        if (rbx_1 u>= rax_8)
            rcx_5 = -1
        else
            void* rax_9 = arg2 + 0xa
            
            if ((rcx_4.b & 2) == 0)
                rax_9 = *(arg2 + 0x18)
            
            rcx_5 = *(rdi_1 + rax_9)
        
        if (sub_142b13730(zx.d(rcx_5)) == 0)
            break
        
        rbx_1 += 1
        rdi_1 += 2
        rax_11 = sub_142a4a1f0(arg2)
    while (rbx_1 s< rax_11)

sub_142a49390(arg2, 0, rbx_1, 0, 0, 0)
int32_t r8_3 = var_7c
int16_t rdx = var_80_1
int32_t rsi_2

if (rdx s< 0)
    rsi_2 = r8_3
else
    rsi_2 = sx.d(rdx) s>> 5

int32_t rax_13

if (rdx s< 0)
    rax_13 = r8_3
else
    rax_13 = sx.d(rdx) s>> 5

void* var_70
void* r10_1 = var_70
char r11_1 = var_80_1.b
void var_7e
int16_t rdi_2

if (rax_13 == 0)
    rdi_2 = -1
else
    void* rax_14 = &var_7e
    
    if ((r11_1 & 2) == 0)
        rax_14 = r10_1
    
    rdi_2 = *rax_14

int32_t rax_16

if (rdx s< 0)
    rax_16 = r8_3
else
    rax_16 = sx.d(rdx) s>> 5

int16_t rbx_2

if (rsi_2 - 1 u>= rax_16)
    rbx_2 = -1
else
    void* rcx_9 = &var_7e
    
    if ((r11_1 & 2) == 0)
        rcx_9 = r10_1
    
    rbx_2 = *(rcx_9 + (sx.q(rsi_2 - 1) << 1))

if (rdi_2 - 0x30 u> 9 || rbx_2 == 0x78)
    if (rdx s>= 0)
        r8_3 = sx.d(rdx) s>> 5
    
    if (sub_142a48fb0(&var_88, 0, r8_3, &data_14366bfe0, 0, 2) == 0)
        *arg1 = -1
    else if (rsi_2 == 3)
        int32_t rax_47
        
        if (rdi_2 != 0x30)
            if (rdi_2 == 0x78)
                if (rbx_2 == rdi_2)
                    *arg1 = -2
                    arg1[1].d = 0xa
                    *(arg1 + 0xc) = 0
                    
                    if (var_80_1 s< 0)
                        goto label_142b34fbd
                    
                    rax_47 = sx.d(var_80_1) s>> 5
                    goto label_142b34fc3
                
                if (rbx_2 != 0x30)
                    goto label_142b34fec
                
                *arg1 = -4
                arg1[1].d = 0xa
                *(arg1 + 0xc) = 0
                
                if (var_80_1 s< 0)
                    goto label_142b34fbd
                
                rax_47 = sx.d(var_80_1) s>> 5
                goto label_142b34fc3
            
        label_142b34fec:
            int32_t r8_8
            
            if (var_80_1 s< 0)
                r8_8 = var_7c
            else
                r8_8 = sx.d(var_80_1) s>> 5
            
            if (sub_142a48fb0(&var_88, 0, r8_8, &data_14366bff0, 0, 3) != 0)
                int32_t r8_10
                
                if (var_80_1 s< 0)
                    r8_10 = var_7c
                else
                    r8_10 = sx.d(var_80_1) s>> 5
                
                if (sub_142a48fb0(&var_88, 0, r8_10, &data_14366bfe8, 0, 3) == 0)
                    *arg1 = -5
                    arg1[1].d = 0xa
                    *(arg1 + 0xc) = 0
            else
                *arg1 = -6
                arg1[1].d = 0xa
                *(arg1 + 0xc) = 0
        else
            if (rbx_2 != 0x78)
                goto label_142b34fec
            
            *arg1 = -3
            arg1[1].d = 0xa
            *(arg1 + 0xc) = 0
            
            if (var_80_1 s< 0)
            label_142b34fbd:
                rax_47 = var_7c
                goto label_142b34fc3
            
            rax_47 = sx.d(var_80_1) s>> 5
        label_142b34fc3:
            
            if (rax_47 u> 1)
                void* rax_52 = &var_7e
                
                if ((var_80_1.b & 2) == 0)
                    rax_52 = var_70
                
                r12_1 = *(rax_52 + 2)
            
            *(arg1 + 0xe) = r12_1
    
    goto label_142b35090

int64_t r12_2 = 0
int32_t rdi_3 = 0
int16_t r13_1 = 0x20
int64_t rbx_3 = sx.q(rsi_2)
int64_t var_a8_1 = rbx_3
int64_t rsi_3 = 0
uint64_t result

if (rbx_3 s<= 0)
label_142b34d7f:
    int32_t* rsi_5 = arg3
    sub_142b35320(arg1, r12_2, rsi_5)
    
    if (r13_1 != 0x2f)
    label_142b34e5f:
        
        if (r13_1 != 0x3e)
        label_142b35090:
            sub_142a47ff0(&var_88)
        label_142b35095:
            result = zx.q(*(arg2 + 8))
            int32_t rcx_23
            
            if (result.w s< 0)
                rcx_23 = *(arg2 + 0xc)
            else
                rcx_23 = sx.d(result.w) s>> 5
            
            if (rcx_23 s> 0)
                int32_t rcx_25
                
                if (result.w s< 0)
                    rcx_25 = *(arg2 + 0xc)
                else
                    rcx_25 = sx.d(result.w) s>> 5
                
                if (rcx_25 != 0)
                    bool cond:0_1 = (result.b & 2) != 0
                    result = arg2 + 0xa
                    
                    if (not(cond:0_1))
                        result = *(arg2 + 0x18)
                    
                    if (*result == 0x27)
                        result = sub_142a49390(arg2, 0, 1, 0, 0, 0)
        else
            int64_t rdx_3 = sx.q(rdi_3) * 2
            
            while (true)
                int32_t rax_39
                
                if (var_80_1 s< 0)
                    rax_39 = var_7c
                else
                    rax_39 = sx.d(var_80_1) s>> 5
                
                if (rdi_3 s>= rax_39)
                    goto label_142b35090
                
                int32_t rax_41
                
                if (var_80_1 s< 0)
                    rax_41 = var_7c
                else
                    rax_41 = sx.d(var_80_1) s>> 5
                
                if (rdi_3 u< rax_41)
                    void* rax_42 = &var_7e
                    
                    if ((var_80_1.b & 2) == 0)
                        rax_42 = var_70
                    
                    if (*(rdx_3 + rax_42) == 0x3e)
                        int16_t rax_43 = *(arg1 + 0xc)
                        
                        if (rax_43 s> 0)
                            *(arg1 + 0xc) = rax_43 - 1
                            rdi_3 += 1
                            rdx_3 += 2
                            continue
                
                *rsi_5 = 9
                break
            
            result = sub_142a47ff0(&var_88)
    else
        int64_t r12_3 = 0
        rdi_3 += 1
        int64_t rsi_4 = sx.q(rdi_3)
        
        if (rsi_4 s>= rbx_3)
        label_142b34e3f:
            arg1[1].d = r12_3.d
            rsi_5 = arg3
            
            if (r12_3.d == 0)
                *rsi_5 = 9
            
            *(arg1 + 0xc) = sub_142b33820(arg1)
            goto label_142b34e5f
        
        int16_t rdx_2 = var_80_1
        
        while (true)
            int32_t rax_28
            
            if (rdx_2 s< 0)
                rax_28 = var_7c
            else
                rax_28 = sx.d(rdx_2) s>> 5
            
            int16_t rbx_5
            
            if (rdi_3 u>= rax_28)
                rbx_5 = -1
            else
                void* rax_29 = &var_7e
                
                if ((var_80_1.b & 2) == 0)
                    rax_29 = var_70
                
                rbx_5 = *(rax_29 + (rsi_4 << 1))
            
            r13_1 = rbx_5
            
            if (rbx_5 - 0x30 u> 9)
                if (rbx_5 == 0x3e)
                    goto label_142b34e3f
                
                if (sub_142b13730(zx.d(rbx_5)) == 0 && (0xfffd & (rbx_5 - 0x2c)) != 0)
                    break
                
                rdx_2 = var_80_1
            else
                r12_3 = sx.q(zx.d(rbx_5) - 0x30) + r12_3 * 0xa
            
            rdi_3 += 1
            rsi_4 += 1
            
            if (rsi_4 s>= var_a8_1)
                goto label_142b34e3f
        
        *arg3 = 9
        result = sub_142a47ff0(&var_88)
else
    while (true)
        int32_t rax_20
        
        if (rdx s< 0)
            rax_20 = r8_3
        else
            rax_20 = sx.d(rdx) s>> 5
        
        int16_t rbx_4
        
        if (rdi_3 u>= rax_20)
            rbx_4 = -1
        else
            void* rax_21 = &var_7e
            
            if ((r11_1 & 2) == 0)
                rax_21 = r10_1
            
            rbx_4 = *(rax_21 + (rsi_3 << 1))
        
        r13_1 = rbx_4
        
        if (rbx_4 - 0x30 u> 9)
            if (rbx_4 == 0x2f || rbx_4 == 0x3e)
                rbx_3 = var_a8_1
                goto label_142b34d7f
            
            if (sub_142b13730(zx.d(rbx_4)) == 0 && (0xfffd & (rbx_4 - 0x2c)) != 0)
                break
            
            r10_1 = var_70
            r8_3 = var_7c
            rdx = var_80_1
            r11_1 = rdx.b
        else
            r12_2 = sx.q(zx.d(rbx_4) - 0x30) + r12_2 * 0xa
        
        rdi_3 += 1
        rsi_3 += 1
        rbx_3 = var_a8_1
        
        if (rsi_3 s>= rbx_3)
            goto label_142b34d7f
    
    *arg3 = 9
    result = sub_142a47ff0(&var_88)

__security_check_cookie(rax_1 ^ &var_d8)
return result
