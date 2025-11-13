// 函数: sub_142bdad00
// 地址: 0x142bdad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2)
void* rdx = result * 0xcc
int32_t rdi = *(rdx + arg1 + 8)
void* rbx = rdx + arg1
int32_t rsi = *(rdx + arg1 + 0xcc)

if (rdi != 0)
    int32_t rax = sub_142b93e80(*(rbx + 0xc), rsi)
    *(rbx + 0x10) = rax
    result = zx.q(rax + 0x20) & 0xffffffc0
    *(rbx + 0x14) = result.d
    void* rbx_1 = rbx + 0x18
    int32_t i_1 = rdi - 1
    
    if (rdi != 1)
        int32_t i
        
        do
            int32_t rax_2 = sub_142b93e80(*rbx_1, rsi)
            rbx_1 += 0xc
            int32_t rdx_4 = rax_2 - *(rbx + 0x10)
            int32_t rcx_3 = neg.d(rdx_4)
            
            if (rdx_4 s>= 0)
                rcx_3 = rdx_4
            
            if (rcx_3 s< 0x80)
                rax_2 = *(rbx + 0x10)
            
            *(rbx_1 - 8) = rax_2
            result = zx.q(rax_2 + 0x20) & 0xffffffc0
            *(rbx_1 - 4) = result.d
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
