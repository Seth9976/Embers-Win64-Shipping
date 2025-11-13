// 函数: sub_141e0b880
// 地址: 0x141e0b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x14)

if (arg2 s<= result)
    return result

uint64_t rdi_2 = zx.q((arg2 + 0x1f) u>> 5)
uint32_t rax

if (rdi_2.d u> 1)
    int64_t rdx = 4
    
    if (result + 0x1f u>= 0x20 || zx.q(rdi_2.d) u> 4)
        rdx = rdi_2 + 0x10 + ((rdi_2 * 3) u>> 3)
    
    rax = (sub_140a846a0(rdx << 2, 0) u>> 2).d
    
    if (rdi_2.d s> rax)
        rax = 0x7fffffff
else
    rax = 1

int32_t rdx_2 = *(arg1 + 0x10)
*(arg1 + 0x14) = rax << 5
return sub_141dd36e0(arg1, rdx_2)
