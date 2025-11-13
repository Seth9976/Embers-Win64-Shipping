// 函数: sub_140855ee0
// 地址: 0x140855ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
arg1[7] = 0
arg1[8] = 0
void* r9 = *(r10 + 0x98)

if (r10 != 0)
    int32_t* r8_1 = arg1[1]
    
    if (r8_1 != 0 && r9 != 0)
        arg1[7] = zx.q(*(r9 + 0xb8) * *r8_1) + *(r9 + 0x18)
        void* r9_1 = *(r10 + 0xa0)
        
        if (r9_1 != 0)
            arg1[8] = zx.q(*(r9_1 + 0xb8) * *r8_1) + *(r9_1 + 0x18)

return 0
