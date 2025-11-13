// 函数: sub_142bd02f0
// 地址: 0x142bd02f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
int32_t i_1 = arg3
char* i = *arg1
int64_t r12
r12.b = 0
int64_t r13
r13.b = 0
char* i_2 = i
bool arg_10 = false
uint64_t rsi = 1
uint64_t r14 = 0

if (i u< arg2)
    char rdx = *i
    
    if (((rdx - 0x2b) & 0xfd) != 0)
    label_142bd036f:
        
        if (rdx == 0x2e)
        label_142bd03aa:
            
            if (i u< arg2 && *i == 0x2e)
                for (i = &i[1]; i u< arg2; i = &i[1])
                    uint64_t rcx_1 = zx.q(*i)
                    
                    if (rcx_1.b u<= 0x20 && test_bit(0x100003601, rcx_1))
                        break
                    
                    if (rcx_1.b u>= 0x80)
                        break
                    
                    char rdx_2 = *((zx.q(rcx_1.b) & 0x7f) + &data_143688590)
                    
                    if (rdx_2 u> 9)
                        break
                    
                    if (rsi.d s< 0xccccccc && r14.d s< 0xccccccc)
                        r14 = zx.q(sx.d(rdx_2) + ((r14 * 5).d << 1))
                        
                        if (rdi.d != 0 || i_1 s<= 0)
                            rsi = zx.q((rsi * 5).d * 2)
                        else
                            i_1 -= 1
            
            char* i_5 = &i[1]
            
            if (i_5 u>= arg2 || ((*i - 0x45) & 0xdf) != 0)
            label_142bd0470:
                *arg1 = i
                
                if (rdi.d != 0 || r14.d != 0)
                    if (r12.b != 0)
                    label_142bd054f:
                        rdi = 0x7fffffff
                    label_142bd0556:
                        
                        if (arg_10 == 0)
                            return zx.q(rdi.d)
                        
                        return zx.q(neg.d(rdi.d))
                    
                    if (r13.b == 0)
                        bool cond:0_1 = i_1 s>= 0
                        
                        while (i_1 s> 0)
                            if (rdi.d s>= 0xccccccc)
                                goto label_142bd054f
                            
                            rdi = zx.q((rdi * 5).d * 2)
                            
                            if (r14.d s< 0xccccccc)
                                r14 = zx.q((r14 * 5).d * 2)
                            else
                                if (rsi.d == 1)
                                    goto label_142bd054f
                                
                                rsi = zx.q(rsi.d s/ 0xa)
                            
                            i_1 -= 1
                            cond:0_1 = i_1 s>= 0
                        
                        if (not(cond:0_1))
                            int32_t i_4
                            
                            do
                                rdi = zx.q(rdi.d s/ 0xa)
                                
                                if (rsi.d s>= 0xccccccc)
                                    r14 = zx.q(r14.d s/ 0xa)
                                else
                                    rsi = zx.q((rsi * 5).d * 2)
                                
                                if (rdi.d == 0 && r14.d == 0)
                                    return 0
                                
                                i_4 = i_1
                                i_1 += 1
                            while (i_4 + 1 s< 0)
                        
                        if (r14.d != 0)
                            rdi = zx.q(rdi.d + sub_142b91790(r14.d, rsi.d))
                        
                        goto label_142bd0556
            else
                i_2 = i_5
                int32_t rax_9 = sub_142bd0580(&i_2, arg2)
                i = i_2
                
                if (i_5 != i)
                    if (rax_9 s> 0x3e8)
                        r12.b = 1
                    else if (rax_9 s>= 0xfffffc18)
                        i_1 += rax_9
                    else
                        r13.b = 1
                    
                    goto label_142bd0470
        else
            char* i_3 = i
            int32_t rax_4 = sub_142bd0580(&i_2, arg2)
            i = i_2
            rdi = zx.q(rax_4)
            
            if (i != i_3)
                if (rax_4 s<= 0x7fff)
                    rdi = zx.q(rdi.d << 0x10)
                else
                    r12 = 1
                
                goto label_142bd03aa
        
        return 0
    
    arg_10 = rdx == 0x2d
    i = &i[1]
    i_2 = i
    
    if (i != arg2)
        rdx = *i
        
        if (((rdx - 0x2b) & 0xfd) != 0)
            goto label_142bd036f

return 0
