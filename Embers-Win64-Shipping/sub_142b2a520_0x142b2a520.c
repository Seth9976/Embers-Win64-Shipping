// 函数: sub_142b2a520
// 地址: 0x142b2a520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int32_t i = arg2

do
    uint64_t rax = zx.q(*(arg1 + 0x190))
    
    if (rax.d s<= 0)
        break
    
    int64_t rcx = *(arg1 + 0x188)
    int32_t r8_1 = (rax - 1).d
    *(arg1 + 0x190) = r8_1
    
    if (*(sx.q(r8_1) + rcx) s< 0xc0)
        *(arg1 + 0x190) = sub_142a9bab0(rcx, 0, r8_1).d
    
    i -= 1
while (i s> 0)
