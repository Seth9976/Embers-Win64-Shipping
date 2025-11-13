// 函数: sub_1405a4980
// 地址: 0x1405a4980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x1c)

if (arg2 s<= result)
    return result

uint64_t rcx = 4
uint64_t rdi_2 = zx.q((arg2 + 0x1f) u>> 5)

if (rdi_2.d u> 4)
    if (result + 0x1f u>= 0x20 || zx.q(rdi_2.d) u> 4)
        rcx = rdi_2 + 0x10 + ((rdi_2 * 3) u>> 3)
    
    uint32_t rax_4 = (sub_140a846a0(rcx << 2, 0) u>> 2).d
    
    if (rdi_2.d s> rax_4)
        rax_4 = 0x7fffffff
    
    rcx = zx.q(rax_4)

int32_t rdx_1 = *(arg1 + 0x18)
*(arg1 + 0x1c) = rcx.d << 5
return sub_1405a4410(arg1, rdx_1)
