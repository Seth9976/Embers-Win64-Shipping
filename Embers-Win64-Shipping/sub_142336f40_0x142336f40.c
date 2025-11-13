// 函数: sub_142336f40
// 地址: 0x142336f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2ff18 != 0)
    sub_142331380(arg1)
    EnterCriticalSection(&data_143f58c08)
    int64_t rdi_2 = sx.q(data_143f58d30)
    int32_t rax_5 = (rdi_2 + 1).d
    bool cond:1_1 = rax_5 s<= data_143f58d34
    data_143f58d30 = rax_5
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143f58d28)
    
    bool cond:2_1 = data_143f59104 s<= 0x3e8
    *(data_143f58d28 + (rdi_2 << 3)) = arg1
    
    if (not(cond:2_1))
        int32_t i = 0
        bool cond:3_1 = data_143f59100 s<= 0
        data_143f59104 = 0
        
        if (not(cond:3_1))
            do
                int64_t* r9_1 = data_143f58d28
                int64_t* rcx_1 = *r9_1
                
                if (rcx_1 != 0)
                    (**rcx_1)(rcx_1, 1)
                    r9_1 = data_143f58d28
                
                int32_t rax_10 = data_143f58d30
                int32_t rdx_2 = rax_10 - 1
                
                if (rdx_2 s>= 1)
                    rdx_2 = 1
                
                if (rdx_2 != 0)
                    memcpy(r9_1, &r9_1[sx.q(rax_10 - rdx_2)], rdx_2 << 3)
                    rax_10 = data_143f58d30
                
                data_143f58d30 = rax_10 - 1
                sub_1405c53d0(&data_143f58d28)
                i += 1
            while (i s< data_143f59100)
        
        data_143f59100 = data_143f58d30
    
    LeaveCriticalSection(&data_143f58c08)
else
    if (arg1 != 0)
        (**arg1)(arg1, 1)
    
    if (data_143f58d30 s> 0)
        EnterCriticalSection(&data_143f58c08)
        int64_t* rdi_1 = data_143f58d28
        int64_t rsi_1 = 0
        uint64_t r14_2 = sx.q(data_143f58d30) << 3 u>> 3
        
        if (rdi_1 u> &rdi_1[sx.q(data_143f58d30)])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rcx = *rdi_1
                
                if (rcx != 0)
                    (**rcx)(rcx, 1)
                
                rdi_1 = &rdi_1[1]
                rsi_1 += 1
            while (rsi_1 != r14_2)
        
        bool cond:4_1 = data_143f58d34 == 0
        data_143f58d30 = 0
        
        if (not(cond:4_1))
            sub_1405c5570(&data_143f58d28, 0)
        
        LeaveCriticalSection(&data_143f58c08)
