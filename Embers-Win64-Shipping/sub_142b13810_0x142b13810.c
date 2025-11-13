// 函数: sub_142b13810
// 地址: 0x142b13810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r10 = *(arg1 + 8)
int32_t rax_1

if (r10 s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(r10) s>> 5

if (arg2 s>= rax_1)
    return zx.q(arg2)

int64_t i = sx.q(arg2)

do
    int32_t rax_3
    
    if (r10 s< 0)
        rax_3 = *(arg1 + 0xc)
    else
        rax_3 = sx.d(r10) s>> 5
    
    int16_t rcx
    
    if (arg2 u>= rax_3)
        rcx = -1
    else
        void* rax_4 = arg1 + 0xa
        
        if ((r10.b & 2) == 0)
            rax_4 = *(arg1 + 0x18)
        
        rcx = *(rax_4 + (i << 1))
    
    uint64_t rcx_1 = zx.q(rcx)
    
    if (rcx_1.d u> 0xff)
        if ((rcx_1 - 0x200e).d u> 0x1b)
            break
        
        if ((rcx_1 - 0x2010).d u<= 0x17)
            break
    else if ((*(rcx_1 + &data_14366a9f0) u>> 2 & 1) == 0)
        break
    
    arg2 += 1
    i += 1
while (i s< sx.q(rax_1))

return zx.q(arg2)
