// 函数: sub_142a7b9a0
// 地址: 0x142a7b9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg3
int64_t rax

if (*arg3 s<= 0)
    int32_t rax_1 = *(arg1 + 0x13c)
    
    if (rax_1 s> 0)
        *arg3 = rax_1
        rax_1.b = 0
        return rax_1
    
    rax = *(arg1 + 0x30)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x48) = rax
    *(arg1 + 0x70) = 0
    *(arg1 + 0x78) = rax
    *(arg1 + 0x50) = 0
    *(arg1 + 0x58) = rax
    *(arg1 + 0x60) = 0
    *(arg1 + 0x68) = rax
    *(arg1 + 0x88) = 0
    *(arg1 + 0x90) = 0
    *(arg1 + 0x98) = -1
    *(arg1 + 0xa0) = 0
    *(arg1 + 0x82) = 0
    *(arg1 + 0xa8) = 0
    *(arg1 + 0x10c) = 0
    *(arg1 + 0x110) = 0x2710
    
    if (arg2 s< 0)
        *arg3 = 8
        rax.b = 0
        return rax
    
    if (*(arg1 + 0x138) != 0 && sub_142a79a50(*(arg1 + 0x20)).b != 0)
        *(arg1 + 0x30) = sub_142aea860(*(arg1 + 0x20))
        sub_142a7c980(arg1)
    
    if (arg2 s>= *(arg1 + 0x70) && arg2 s<= *(arg1 + 0x78))
        void* rax_3 = *(arg1 + 0x20)
        
        if (*(rax_3 + 0x20) == 0)
            int64_t rcx_3 = *(arg1 + 0x30)
            
            if (rcx_3 == *(rax_3 + 0x10) && rcx_3 == sx.q(*(rax_3 + 0x1c)))
                sub_142a76f00(arg1, arg2.d, 0, rdi)
                return zx.q(*(arg1 + 0x82))
        
        sub_142a748a0(arg1, arg2, 0, rdi)
        return zx.q(*(arg1 + 0x82))
    
    *rdi = 8

rax.b = 0
return rax
