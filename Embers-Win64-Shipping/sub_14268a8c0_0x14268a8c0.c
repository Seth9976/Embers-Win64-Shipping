// 函数: sub_14268a8c0
// 地址: 0x14268a8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x100)
int32_t r9 = 0
void* r10 = rax + sx.q(*(arg1 + 0x108)) * 0x18

if (rax != r10)
    int64_t r8_1 = *(arg1 + 0x960)
    
    do
        r9 += *(*(*(rax + 0x10) + 8) + 0x10)
        
        if (r8_1 != 0)
            r9 += *(r8_1 + 0x10)
        
        rax += 0x18
    while (rax != r10)

return zx.q((*(arg1 + 0xfc) << 5) + r9 + *(arg1 + 0x10c) * 0x18 + 0x988)
