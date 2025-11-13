// 函数: sub_1429cc860
// 地址: 0x1429cc860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x150)
int32_t r11 = arg2 * 2
int32_t* rdi = *(arg1 + 0x168) + (sx.q(*(rbx + (sx.q(r11 + 1) << 2))) << 2)
int32_t r9_1 = *(rbx + (sx.q(r11) << 2))
int32_t rax_3 = 0

if (arg2 == arg3)
    if (r9_1 s> 0)
        int64_t r10_2 = *(arg1 + 0x78)
        int32_t* r8 = rdi
        
        while (true)
            int64_t rcx_6 = sx.q(*r8 * 2)
            
            if (*(r10_2 + (rcx_6 << 2)) == *(r10_2 + (rcx_6 << 2) + 4))
                return zx.q(rdi[sx.q(rax_3)])
            
            rax_3 += 1
            r8 = &r8[1]
            
            if (rax_3 s>= r9_1)
                return 0xffffffff
else if (r9_1 s> 0)
    int64_t r10_1 = *(arg1 + 0x78)
    int32_t* rdx = rdi
    
    do
        int64_t rcx_2 = sx.q(*rdx * 2)
        
        if (*(r10_1 + (rcx_2 << 2)) == arg3 || *(r10_1 + (rcx_2 << 2) + 4) == arg3)
            return zx.q(rdi[sx.q(rax_3)])
        
        rax_3 += 1
        rdx = &rdx[1]
    while (rax_3 s< r9_1)

return 0xffffffff
