// 函数: sub_142ad7d60
// 地址: 0x142ad7d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13 = arg5
int64_t* var_40 = arg2

if (*r13 s<= 0)
    int64_t* rcx = arg1[0x29]
    int16_t* r14_1 = nullptr
    int64_t* var_38_1 = nullptr
    
    if (arg2 == rcx)
        goto label_142ad7e53
    
    int64_t rax_2 = (*(*rcx + 0xb0))(rcx)
    char* rax_4 = (*(*arg2 + 0xb0))(arg2)
    void* rbx_2 = rax_2 - rax_4
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_4)
        i = zx.d(*(rax_4 + rbx_2))
        
        if (rdx != i)
            break
        
        rax_4 = &rax_4[1]
    while (i != 0)
    
    if (rdx - i == 0)
        goto label_142ad7e53
    
    int64_t* rcx_2 = arg1[0x29]
    int64_t* rax_6 = (*(*rcx_2 + 0x10))(rcx_2)
    var_38_1 = rax_6
    
    if (rax_6 == 0)
        *r13 = 7
    else
        sub_142a6c1a0(rax_6, sub_142a6a540(arg2, r13), r13)
        sub_142a6c230(rax_6, Concurrency::details::UMSFreeThreadProxy::GetContext(arg2))
        var_40 = rax_6
    label_142ad7e53:
        arg5.b = 0
        int32_t r15_1 = 0
        int16_t var_58_1 = 0
        int32_t var_48_1 = 0
        int32_t rax_9 = (*(*arg1 + 0xc8))(arg1, 1, r13)
        int32_t rsi_1 = 0
        int32_t rdx_4 = rax_9
        int32_t rbp_1 = 1
        
        while (true)
            int16_t rcx_8 = arg1[0x2d].w
            int32_t rax_11
            
            if (rcx_8 s< 0)
                rax_11 = *(arg1 + 0x16c)
            else
                rax_11 = sx.d(rcx_8) s>> 5
            
            if (rsi_1 s>= rax_11)
                break
            
            if (*r13 s> 0)
                break
            
            int16_t rcx_9 = arg1[0x2d].w
            int32_t rax_13
            
            if (rcx_9 s< 0)
                rax_13 = *(arg1 + 0x16c)
            else
                rax_13 = sx.d(rcx_9) s>> 5
            
            int16_t rbx_4
            
            if (rsi_1 u>= rax_13)
                rbx_4 = -1
            else
                void* rax_14 = arg1 + 0x16a
                
                if ((rcx_9.b & 2) == 0)
                    rax_14 = arg1[0x2f]
                
                rbx_4 = *(r14_1 + rax_14)
            
            if (rbx_4 != var_58_1 && r15_1 s> 0)
                sub_142adbb90(arg1, arg3, var_58_1, r15_1, rdx_4, var_48_1, arg4, var_40, r13)
                var_48_1 += 1
                r15_1 = 0
            
            int16_t var_50
            
            if (rbx_4 != 0x27)
                if (arg5.b == 0 && rbx_4 u< 0x80 && *(zx.q(rbx_4) + &data_14365a0c0) != 0)
                    rdx_4 = rax_9
                    r15_1 += 1
                    rsi_1 += 1
                    var_58_1 = rbx_4
                    rbp_1 += 1
                    r14_1 = &r14_1[1]
                    continue
                
                var_50 = rbx_4
                sub_142a48d70(arg3, &var_50, 0, 1)
                rdx_4 = rax_9
                rsi_1 += 1
                rbp_1 += 1
                r14_1 = &r14_1[1]
            else
                int16_t rax_16 = arg1[0x2d].w
                int32_t rax_18
                
                if (rax_16 s< 0)
                    rax_18 = *(arg1 + 0x16c)
                else
                    rax_18 = sx.d(rax_16) s>> 5
                
                if (rbp_1 s< rax_18)
                    int16_t rcx_14 = arg1[0x2d].w
                    int32_t rax_20
                    
                    if (rcx_14 s< 0)
                        rax_20 = *(arg1 + 0x16c)
                    else
                        rax_20 = sx.d(rcx_14) s>> 5
                    
                    if (rbp_1 u< rax_20)
                        void* rax_21 = arg1 + 0x16a
                        
                        if ((rcx_14.b & 2) == 0)
                            rax_21 = arg1[0x2f]
                        
                        if (*(r14_1 + rax_21 + 2) == 0x27)
                            var_50 = 0x27
                            sub_142a48d70(arg3, &var_50, 0, 1)
                            rdx_4 = rax_9
                            rsi_1 += 2
                            rbp_1 += 2
                            r14_1 = &r14_1[2]
                            continue
                
                rdx_4 = rax_9
                arg5.b = arg5.b == 0
                rsi_1 += 1
                rbp_1 += 1
                r14_1 = &r14_1[1]
        
        if (r15_1 s> 0)
            sub_142adbb90(arg1, arg3, var_58_1, r15_1, rdx_4, var_48_1, arg4, var_40, r13)
        
        if (var_38_1 != 0)
            (**var_38_1)(var_38_1, 1)

return arg3
