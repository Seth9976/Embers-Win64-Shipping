// 函数: sub_141f523e0
// 地址: 0x141f523e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 == arg2[1].d)
    int32_t* r10_1 = *arg2
    
    if (i_1 != 0)
        void* r9_1 = &r10_1[3]
        void* r8_2 = *arg1 + 0xc
        int32_t i
        
        do
            if (*r10_1 f!= *(r8_2 - 0xc))
                return 0
            
            if (*(r9_1 - 8) f!= *(r8_2 - 8))
                return 0
            
            if (*(r9_1 - 4) f!= *(r8_2 - 4))
                return 0
            
            if (*r9_1 f!= *r8_2)
                return 0
            
            if (*(r9_1 + 4) f!= *(r8_2 + 4))
                return 0
            
            if (*(r9_1 + 8) f!= *(r8_2 + 8))
                return 0
            
            if (*(r9_1 + 0xc) f!= *(r8_2 + 0xc))
                return 0
            
            if (*(r9_1 + 0x10) f!= *(r8_2 + 0x10))
                return 0
            
            if (*(r9_1 + 0x14) f!= *(r8_2 + 0x14))
                return 0
            
            if (*(r9_1 + 0x18) f!= *(r8_2 + 0x18))
                return 0
            
            if (*(r8_2 + 0x1c) != *(r9_1 + 0x1c))
                return 0
            
            r10_1 = &r10_1[0xb]
            r9_1 += 0x2c
            r8_2 += 0x2c
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    char rax = arg1[2].b
    
    if (rax == arg2[2].b && (rax == 0 || not(*(arg2 + 0x14) f!= *(arg1 + 0x14))))
        return 1

return 0
