// 函数: sub_142af1df0
// 地址: 0x142af1df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int32_t i_1 = arg2
int32_t* r8 = *(arg1 + 8)

if (*r8 s> 0)
    return 0

int32_t rsi_1 = 0
struct icu_64::UObject::icu_64::UVector32::VTable* var_50
sub_142ae7c20(&var_50, arg3 + 2, r8)
sub_142ae7f90(&var_50, arg3 + 2)
int32_t i = i_1

if (i_1 s<= arg3 + 1)
    do
        sub_142ae7f70(&var_50, 0x7fffffff, i)
        i += 1
    while (i s<= arg3 + 1)

int64_t var_38
int64_t r11_1 = var_38
int32_t var_48
int32_t rdx_2 = var_48

if (i_1 s<= arg3)
    while (true)
        void* r10_1 = *(*(arg1 + 0x10) + 0x20)
        int32_t r8_2
        
        if (i_1 s< 0 || i_1 s>= *(r10_1 + 8))
            r8_2 = 0
        else
            r8_2 = *(*(r10_1 + 0x18) + (sx.q(i_1) << 3))
        
        uint64_t r9_2 = zx.q(r8_2 u>> 0x18)
        int32_t rcx_4
        
        if (i_1 s< 0 || rdx_2 s<= 0 || rdx_2 - i_1 s<= 0)
            rcx_4 = 0
        else
            rcx_4 = *(r11_1 + (sx.q(i_1) << 2))
        
        if (rcx_4 s< rsi_1)
            if (i_1 s< 0 || rdx_2 s<= 0 || rdx_2 - i_1 s<= 0)
                rsi_1 = 0
            else
                rsi_1 = *(r11_1 + (sx.q(i_1) << 2))
        
        uint64_t r8_3
        
        if (r9_2.d u<= 0x3a)
            switch (r9_2)
                case 0, 2, 5, 7, 8, 9, 0xf, 0x10, 0x11, 0x12, 0x14, 0x17, 0x18, 0x1c, 0x1d, 0x1e, 
                        0x1f, 0x20, 0x21, 0x22, 0x23, 0x26, 0x29, 0x2a, 0x2b, 0x2d, 0x2e, 0x2f, 
                        0x30, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37
                    goto label_142af2102
                case 1
                label_142af1f43:
                    
                    if (i_1 + 1 s< 0 || rdx_2 s<= 0 || rdx_2 - (i_1 + 1) s<= 0)
                        rsi_1 = 0
                        goto label_142af2102
                    
                    rsi_1 = *(r11_1 + (sx.q(i_1 + 1) << 2))
                    goto label_142af2102
                case 3, 0xa, 0xb, 0xc, 0x13, 0x15, 0x16, 0x1b, 0x27, 0x31, 0x38, 0x39, 0x3a
                    goto label_142af1f1c
                case 4
                    int32_t i_4 = i_1
                    i_1 += 1
                    int32_t r8_4
                    
                    if (i_4 + 1 s< 0 || i_1 s>= *(r10_1 + 8))
                        r8_4 = 0
                    else
                        r8_4 = *(*(r10_1 + 0x18) + (sx.q(i_1) << 3))
                    
                    int32_t r8_5 = r8_4 & 0xffffff
                    
                    if (0x7fffffff - rsi_1 s<= r8_5)
                        rsi_1 = 0x7fffffff
                        goto label_142af2102
                    
                    rsi_1 += r8_5
                    goto label_142af2102
                case 6
                    r8_3 = zx.q(r8_2) & 0xffffff
                    
                    if (r8_3.d s<= i_1)
                        goto label_142af2102
                    
                    int32_t rcx_9
                    
                    if (rdx_2 s<= 0 || rdx_2 - r8_3.d s<= 0)
                        rcx_9 = 0
                    else
                        rcx_9 = *(r11_1 + (r8_3 << 2))
                    
                    if (rsi_1 s>= rcx_9)
                        goto label_142af2102
                    
                    goto label_142af20f4
                case 0xd
                    goto label_142af1f34
                case 0x19, 0x1a
                    int32_t r8_6
                    
                    if (i_1 + 1 s< 0 || i_1 + 1 s>= *(r10_1 + 8))
                        r8_6 = 0
                    else
                        r8_6 = *(*(r10_1 + 0x18) + (sx.q(i_1 + 1) << 3))
                    
                    int32_t r9_3
                    
                    if (i_1 + 2 s< 0 || i_1 + 2 s>= *(r10_1 + 8))
                        r9_3 = 0
                    else
                        r9_3 = *(*(r10_1 + 0x18) + (sx.q(i_1 + 2) << 3))
                    
                    int32_t i_2 = i_1 + 3
                    i_1 = r8_6 & 0xffffff
                    
                    if (r9_3 != 0)
                        i_1 = i_2
                    
                    goto label_142af2102
                case 0x24
                    i_1 += 1
                label_142af1f34:
                    r8_3 = zx.q(r8_2) & 0xffffff
                    
                    if (r8_3.d s< i_1)
                        goto label_142af1f43
                    
                    int32_t rcx_8
                    
                    if (rdx_2 s<= 0 || rdx_2 - r8_3.d s<= 0)
                        rcx_8 = 0
                    else
                        rcx_8 = *(r11_1 + (r8_3 << 2))
                    
                    if (rcx_8 s<= rsi_1)
                        goto label_142af2102
                    
                label_142af20f4:
                    sub_142ae7f70(&var_50, rsi_1, r8_3.d)
                    r11_1 = var_38
                    rdx_2 = var_48
                    goto label_142af2102
                case 0x25, 0x2c
                    int32_t rbx_1
                    rbx_1.b = r9_2.d == 0x25
                    int32_t rbx_2 = rbx_1 + 1
                    int64_t i_3 = sx.q(i_1)
                    
                    while (true)
                        i_1 += 1
                        int64_t i_5 = i_3
                        i_3 += 1
                        void* rax_26 = *(*(arg1 + 0x10) + 0x20)
                        int32_t r8_8
                        
                        if (i_5 + 1 s< 0 || i_1 s>= *(rax_26 + 8))
                            r8_8 = 0
                        else
                            r8_8 = *(*(rax_26 + 0x18) + (i_3 << 3))
                        
                        uint32_t rcx_14 = r8_8 u>> 0x18
                        int32_t rax_28 = rbx_2 + 2
                        
                        if (rcx_14 != 0x25)
                            rax_28 = rbx_2
                        
                        rbx_2 = rax_28 + 1
                        
                        if (rcx_14 != 0x2c)
                            rbx_2 = rax_28
                        
                        if (rcx_14 == 0x26 || rcx_14 == 0x30)
                            int32_t temp2_1 = rbx_2
                            rbx_2 -= 1
                            
                            if (temp2_1 == 1)
                                break
                        
                        if (rcx_14 == 6)
                            uint64_t r8_9 = zx.q(r8_8) & 0xffffff
                            
                            if (r8_9.d s> i_1)
                                int32_t rcx_15
                                
                                if (rdx_2 s<= 0 || rdx_2 - r8_9.d s<= 0)
                                    rcx_15 = 0
                                else
                                    rcx_15 = *(r11_1 + (r8_9 << 2))
                                
                                if (rsi_1 s< rcx_15)
                                    sub_142ae7f70(&var_50, rsi_1, r8_9.d)
                                    r11_1 = var_38
                                    rdx_2 = var_48
                    
                    goto label_142af2102
                case 0x28
                    i_1 += 1
                label_142af1f1c:
                    
                    if (0x7fffffff - rsi_1 s<= 1)
                        rsi_1 = 0x7fffffff
                        goto label_142af2102
                    
                    rsi_1 += 1
                label_142af2102:
                    i_1 += 1
                    
                    if (i_1 s> arg3)
                        break
                    
                    continue
        abort()
        noreturn

int32_t rcx_18

if (arg3 + 1 s< 0 || rdx_2 s<= 0 || rdx_2 - (arg3 + 1) s<= 0)
    rcx_18 = 0
else
    rcx_18 = *(r11_1 + (sx.q(arg3 + 1) << 2))

if (rcx_18 s< rsi_1)
    if (arg3 + 1 s< 0 || rdx_2 s<= 0 || rdx_2 - (arg3 + 1) s<= 0)
        rsi_1 = 0
    else
        rsi_1 = *(r11_1 + (sx.q(arg3 + 1) << 2))

sub_142ae7c50(&var_50)
return zx.q(rsi_1)
