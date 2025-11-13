// 函数: sub_142a96ab0
// 地址: 0x142a96ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_70
__builtin_memset(&var_70, 0, 0x34)
int64_t rsi = sx.q(*(arg1 + 0x1e0))
int32_t var_88 = rsi.d
void* rdi = *(*(arg1 + 0x1d8) + 8)
int32_t rcx = *(rdi + 4)
*(arg1 + 0x1e4) = 0
*(arg1 + 0x208) = 0
int64_t rcx_2 = rsi - *(arg1 + 0x168)

if (rsi - *(arg1 + 0x168) s< 0 || rcx_2 s>= sx.q(*(arg1 + 0x164))
        || *(*(arg1 + 0x178) + (rcx_2 << 1)) u>= 0xdc00)
    sub_142aeacd0(arg1 + 0x148, rsi)
else
    *(arg1 + 0x170) = rcx_2.d

int64_t rdx_2 = sx.q(*(arg1 + 0x170))
int32_t result_1 = rsi.d
int16_t r8_1

if (rdx_2.d s< *(arg1 + 0x174))
    r8_1 = *(*(arg1 + 0x178) + (rdx_2 << 1))

int32_t rax_8
int32_t rsi_1

if (rdx_2.d s>= *(arg1 + 0x174) || r8_1 u>= 0xd800)
    rax_8 = sub_142aea870(arg1 + 0x148, arg3)
    rsi_1 = rax_8
else
    rax_8 = (rdx_2 + 1).d
    rsi_1 = zx.d(r8_1)
    *(arg1 + 0x170) = rax_8

int32_t result

