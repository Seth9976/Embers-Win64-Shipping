// 函数: sub_142a83570
// 地址: 0x142a83570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *arg2 s<= 0)
    if (arg1 != 0)
        int64_t* rax_1 = *arg1
        
        if (rax_1 == arg1)
        label_142a835ba:
            int32_t rsi = *(arg1 + 0x14)
            
            if (rsi s<= 0)
                *arg2 = 1
                return 0
            
            int64_t rbp = sx.q(*(arg1 + 0xc4))
            
            if (rbp.d == rsi)
                return arg1[0xf]
            
            if (sub_142a82af0(&arg1[8], &arg1[4], arg1[0xd].b, rsi) == 0)
                *arg2 = 7
                return 0
            
            int64_t result = arg1[8]
            
            if (rbp.d s> 0)
                int64_t rdx_1 = arg1[0xf]
                
                if (result != rdx_1)
                    memcpy(result, rdx_1, rbp.d)
            
            memset(result + rbp, zx.d(*(arg1 + 0x8d)), sx.q(rsi - rbp.d))
            *(arg1 + 0xc4) = rsi
            arg1[0xf] = result
            return result
        
        if (rax_1 != 0 && *rax_1 == rax_1)
            goto label_142a835ba
    
    *arg2 = 0x1b

return 0
