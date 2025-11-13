// 函数: sub_1421bf0f0
// 地址: 0x1421bf0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
uint64_t rbx
rbx.b = 0
int32_t rdi = 0

if (*(rax + 0x48) s<= 0)
    return 0

while (rbx.b == 0)
    void* rax_1 = sub_142192ca0(rax, rdi)
    
    if (rax_1 != 0)
        rbx = zx.q(rbx.b)
        
        if (*(*(rax_1 + 0x30) + 0xa9) != 0)
            rbx = 1
    
    rax = *(arg1 + 0x10)
    rdi += 1
    
    if (rdi s>= *(rax + 0x48))
        if (rbx.b == 0)
            return 0
        
        break

*(arg1 + 0x38) = *(arg1 + 0x10c)
return 8
