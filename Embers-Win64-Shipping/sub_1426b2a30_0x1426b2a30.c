// 函数: sub_1426b2a30
// 地址: 0x1426b2a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg2
int64_t rbx_1 = zx.q(*(arg1 + 0x52)) + *(zx.q(*(rdi + 0x260)) * 0x58 + *(rdi + 0x110) + 0x30)
uint32_t rax_4 = zx.d((*(*arg1 + 0x298))())

if (rax_4 != 0)
    int64_t rcx_1 = zx.q(rax_4 + 3) & 0xfffffffffffffffc
    
    if (rbx_1 != rcx_1)
        int64_t rax_5 = sx.q(*(rbx_1 - rcx_1))
        
        if (rax_5.d s>= 0 && rax_5.d s< *(rdi + 0x138))
            return *(*(rdi + 0x130) + (rax_5 << 3))

return 0
