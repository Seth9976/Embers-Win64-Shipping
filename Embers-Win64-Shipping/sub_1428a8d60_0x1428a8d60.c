// 函数: sub_1428a8d60
// 地址: 0x1428a8d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
char* r9 = arg1

if (arg1 != 0)
    char i = *arg1
    
    if (i != 0)
        int32_t r10 = 0x100
        
        do
            r9 = &r9[1]
            int32_t r8_2 = sx.d(i) | r10
            r10 += 0x100
            i = *r9
            rdx = rol.d(rdx, ((r8_2 u>> 2).b ^ r8_2.b) & 0xf) ^ (r8_2 * r8_2)
        while (i != 0)
        
        return zx.q(rdx u>> 0x10) ^ zx.q(rdx)

return 0
