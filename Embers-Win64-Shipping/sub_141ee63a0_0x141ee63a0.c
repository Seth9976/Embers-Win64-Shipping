// 函数: sub_141ee63a0
// 地址: 0x141ee63a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x20))

if (rcx.d s> 0)
    void* rax_1 = *(arg1 + 0x48)
    
    if (rax_1 == 0 || (*(rax_1 + 0x18) & 0x10) != 0 || not(arg2 f<= *(rax_1 + 0x1c)))
        int32_t r8_1 = 0
        
        if (rcx.d s> 0)
            int64_t* rdx = *(arg1 + 0x18)
            int64_t rcx_1 = 0
            
            do
                if (arg2 f== *(*rdx + 0x1c))
                    return zx.q(r8_1)
                
                r8_1 += 1
                rcx_1 += 1
                rdx = &rdx[2]
            while (rcx_1 s< rcx)

return 0xffffffff
