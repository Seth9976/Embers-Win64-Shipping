// 函数: sub_142b23000
// 地址: 0x142b23000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return zx.q(arg1[3].d)

while (true)
    int64_t rcx_11 = sx.q(arg1[0x2e].d)
    int64_t r8_6
    
    if (rcx_11.d s< arg1[3].d)
        arg1[0x2e].d = (rcx_11 + 1).d
        r8_6 = *(arg1[4] + (rcx_11 << 3))
    else
        int32_t r8_1 = arg1[3].d
        
        if (r8_1 s>= 0x28)
            int32_t i_1 = arg1[5].d
            
            if (r8_1 s>= i_1)
                if (*arg2 s> 0)
                    return r8_1
                
                int32_t i
                
                do
                    int32_t rax_1 = 2
                    
                    if (i_1 s< 0x3e8)
                        rax_1 = 4
                    
                    i = rax_1 * i_1
                    i_1 = i
                while (i s< r8_1 + 1)
                
                if (sub_142a5da90(&arg1[4], i_1, r8_1) == 0)
                    *arg2 = 7
                    break
        
        arg1[3].d += 1
        int32_t arg_8
        uint32_t rax_4 = (*(*arg1 + 0x38))(arg1, &arg_8, arg2)
        uint32_t r8_3 = zx.d(rax_4.b)
        uint32_t r9_1 = rax_4
        
        if (r8_3 u>= 0xc0)
            int32_t rdi_1 = arg_8
            int64_t* rsi_1
            
            if (r8_3 != 0xc0)
                rsi_1 = arg1[2]
            label_142b23177:
                
                if (r8_3 != 0xc1)
                    arg1[3].d -= 1
                    sub_142b22160(arg1, rsi_1, rdi_1, r9_1, 1, arg2)
                    
                    if (*arg2 s> 0)
                        r8_6 = 1
                    else
                        rcx_11 = sx.q(arg1[0x2e].d)
                        arg1[0x2e].d = (rcx_11 + 1).d
                        r8_6 = *(arg1[4] + (rcx_11 << 3))
                else
                    int64_t rcx_9 = sx.q(arg1[0x2e].d)
                    r8_6 = zx.q(r9_1 - 0xc1) << 0x20 | 0x5000500
                    arg1[0x2e].d = (rcx_9 + 1).d
                    *(arg1[4] + (rcx_9 << 3)) = r8_6
            else
                if (rdi_1 s< 0)
                    int64_t rcx_12 = sx.q(arg1[0x2e].d)
                    arg1[0x2e].d = (rcx_12 + 1).d
                    *(arg1[4] + (rcx_12 << 3)) = 0x101000100
                    break
                
                rsi_1 = *(arg1[2] + 0x20)
                uint32_t rax_10 = sub_142aa3ce0(rsi_1, rdi_1)
                r8_3 = zx.d(rax_10.b)
                r9_1 = rax_10
                
                if (r8_3 u>= 0xc0)
                    goto label_142b23177
                
                int64_t rcx_8 = sx.q(arg1[0x2e].d)
                arg1[0x2e].d = (rcx_8 + 1).d
                r8_6 = zx.q((r8_3 | (r9_1 & 0xffffff00) << 8) << 8)
                    | (zx.q(r9_1) & 0xffffffffffff0000) << 0x20
                *(arg1[4] + (rcx_8 << 3)) = r8_6
        else
            int64_t rdx_1 = sx.q(arg1[0x2e].d)
            arg1[0x2e].d = (rdx_1 + 1).d
            r8_6 = zx.q((r8_3 | (r9_1 & 0xffffff00) << 8) << 8)
                | (zx.q(r9_1) & 0xffffffffffff0000) << 0x20
            *(arg1[4] + (rdx_1 << 3)) = r8_6
    
    int32_t rax_23 = arg1[3].d
    
    if (r8_6 != 0x101000100)
        arg1[0x2e].d = rax_23
        
        if (*arg2 s<= 0)
            continue
    
    return rax_23

return arg1[3].d
