// 函数: sub_142b29100
// 地址: 0x142b29100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2

if (arg2 s<= 0)
    return 

int64_t r10_1 = *(arg1 + 0x188)

do
    int16_t* rax = *(arg1 + 0x190)
    
    if (rax == r10_1)
        break
    
    rax = &rax[-1]
    i -= 1
    *(arg1 + 0x190) = rax
    
    if ((zx.d(*rax) & 0xfffffc00) == 0xdc00 && rax != r10_1)
        if ((zx.d(rax[-1]) & 0xfffffc00) == 0xd800)
            rax = &rax[-1]
        
        *(arg1 + 0x190) = rax
while (i s> 0)
