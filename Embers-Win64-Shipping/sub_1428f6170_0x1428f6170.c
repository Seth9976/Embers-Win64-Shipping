// 函数: sub_1428f6170
// 地址: 0x1428f6170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rsi = arg1
int64_t* r14 = nullptr

if (arg2 != 0)
    char rax_1 = *arg2
    
    if (rax_1 != 0)
        char* r12_1 = &arg2[1]
        uint64_t rdi_1 = 0
        int64_t i = 0
        int32_t r15_1
        r15_1.b = rax_1 == 0x2d
        
        if (rax_1 != 0x2d)
            r12_1 = arg2
        
        do
            if (sub_1428e4710(sx.d(r12_1[i]), 0x10) == 0)
                break
            
            rdi_1 = zx.q(rdi_1.d + 1)
            i += 1
        while (i s<= 0x1fffffff)
        
        if (rdi_1.d == 0 || rdi_1.d s> 0x1fffffff)
        label_1428f6348:
            
            if (*rsi == 0)
                sub_1428901a0(r14)
        else
            int32_t rbx_1 = r15_1 + rdi_1.d
            
            if (rsi == 0)
                return zx.q(rbx_1)
            
            r14 = *rsi
            int64_t* arg_20 = r14
            
            if (r14 != 0)
                sub_142890900(r14, 0)
            label_1428f624d:
                uint32_t rax_4 = (rdi_1 << 2).d
                
                if (rax_4 s> 0x7fffffc0)
                    goto label_1428f6348
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_4 + 0x3f)
                int32_t rax_8 = (temp1_1 + (temp0_1 & 0x3f)) s>> 6
                int64_t* rax_9
                
                if (rax_8 s> *(r14 + 0xc))
                    rax_9 = sub_142890d10(r14, rax_8)
                else
                    rax_9 = r14
                
                if (rax_9 == 0)
                    goto label_1428f6348
                
                int32_t r13_1 = 0
                
                if (rdi_1.d s> 0)
                    int64_t* r15_2 = nullptr
                    
                    do
                        int32_t i_2 = rdi_1.d
                        
                        if (rdi_1.d s>= 0x10)
                            i_2 = 0x10
                        
                        int64_t rbx_2 = 0
                        int64_t i_1 = sx.q(i_2)
                        char* rsi_2 = sx.q(rdi_1.d) - i_1
                        
                        do
                            int32_t rax_10 = sub_1428a6d80(*(rsi_2 + r12_1))
                            rsi_2 = &rsi_2[1]
                            
                            if (rax_10 s< 0)
                                rax_10 = 0
                            
                            i_1 -= 1
                            rbx_2 = rbx_2 << 4 | sx.q(rax_10)
                        while (i_1 s> 0)
                        
                        r14 = arg_20
                        r13_1 += 1
                        rdi_1 = zx.q(rdi_1.d - 0x10)
                        *(r15_2 + *r14) = rbx_2
                        r15_2 = &r15_2[1]
                    while (rdi_1.d s> 0)
                    
                    rsi = arg1
                
                r14[1].d = r13_1
                sub_142890ce0(r14)
                *rsi = r14
                
                if (r14[1].d != 0)
                    r14[2].d = r15_1
                
                return zx.q(rbx_1)
            
            int64_t* rax_3 = sub_142890500()
            arg_20 = rax_3
            r14 = rax_3
            
            if (rax_3 != 0)
                goto label_1428f624d

return 0
