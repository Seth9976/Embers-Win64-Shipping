// 函数: sub_142af1050
// 地址: 0x142af1050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_110 = -2
void var_158
int64_t result = __security_cookie ^ &var_158
int64_t result_1 = result
int32_t* r8 = *(arg1 + 8)

if (*r8 s<= 0)
    int32_t rdi_1 = 0
    int32_t r13_1 = 0
    int64_t r12
    r12.b = 1
    int32_t rsi_1 = *(*(*(arg1 + 0x10) + 0x20) + 8)
    struct icu_64::UObject::icu_64::UVector32::VTable* var_130
    sub_142ae7c20(&var_130, rsi_1 + 1, r8)
    sub_142ae7f90(&var_130, rsi_1 + 1)
    int32_t rbx_1 = 3
    
    if (rsi_1 s> 3)
        do
            sub_142ae7f70(&var_130, 0x7fffffff, rbx_1)
            rbx_1 += 1
        while (rbx_1 s< rsi_1)
    
    int32_t rsi_2 = 3
    int32_t r11_1 = rsi_1
    
    if (r11_1 s> 3)
        while (true)
            void* r10_1 = *(arg1 + 0x10)
            void* r9_1 = *(r10_1 + 0x20)
            int32_t rbx_2
            
            if (rsi_2 s< 0 || rsi_2 s>= *(r9_1 + 8))
                rbx_2 = 0
            else
                rbx_2 = *(*(r9_1 + 0x18) + (sx.q(rsi_2) << 3))
            
            uint64_t r8_3 = zx.q(rbx_2 u>> 0x18)
            int32_t var_128
            int64_t var_118
            int32_t rdx_3
            
            if (rsi_2 s< 0 || var_128 s<= 0 || var_128 - rsi_2 s<= 0)
                rdx_3 = 0
            else
                rdx_3 = *(var_118 + (sx.q(rsi_2) << 2))
            
            if (rdx_3 s< rdi_1)
                if (rsi_2 s< 0 || var_128 s<= 0 || var_128 - rsi_2 s<= 0)
                    rdi_1 = 0
                else
                    rdi_1 = *(var_118 + (sx.q(rsi_2) << 2))
            
            if (r8_3.d u> 0x3a)
                abort()
                noreturn
            
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_108
            void* rcx_9
            int32_t rdx_4
            uint64_t rbx_7
            int32_t r14_2
            
            switch (r8_3)
                case 0, 2, 5, 7, 8, 9, 0xe, 0x10, 0x11, 0x14, 0x18, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                        0x29, 0x2a, 0x35, 0x36, 0x37
                    goto label_142af17e7
                case 1
                label_142af151d:
                    
                    if (rsi_2 + 1 s>= 0 && var_128 s> 0 && var_128 - (rsi_2 + 1) s> 0)
                        rdi_1 = *(var_118 + (sx.q(rsi_2 + 1) << 2))
                        goto label_142af1207
                    
                    rdi_1 = 0
                label_142af1207:
                    r12.b = 0
                label_142af17e7:
                    rsi_2 += 1
                    
                    if (rsi_2 s>= r11_1)
                        break
                    
                    continue
                case 3
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    rdx_4 = rbx_2 & 0xffffff
                    rcx_9 = *(r10_1 + 0xb0)
                label_142af11e4:
                    sub_142a9e7d0(rcx_9, rdx_4)
                    goto label_142af11e9
                case 4
                    int32_t temp0_1 = rsi_2
                    rsi_2 += 1
                    int32_t r14_1
                    
                    if (temp0_1 + 1 s< 0 || rsi_2 s>= *(r9_1 + 8))
                        r14_1 = 0
                    else
                        r14_1 = *(*(r9_1 + 0x18) + (sx.q(rsi_2) << 3))
                    
                    r14_2 = r14_1 & 0xffffff
                    
                    if (rdi_1 == 0)
                        int32_t rbx_8 = rbx_2 & 0xffffff
                        int32_t rax_26 = sub_142a486d0(r10_1 + 0x28, rbx_8)
                        sub_142a9e7d0(*(*(arg1 + 0x10) + 0xb0), rax_26)
                        r13_1 += 1
                        *(*(arg1 + 0x10) + 0xa4) = rbx_8
                        *(*(arg1 + 0x10) + 0xa8) = r14_2
                        r11_1 = rsi_1
                    
                    goto label_142af161e
                case 6
                    rbx_7 = zx.q(rbx_2) & 0xffffff
                    
                    if (rbx_7.d s<= rsi_2)
                        goto label_142af1207
                    
                    int32_t rdx_26
                    
                    if (var_128 s<= 0 || var_128 - rbx_7.d s<= 0)
                        rdx_26 = 0
                    else
                        rdx_26 = *(var_118 + (rbx_7 << 2))
                    
                    if (rdi_1 s>= rdx_26)
                        goto label_142af1207
                    
                    goto label_142af1572
                case 0xa
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    sub_142a9ebe0(*(r10_1 + 0xb0), 
                        *(*(r10_1 + 0x90) + ((zx.q(rbx_2) & 0xffffff) << 3)))
                    goto label_142af11e9
                case 0xb
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    void* rax_11 = sub_142ae72d0(*(r10_1 + 0x68), rbx_2 & 0xffffff)
                    sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), rax_11)
                label_142af11e9:
                    r13_1 += 2
                    goto label_142af11ed
                case 0xc, 0x13, 0x15, 0x1b
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    sub_142a9eda0(*(r10_1 + 0xb0))
                    sub_142a9f070(*(*(arg1 + 0x10) + 0xb0))
                    goto label_142af11e9
                case 0xd
                    goto label_142af1510
                case 0xf, 0x12, 0x1c, 0x1d, 0x33
                    goto label_142af1207
                case 0x16
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    sub_142a9db60(&var_108)
                    sub_142b66390(&var_108, 0x2000, 0x200, *(arg1 + 8))
                    
                    if ((rbx_2 & 0xffffff) != 0)
                        sub_142a9f070(&var_108)
                    
                    sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), &var_108)
                    r13_1 += 2
                    sub_142a9dbc0(&var_108)
                    goto label_142af11ed
                case 0x17
                    if (r12.b != 0)
                        *(r10_1 + 0xa0) = 3
                    
                    goto label_142af17e7
                case 0x19, 0x1a
                    int32_t r8_7
                    
                    if (rsi_2 + 1 s< 0 || rsi_2 + 1 s>= *(r9_1 + 8))
                        r8_7 = 0
                    else
                        r8_7 = *(*(r9_1 + 0x18) + (sx.q(rsi_2 + 1) << 3))
                    
                    uint64_t r8_8 = zx.q(r8_7) & 0xffffff
                    
                    if (rsi_2 + 2 s< 0 || rsi_2 + 2 s>= *(r9_1 + 8)
                            || *(*(r9_1 + 0x18) + (sx.q(rsi_2 + 2) << 3)) == 0)
                        int32_t rdx_32
                        
                        if (var_128 s<= 0 || var_128 - r8_8.d s<= 0)
                            rdx_32 = 0
                        else
                            rdx_32 = *(var_118 + (r8_8 << 2))
                        
                        if (rdx_32 s> rdi_1)
                            sub_142ae7f70(&var_130, rdi_1, r8_8.d)
                            r11_1 = rsi_1
                    
                    rsi_2 += 3
                    goto label_142af1207
                case 0x1e, 0x2b
                    if (r12.b != 0)
                        *(r10_1 + 0xa0) = 4
                    
                    goto label_142af17e7
                case 0x24
                    rsi_2 += 1
                label_142af1510:
                    rbx_7 = zx.q(rbx_2) & 0xffffff
                    
                    if (rbx_7.d s< rsi_2)
                        goto label_142af151d
                    
                    int32_t rdx_24
                    
                    if (var_128 s<= 0 || var_128 - rbx_7.d s<= 0)
                        rdx_24 = 0
                    else
                        rdx_24 = *(var_118 + (rbx_7 << 2))
                    
                    if (rdx_24 s<= rdi_1)
                        goto label_142af1207
                    
                label_142af1572:
                    sub_142ae7f70(&var_130, rdi_1, rbx_7.d)
                    r11_1 = rsi_1
                    goto label_142af1207
                case 0x25, 0x2c
                    int32_t rbx_11
                    rbx_11.b = r8_3.d == 0x25
                    int32_t rbx_12 = rbx_11 + 1
                    int64_t r14_4 = sx.q(rsi_2)
                    
                    while (true)
                        rsi_2 += 1
                        int64_t temp2_1 = r14_4
                        r14_4 += 1
                        void* rax_41 = *(*(arg1 + 0x10) + 0x20)
                        int32_t r8_9
                        
                        if (temp2_1 + 1 s< 0 || rsi_2 s>= *(rax_41 + 8))
                            r8_9 = 0
                        else
                            r8_9 = *(*(rax_41 + 0x18) + (r14_4 << 3))
                        
                        uint32_t rcx_77 = r8_9 u>> 0x18
                        int32_t rax_43 = rbx_12 + 2
                        
                        if (rcx_77 != 0x25)
                            rax_43 = rbx_12
                        
                        rbx_12 = rax_43 + 1
                        
                        if (rcx_77 != 0x2c)
                            rbx_12 = rax_43
                        
                        if (rcx_77 == 0x26 || rcx_77 == 0x30)
                            int32_t temp3_1 = rbx_12
                            rbx_12 -= 1
                            
                            if (temp3_1 == 1)
                                break
                        
                        if (rcx_77 == 6)
                            uint64_t r8_10 = zx.q(r8_9) & 0xffffff
                            
                            if (r8_10.d s> rsi_2)
                                int32_t rdx_34
                                
                                if (var_128 s<= 0 || var_128 - r8_10.d s<= 0)
                                    rdx_34 = 0
                                else
                                    rdx_34 = *(var_118 + (r8_10 << 2))
                                
                                if (rdi_1 s< rdx_34)
                                    sub_142ae7f70(&var_130, rdi_1, r8_10.d)
                    
                    r11_1 = rsi_1
                    goto label_142af17e7
                case 0x26, 0x2d, 0x2e, 0x2f, 0x30
                    abort()
                    noreturn
                case 0x27
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    int32_t rbx_6 = rbx_2 & 0xffffff
                    rdx_4 = rbx_6
                    
                    if (sub_142af4740(zx.q(rbx_6), zx.q(rdi_1 + 0x22)) == 0)
                        rcx_9 = *(*(arg1 + 0x10) + 0xb0)
                        goto label_142af11e4
                    
                    sub_142a9d940(&var_108, rdx_4, rbx_6)
                    sub_142b682a0(&var_108, rdi_1 + 2)
                    sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), &var_108)
                    sub_142a9dbc0(&var_108)
                    goto label_142af11e9
                case 0x28
                    int32_t temp1_1 = rsi_2
                    rsi_2 += 1
                    int32_t r14_3
                    
                    if (temp1_1 + 1 s< 0 || rsi_2 s>= *(r9_1 + 8))
                        r14_3 = 0
                    else
                        r14_3 = *(*(r9_1 + 0x18) + (sx.q(rsi_2) << 3))
                    
                    r14_2 = r14_3 & 0xffffff
                    
                    if (rdi_1 != 0)
                    label_142af161e:
                        int32_t rcx_64 = 0x7fffffff - rdi_1
                        int32_t rax_29 = r14_2 + rdi_1
                        rdi_1 = 0x7fffffff
                        
                        if (rcx_64 s> r14_2)
                            rdi_1 = rax_29
                        
                        r12.b = 0
                        goto label_142af17e7
                    
                    int32_t rax_31 = sub_142a486d0(r10_1 + 0x28, rbx_2 & 0xffffff)
                    sub_142a9db60(&var_108)
                    sub_142af0220(rax_31, &var_108)
                    sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), &var_108)
                    r13_1 += 2
                    sub_142a9dbc0(&var_108)
                    int32_t rcx_72 = 0x7fffffff - rdi_1
                    int32_t rax_32 = r14_2 + rdi_1
                    rdi_1 = 0x7fffffff
                    
                    if (rcx_72 s> r14_2)
                        rdi_1 = rax_32
                    
                    r12.b = 0
                    r11_1 = rsi_1
                    goto label_142af17e7
                case 0x31
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    sub_142a9d8c0(&var_108, *(*(r10_1 + 0x90) + ((zx.q(rbx_2) & 0xffffff) << 3)))
                    sub_142a9f070(&var_108)
                    sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), &var_108)
                    r13_1 += 2
                    sub_142a9dbc0(&var_108)
                label_142af11ed:
                    r11_1 = rsi_1
                label_142af11f7:
                    int32_t rcx_10 = 0x7fffffff - rdi_1
                    int32_t rax_10 = rdi_1 + 1
                    rdi_1 = 0x7fffffff
                    
                    if (rcx_10 s> 1)
                        rdi_1 = rax_10
                    
                    goto label_142af1207
                case 0x32
                    if (rdi_1 == 0)
                        void* rax_12 = sub_142ae72d0(*(r10_1 + 0x68), rbx_2 & 0xffffff)
                        sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), rax_12)
                        r13_1 += 2
                        r11_1 = rsi_1
                    
                    goto label_142af1207
                case 0x34
                    if (rdi_1 == 0)
                        sub_142a9eda0(*(r10_1 + 0xb0))
                        sub_142a9f070(*(*(arg1 + 0x10) + 0xb0))
                        r13_1 += 2
                        r11_1 = rsi_1
                    
                    goto label_142af1207
                case 0x38
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    sub_142a9db60(&var_108)
                    sub_142b66390(&var_108, 0x2000, 0x1000, *(arg1 + 8))
                    sub_142a9e7d0(&var_108, rdi_1 + 9)
                    
                    if ((rbx_2 & 0xffffff) != 0)
                        sub_142a9f070(&var_108)
                    
                    sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), &var_108)
                    r13_1 += 2
                    sub_142a9dbc0(&var_108)
                    goto label_142af11ed
                case 0x39, 0x3a
                    if (rdi_1 != 0)
                        goto label_142af11f7
                    
                    sub_142a9db60(&var_108)
                    sub_142a9e9d0(&var_108, rdi_1 + 0xa, rdi_1 + 0xd)
                    sub_142a9e7d0(&var_108, 0x85)
                    sub_142a9e9d0(&var_108, 0x2028, 0x2029)
                    
                    if ((rbx_2 & 0xffffff) != 0)
                        sub_142a9f070(&var_108)
                    
                    sub_142a9ebe0(*(*(arg1 + 0x10) + 0xb0), &var_108)
                    r13_1 += 2
                    sub_142a9dbc0(&var_108)
                    goto label_142af11ed
    
    void* rax_47 = *(arg1 + 0x10)
    void* rsi_3 = *(rax_47 + 0xb0)
    int64_t r14_5 = *(rax_47 + 0xc0)
    
    if (rsi_3 != 0)
        int32_t i = 0
        int64_t rdi_2 = 0
        
        do
            if (sub_142a9f280(rsi_3, zx.q(i)) != 0)
                int64_t rdx_38 = rdi_2 s>> 3
                *(rdx_38 + r14_5) |= (1 << ((i & 7) u% 0x20)).b
            
            i += 1
            rdi_2 += 1
        while (i s<= 0xff)
    
    void* rax_57 = *(arg1 + 0x10)
    int32_t rcx_82 = *(rax_57 + 0xa0)
    
    if (rcx_82 != 3)
        if (r13_1 == 1 && *(rax_57 + 0x7c) s> 0)
            int32_t rax_51 = sub_142a486d0(rax_57 + 0x28, *(rax_57 + 0xa4))
            *(*(arg1 + 0x10) + 0xa0) = 5
            *(*(arg1 + 0x10) + 0xb8) = rax_51
        else if (rcx_82 != 4)
            if (*(rax_57 + 0x7c) == 0)
                *(rax_57 + 0xa0) = 0
            else if (sub_142aa06c0(*(rax_57 + 0xb0)) != 1)
                char rax_55 = sub_142a9f2d0(*(*(arg1 + 0x10) + 0xb0), 0, 0x10ffff)
                void* rax_56
                
                if (rax_55 == 0)
                    rax_56 = *(arg1 + 0x10)
                
                if (rax_55 != 0 || *(rax_56 + 0x7c) s<= 0)
                    *(*(arg1 + 0x10) + 0xa0) = 0
                else
                    *(rax_56 + 0xa0) = 2
            else
                *(*(arg1 + 0x10) + 0xa0) = 1
                *(*(arg1 + 0x10) + 0xb8) = sub_142a9ed50(*(*(arg1 + 0x10) + 0xb0), 0)
    
    result = sub_142ae7c50(&var_130)

__security_check_cookie(result_1 ^ &var_158)
return result
