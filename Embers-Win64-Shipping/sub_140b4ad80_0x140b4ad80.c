// 函数: sub_140b4ad80
// 地址: 0x140b4ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg1[5])
uint64_t rcx_2 = zx.q(r9.d u>> 3) & 0x3f
int64_t rdx = (zx.q(arg1[6]) << 0x20 | r9) + (arg3 << 3)
arg1[5] = rdx.d
arg1[6] = (rdx u>> 0x20).d
void* rdi

if (rcx_2 + arg3 u<= 0x3f)
    rdi = nullptr
else
    rdi = 0x40 - rcx_2
    memcpy(rcx_2 + 0x20 + arg1, arg2, rdi.d)
    sub_140b49300(arg1, arg1, &arg1[8])
    
    for (void* i = rdi + 0x3f; i u< arg3; i += 0x40)
        sub_140b49300(arg1, arg1, arg2 - 0x3f + i)
        rdi += 0x40
    
    rcx_2 = 0

return memcpy(rcx_2 + &arg1[8], rdi + arg2, arg3.d - rdi.d) __tailcall
