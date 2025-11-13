// 函数: sub_142aae540
// 地址: 0x142aae540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    int64_t* rsi_1 = *(arg1 + 0x170)
    
    if (rsi_1 != 0)
        void* i = *rsi_1
        
        while (i != 0)
            bool cond:1_1
            
            if ((*(i + 8) & 1) == 0)
                int16_t rax_2 = *(i + 8)
                int32_t r8_1
                
                if (rax_2 s< 0)
                    r8_1 = *(i + 0xc)
                else
                    r8_1 = sx.d(rax_2) s>> 5
                
                int16_t rax_3 = *(arg2 + 8)
                int32_t rax_5
                
                if (rax_3 s< 0)
                    rax_5 = *(arg2 + 0xc)
                else
                    rax_5 = sx.d(rax_3) s>> 5
                
                if ((*(arg2 + 8) & 1) == 0 && r8_1 == rax_5)
                    cond:1_1 = sub_142a490e0(i, arg2, r8_1) != 0
                    goto label_142aae5c4
            else
                cond:1_1 = (*(arg2 + 8) & 1) != 0
            label_142aae5c4:
                
                if (cond:1_1)
                    return i
            i = rsi_1[1]
            rsi_1 = &rsi_1[1]
        
        *arg3 = 1

return nullptr
