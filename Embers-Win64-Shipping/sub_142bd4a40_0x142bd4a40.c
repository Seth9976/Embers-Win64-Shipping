// 函数: sub_142bd4a40
// 地址: 0x142bd4a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x20)

if (r9 == 0 || *(arg1 + 0x19) == 0)
    return sub_142b93e80(arg2, *(arg1 + 0x1c)) __tailcall

int32_t rax = *(arg1 + 0x24)

if (rax u< r9 - 1)
    int32_t rdx = rax + 1
    
    while (arg2 s>= *((zx.q(rdx) << 5) + arg1 + 0x38))
        rax += 1
        rdx += 1
        
        if (rax u>= r9 - 1)
            break

if (rax != 0)
    void* rdx_2 = arg1 + 0x38 + (zx.q(rax) << 5)
    
    while (arg2 s< *rdx_2)
        rdx_2 -= 0x20
        int32_t temp0_1 = rax
        rax -= 1
        
        if (temp0_1 == 1)
            break

*(arg1 + 0x24) = rax

if (rax == 0)
    int32_t rcx_4 = *(arg1 + 0x38)
    
    if (arg2 s< rcx_4)
        return zx.q(sub_142b93e80(arg2 - rcx_4, *(arg1 + 0x1c)) + *(arg1 + 0x3c))

uint64_t rbx_1 = zx.q(rax) << 5
return zx.q(sub_142b93e80(arg2 - *(rbx_1 + arg1 + 0x38), *(((zx.q(rax) + 2) << 5) + arg1))
    + *(rbx_1 + arg1 + 0x3c))
