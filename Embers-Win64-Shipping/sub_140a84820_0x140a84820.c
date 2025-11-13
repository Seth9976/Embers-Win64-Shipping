// 函数: sub_140a84820
// 地址: 0x140a84820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = arg3
int64_t r15 = arg2
int64_t result

if (*(arg1 + 0x29) != 0 && arg3 s>= 0)
    int64_t rsi_1 = *(arg1 + 0x10)
    
    if (rsi_1 + arg3 s<= *(arg1 + 0x20))
        if (arg3 == 0)
            result.b = 1
            return result
        
        uint64_t rbp
        rbp.b = 0
        
        if (r14 s<= 0x10000)
            rbp.b = 1
            
            while (rbp.b != 0)
                int64_t i = *(arg1 + 0x10)
                void* rax_7 = arg1 + 0x20040
                uint64_t rcx_4 = 0
                
                while (i s< *(rax_7 - 0x10) || i s>= *rax_7)
                    rcx_4 = zx.q(rcx_4.d + 1)
                    rax_7 += 8
                    
                    if (rcx_4.d u>= 2)
                        rcx_4 = 3
                        break
                
                if (rcx_4.d u<= 2)
                    goto label_140a849f8
                
                int64_t rbx_3 = i & 0xffffffffffff0000
                int64_t rsi_3 = *(arg1 + 0x20) - rbx_3
                
                if (rsi_3 u>= 0x10000)
                    rsi_3 = 0x10000
                
                if (rbx_3 != *(arg1 + 0x18))
                    int64_t* rcx_5 = *(arg1 + 8)
                    
                    if ((*(*rcx_5 + 0x10))(rcx_5, rbx_3) != 0)
                        *(arg1 + 0x18) = rbx_3
                
                int64_t* rcx_6 = *(arg1 + 8)
                
                if ((*(*rcx_6 + 0x20))(rcx_6, arg1 + 0x2a + (sx.q(*(arg1 + 0x20050)) << 0x10), 
                        rsi_3) == 0)
                    rbp.b = 0
                else
                    int64_t rax_14 = sx.q(*(arg1 + 0x20050))
                    *(arg1 + 0x18) += rsi_3
                    rbp.b = 1
                    *(arg1 + (rax_14 << 3) + 0x20030) = rbx_3
                    *(arg1 + (sx.q(*(arg1 + 0x20050)) << 3) + 0x20040) = rsi_3 + rbx_3
                    rcx_4 = zx.q(*(arg1 + 0x20050))
                    *(arg1 + 0x20050) = (rcx_4 - 1).d & 1
                label_140a849f8:
                    int64_t rbx_5 = *(arg1 + (rcx_4 << 3) + 0x20040) - *(arg1 + 0x10)
                    
                    if (r14 u<= rbx_5)
                        rbx_5 = r14
                    
                    memcpy(r15, 
                        arg1 + 0x2a + (rcx_4 << 0x10) - *(arg1 + (rcx_4 << 3) + 0x20030)
                            + *(arg1 + 0x10), 
                        rbx_5.d)
                    *(arg1 + 0x10) += rbx_5
                    r15 += rbx_5
                    r14 -= rbx_5
                
                if (r14 == 0)
                    break
        else
            int32_t rax = sub_140a76550(arg1, rsi_1)
            
            if (rax u< 2)
                int64_t rcx = sx.q(rax)
                int64_t rbx_2 = *(arg1 + (rcx << 3) + 0x20040) - rsi_1
                memcpy(r15, arg1 + 0x2a + (rcx << 0x10) - *(arg1 + (rcx << 3) + 0x20030) + rsi_1, 
                    rbx_2.d)
                *(arg1 + 0x10) += rbx_2
                r14 -= rbx_2
                rsi_1 = *(arg1 + 0x10)
                r15 += rbx_2
            
            if (sub_140a80930(arg1, rsi_1) != 0)
                char rax_6 = sub_140a808f0(arg1, r15, r14)
                rbp = zx.q(rax_6)
                
                if (rax_6 != 0)
                    *(arg1 + 0x10) += r14
        
        return zx.q(rbp.b)

result.b = 0
return result
