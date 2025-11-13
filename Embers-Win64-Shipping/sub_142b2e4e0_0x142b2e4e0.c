// 函数: sub_142b2e4e0
// 地址: 0x142b2e4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (arg3 s>= 0)
    int16_t rax_1 = *(arg1 + 8)
    int32_t rdx_1
    
    if (rax_1 s< 0)
        rdx_1 = *(arg1 + 0xc)
    else
        rdx_1 = sx.d(rax_1) s>> 5
    
    if (arg3 s> rdx_1)
        if (rax_1 s< 0)
            arg3 = *(arg1 + 0xc)
        else
            arg3 = sx.d(rax_1) s>> 5
else
    arg3 = 0

int16_t rax_2 = *(arg1 + 8)
int32_t r11_1

if (rax_2 s< 0)
    r11_1 = *(arg1 + 0xc)
else
    r11_1 = sx.d(rax_2) s>> 5

int16_t rdx_2 = *(arg2 + 8)
uint64_t r9_1

if (rdx_2 s< 0)
    r9_1 = zx.q(*(arg2 + 0xc))
else
    r9_1 = zx.q(sx.d(rdx_2) s>> 5)

if ((*(arg2 + 8) & 1) == 0)
    int32_t rax_4
    
    if (rdx_2 s< 0)
        rax_4 = *(arg2 + 0xc)
    else
        rax_4 = sx.d(rdx_2) s>> 5
    
    if (rax_4 s< 0)
        rbx = rax_4
    
    if (r9_1.d s>= 0)
        int32_t rax_5 = rax_4 - rbx
        
        if (r9_1.d s> rax_5)
            r9_1 = zx.q(rax_5)
        
        if (r9_1.d s> 0)
            void* rdx_3 = arg2 + 0xa
            
            if ((rdx_2.b & 2) == 0)
                rdx_3 = *(arg2 + 0x18)
            
            return sub_142a4a330(arg1, rdx_3, rbx, r9_1, arg3, r11_1 - arg3)

return 0xffffffff
