// 函数: sub_1423c8c20
// 地址: 0x1423c8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1423c7030(*(arg1 + 8), arg2, arg3)
*(arg1 + 0x28) += 1

if (arg3 != 0)
    int32_t i_1 = 0
    int32_t r15_1 = 0
    
    while (true)
        int32_t rbp_1 = 0
        int32_t i = 0
        
        if (*(arg1 + 0x18) s<= 0)
            break
        
        int64_t* r14_1 = nullptr
        
        do
            result = sub_1423c6210(*(r14_1 + *(arg1 + 0x10)), *(arg1 + 0x28))
            rbp_1 += result
            r14_1 = &r14_1[1]
            i += 1
        while (i s< *(arg1 + 0x18))
        
        if (rbp_1 == 0)
            break
        
        if (*(arg1 + 0x28) != 7)
            break
        
        result = sub_1423c7030(*(arg1 + 8), 7, 1)
        r15_1 += 1
        
        if (r15_1 s>= 0x65)
            if (*(arg1 + 0x18) s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    result = sub_1423c5940(*(rsi_1 + *(arg1 + 0x10)), *(arg1 + 0x28))
                    i_1 += 1
                    rsi_1 = &rsi_1[1]
                while (i_1 s< *(arg1 + 0x18))
            
            break

return result
