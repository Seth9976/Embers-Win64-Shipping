// 函数: sub_140f258b0
// 地址: 0x140f258b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_3 = arg1[1].d
    
    if (i_3 != 0)
        int64_t* rdi_2 = *arg1 + 8
        int32_t i
        
        do
            sub_140745b20(rdi_2)
            rdi_2 = &rdi_2[3]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg2[1].d
    void* rsi_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = i_2
    
    if (i_2 != 0 || r8_1 != 0)
        sub_140808f70(arg1, i_2, r8_1)
        int32_t* rdi_3 = *arg1
        
        if (i_2 != 0)
            void* rsi_2 = rsi_1 + 8
            int32_t i_1
            
            do
                *rdi_3 = *(rsi_2 - 8)
                rdi_3[1].b = *(rsi_2 - 4)
                *(rdi_3 + 8) = 0
                rdi_3[4] = 0
                sub_140692f90(&rdi_3[2], rsi_2)
                rsi_2 += 0x18
                rdi_3 = &rdi_3[6]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0xc) = 0

return arg1
