// 函数: sub_142bd8760
// 地址: 0x142bd8760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
void* r10 = nullptr
void* r9_2 = rax + ((zx.q(*(arg1 + 0x18)) - 1) << 3)

if (rax u<= r9_2)
    do
        int64_t rcx_2 = (r9_2 - rax) s>> 4
        int32_t r8_1 = *(rax + (rcx_2 << 3))
        void* rdx = rax + (rcx_2 << 3)
        
        if (r8_1 == arg2)
            r10 = rdx
            break
        
        int32_t r8_2 = r8_1 & 0x7fffffff
        void* rcx_3 = rdx
        
        if (r8_2 != arg2)
            rcx_3 = r10
        
        r10 = rcx_3
        
        if (rax == r9_2)
            break
        
        if (r8_2 u>= arg2)
            r9_2 = rdx - 8
        else
            rax = rdx + 8
    while (rax u<= r9_2)
    
    if (r10 != 0)
        return zx.q(*(r10 + 4))

return 0
