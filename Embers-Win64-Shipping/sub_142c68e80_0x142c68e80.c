// 函数: sub_142c68e80
// 地址: 0x142c68e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = 0
void* r11 = *arg1
int32_t r9 = 0
int64_t rax = *(arg1[0x87] + 0x58)

if (rax != 0)
    jump(rax)

if (arg3 s< 2)
    return 0

if (((*(r11 + 0x220)).b & 0x15) == 1)
    r9 = 1
    *arg2 = arg1[0x8a]

if (((*(r11 + 0x220)).b & 0x2a) == 2)
    int64_t rax_5 = arg1[0x8b]
    
    if (arg1[0x8a] != rax_5 || r9 == 0)
        r10.b = r9 != 0
        r10 = zx.q(r10.d)
        arg2[r10] = rax_5
    
    r9 |= 1 << ((r10 + 0x10).d u% 0x20)

return zx.q(r9)
