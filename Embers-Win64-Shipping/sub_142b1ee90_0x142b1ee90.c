// 函数: sub_142b1ee90
// 地址: 0x142b1ee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_18 = arg3
int16_t* r14 = arg3
int16_t* rbx = arg2
int16_t* rsi = arg2
uint32_t rbp = 0

if (r14 == 0)
    int16_t* rax_1 = rbx
    int16_t* r14_1
    int16_t i
    
    do
        i = *rax_1
        r14_1 = rax_1
        rax_1 = &rax_1[1]
        
        if (i u>= *(arg1 + 0xc))
            break
    while (i != 0)
    int32_t* rdi_1 = arg5
    
    if (r14_1 != rbx && arg4 != 0)
        sub_142b1a0e0(arg4, rbx, r14_1, rdi_1)
    
    rbx = r14_1
    
    if (*rdi_1 s> 0)
        return r14_1
    
    if (rsi u< r14_1)
        rsi = r14_1
        rbp = zx.d(sub_142b1dea0(arg1, zx.d(r14_1[-1])))
        
        if (rbp u> 1)
            rsi = &r14_1[-1]
    
    int16_t* rax_4 = sub_142a8c220(r14_1, 0)
    r14 = rax_4
    arg_18 = rax_4

int16_t rdx_3 = 0
int16_t var_48 = 0

