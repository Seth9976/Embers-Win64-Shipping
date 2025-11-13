// 函数: sub_142a9f1b0
// 地址: 0x142a9f1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg2 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

if (rax_2 != 0)
    rax_2 = sub_142a9fa90(arg2)
    
    if (rax_2 s< 0)
        void* rcx_1 = *(arg1 + 0x50)
        
        if (rcx_1 != 0 && sub_142ae7470(rcx_1, arg2, 0) s>= 0)
            int32_t rax_3
            rax_3.b = 1
            return rax_3
        
        return 0
    
    int64_t* rcx_2 = *(arg1 + 0x28)
    
    if (rcx_2 != 0)
        jump(*(*rcx_2 + 8))
    
    void* rcx_3 = *(arg1 + 0x58)
    
    if (rcx_3 != 0)
        return sub_142a9f280(rcx_3, rax_2) __tailcall
    
    if (rax_2 s< 0x110000)
        return sub_142a9f8f0(arg1, rax_2) & 1

rax_2.b = 0
return rax_2
