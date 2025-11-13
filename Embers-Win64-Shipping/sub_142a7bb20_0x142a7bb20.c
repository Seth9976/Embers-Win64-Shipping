// 函数: sub_142a7bb20
// 地址: 0x142a7bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*arg2 s<= 0)
    result = *(arg1 + 0x13c)
    
    if (result s<= 0)
        if (*(arg1 + 0x138) == 0)
            goto label_142a7bb97
        
        if (sub_142a79a50(*(arg1 + 0x20)) != 0)
            int64_t rax_1 = sub_142aea860(*(arg1 + 0x20))
            *(arg1 + 0x30) = rax_1
            *(arg1 + 0x40) = 0
            *(arg1 + 0x70) = 0
            *(arg1 + 0x50) = 0
            *(arg1 + 0x60) = 0
            *(arg1 + 0x48) = rax_1
            *(arg1 + 0x78) = rax_1
            *(arg1 + 0x58) = rax_1
            *(arg1 + 0x68) = rax_1
        label_142a7bb97:
            *(arg1 + 0x110) = 0x2710
            *(arg1 + 0x10c) = 0
            *(arg1 + 0xa8) = 0
            *(arg1 + 0x82) = 0
            *(arg1 + 0xa0) = 0
            *(arg1 + 0x98) = -1
            *(arg1 + 0x90) = 0
            *(arg1 + 0x88) = 0
        
        void* rax_2 = *(arg1 + 0x20)
        
        if (*(rax_2 + 0x20) == 0)
            int64_t rcx_2 = *(arg1 + 0x30)
            
            if (rcx_2 == *(rax_2 + 0x10) && rcx_2 == sx.q(*(rax_2 + 0x1c)))
                sub_142a76f00(arg1, *(arg1 + 0x70), 1, arg2)
                return zx.q(*(arg1 + 0x82))
        
        sub_142a748a0(arg1, *(arg1 + 0x70), 1, arg2)
        return zx.q(*(arg1 + 0x82))
    
    *arg2 = result

result.b = 0
return result
