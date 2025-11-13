// 函数: sub_14067e5d0
// 地址: 0x14067e5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x20)
void* rbx = arg2
int32_t rdx = *(arg1 + 0x1c)
int64_t r8 = *(arg1 + 0x14)
char rcx = *(arg1 + 8)
*(rbx + 0x60) = rcx

if (rcx != 0)
    int64_t rdi_1 = sx.q(*(rbx + 0x58))
    int32_t var_20_1 = rdx
    int32_t rax = (rdi_1 + 1).d
    *(rbx + 0x58) = rax
    
    if (rax s> *(rbx + 0x5c))
        sub_140679970(rbx, rdi_1.d)
    
    void* rax_1 = *(rbx + 0x50)
    int64_t rcx_2 = rdi_1 * 5
    
    if (rax_1 != 0)
        rbx = rax_1
    
    result = zx.q(result:4.d)
    *(rbx + (rcx_2 << 2)) = r8.o
    *(rbx + (rcx_2 << 2) + 0x10) = result.d

return result
