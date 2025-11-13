// 函数: sub_14221cb50
// 地址: 0x14221cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x1e8) & 1) == 0)
    return 

int32_t i = 0

if (*(arg1 + 0x118) s<= 0)
    return 

void* r10_1 = nullptr

do
    int32_t* r9_3 = sx.q(zx.d(*(r10_1 + *(arg1 + 0xf8))) * *(arg1 + 0x114)) + sx.q(*(arg1 + 0x30))
        + *(arg1 + 0xf0)
    int32_t rax = *r9_3
    
    if ((rax & 0xf0000000) == 0x40000000)
        *r9_3 = (rax & 0xfffffff) | 0x10000000
    
    i += 1
    r10_1 += 2
while (i s< *(arg1 + 0x118))
