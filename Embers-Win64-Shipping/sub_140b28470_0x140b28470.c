// 函数: sub_140b28470
// 地址: 0x140b28470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && arg1 != 0)
    int16_t r9_1 = *arg2
    char r10 = 0
    int64_t rsi_1 = -1
    int16_t r15_1 = r9_1 - 0x20
    
    if (r9_1 - 0x61 u> 0x19)
        r15_1 = r9_1
    
    do
        rsi_1 += 1
    while (arg2[rsi_1] != 0)
    
    int16_t i = *arg1
    void* rdi_1 = &arg1[1]
    
    if (arg3 != 0)
        int64_t rbp
        rbp.b = 0
        
        if (i != 0)
            while (true)
                int16_t i_1 = i - 0x20
                
                if (i - 0x61 u> 0x19)
                    i_1 = i
                
                if (rbp.b == 0 && r10 == 0 && i_1 == r15_1
                        && sub_140a546e0(rdi_1, &arg2[1], sx.q(rsi_1.d - 1)) == 0)
                    return rdi_1 - 2
                
                if (i_1 - 0x41 u<= 0x19 || i_1 - 0x30 u<= 9)
                    r10 = 1
                else
                    r10 = 0
                
                if (i_1 == 0x22)
                    rbp.b = rbp.b == 0
                
                i = *rdi_1
                rdi_1 += 2
                
                if (i == 0)
                    return nullptr
    else
        while (i != 0)
            int16_t i_2 = i - 0x20
            
            if (i - 0x61 u> 0x19)
                i_2 = i
            
            if (r10 == 0 && i_2 == r15_1 && sub_140a546e0(rdi_1, &arg2[1], sx.q(rsi_1.d - 1)) == 0)
                return rdi_1 - 2
            
            if (i_2 - 0x41 u<= 0x19 || i_2 - 0x30 u<= 9)
                r10 = 1
            else
                r10 = 0
            
            i = *rdi_1
            rdi_1 += 2

return nullptr
