// 函数: sub_1428a8f00
// 地址: 0x1428a8f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rbx = arg3

if (arg3 != 0)
    int32_t rsi_1 = 0
    
    if (rbx s> 0)
        int32_t rax_5
        int64_t result
        
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rbx + rsi_1)
            int32_t rax_4 = (temp1_1 - temp0_1) s>> 1
            result = sx.q(rax_4 * arg4) + arg2
            rax_5 = arg5(arg1, result)
            
            if (rax_5 s>= 0)
                if (rax_5 s<= 0)
                    break
                
                rsi_1 = rax_4 + 1
            else
                rbx = rax_4
        while (rsi_1 s< rbx)
        
        if (rax_5 != 0)
            return 0
        
        return result

return 0
