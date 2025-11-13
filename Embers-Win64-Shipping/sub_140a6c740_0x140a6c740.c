// 函数: sub_140a6c740
// 地址: 0x140a6c740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (arg4 != 0)
    sub_140a6da50(arg1 + 0x50, arg2, arg3, arg4, arg1 + 0x10, 1)
    int16_t rax_2 = *(arg1 + 0x18)
    int32_t rdx_1
    
    if (rax_2 s< 0)
        rdx_1 = *(arg1 + 0x1c)
    else
        rdx_1 = sx.d(rax_2) s>> 5
    
    void* rcx_1
    
    if ((rax_2.b & 0x11) == 0)
        rcx_1 = arg1 + 0x1a
        
        if ((rax_2.b & 2) == 0)
            rcx_1 = *(arg1 + 0x28)
    else
        rcx_1 = nullptr
    
    rax = sub_142a829e0(rcx_1, rdx_1)
    
    if (rax != 0)
        if (rax == 1)
            int32_t rax_3
            rax_3.b = 1
            return rax_3
        
        if (rax == 2)
            rax.b = 2
            return rax

rax.b = 0
return rax
