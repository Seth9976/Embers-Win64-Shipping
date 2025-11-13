// 函数: sub_140d0be00
// 地址: 0x140d0be00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
uint64_t rdi_2 = zx.q((*(arg1 + 0x18) + 0x1f) u>> 5)
uint32_t rbx

if (rdi_2.d u> 4)
    int64_t rdx = 4
    
    if (*(rsi + 0x1c) + 0x1f u>= 0x20 || zx.q(rdi_2.d) u> 4)
        rdx = rdi_2 + 0x10 + ((rdi_2 * 3) u>> 3)
    
    rbx = (sub_140a846a0(rdx << 2, 0) u>> 2).d
    
    if (rdi_2.d s> rbx)
        rbx = 0x7fffffff
else
    rbx = 4

*(rsi + 0x1c) = rbx << 5
uint64_t rdi_4 = zx.q((arg2 + 0x1f) u>> 5)
int64_t result = sub_1405a4a00(rsi, rdi_4.d, rbx, 4)

if (rbx == 0 || rbx u<= rdi_4.d)
    return result

void* rax_6 = *(rsi + 0x10)

if (rax_6 != 0)
    rsi = rax_6

return memset(rsi + (rdi_4 << 2), 0, zx.q(rbx - rdi_4.d) << 2)
