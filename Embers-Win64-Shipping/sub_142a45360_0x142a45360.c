// 函数: sub_142a45360
// 地址: 0x142a45360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = -0x60

if (arg1 != &data_14360daa0)
    sub_142a3fca0(arg1, 1)
    int512_t entry_zmm2
    sub_142a454d0(arg1, sub_142a454b0, 0, 0, entry_zmm2)
    sub_142a3fcf0(arg1)
    
    if (arg1[0x168] != 0)
        int64_t rbp_1 = 0
        void* rsi_1 = &arg1[0x83]
        int64_t i_1 = 0x4b
        int64_t i
        
        do
            char* j_1 = *rsi_1
            
            if (j_1 != 0)
                char* j
                
                do
                    j = *(j_1 + 0x40)
                    rbp_1 += 1
                    sub_142a40110(j_1, 1)
                    
                    if (*(j_1 + 0x10) != *(j_1 + 0x20))
                        sub_142a40010(j_1, rsi_1)
                    else
                        sub_142a40080(j_1, rsi_1, 1)
                    
                    j_1 = j
                while (j != 0)
            
            rsi_1 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_142a3f110(*arg1 + 0x18)
    result = sub_142a40d90()
    
    if (result != 0)
        return sub_142a41680(*arg1 + 0x88) __tailcall

return result
