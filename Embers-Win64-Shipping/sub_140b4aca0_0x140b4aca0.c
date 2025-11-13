// 函数: sub_140b4aca0
// 地址: 0x140b4aca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1[4])
uint64_t rcx_2 = zx.q(rax.d u>> 3) & 0x3f
void* rdi = 0x40 - rcx_2
int64_t rax_1 = (zx.q(arg1[5]) << 0x20 | rax) + (arg3 << 3)
arg1[4] = rax_1.d
arg1[5] = (rax_1 u>> 0x20).d

if (arg3 u< rdi)
    rdi = nullptr
else
    memcpy(rcx_2 + 0x18 + arg1, arg2, rdi.d)
    sub_140b48a30(arg1, arg1, &arg1[6])
    
    for (void* i = rdi + 0x3f; i u< arg3; i += 0x40)
        sub_140b48a30(arg1, arg1, arg2 - 0x3f + i)
        rdi += 0x40
    
    rcx_2 = 0

return memcpy(rcx_2 + &arg1[6], rdi + arg2, arg3.d - rdi.d) __tailcall