if (rsi_1 != 0xffffffff)
    void* rdx_3 = rdi + 0x10
    uint64_t r9_1 = zx.q(rcx)
    int32_t rcx_6 = *(rdi + 8) & 2
    int32_t rbp_1 = var_70.d
    void* r13_1 = rdx_3 + r9_1
    arg2.w = sbb.w(arg2.w, arg2.w, rcx_6 != 0)
    arg2.w &= 2
    int32_t r14_1
    r14_1.b = rcx_6 == 0
    
    while (true)
        if (rsi_1 != 0xffffffff)
            if (r14_1 == 1)
                int64_t* r8_2 = *(*(arg1 + 0x1d8) + 0x30)
                int32_t rcx_9
                
                if (rsi_1 u< 0xd800)
                    rcx_9 = (rsi_1 & 0x1f) + (zx.d(*(*r8_2 + (sx.q(rsi_1) s>> 5 << 1))) << 2)
                    rdx_3 = rdi + 0x10
                else if (rsi_1 u<= 0xffff)
                    int32_t rcx_10 = 0
                    
                    if (rsi_1 s<= 0xdbff)
                        rcx_10 = 0x140
                    
                    rcx_9 =
                        (rsi_1 & 0x1f) + (zx.d(*(*r8_2 + (sx.q(rcx_10 + (rsi_1 s>> 5)) << 1))) << 2)
                    rdx_3 = rdi + 0x10
                else if (rsi_1 u> 0x10ffff)
                    rcx_9 = r8_2[3].d + 0x80
                else if (rsi_1 s< *(r8_2 + 0x2c))
                    int64_t rdx_6 = *r8_2
                    rcx_9 = (rsi_1 & 0x1f) + (zx.d(*(rdx_6 + (zx.q(
                        zx.d(*(rdx_6 + (sx.q((rsi_1 s>> 0xb) + 0x820) << 1)))
                        + (rsi_1 s>> 5 & 0x3f)) << 1))) << 2)
                    rdx_3 = rdi + 0x10
                else
                    rcx_9 = r8_2[6].d
                
                arg2 = zx.q(*(*r8_2 + (sx.q(rcx_9) << 1)))
                
                if ((0x4000 & arg2.w) != 0)
                    *(arg1 + 0x208) += 1
                    arg2.w &= 0xbfff
            
            goto label_142a96d19
        
        int32_t rcx_26
        
        if (r14_1 == 2)
        label_142a96ed3:
            result = result_1
            
            if (result != var_88)
                break
            
            sub_142aeacd0(arg1 + 0x148, rsi)
            sub_142aea870(arg1 + 0x148, arg3)
            result = sub_142aea6a0(arg1 + 0x148)
            rcx_26 = 0
        else
            r14_1 = rsi_1 + 3
            arg2 = zx.q(rsi_1 + 2)
        label_142a96d19:
            uint32_t r12_1 = zx.d(*(r13_1 + (zx.q(arg2.w) << 1) + 8))
            r13_1 = zx.q(r12_1 * r9_1.d) + rdx_3
            
            if (*r13_1 == 0xffff)
                if (r14_1 != 0)
                    int32_t rcx_18 = *(arg1 + 0x170)
                    int32_t result_2
                    
                    if (rcx_18 s> *(arg1 + 0x164))
                        result_2 = (*(*(arg1 + 0x180) + 0x40))(arg1 + 0x148)
                    else
                        result_2 = *(arg1 + 0x168) + rcx_18
                    
                    result_1 = result_2
                
                *(arg1 + 0x1e4) = sx.d(*(r13_1 + 4))
            
            int16_t r8_3 = *r13_1
            int64_t var_50
            
            if (r8_3 s> 0)
                int32_t rdx_7 = 0
                int64_t rcx_21 = 0
                
                while (true)
                    if (rdx_7 s>= rbp_1)
                        abort()
                        noreturn
                    
                    if (*(&var_50:4 + (rcx_21 << 1)) == r8_3)
                        break
                    
                    rdx_7 += 1
                    rcx_21 += 1
                
                result = *(&var_70:4 + (rcx_21 << 2))
            
            if (r8_3 s<= 0 || result s< 0)
                int16_t rdi_1 = *(r13_1 + 2)
                
                if (rdi_1 != 0)
                    int32_t rcx_22 = *(arg1 + 0x170)
                    int32_t rax_34
                    
                    if (rcx_22 s> *(arg1 + 0x164))
                        rax_34 = (*(*(arg1 + 0x180) + 0x40))(arg1 + 0x148)
                    else
                        rax_34 = *(arg1 + 0x168) + rcx_22
                    
                    int32_t rdx_8 = 0
                    int64_t rcx_24 = 0
                    
                    if (rbp_1 s> 0)
                        while (true)
                            if (*(&var_50:4 + (rcx_24 << 1)) == rdi_1)
                                *(&var_70:4 + (rcx_24 << 2)) = rax_34
                                rbp_1 = var_70.d
                                goto label_142a96e0a
                            
                            rdx_8 += 1
                            rcx_24 += 1
                            
                            if (rdx_8 s>= rbp_1)
                                if (rcx_24 s< 8)
                                    break
                                
                                abort()
                                noreturn
                    
                    *(&var_50:4 + (rcx_24 << 1)) = rdi_1
                    rbp_1 = rdx_8 + 1
                    *(&var_70:4 + (rcx_24 << 2)) = rax_34
                    var_70.d = rbp_1
                
            label_142a96e0a:
                
                if (r12_1 != 0)
                    if (r14_1 != 1)
                        rdx_3 = rdi + 0x10
                        r9_1 = zx.q(rcx)
                        
                        if (r14_1 != 0)
                            continue
                        else
                            r14_1 = 1
                            continue
                    else
                        int64_t rdx_9 = sx.q(*(arg1 + 0x170))
                        
                        if (rdx_9.d s< *(arg1 + 0x174))
                            int16_t r8_4 = *(*(arg1 + 0x178) + (rdx_9 << 1))
                            
                            if (r8_4 u< 0xd800)
                                r9_1 = zx.q(rcx)
                                rdx_3 = rdi + 0x10
                                *(arg1 + 0x170) = (rdx_9 + 1).d
                                rsi_1 = zx.d(r8_4)
                                continue
                        
                        rdx_3 = rdi + 0x10
                        rsi_1 = sub_142aea870(arg1 + 0x148, arg3)
                        r9_1 = zx.q(rcx)
                        continue
                
                goto label_142a96ed3
            
            rcx_26 = sx.d(*(r13_1 + 4))
        
        *(arg1 + 0x1e4) = rcx_26
        break
    
    *(arg1 + 0x1e0) = result
else
    *(arg1 + 0x278) = 1
    result = rax_8 | rsi_1

__security_check_cookie(rax_1 ^ &var_b8)
return result
