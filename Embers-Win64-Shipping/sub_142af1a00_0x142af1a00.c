// 函数: sub_142af1a00
// 地址: 0x142af1a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int32_t rdi = arg2
int32_t* r8 = *(arg1 + 8)

if (*r8 s> 0)
    return 0

int32_t rsi_1 = 0
struct icu_64::UObject::icu_64::UVector32::VTable* var_30
sub_142ae7c20(&var_30, arg3 + 1, r8)
sub_142ae7f90(&var_30, arg3 + 1)
int32_t rbx_1 = rdi

if (rdi s<= arg3)
    do
        sub_142ae7f70(&var_30, 0, rbx_1)
        rbx_1 += 1
    while (rbx_1 s<= arg3)
    
    if (rdi s<= arg3)
        int64_t var_18
        int64_t r11_1 = var_18
        int32_t var_28
        int32_t r10_1 = var_28
        
        while (true)
            void* r9_1 = *(*(arg1 + 0x10) + 0x20)
            int32_t r8_2
            
            if (rdi s< 0 || rdi s>= *(r9_1 + 8))
                r8_2 = 0
            else
                r8_2 = *(*(r9_1 + 0x18) + (sx.q(rdi) << 3))
            
            uint64_t rdx_3 = zx.q(r8_2 u>> 0x18)
            int32_t rcx_4
            
            if (rdi s< 0 || r10_1 s<= 0 || r10_1 - rdi s<= 0)
                rcx_4 = 0
            else
                rcx_4 = *(r11_1 + (sx.q(rdi) << 2))
            
            if (rcx_4 s> rsi_1)
                if (rdi s< 0 || r10_1 s<= 0 || r10_1 - rdi s<= 0)
                    rsi_1 = 0
                else
                    rsi_1 = *(r11_1 + (sx.q(rdi) << 2))
            
            if (rdx_3.d u<= 0x3a)
                switch (rdx_3)
                    case 0, 2, 5, 7, 8, 9, 0x10, 0x11, 0x14, 0x17, 0x18, 0x1e, 0x1f, 0x20, 0x21, 
                            0x23, 0x25, 0x26, 0x2a, 0x2b, 0x2d, 0x2e, 0x2f, 0x30, 0x35, 0x36, 0x37
                        goto label_142af1d30
                    case 1
                        if (rdi + 1 s>= 0 && r10_1 s> 0 && r10_1 - (rdi + 1) s> 0)
                            rsi_1 = *(r11_1 + (sx.q(rdi + 1) << 2))
                            goto label_142af1d30
                        
                    label_142af1bb1:
                        rsi_1 = 0
                    label_142af1d38:
                        rdi += 1
                        
                        if (rdi s> arg3)
                            break
                        
                        continue
                    case 3
                        int32_t rcx_7 = 0x7fffffff - rsi_1
                        int32_t rax_13 = rsi_1 + 1
                        rsi_1 = 0x7fffffff
                        
                        if (rcx_7 s> 1)
                            rsi_1 = rax_13
                        
                        if ((r8_2 & 0xffffff) u<= 0x10000)
                            goto label_142af1d30
                        
                        if (0x7fffffff - rsi_1 s<= 1)
                            rsi_1 = 0x7fffffff
                            break
                        
                        rsi_1 += 1
                        goto label_142af1d30
                    case 4, 0x28
                        int32_t temp0_1 = rdi
                        rdi += 1
                        int32_t rdx_6
                        
                        if (temp0_1 + 1 s< 0 || rdi s>= *(r9_1 + 8))
                            rdx_6 = 0
                        else
                            rdx_6 = *(*(r9_1 + 0x18) + (sx.q(rdi) << 3))
                        
                        int32_t rdx_7 = rdx_6 & 0xffffff
                        
                        if (0x7fffffff - rsi_1 s<= rdx_7)
                            rsi_1 = 0x7fffffff
                            break
                        
                        rsi_1 += rdx_7
                        goto label_142af1d30
                    case 6
                        uint64_t r8_5 = zx.q(r8_2) & 0xffffff
                        
                        if (r8_5.d s<= rdi)
                            rsi_1 = 0x7fffffff
                            break
                        
                        int32_t rcx_11
                        
                        if (r10_1 s<= 0 || r10_1 - r8_5.d s<= 0)
                            rcx_11 = 0
                        else
                            rcx_11 = *(r11_1 + (r8_5 << 2))
                        
                        if (rsi_1 s> rcx_11)
                            sub_142ae7f70(&var_30, rsi_1, r8_5.d)
                            r11_1 = var_18
                            r10_1 = var_28
                        
                        goto label_142af1d30
                    case 0xa, 0xb, 0xc, 0x15, 0x16, 0x1b, 0x27, 0x31, 0x38, 0x39, 0x3a
                        if (0x7fffffff - rsi_1 s<= 2)
                            rsi_1 = 0x7fffffff
                            break
                        
                        rsi_1 += 2
                    label_142af1d30:
                        
                        if (rsi_1 == 0x7fffffff)
                            break
                        
                        goto label_142af1d38
                    case 0xd, 0xf, 0x12, 0x24
                        uint64_t r8_4 = zx.q(r8_2) & 0xffffff
                        
                        if (r8_4.d s< rdi)
                            rsi_1 = 0x7fffffff
                            break
                        
                        int32_t rcx_8
                        
                        if (r10_1 s<= 0 || r10_1 - r8_4.d s<= 0)
                            rcx_8 = 0
                        else
                            rcx_8 = *(r11_1 + (r8_4 << 2))
                        
                        if (rcx_8 s< rsi_1)
                            sub_142ae7f70(&var_30, rsi_1, r8_4.d)
                            r11_1 = var_18
                            r10_1 = var_28
                        
                        goto label_142af1bb1
                    case 0x13, 0x22, 0x29, 0x32, 0x33, 0x34
                        rsi_1 = 0x7fffffff
                        break
                    case 0x19, 0x1a
                        int32_t rbx_2
                        
                        if (rdi + 1 s< 0 || rdi + 1 s>= *(r9_1 + 8))
                            rbx_2 = 0
                        else
                            rbx_2 = (*(*(r9_1 + 0x18) + (sx.q(rdi + 1) << 3))).d
                        
                        int32_t rbx_3 = rbx_2 & 0xffffff
                        
                        if (rbx_3 == rdi + 4)
                            rdi = rbx_3
                            goto label_142af1d30
                        
                        int32_t rdi_2
                        
                        if (rdi + 3 s< 0 || rdi + 3 s>= *(r9_1 + 8))
                            rdi_2 = 0
                        else
                            rdi_2 = *(*(r9_1 + 0x18) + (sx.q(rdi + 3) << 3))
                            
                            if (rdi_2 == 0xffffffff)
                                rsi_1 = 0x7fffffff
                                break
                                break
                        
                        int64_t rdx_11 =
                            sx.q(rdi_2) * sx.q(sub_142af1a00(arg1, rdi + 4, zx.q(rbx_3 - 1)))
                            + sx.q(rsi_1)
                        rsi_1 = rdx_11.d
                        
                        if (rdx_11 s>= 0x7fffffff)
                            rsi_1 = 0x7fffffff
                            break
                        
                        rdi = rbx_3
                        r11_1 = var_18
                        r10_1 = var_28
                        goto label_142af1d30
                    case 0x1c, 0x1d
                        abort()
                        noreturn
                    case 0x2c
                        int32_t rdx_12 = 0
                        int64_t r8_7 = sx.q(rdi)
                        
                        while (true)
                            rdi += 1
                            int64_t temp1_1 = r8_7
                            r8_7 += 1
                            int32_t rcx_18
                            
                            if (temp1_1 + 1 s< 0 || rdi s>= *(r9_1 + 8))
                                rcx_18 = 0
                            else
                                rcx_18 = *(*(r9_1 + 0x18) + (r8_7 << 3))
                            
                            uint32_t rcx_19 = rcx_18 u>> 0x18
                            
                            if (rcx_19 == 0x25 || rcx_19 == 0x2c)
                                rdx_12 += 1
                            
                            if (rcx_19 != 0x26 && rcx_19 != 0x30)
                                continue
                            
                            if (rdx_12 == 0)
                                break
                            
                            rdx_12 -= 1
                        
                        goto label_142af1d30
            
            abort()
            noreturn

sub_142ae7c50(&var_30)
return zx.q(rsi_1)
