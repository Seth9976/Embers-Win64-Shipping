// 函数: sub_1421f2210
// 地址: 0x1421f2210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x138)
void* rax = *(r8 + 0x50)
uint64_t rbx = zx.q(*(rax + 0x5f))

if (rbx.d s< *(rax + 8))
    uint64_t rdi_1 = rbx << 3
    
    do
        if (sub_142366560(*(rdi_1 + **(r8 + 0x50))) s> 0)
            break
        
        r8 = *(arg1 + 0x138)
        rbx = zx.q(rbx.d + 1)
        rdi_1 += 8
    while (rbx.d s< *(*(r8 + 0x50) + 8))

if (arg2 != 0 && data_143f50530 != 0)
    void* rax_4 = *(arg1 + 0x138)
    int32_t rcx_2 = *(rax_4 + 0x60)
    int32_t rdx_1 = *(*(rax_4 + 0x50) + 8) - 1
    
    if (rcx_2 s>= rbx.d)
        rbx = zx.q(rdx_1)
        
        if (rcx_2 s< rdx_1)
            rbx = zx.q(rcx_2)
    
    int64_t rax_6 = sx.q(*(arg1 + 0x10))
    int32_t r8_1
    
    if (rax_6.d s< 0 || rax_6.d s>= *(arg2 + 0x158))
        r8_1 = 0
    else
        r8_1 = *(*(arg2 + 0x150) + (rax_6 << 2))
    
    if (r8_1 s>= rbx.d)
        if (r8_1 s< rdx_1)
            rdx_1 = r8_1
        
        rbx = zx.q(rdx_1)

return zx.q(rbx.d)
