// 函数: sub_142ad9aa0
// 地址: 0x142ad9aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rsi = arg3
int64_t r12
r12.b = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
uint64_t rbx = 2
int16_t var_90 = 2
int64_t rdi = sx.q(*arg2)
int32_t var_d8 = rdi.d

if (rdi.d s< sub_142a4a1f0(arg1))
    int32_t r15_1 = (rdi + 1).d
    int64_t r14_1 = rdi * 2
    bool cond:3_1
    
    do
        int16_t rbx_1 = *(arg1 + 8)
        int32_t rax_4
        
        if (rbx_1 s< 0)
            rax_4 = *(arg1 + 0xc)
        else
            rax_4 = sx.d(rbx_1) s>> 5
        
        int16_t rdi_1
        
        if (rdi.d u>= rax_4)
            rdi_1 = -1
        else
            int16_t* rax_5 = arg1 + 0xa
            
            if ((rbx_1.b & 2) == 0)
                rax_5 = *(arg1 + 0x18)
            
            rdi_1 = *(rax_5 + r14_1)
        
        if (r12.b == 0 && rdi_1 u< 0x80 && *(zx.q(rdi_1) + &data_14365a0c0) != 0)
            break
        
        int16_t var_c8
        
        if (rdi_1 != 0x27)
            var_c8 = rdi_1
            sub_142a48d70(&var_98, &var_c8, 0, 1)
        else if (r15_1 s>= sub_142a4a1f0(arg1))
            r12.b = r12.b == 0
        else
            int32_t rax_10
            
            if (rbx_1 s< 0)
                rax_10 = *(arg1 + 0xc)
            else
                rax_10 = sx.d(rbx_1) s>> 5
            
            if (r15_1 u>= rax_10)
                r12.b = r12.b == 0
            else
                void* rax_11 = arg1 + 0xa
                
                if ((rbx_1.b & 2) == 0)
                    rax_11 = *(arg1 + 0x18)
                
                if (*(rax_11 + r14_1 + 2) != 0x27)
                    r12.b = r12.b == 0
                else
                    var_d8 += 1
                    r15_1 += 1
                    r14_1 += 2
                    var_c8 = rdi_1
                    sub_142a48d70(&var_98, &var_c8, 0, 1)
        rdi = zx.q(var_d8 + 1)
        var_d8 = rdi.d
        r15_1 += 1
        r14_1 += 2
        cond:3_1 = rdi.d s< sub_142a4a1f0(arg1)
    while (cond:3_1)
    rbx = zx.q(var_90)
    rsi = arg3

int64_t r14_2 = sx.q(*arg4)

if (arg5 != 0)
    sub_142b573b0(&var_98)
    
    if (r14_2.d s< sub_142a4a1f0(rsi))
        int64_t rbx_2 = r14_2 * 2
        int32_t i
        
        do
            int16_t rcx_6 = *(rsi + 8)
            int32_t rax_16
            
            if (rcx_6 s< 0)
                rax_16 = *(rsi + 0xc)
            else
                rax_16 = sx.d(rcx_6) s>> 5
            
            int16_t rcx_7
            
            if (r14_2.d u>= rax_16)
                rcx_7 = -1
            else
                int16_t* rax_17 = rsi + 0xa
                
                if ((rcx_6.b & 2) == 0)
                    rax_17 = *(rsi + 0x18)
                
                rcx_7 = *(rax_17 + rbx_2)
            
            if (sub_142a54350(zx.d(rcx_7)) == 0)
                break
            
            r14_2 = zx.q(r14_2.d + 1)
            rbx_2 += 2
            i = sub_142a4a1f0(rsi)
        while (r14_2.d s< i)
    
    rbx = zx.q(var_90)

int32_t r12_1 = 0
int64_t r13_1 = sx.q(r14_2.d)
int64_t var_d0_1 = 0

