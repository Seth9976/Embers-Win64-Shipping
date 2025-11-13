// 函数: sub_142976f90
// 地址: 0x142976f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
__chkstk(0x40)
int32_t r15 = 0
int32_t r12 = arg3
void* rsi = arg1
int32_t r13 = 0

if (arg2 != 0)
    int64_t* rax_1 = sub_14289a060(arg1)
    int64_t* rax_2 = sub_14289a660(rsi)
    int64_t* r14_1 = rax_2
    
    if (rax_1 != 0 && rax_2 != 0)
        sub_142899cc0(rsi, 0xf)
        
        if (rax_1[2].d != 2)
            int64_t* rcx_2 = rax_1[4]
            rax_1[2].d = 2
            *rax_1 = 0
            rax_1[1].d = 0
            sub_142907970(rcx_2)
        
        int32_t rax_3 = *rax_1
        
        if (rax_3 s> 0)
            int32_t rcx_3 = *(rax_1 + 4)
            
            if (rax_3 s< rcx_3)
                sub_1428bc530()
                noreturn
            
            r13 = *rax_1 - rcx_3
            
            if (r13 s> r12)
                r13 = r12
            
            if (rcx_3 + r13 s>= 0x5de)
                sub_1428bc530()
                noreturn
            
            int64_t rdi_1 = sx.q(r13)
            memcpy(arg2, &rax_1[5] + sx.q(rcx_3), rdi_1.d)
            *(rax_1 + 4) += r13
            r12 -= r13
            arg_10 = arg2 + rdi_1
            
            if (*rax_1 == *(rax_1 + 4))
                *rax_1 = 0
        
        int32_t arg_20 = 0
        int32_t rdi_2 = 0
        
        if (r12 s> 0)
            while (true)
                if (rax_1[3].d s> 0)
                    int64_t rax_7 = sx.q(rax_1[1].d)
                    int32_t rax_8 = sub_14289a950(r14_1, rax_7 + 0x606 + rax_1, 0x400 - rax_7.d)
                    rdi_2 = rax_8
                    
                    if (rax_8 s<= 0)
                        arg_20 = rax_8
                        int32_t rax_9 = sub_14289a9f0(r14_1, 8)
                        
                        if (rax_9 != 0)
                            break
                        
                        rax_1[3].d = rdi_2
                        
                        if (rax_1[1].d == rax_9)
                            break
                        
                        rdi_2 = 0
                    
                    rax_1[1].d += rdi_2
                    int32_t i_4 = rax_1[1].d
                    
                    if (*(rax_1 + 0x14) == 0)
                    label_1429772f4:
                        
                        if (i_4 s>= 0x400 || rax_1[3].d s<= 0)
                            goto label_142977313
                    else if (not(test_bit(sub_14289a9f0(rsi, 0xffffffff), 8)))
                        if (*(rax_1 + 0x14) == 0)
                            goto label_1429772f4
                        
                        int32_t var_48 = 0
                        uint64_t r14_2 = rax_1 + 0x606
                        uint64_t rsi_1 = r14_2
                        uint64_t rdi_3 = r14_2
                        
                        if (i_4 s> 0)
                            do
                                char rax_11 = *rdi_3
                                rdi_3 += 1
                                
                                if (rax_11 == 0xa)
                                    if (*(rax_1 + 0xc) == 0)
                                        if (sub_142907980(rax_1[4], &rax_1[5], &var_48, rsi_1, 
                                                rdi_3.d - rsi_1.d) s> 0 || var_48 != 0
                                                || *(rax_1 + 0x14) == 0)
                                            if (rsi_1 != r14_2)
                                                i_4 = i_4 + 0x606 + rax_1.d - rsi_1.d
                                                int64_t i_3 = sx.q(i_4)
                                                
                                                if (i_4 s> 0)
                                                    uint64_t rcx_12 = r14_2
                                                    int64_t i
                                                    
                                                    do
                                                        *rcx_12 = *(rsi_1 - rax_1 + rcx_12 - 0x606)
                                                        rcx_12 += 1
                                                        i = i_3
                                                        i_3 -= 1
                                                    while (i != 1)
                                            
                                            sub_142907970(rax_1[4])
                                            *(rax_1 + 0x14) = 0
                                            break
                                        
                                        sub_142907970(rax_1[4])
                                    else
                                        *(rax_1 + 0xc) = 0
                                    
                                    rsi_1 = rdi_3
                                
                                r15 += 1
                            while (r15 s< i_4)
                        
                        if (r15 != i_4 || var_48 != 0)
                            rsi = arg1
                            r15 = 0
                            rax_1[1].d = 0
                            goto label_142977313
                        
                        if (rsi_1 != r14_2)
                            if (rsi_1 != rdi_3)
                                int32_t i_5 = rdi_3.d - rsi_1.d
                                int64_t i_2 = sx.q(i_5)
                                
                                if (i_5 s> 0)
                                    int64_t i_1
                                    
                                    do
                                        *r14_2 = *(r14_2 + rsi_1 - rax_1 - 0x606)
                                        r14_2 += 1
                                        i_1 = i_2
                                        i_2 -= 1
                                    while (i_1 != 1)
                                
                                rax_1[1].d = i_5
                            
                            r15 = 0
                            rsi = arg1
                            r14_1 = rax_2
                        else
                            rsi = arg1
                            r15 = 0
                            r14_1 = rax_2
                            
                            if (i_4 == 0x400)
                                *(rax_1 + 0xc) = 1
                                rax_1[1].d = 0
                    else
                        rax_1[1].d = 0
                    label_142977313:
                        int32_t rdi_4
                        
                        if (not(test_bit(sub_14289a9f0(rsi, 0xffffffff), 8)))
                            rdi_4 = sub_142907980(rax_1[4], &rax_1[5], rax_1, rax_1 + 0x606, i_4)
                            rax_1[1].d = 0
                        else
                            int32_t rsi_4 = i_4 & 0xfffffffc
                            rdi_4 = sub_1429078e0(&rax_1[5], rax_1 + 0x606, rsi_4)
                            
                            if (rsi_4 s> 2)
                                int64_t rax_22 = sx.q(rsi_4)
                                
                                if (*(rax_22 + rax_1 + 0x605) == 0x3d)
                                    rdi_4 -= 1
                                    
                                    if (*(rax_22 + rax_1 + 0x604) == 0x3d)
                                        rdi_4 -= 1
                            
                            if (rsi_4 != i_4)
                                uint32_t count = i_4 - rsi_4
                                memmove(rax_1 + 0x606, rax_1 + 0x606 + sx.q(rsi_4), count)
                                rax_1[1].d = count
                            
                            rsi = arg1
                            r15 = 0
                            int32_t rax_24 = 0
                            
                            if (rdi_4 s> 0)
                                rax_24 = rdi_4
                            
                            *rax_1 = rax_24
                        
                        rax_1[3].d = rdi_4
                        *(rax_1 + 4) = 0
                        
                        if (rdi_4 s< 0)
                            rdi_2 = 0
                            *rax_1 = 0
                            break
                        
                        int32_t rdi_5 = *rax_1
                        
                        if (rdi_5 s> r12)
                            rdi_5 = r12
                        
                        int64_t rsi_5 = sx.q(rdi_5)
                        memcpy(arg_10, &rax_1[5], rsi_5.d)
                        r13 += rdi_5
                        *(rax_1 + 4) = rdi_5
                        
                        if (rdi_5 == *rax_1)
                            *rax_1 = 0
                        
                        r12 -= rdi_5
                        arg_10 += rsi_5
                        rsi = arg1
                        r14_1 = rax_2
                    
                    if (r12 s> 0)
                        continue
                
                rdi_2 = arg_20
                break
        
        sub_142899cd0(rsi)
        
        if (r13 == 0)
            r13 = rdi_2
        
        return zx.q(r13)

return 0
