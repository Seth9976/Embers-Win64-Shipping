// 函数: sub_14296a110
// 地址: 0x14296a110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = arg3
int64_t r15 = arg2
int32_t* rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)

if (rax != 0 && rax_1 != 0)
    int32_t r13_1 = rbp
    sub_142899cc0(arg1, 0xf)
    int32_t rcx_2 = rax[1]
    int32_t i = *rax - rcx_2
    
    while (i s> 0)
        int32_t rax_3 = sub_14289aa40(rax_1, &rax[0xc] + sx.q(rcx_2), i)
        
        if (rax_3 s<= 0)
            sub_142899cd0(arg1)
            return zx.q(rax_3)
        
        rax[1] += rax_3
        i -= rax_3
        rcx_2 = rax[1]
    
    if (r15 != 0 && rbp s> 0)
        rax[1] = 0
        
        while (true)
            int32_t rdi_2 = rbp
            
            if (rbp s> 0x1000)
                rdi_2 = 0x1000
            
            if (sub_1428927c0(*(rax + 0x18), &rax[0xc], rax, r15, rdi_2) == 0)
                sub_142899cc0(arg1, 0xf)
                rax[4] = 0
                break
            
            rbp -= rdi_2
            int32_t i_1 = *rax
            r15 += sx.q(rdi_2)
            rax[1] = 0
            
            if (i_1 s> 0)
                int32_t rax_7 = 0
                
                do
                    int32_t rax_9 = sub_14289aa40(rax_1, &rax[0xc] + sx.q(rax_7), i_1)
                    int32_t rsi_2 = rax_9
                    
                    if (rax_9 s<= 0)
                        sub_142899cd0(arg1)
                        
                        if (r13_1 != rbp)
                            rsi_2 = r13_1 - rbp
                        
                        return zx.q(rsi_2)
                    
                    rax[1] += rax_9
                    i_1 -= rax_9
                    rax_7 = rax[1]
                while (i_1 s> 0)
            
            *rax = 0
            
            if (rbp s<= 0)
                sub_142899cd0(arg1)
                return zx.q(r13_1)

return 0
