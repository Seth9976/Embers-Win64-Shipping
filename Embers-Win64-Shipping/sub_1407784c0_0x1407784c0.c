// 函数: sub_1407784c0
// 地址: 0x1407784c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[6])

if (rdi.d s> 0)
    int32_t rax_1 = arg1[4]
    
    if (rax_1 s<= rdi.d)
        arg1[6] = rdi.d - rax_1
        int32_t rax_3 = arg1[5]
        arg1[4] = 0
        
        if (rax_3 s< 0 && rax_3 != 0)
            sub_1405dadb0(&arg1[2], 0)
    else
        if (rax_1 != rdi.d)
            int64_t rcx = *(arg1 + 8)
            memmove(rcx, rcx + (rdi << 2), (rax_1 - rdi.d) << 2)
            rax_1 = arg1[4]
        
        arg1[4] = rax_1 - rdi.d
        sub_1405dac90(&arg1[2])
        arg1[6] = 0

int32_t rbp = arg2[1].d
int64_t rax_4 = sx.q(arg1[6])
int32_t r10 = arg1[4]
int32_t r8_4 = rbp - rax_4.d
int32_t r9 = r8_4 + r10
int32_t result

if (r9 s>= 0)
    int32_t rcx_3 = *arg1
    
    if (r9 s>= rcx_3)
        int32_t r8_6 = r9 - rcx_3
        arg1[1]
        int32_t rdi_5 = mods.dp.d(sx.q(r8_6), arg1[1]) - r8_6 - arg1[1] + r9
        
        if (rdi_5 s> rbp)
            int32_t rsi_3 = rbp - rdi_5 + r10
            
            if (rsi_3 s> 0)
                int32_t rax_9 = arg1[4]
                
                if (rax_9 != rsi_3)
                    int64_t rcx_6 = *(arg1 + 8)
                    memmove(rcx_6, rcx_6 + (sx.q(rsi_3) << 2), (rax_9 - rsi_3) << 2)
                    rax_9 = arg1[4]
                
                arg1[4] = rax_9 - rsi_3
                sub_1405dac90(&arg1[2])
            
            return sub_14074a250(&arg1[2], *arg2, rbp)
        
        if (rdi_5 s> 0)
            arg1[4] = 0
            
            if (rdi_5 s> arg1[5])
                sub_1405dadb0(&arg1[2], rdi_5)
            
            int32_t rax_12 = arg1[4] + rdi_5
            arg1[4] = rax_12
            
            if (rax_12 s> arg1[5])
                sub_1406105e0(&arg1[2])
            
            return memcpy(*(arg1 + 8), *arg2 + (sx.q(arg2[1].d - rdi_5) << 2), rdi_5 << 2)
        
        arg1[6] = neg.d(rdi_5)
        result = arg1[5]
        arg1[4] = 0
        
        if (result s< 0 && result != 0)
            return sub_1405dadb0(&arg1[2], 0)
    else
        result = sub_14074a250(&arg1[2], *arg2 + (rax_4 << 2), r8_4)
        arg1[6] = 0
else
    result = rax_4.d - rbp
    arg1[6] = result

return result
