// 函数: sub_142b1b260
// 地址: 0x142b1b260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(*(arg1 + 0xa))
char rsi = arg4
uint32_t arg_8 = r10
int16_t* r12 = arg3
int16_t* rbx = arg2
int16_t* r13 = arg2

if (arg3 != 0)
    goto label_142b1b2f7

uint32_t r8

do
    r8 = zx.d(*arg2)
    rbx = arg2
    arg2 = &arg2[1]
    
    if (r8 u>= r10)
        break
while (r8.w != 0)
r12 = sub_142a8c220(rbx, 0)

if (r13 != rbx)
    void* rdi_1 = &rbx[-1]
    r10 = arg_8
    
    if (sub_142b1e520(arg1, zx.d(rbx[-1]), rsi) == 0)
        rbx = rdi_1
        r13 = rdi_1
        goto label_142b1b2f7
    
    r13 = rbx
    goto label_142b1b2f7

while (true)
    r10 = arg_8
label_142b1b2f7:
    int16_t r14_1 = 1
label_142b1b300:
    
    if (rbx == r12)
        return rbx
    
    uint32_t r8_2 = zx.d(*rbx)
    
    if (r8_2 u>= r10)
        int64_t* r9 = *(arg1 + 0x20)
        int16_t rdi_2 =
            *(r9[1] + (zx.q(zx.d(*(*r9 + (zx.q(r8_2) u>> 6 << 1))) + (r8_2 & 0x3f)) << 1))
        
        if (rdi_2 u>= *(arg1 + 0x12))
            int16_t* r15_1 = rbx
            rbx = &rbx[1]
            
            if ((r8_2 & 0xfffffc00) == 0xd800)
                if (rbx == r12)
                    return rbx
                
                uint32_t rcx_4 = zx.d(*rbx)
                
                if ((rcx_4 & 0xfffffc00) != 0xdc00)
                    break
                
                rbx = &rbx[1]
                int32_t rdx_5 = ((r8_2 - 0xd7f7) << 0xa) + rcx_4
                int32_t rax_12
                
                if (rdx_5 s< r9[3].d)
                    rax_12 = sub_142b6a760(r9, rdx_5)
                else
                    rax_12 = *(r9 + 0x14) - 2
                
                rdi_2 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_12) << 1))
                
                if (rdi_2 u< *(arg1 + 0x12))
                    break
            
            uint64_t rdx_2
            
            if (r13 != r15_1)
                if (rdi_2 u< *(arg1 + 0x16)
                        || (*(arg1 + 0x1a) u<= rdi_2 && rdi_2 u< *(arg1 + 0x1e)))
                    r13 = r15_1
                else
                    uint32_t r8_3 = zx.d(r15_1[-1])
                    int16_t* rsi_1 = &r15_1[-1]
                    int32_t rax_18
                    
                    if ((r8_3 & 0xfffff800) == 0xd800)
                        uint32_t rdx_8
                        
                        if (test_bit(r8_3, 0xa) && rsi_1 != r13)
                            rdx_8 = zx.d(rsi_1[-1])
                        
                        if (not(test_bit(r8_3, 0xa)) || rsi_1 == r13
                                || (rdx_8 & 0xfffffc00) != 0xd800)
                            rax_18 = *(*(arg1 + 0x20) + 0x14) - 1
                        else
                            int64_t* rcx_8 = *(arg1 + 0x20)
                            rsi_1 = &rsi_1[-1]
                            int32_t rdx_11 = ((rdx_8 - 0xd7f7) << 0xa) + r8_3
                            
                            if (rdx_11 s< rcx_8[3].d)
                                rax_18 = sub_142b6a760(rcx_8, rdx_11)
                            else
                                rax_18 = *(rcx_8 + 0x14) - 2
                    else
                        rax_18 = zx.d(*(**(arg1 + 0x20) + (zx.q(r8_3) u>> 6 << 1))) + (r8_3 & 0x3f)
                    
                    int16_t r8_5 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_18) << 1))
                    
                    if ((r8_5.b & 1) != 0 && arg4 != 0 && r8_5 != 1)
                        bool cond:0_1
                        
                        if (r8_5 u< *(arg1 + 0x1a))
                            cond:0_1 = *(*(arg1 + 0x30) + (zx.q(r8_5) u>> 1 << 1)) u<= 0x1ff
                        else
                            cond:0_1 = (r8_5.b & 6) u<= 2
                        
                        rdx_2.b = cond:0_1
                    
                    if ((r8_5.b & 1) == 0 || (arg4 != 0 && r8_5 != 1 && rdx_2.d == 0))
                        r13 = rsi_1
                        r14_1 = r8_5
                        rsi = arg4
                    else
                        rsi = arg4
                        r13 = r15_1
            
            if (rdi_2 u< *(arg1 + 0x1e))
                break
            
            if (rdi_2 u< 0xfc00)
                rdx_2.b = 0
            else
                rdx_2.w = rdi_2 u>> 1
            
            if (rsi != 0 && rdx_2.b != 0 && r14_1 u> *(arg1 + 0xe)
                    && *(*(arg1 + 0x30) + (zx.q(r14_1) u>> 1 << 1) + 1) u> rdx_2.b)
                break
            
        label_142b1b519:
            
            if (rdi_2 u< 0xfe02)
                if (arg5 == 0)
                    return r13
                
                *arg5 = 2
            
            if (rbx == r12)
                return rbx
            
            uint32_t r8_6 = zx.d(*rbx)
            void* rsi_2 = &rbx[1]
            char r14_2 = rdx_2.b
            int32_t rax_33
            
            if ((r8_6 & 0xfffff800) == 0xd800)
                uint32_t rcx_15
                
                if (not(test_bit(r8_6, 0xa)) && rsi_2 != r12)
                    rcx_15 = zx.d(*rsi_2)
                
                if (test_bit(r8_6, 0xa) || rsi_2 == r12 || (rcx_15 & 0xfffffc00) != 0xdc00)
                    rax_33 = *(*(arg1 + 0x20) + 0x14) - 1
                else
                    rsi_2 += 2
                    int32_t rdx_16 = ((r8_6 - 0xd7f7) << 0xa) + rcx_15
                    int64_t* rcx_16 = *(arg1 + 0x20)
                    
                    if (rdx_16 s< rcx_16[3].d)
                        rax_33 = sub_142b6a760(rcx_16, rdx_16)
                    else
                        rax_33 = *(rcx_16 + 0x14) - 2
            else
                rax_33 = zx.d(*(**(arg1 + 0x20) + (zx.q(r8_6) u>> 6 << 1))) + (r8_6 & 0x3f)
            
            rdi_2 = *(*(*(arg1 + 0x20) + 8) + (sx.q(rax_33) << 1))
            
            if (rdi_2 u>= *(arg1 + 0x1e))
                if (rdi_2 u< 0xfc00)
                    rdx_2.b = 0
                else
                    rdx_2.w = rdi_2 u>> 1
                
                if (r14_2 u<= rdx_2.b || rdx_2.b == 0)
                    rbx = rsi_2
                    goto label_142b1b519
            
            if (rdi_2 u>= *(arg1 + 0x12))
                break
            
            r13 = rbx
            rbx = rsi_2
            rsi = arg4
            continue
    
    rbx = &rbx[1]
    goto label_142b1b300

if (arg5 != 0)
    *arg5 = 0

return r13
