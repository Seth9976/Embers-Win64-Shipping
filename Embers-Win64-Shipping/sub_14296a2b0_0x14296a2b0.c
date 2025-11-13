// 函数: sub_14296a2b0
// 地址: 0x14296a2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbp = arg3
int64_t r15 = arg2
int32_t r14 = 0

if (arg2 != 0)
    int32_t* rax_1 = sub_14289a060(arg1)
    int64_t* rax_2 = sub_14289a660(arg1)
    int64_t* rsi_1 = rax_2
    
    if (rax_1 != 0 && rax_2 != 0)
        int32_t rdx = *rax_1
        
        if (rdx s> 0)
            int64_t rcx_1 = sx.q(rax_1[1])
            r14 = rdx - rcx_1.d
            
            if (r14 s> rbp)
                r14 = rbp
            
            int64_t rdi_1 = sx.q(r14)
            memcpy(r15, rcx_1 + 0x30 + rax_1, rdi_1.d)
            rax_1[1] += r14
            r15 += rdi_1
            rbp -= r14
            
            if (*rax_1 == rax_1[1])
                *rax_1 = 0
        
        int32_t rax_4 = sub_142890e90(*(rax_1 + 0x18))
        int32_t rcx_4 = rax_4
        
        if (rax_4 == 1)
            rcx_4 = 0
        
        int32_t arg_10 = rcx_4
        
        if (rbp s> 0)
            while (rax_1[2] s> 0)
                int64_t rax_5 = *(rax_1 + 0x20)
                int64_t rdi_2 = *(rax_1 + 0x28)
                int32_t rsi_2
                int64_t rdi_3
                void* r12_1
                
                if (rax_5 == rdi_2)
                    *(rax_1 + 0x20) = &rax_1[0x54]
                    *(rax_1 + 0x28) = &rax_1[0x54]
                    int32_t rax_6 = sub_14289a950(rsi_1, &rax_1[0x54], 0x1000)
                    rdi_3 = sx.q(rax_6)
                    
                    if (rax_6 s> 0)
                        *(rax_1 + 0x28) += rdi_3
                        rcx_4 = arg_10
                        goto label_14296a3ca
                    
                label_14296a3d6:
                    
                    if (sub_14289a9f0(rsi_1, 8) != 0)
                        if (r14 == 0)
                            r14 = rdi_3.d
                        
                        break
                    
                    int64_t* rcx_7 = *(rax_1 + 0x18)
                    r12_1 = &rax_1[0xc]
                    rax_1[2] = rdi_3.d
                    int32_t rax_8 = sub_142892450(rcx_7, r12_1, rax_1, arg4)
                    rsi_2 = *rax_1
                    rax_1[4] = rax_8
                    rax_1[1] = 0
                    goto label_14296a4a5
                
                rdi_3 = zx.q(rdi_2.d - rax_5.d)
            label_14296a3ca:
                
                if (rdi_3.d s<= 0)
                    goto label_14296a3d6
                
                if (rbp s<= 0x100)
                    goto label_14296a473
                
                int32_t rax_9 = rdi_3.d
                int32_t rsi_4 = rbp - rcx_4
                
                if (rdi_3.d s> rsi_4)
                    rax_9 = rsi_4
                
                int32_t arg_20
                
                if (sub_1428927c0(*(rax_1 + 0x18), r15, &arg_20, *(rax_1 + 0x20), rax_9) == 0)
                    sub_142899cc0(arg1, 0xf)
                    return 0
                
                int64_t rcx_9 = sx.q(arg_20)
                rdi_3 = zx.q(rdi_3.d - rsi_4)
                r14 += rcx_9.d
                r15 += rcx_9
                rbp -= rcx_9.d
                
                if (rdi_3.d s> 0)
                    *(rax_1 + 0x20) += sx.q(rsi_4)
                label_14296a473:
                    
                    if (rdi_3.d s> 0x100)
                        rdi_3 = 0x100
                    
                    r12_1 = &rax_1[0xc]
                    
                    if (sub_1428927c0(*(rax_1 + 0x18), r12_1, rax_1, *(rax_1 + 0x20), rdi_3.d) == 0)
                        sub_142899cc0(arg1, 0xf)
                        rax_1[4] = 0
                        return 0
                    
                    rsi_2 = *rax_1
                    *(rax_1 + 0x20) += sx.q(rdi_3.d)
                    rax_1[2] = 1
                    
                    if (rsi_2 != 0)
                    label_14296a4a5:
                        
                        if (rsi_2 s> rbp)
                            rsi_2 = rbp
                        
                        if (rsi_2 s<= 0)
                            break
                        
                        int64_t rdi_4 = sx.q(rsi_2)
                        memcpy(r15, r12_1, rdi_4.d)
                        r14 += rsi_2
                        rax_1[1] = rsi_2
                        rbp -= rsi_2
                        r15 += rdi_4
                else
                    *(rax_1 + 0x20) = *(rax_1 + 0x28)
                
                if (rbp s<= 0)
                    break
                
                rsi_1 = rax_2
                rcx_4 = arg_10
        
        sub_142899cc0(arg1, 0xf)
        sub_142899cd0(arg1)
        
        if (r14 == 0)
            r14 = rax_1[2]
        
        return zx.q(r14)

return 0
