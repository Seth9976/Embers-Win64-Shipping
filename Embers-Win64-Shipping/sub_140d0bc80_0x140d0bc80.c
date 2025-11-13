// 函数: sub_140d0bc80
// 地址: 0x140d0bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
uint32_t rdi_2 = (*(arg1 + 0x1c) + 0x1f) u>> 5
uint32_t rbx

if (rdi_2 u> 4)
    rbx = (sub_140a846a0(zx.q(rdi_2) << 2, 0) u>> 2).d
    
    if (rdi_2 s> rbx)
        rbx = 0x7fffffff
else
    rbx = 4

*(rsi + 0x1c) = rbx << 5
uint64_t rdi_4 = zx.q((arg2 + 0x1f) u>> 5)
int64_t result = sub_1405a4a00(rsi, rdi_4.d, rbx, 4)

if (rbx == 0 || rbx u<= rdi_4.d)
    return result

void* rax_2 = *(rsi + 0x10)

if (rax_2 != 0)
    rsi = rax_2

return memset(rsi + (rdi_4 << 2), 0, zx.q(rbx - rdi_4.d) << 2)
