// 函数: sub_1421246f0
// 地址: 0x1421246f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void* rbx_1 = arg1
uint64_t rax
void* rax_1
void* rdx_2

do
    rax = zx.q(*(rbx_1 + 0xe8))
    
    if (rax.d s> 0)
        int64_t rdi_1 = 0
        uint64_t i_1 = zx.q(rax.d)
        uint64_t i
        
        do
            sub_140664c50(arg2, *(rbx_1 + 0xe0) + rdi_1)
            rdi_1 += 0x24
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    rbx_1 = *(rbx_1 + 0xd0)
    
    if (rbx_1 == 0)
        break
    
    rax_1 = sub_142543020()
    rdx_2 = *(rbx_1 + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx_2 + 0x38))
        break
while (*(*(rdx_2 + 0x30) + (rax << 3)) == rax_1 + 0x30)
