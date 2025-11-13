// 函数: sub_142b293a0
// 地址: 0x142b293a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int64_t r9_1 = *(arg1 + 0x198)

do
    int16_t* rcx = *(arg1 + 0x190)
    
    if (rcx == r9_1)
        break
    
    uint64_t rax = zx.q(*rcx)
    
    if (rax.d == 0 && r9_1 == 0)
        *(arg1 + 0x198) = rcx
        break
    
    arg2 -= 1
    *(arg1 + 0x190) = &rcx[1]
    
    if ((rax.d & 0xfffffc00) == 0xd800 && &rcx[1] != r9_1 && (zx.d(rcx[1]) & 0xfffffc00) == 0xdc00)
        *(arg1 + 0x190) = &rcx[2]
while (arg2 s> 0)