while (true)
    int32_t var_8c
    int32_t rdi_3 = var_8c
    
    while (true)
        int32_t rax_20
        
        if (rbx.w s< 0)
            rax_20 = rdi_3
        else
            rax_20 = sx.d(rbx.w) s>> 5
        
        if (r12_1 s>= rax_20)
        label_142ad9f35:
            int64_t rdi_5
            
            if (r12_1 s> 0)
                rdi_5 = zx.q(var_d8)
            else
                int16_t rcx_27 = *(arg1 + 8)
                int32_t rax_52
                
                if (rcx_27 s< 0)
                    rax_52 = *(arg1 + 0xc)
                else
                    rax_52 = sx.d(rcx_27) s>> 5
                
                rdi_5 = sx.q(var_d8)
                int16_t rdx_4
                
                if (rdi_5.d u>= rax_52)
                    rdx_4 = -1
                else
                    void* rcx_28 = arg1 + 0xa
                    
                    if ((rcx_27.b & 2) == 0)
                        rcx_28 = *(arg1 + 0x18)
                    
                    rdx_4 = *(rcx_28 + (rdi_5 << 1))
                
                int32_t rax_53 = sub_142b59b70(rdx_4)
                void* const r15_3
                
                if (rax_53 == 0x26)
                    r15_3 = nullptr
                else
                    r15_3 = sub_142b63300(rax_53)
                
                r14_2 = sx.q(*arg4)
                
                if (r14_2.d s< sub_142a4a1f0(rsi))
                    rbx = r14_2 * 2
                    int32_t i_1
                    
                    do
                        int16_t rcx_33 = *(rsi + 8)
                        int32_t rax_58
                        
                        if (rcx_33 s< 0)
                            rax_58 = *(rsi + 0xc)
                        else
                            rax_58 = sx.d(rcx_33) s>> 5
                        
                        int16_t rcx_34
                        
                        if (r14_2.d u>= rax_58)
                            rcx_34 = -1
                        else
                            void* rax_59 = rsi + 0xa
                            
                            if ((rcx_33.b & 2) == 0)
                                rax_59 = *(rsi + 0x18)
                            
                            rcx_34 = *(rax_59 + rbx)
                        
                        if (r15_3 == 0)
                            break
                        
                        if (sub_142a9f280(r15_3, zx.q(rcx_34)) == 0)
                            break
                        
                        r14_2 = zx.q(r14_2.d + 1)
                        rbx += 2
                        i_1 = sub_142a4a1f0(rsi)
                    while (r14_2.d s< i_1)
            
            *arg2 = (rdi_5 - 1).d
            *arg4 = r14_2.d
            rbx.b = 1
        else
            if (r14_2.d s>= sub_142a4a1f0(rsi))
                goto label_142ad9f35
            
            int32_t r15_2
            r15_2.b = 0
            void var_8e
            void* var_80
            
            while (true)
                int32_t rax_23
                
                if (rbx.w s< 0)
                    rax_23 = rdi_3
                else
                    rax_23 = sx.d(rbx.w) s>> 5
                
                if (r12_1 s>= rax_23)
                    break
                
                if (rbx.w s>= 0)
                    rdi_3 = sx.d(rbx.w) s>> 5
                
                int16_t rcx_11
                
                if (r12_1 u>= rdi_3)
                    rcx_11 = -1
                else
                    void* rax_24 = &var_8e
                    
                    if ((var_90.b & 2) == 0)
                        rax_24 = var_80
                    
                    rcx_11 = *(rax_24 + (var_d0_1 << 1))
                
                rdi_3 = var_8c
                
                if (sub_142b13730(zx.d(rcx_11)) == 0)
                    rbx = zx.q(var_90)
                    break
                
                r15_2.b = 1
                r12_1 += 1
                var_d0_1 += 1
                rbx = zx.q(var_90)
            
            if (r15_2.b == 0)
            label_142ad9de2:
                
                if (r14_2.d s< sub_142a4a1f0(rsi))
                    int32_t rax_36
                    
                    if (rbx.w s< 0)
                        rax_36 = rdi_3
                    else
                        rax_36 = sx.d(rbx.w) s>> 5
                    
                    int16_t rdx_1
                    
                    if (r12_1 u>= rax_36)
                        rdx_1 = -1
                    else
                        void* rax_37 = &var_8e
                        
                        if ((var_90.b & 2) == 0)
                            rax_37 = var_80
                        
                        rdx_1 = *(rax_37 + (var_d0_1 << 1))
                    
                    int16_t rcx_20 = *(rsi + 8)
                    int32_t rax_39
                    
                    if (rcx_20 s< 0)
                        rax_39 = *(rsi + 0xc)
                    else
                        rax_39 = sx.d(rcx_20) s>> 5
                    
                    int16_t rcx_21
                    
                    if (r14_2.d u>= rax_39)
                        rcx_21 = -1
                    else
                        void* rax_40 = rsi + 0xa
                        
                        if ((rcx_20.b & 2) == 0)
                            rax_40 = *(rsi + 0x18)
                        
                        rcx_21 = *(rax_40 + (r13_1 << 1))
                    
                    if (rdx_1 == rcx_21)
                        r12_1 += 1
                        var_d0_1 += 1
                        r14_2 = zx.q(r14_2.d + 1)
                        r13_1 += 1
                        continue
                
                if (arg5 != 0)
                    if (r14_2.d == *arg4)
                        int16_t rcx_22 = *(rsi + 8)
                        int32_t rax_43
                        
                        if (rcx_22 s< 0)
                            rax_43 = *(rsi + 0xc)
                        else
                            rax_43 = sx.d(rcx_22) s>> 5
                        
                        if (r14_2.d u< rax_43)
                            void* rax_44 = rsi + 0xa
                            
                            if ((rcx_22.b & 2) == 0)
                                rax_44 = *(rsi + 0x18)
                            
                            if (*(rax_44 + (r13_1 << 1)) == 0x2e && sub_142ad96f0(arg1, *arg2) != 0)
                                r14_2 = zx.q(r14_2.d + 1)
                                r13_1 += 1
                                rbx = zx.q(var_90)
                                break
                    
                    int16_t rcx_24 = *(rsi + 8)
                    int32_t rax_48
                    
                    if (rcx_24 s< 0)
                        rax_48 = *(rsi + 0xc)
                    else
                        rax_48 = sx.d(rcx_24) s>> 5
                    
                    int16_t rcx_25
                    
                    if (r14_2.d u>= rax_48)
                        rcx_25 = -1
                    else
                        void* rax_49 = rsi + 0xa
                        
                        if ((rcx_24.b & 2) == 0)
                            rax_49 = *(rsi + 0x18)
                        
                        rcx_25 = *(rax_49 + (r13_1 << 1))
                    
                    if (sub_142b13730(zx.d(rcx_25)) != 0)
                        r14_2 = zx.q(r14_2.d + 1)
                        r13_1 += 1
                        rbx = zx.q(var_90)
                        break
                
                if (arg6 != 0 && arg7 != 0)
                    goto label_142ad9f35
                
                rbx.b = 0
            else
                r15_2 = r14_2.d
                
                if (r14_2.d s< sub_142a4a1f0(rsi))
                    int32_t i_2
                    
                    do
                        int16_t rcx_14 = *(rsi + 8)
                        int32_t rax_28
                        
                        if (rcx_14 s< 0)
                            rax_28 = *(rsi + 0xc)
                        else
                            rax_28 = sx.d(rcx_14) s>> 5
                        
                        int16_t rcx_15
                        
                        if (r14_2.d u>= rax_28)
                            rcx_15 = -1
                        else
                            void* rax_29 = rsi + 0xa
                            
                            if ((rcx_14.b & 2) == 0)
                                rax_29 = *(rsi + 0x18)
                            
                            rcx_15 = *(rax_29 + (r13_1 << 1))
                        
                        uint32_t rbx_5 = zx.d(rcx_15)
                        
                        if (sub_142a54330(rbx_5) == 0 && sub_142b13730(rbx_5) == 0)
                            break
                        
                        r14_2 = zx.q(r14_2.d + 1)
                        r13_1 += 1
                        i_2 = sub_142a4a1f0(rsi)
                    while (r14_2.d s< i_2)
                    rdi_3 = var_8c
                    rbx = zx.q(var_90)
                
                if (arg5 != 0 || r14_2.d != r15_2)
                    int32_t rax_33
                    
                    if (rbx.w s< 0)
                        rax_33 = rdi_3
                    else
                        rax_33 = sx.d(rbx.w) s>> 5
                    
                    if (r12_1 s>= rax_33)
                        goto label_142ad9f35
                    
                    goto label_142ad9de2
                
                rbx.b = 0
        
        sub_142a47ff0(&var_98)
        __security_check_cookie(rax_1 ^ &var_f8)
        return zx.q(rbx.b)
