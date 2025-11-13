// 函数: sub_142b92690
// 地址: 0x142b92690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *arg1
int64_t* rsi = arg1
int32_t rdi = 0
arg1.b = 0
uint64_t r12 = zx.q(rsi[1].d)
int32_t r14_1 = sx.d(*(rsi + 0x1a)) + sx.d(*(rsi + 0x62)) + arg2

if (r14_1 u<= r12.d)
    goto label_142b928ab

uint64_t r14_3 = zx.q(r14_1 + 7) & 0xfffffff8

if (r14_3.d u> 0x7fff)
    return 0xa

int64_t rbx_1 = rsi[4]
int32_t temp0_1

if (r12.d s>= 0)
    temp0_1 = r14_3.d

if (r12.d s< 0 || temp0_1 s< 0)
    rdi = 6
else if (temp0_1 == 0)
    if (rbx_1 != 0)
        (*(r15 + 0x10))(r15, rbx_1)
    
    rbx_1 = 0
else if (r14_3.d s> 0xfffffff)
    rdi = 0xa
else if (r12.d != 0)
    int64_t rax_3
    rax_3, arg1 = (*(r15 + 0x18))(r15, zx.q((r12 << 3).d), zx.q((r14_3 << 3).d), rbx_1)
    
    if (rax_3 != 0)
        rbx_1 = rax_3
    label_142b9275d:
        
        if (r14_3.d s> r12.d)
            memset(sx.q((r12 << 3).d) + rbx_1, 0, sx.q((r14_3.d - r12.d) << 3))
    else
        rdi = (rax_3 + 0x40).d
else
    int64_t rax_2
    rax_2, arg1 = (*(r15 + 8))(r15, zx.q((r14_3 << 3).d))
    rbx_1 = rax_2
    
    if (rax_2 != 0)
        goto label_142b9275d
    
    rdi = (rax_2 + 0x40).d

rsi[4] = rbx_1

if (rdi != 0)
    sub_142b92c50(rsi)
else
    int64_t rbx_2 = rsi[5]
    int32_t temp2_1
    
    if (r12.d s>= 0)
        temp2_1 = r14_3.d
    
    if (r12.d s< 0 || temp2_1 s< 0)
        rdi = 6
    else if (temp2_1 == 0)
        if (rbx_2 != 0)
            (*(r15 + 0x10))(r15, rbx_2)
        
        rbx_2 = 0
    else if (r12.d != 0)
        int64_t rax_9
        rax_9, arg1 = (*(r15 + 0x18))(r15, zx.q(r12.d), zx.q(r14_3.d), rbx_2)
        
        if (rax_9 != 0)
            rbx_2 = rax_9
        label_142b927ef:
            
            if (r14_3.d s> r12.d)
                memset(sx.q(r12.d) + rbx_2, 0, sx.q(r14_3.d - r12.d))
        else
            rdi = (rax_9 + 0x40).d
    else
        int64_t rax_8
        rax_8, arg1 = (*(r15 + 8))(r15, zx.q(r14_3.d))
        rbx_2 = rax_8
        
        if (rax_8 != 0)
            goto label_142b927ef
        
        rdi = (rax_8 + 0x40).d
    
    int32_t arg_10 = rdi
    rsi[5] = rbx_2
    
    if (rdi != 0)
        sub_142b92c50(rsi)
    else
        if (*(rsi + 0x14) == rdi.b)
            goto label_142b9289b
        
        int32_t* var_30 = &arg_10
        int64_t var_38 = rsi[8]
        int64_t rax_13 = sub_142b99a90(r15, rdi + 8, (r12 * 2).d, (r14_3 * 2).d, var_38, var_30)
        rdi = arg_10
        rsi[8] = rax_13
        
        if (rdi != 0)
            sub_142b92c50(rsi)
        else
            uint64_t r8_5 = r12 << 3
            uint64_t rbx_3 = r14_3 << 3
            memmove(rax_13 + rbx_3, r8_5 + rax_13, r8_5.d)
            rsi[9] = rsi[8] + rbx_3
        label_142b9289b:
            arg1.b = 1
            rsi[1].d = r14_3.d
        label_142b928ab:
            int32_t r14_4 = *(rsi + 0xc)
            int32_t rbx_5 = sx.d(rsi[3].w) + sx.d(rsi[0xc].w) + arg3
            
            if (rbx_5 u> r14_4)
                int32_t rbx_7 = (rbx_5 + 3) & 0xfffffffc
                
                if (rbx_7 u> 0x7fff)
                    return 0xa
                
                int64_t rbp_1 = rsi[6]
                rdi = 0
                
                if (r14_4 s< 0 || rbx_7 s< 0)
                    rdi = 6
                else if (rbx_7 == 0)
                    if (rbp_1 != 0)
                        (*(r15 + 0x10))(r15, rbp_1)
                    
                    rbp_1 = 0
                else if (rbx_7 s> 0x3fffffff)
                    rdi = 0xa
                else if (r14_4 != 0)
                    int64_t rax_17 = (*(r15 + 0x18))(r15, zx.q(r14_4 * 2), zx.q(rbx_7 * 2), rbp_1, 
                        var_38, var_30)
                    
                    if (rax_17 != 0)
                        rbp_1 = rax_17
                    label_142b92928:
                        
                        if (rbx_7 s> r14_4)
                            memset(sx.q(r14_4 * 2) + rbp_1, 0, sx.q((rbx_7 - r14_4) * 2))
                    else
                        rdi = (rax_17 + 0x40).d
                else
                    int64_t rax_16 = (*(r15 + 8))(r15, zx.q(rbx_7 * 2))
                    rbp_1 = rax_16
                    
                    if (rax_16 != 0)
                        goto label_142b92928
                    
                    rdi = (rax_16 + 0x40).d
                
                rsi[6] = rbp_1
                
                if (rdi != 0)
                    sub_142b92c50(rsi)
                else
                    *(rsi + 0xc) = rbx_7
                    sub_142b92620(rsi)
            else if (arg1.b != 0)
                sub_142b92620(rsi)

return zx.q(rdi)
