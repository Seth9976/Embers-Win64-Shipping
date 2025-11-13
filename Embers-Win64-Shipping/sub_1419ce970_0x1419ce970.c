// 函数: sub_1419ce970
// 地址: 0x1419ce970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x40)
void* r8 = *(arg1 + 0x48)

if ((r8.b & 1) != 0)
    r8 = (r8 s>> 1) + arg1 + 0x48

void* r10 = r8 + (sx.q(*(arg1 + 0x50)) << 3)

while (r8 != r10)
    void* rax_2 = *r8
    
    if ((rax_2.b & 1) != 0)
        rax_2 = (rax_2 s>> 1) + r8
    
    int32_t rcx_1
    rcx_1.b = *(rax_2 + 8) != 0
    int32_t rdx_1 = rcx_1 + 1
    
    if (*(rax_2 + 0x10) == 0)
        rdx_1 = rcx_1
    
    int32_t rcx_2 = rdx_1 + 1
    
    if (*(rax_2 + 0x18) == 0)
        rcx_2 = rdx_1
    
    int32_t rdx_2 = rcx_2 + 1
    
    if (*(rax_2 + 0x20) == 0)
        rdx_2 = rcx_2
    
    int32_t rcx_3 = rdx_2 + 1
    
    if (*(rax_2 + 0x28) == 0)
        rcx_3 = rdx_2
    
    r8 += 8
    r9 += rcx_3

return zx.q(r9)
