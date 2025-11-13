// 函数: sub_140855e80
// 地址: 0x140855e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
arg1[7] = 0
arg1[8] = 0

if (r9 != 0)
    void* r8_1 = arg1[1]
    
    if (r8_1 != 0)
        void* r10_1 = *(r9 + 0x98)
        
        if (r10_1 != 0)
            arg1[7] = zx.q(*(r10_1 + 0xbc) * *(r8_1 + 4)) + *(r10_1 + 0x28)
            void* r10_2 = *(r9 + 0xa0)
            
            if (r10_2 != 0)
                arg1[8] = zx.q(*(r10_2 + 0xbc) * *(r8_1 + 4)) + *(r10_2 + 0x28)

return 0
