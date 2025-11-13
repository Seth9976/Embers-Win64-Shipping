// 函数: sub_142415650
// 地址: 0x142415650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg1[0x43].d - *(arg1 + 0x244) s<= 0)
    int32_t rsi_3 = arg1[0x2d].d
    int64_t r15
    r15.b = 0
    int32_t rsi_4 = rsi_3 - 1
    
    if (rsi_3 - 1 s>= 0)
        int64_t rbp_2 = sx.q(rsi_4) << 3
        int64_t r14_2 = rbp_2
        int32_t temp1_1
        
        do
            int64_t* rcx_9 = arg1[0x2c]
            
            if (*(rcx_9 + rbp_2) == arg2)
                int32_t rdx_7 = arg1[0x2d].d
                r15 = 1
                int32_t rax_16 = rdx_7 - rsi_4 - 1
                
                if (rax_16 s>= 1)
                    rax_16 = 1
                
                if (rax_16 != 0)
                    memcpy(rcx_9 + r14_2, &rcx_9[sx.q(rdx_7 - rax_16)], rax_16 << 3)
                    rdx_7 = arg1[0x2d].d
                
                arg1[0x2d].d = rdx_7 - 1
            
            r14_2 -= 8
            rbp_2 -= 8
            temp1_1 = rsi_4
            rsi_4 -= 1
        while (temp1_1 - 1 s>= 0)
    
    if (rsi_3 - 1 s< 0 || r15.b == 0)
        int64_t rbp_3 = sx.q(arg1[0x2d].d)
        int32_t rax_19 = (rbp_3 + 1).d
        arg1[0x2d].d = rax_19
        
        if (rax_19 s> *(arg1 + 0x16c))
            sub_1405a4d70(&arg1[0x2c])
        
        *(arg1[0x2c] + (rbp_3 << 3)) = arg2
else
    int32_t rax_3 = sub_140b5ead0(arg2.d) + arg_10:4.d
    void* r8_1 = &arg1[0x49]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_5 = *(r8_1 + (((sx.q(arg1[0x4b].d) - 1) & sx.q(rax_3)) << 2))
    void* const rcx_3
    
    if (rax_5 == 0xffffffff)
    label_1424156e0:
        rcx_3 = nullptr
    else
        int64_t r8_2 = arg1[0x42]
        
        while (true)
            int64_t rdx_3 = sx.q(rax_5) * 5
            rcx_3 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == arg2)
                break
            
            rax_5 = *(rcx_3 + 0x20)
            
            if (rax_5 == 0xffffffff)
                goto label_1424156e0_1
        
        if (rax_5 == 0xffffffff)
        label_1424156e0_1:
            rcx_3 = nullptr
    
    void* rdx_4 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rdx_4 = nullptr
    
    char rcx_4
    
    if (rdx_4 != 0)
        char rax_6 = *(rdx_4 + 0x10)
        rcx_4 = ((not.b(rax_6) ^ rax_6) & 1) ^ rax_6
        *(rdx_4 + 0x10) = rcx_4
    
    if (rdx_4 == 0 || (rcx_4 & 1) != 0)
        sub_140664c50(&arg1[0x2c], &arg_10)
    else
        int32_t rsi_1 = arg1[0x2d].d
        int32_t rsi_2 = rsi_1 - 1
        
        if (rsi_1 - 1 s>= 0)
            int64_t rbp_1 = sx.q(rsi_2) << 3
            int64_t r14_1 = rbp_1
            int32_t temp3_1
            
            do
                int64_t* r9_1 = arg1[0x2c]
                
                if (*(r9_1 + rbp_1) == arg2)
                    int32_t rcx_5 = arg1[0x2d].d
                    int32_t rax_10 = rcx_5 - rsi_2 - 1
                    
                    if (rax_10 s>= 1)
                        rax_10 = 1
                    
                    if (rax_10 != 0)
                        memcpy(r9_1 + r14_1, &r9_1[sx.q(rcx_5 - rax_10)], rax_10 << 3)
                        rcx_5 = arg1[0x2d].d
                    
                    arg1[0x2d].d = rcx_5 - 1
                
                r14_1 -= 8
                rbp_1 -= 8
                temp3_1 = rsi_2
                rsi_2 -= 1
            while (temp3_1 - 1 s>= 0)

return sub_140ce6d40(arg1, 0x4000, nullptr, data_143ddb400) __tailcall
