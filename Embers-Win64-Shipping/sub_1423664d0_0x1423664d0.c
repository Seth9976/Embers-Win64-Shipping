// 函数: sub_1423664d0
// 地址: 0x1423664d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0x30))
int32_t rax = 0
int32_t r8 = 0
int32_t rdi = 0
int64_t r10

if (r11 s< 2)
    r10 = 0
else
    void* rdx_1 = *(arg1 + 0x28)
    void* r9_1 = arg1 + 0x10
    int64_t rcx = 0
    
    if (rdx_1 != 0)
        r9_1 = rdx_1
    
    int64_t i_1 = ((r11 - 2) u>> 1) + 1
    r10 = i_1 * 2
    int64_t i
    
    do
        rax += *(rcx + r9_1 + 8)
        r8 += *(rcx + r9_1 + 0x20)
        rcx += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r10 s< r11)
    void* rcx_1 = *(arg1 + 0x28)
    void* rdx_4 = arg1 + 0x10
    
    if (rcx_1 != 0)
        rdx_4 = rcx_1
    
    rdi = *(rdx_4 + r10 * 0x18 + 8)

return zx.q(rax + r8 + rdi)
