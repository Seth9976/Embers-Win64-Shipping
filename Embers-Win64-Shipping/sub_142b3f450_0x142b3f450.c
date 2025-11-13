// 函数: sub_142b3f450
// 地址: 0x142b3f450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x84))

if (result.d s> 0)
    int64_t rcx = 0
    
    do
        void* rax
        
        if (*arg1 == 0)
            rax = &arg1[0x58]
        else
            rax = *(arg1 + 0x58)
        
        if (arg2 == *(rax + rcx + sx.q(*(arg1 + 0x80))))
            result.b = 1
            return result
        
        rcx += 1
    while (rcx s< result)

result.b = 0
return result
