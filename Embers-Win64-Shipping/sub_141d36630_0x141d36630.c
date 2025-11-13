// 函数: sub_141d36630
// 地址: 0x141d36630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg2)

if (rcx == 1)
    void*** rax_11 = j_sub_140a82f30(0x20)
    
    if (rax_11 != 0)
        rax_11[1].d = 0xff7fffff
        *rax_11 = &data_143222888
        rax_11[2] = 0
        rax_11[3] = 0
        *arg1 = rax_11
        return arg1
else
    if (rcx == 2)
        void*** rax_7 = j_sub_140a82f30(0x48)
        
        if (rax_7 == 0)
            *arg1 = 0
            return arg1
        
        *arg1 = rax_7
        rax_7[1].d = 0xff7fffff
        *rax_7 = &data_1432228b8
        rax_7[2] = 0
        rax_7[3] = 0
        rax_7[5] = 0
        rax_7[4].d = 0xff7fffff
        rax_7[6] = 0
        rax_7[8] = &rax_7[4]
        rax_7[7] = &rax_7[1]
        return arg1
    
    if (rcx != 3)
        if (rcx == 4)
            void*** rax_2 = j_sub_140a82f30(0x50)
            
            if (rax_2 != 0)
                *arg1 = sub_141d2c800(rax_2)
                return arg1
        
        *arg1 = 0
        return arg1
    
    void*** rax_5 = j_sub_140a82f30(0x58)
    
    if (rax_5 != 0)
        rax_5[1].d = 0xff7fffff
        *rax_5 = &data_1432228e8
        rax_5[2] = 0
        rax_5[3] = 0
        rax_5[4].d = 0xff7fffff
        rax_5[5] = 0
        rax_5[6] = 0
        rax_5[7].d = 0xff7fffff
        rax_5[8] = 0
        rax_5[9] = 0
        rax_5[0xa].d = 1
        *(rax_5 + 0x54) = 0
        *arg1 = rax_5
        return arg1

*arg1 = 0
return arg1
