// 函数: sub_1428d3c90
// 地址: 0x1428d3c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
char* r8 = arg1 + 0x10
uint64_t r9 = arg2

while (true)
    uint64_t rcx = zx.q(r8[-1])
    r8 = &r8[-1]
    uint64_t rax_1 = result + rcx + zx.q(r9.b)
    *r8 = rax_1.b
    uint64_t r10_1 = r9
    result = rax_1 u>> 8
    r9 u>>= 8
    
    if (r8 + -8 - arg1 == 0)
        break
    
    if (r10_1 u< 0x100)
        if (rax_1 u< 0x100)
            break

return result