while (true)
    int16_t* var_40_1 = rbx
    
    if (rbx != r14)
        uint64_t rdi_5
        
        do
            rdi_5 = zx.q(*rbx)
            
            if (rdi_5.d u>= zx.d(*(arg1 + 0xc)))
                uint8_t rdx_4 = *((rdi_5 u>> 8) + *(arg1 + 0x38))
                
                if (rdx_4 == 0 || (rdx_4 u>> ((rdi_5.d u>> 5).b & 7) & 1) == 0)
                    rdx_3 = var_48
                    rbp = 0
                    rbx = &rbx[1]
                else
                    if ((rdi_5.d & 0xfffffc00) == 0xd800 && &rbx[1] != r14)
                        uint32_t rcx_7 = zx.d(rbx[1])
                        
                        if ((rcx_7 & 0xfffffc00) == 0xdc00)
                            rdi_5 = zx.q(((rdi_5.d - 0xd7f7) << 0xa) + rcx_7)
                    
                    int16_t rax_12 = sub_142b1def0(arg1, rdi_5.d)
                    var_48 = rax_12
                    rdx_3 = rax_12
                    
                    if (rax_12 u> 0xff)
                        break
                    
                    rbp = zx.d(rax_12)
                    int64_t rcx_9 = 4
                    
                    if (rdi_5.d u<= 0xffff)
                        rcx_9 = 2
                    
                    rbx += rcx_9
            else
                rbp = not.d(rdi_5.d)
                rbx = &rbx[1]
        while (rbx != r14)
        
        int16_t* r12_1 = var_40_1
        
        if (rbx != r12_1)
            if (arg4 == 0)
                goto label_142b1f0ae
            
            int32_t rsi_3 = ((rbx - r12_1) s>> 1).d
            char rax_13
            
            if (arg4[5].d s< rsi_3)
                rax_13 = sub_142b1fbc0(arg4, rsi_3, arg5)
            
            if (arg4[5].d s>= rsi_3 || rax_13 != 0)
                sub_142a8bca0(arg4[4], r12_1, rsi_3)
                *(arg4 + 0x2c) = 0
                arg4[4] += sx.q(rsi_3) * 2
                arg4[5].d -= rsi_3
                arg4[3] = arg4[4]
            label_142b1f0ae:
                
                if (rbx != r14)
                    rsi = rbx
                    
                    if (rbp s>= 0)
                        void* r14_2 = &rbx[-1]
                        
                        if ((zx.d(rbx[-1]) & 0xfffffc00) == 0xdc00 && r12_1 u< r14_2)
                            void* rcx_13 = r14_2 - 2
                            
                            if ((zx.d(*(r14_2 - 2)) & 0xfffffc00) == 0xd800)
                                r14_2 = rcx_13
                                rbp = zx.d(sub_142b1def0(arg1, 
                                    ((zx.d(*rcx_13) - 0xd7f7) << 0xa) + zx.d(*(rcx_13 + 2))))
                        
                        if (rbp s> 1)
                            rsi = r14_2
                        
                        rdx_3 = var_48
                        r12_1 = rbx
                    else
                        uint32_t rbp_2 = not.d(rbp)
                        
                        if (rbp_2 s>= zx.d(*(arg1 + 8)))
                            rbp = zx.d(sub_142b1def0(arg1, rbp_2))
                            
                            if (rbp u<= 1)
                                rdx_3 = var_48
                                r12_1 = rbx
                            else
                                rdx_3 = var_48
                                rsi = &rbx[-1]
                                r12_1 = rbx
                        else
                            rdx_3 = var_48
                            rbp = 0
                            r12_1 = rbx
                    
                    goto label_142b1f166
        else if (rbx != r14)
        label_142b1f166:
            uint32_t r14_3 = zx.d(rdx_3)
            int64_t rax_25 = 4
            
            if (rdi_5.d u<= 0xffff)
                rax_25 = 2
            
            rbx += rax_25
            
            if (zx.d(rbp.b) u> r14_3 u>> 8)
                if (arg4 == 0)
                    break
                
                int64_t rcx_19 = arg4[4]
                int64_t rdx_14 = arg4[2]
                int32_t r12_3 = ((r12_1 - rsi) s>> 1).d
                int64_t r8_4 = sx.q(r12_3)
                
                if (r8_4 s>= (rcx_19 - rdx_14) s>> 1)
                    void* rax_33 = arg4[1]
                    arg4[4] = rdx_14
                    int32_t rax_34
                    
                    if ((*(rax_33 + 8) & 2) == 0)
                        rax_34 = *(rax_33 + 0x10)
                    else
                        rax_34 = 0x1b
                    
                    arg4[5].d = rax_34
                else
                    arg4[5].d += r12_3
                    arg4[4] = rcx_19 - r8_4 * 2
                
                int64_t rax_35 = arg4[4]
                r14 = arg_18
                *(arg4 + 0x2c) = 0
                arg4[3] = rax_35
                int16_t* rax_36 = gz_read(arg1, rbx, r14)
                rbx = rax_36
                
                if (*arg5 s<= 0)
                    if (rsi u< rax_36)
                        do
                            uint32_t rdi_8 = zx.d(*rsi)
                            rsi = &rsi[1]
                            int32_t r8_7
                            
                            if ((rdi_8 & 0xfffff800) == 0xd800)
                                uint32_t rcx_23
                                
                                if (not(test_bit(rdi_8, 0xa)) && rsi != rbx)
                                    rcx_23 = zx.d(*rsi)
                                
                                if (test_bit(rdi_8, 0xa) || rsi == rbx
                                        || (rcx_23 & 0xfffffc00) != 0xdc00)
                                    r8_7 = *(*(arg1 + 0x20) + 0x14) - 1
                                else
                                    rsi = &rsi[1]
                                    rdi_8 = ((rdi_8 - 0xd7f7) << 0xa) + rcx_23
                                    int64_t* rcx_24 = *(arg1 + 0x20)
                                    
                                    if (rdi_8 s< rcx_24[3].d)
                                        r8_7 = sub_142b6a760(rcx_24, rdi_8)
                                    else
                                        r8_7 = *(rcx_24 + 0x14) - 2
                            else
                                r8_7 = zx.d(*(**(arg1 + 0x20) + (zx.q(rdi_8) u>> 6 << 1)))
                                    + (rdi_8 & 0x3f)
                            
                            if (sub_142b1c340(arg1, rdi_8, 
                                    *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_7) << 1)), arg4, arg5) == 0)
                                break
                        while (rsi u< rbx)
                    
                    if (*arg5 s<= 0)
                        rdx_3 = var_48
                        rbp = 0
                        rsi = rbx
                        continue
            else
                int16_t* rax_27 = rbx
                
                if ((rdx_3 & 0xff) u> 1)
                    rax_27 = rsi
                
                rsi = rax_27
                
                if (arg4 == 0)
                    goto label_142b1f1c5
                
                if (sub_142b1a030(arg4, rdi_5.d, arg5) != 0)
                    rdx_3 = var_48
                label_142b1f1c5:
                    rbp = r14_3
                    r14 = arg_18
                    continue
    
    return rbx

return rsi
