// 函数: sub_1413bf520
// 地址: 0x1413bf520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
void* rbx = &arg1[2]
void* rsi = arg2 + 0x88
void* rax
rax.b = *(*(arg2 + 8) + 0x32) == 2
arg1[1].b = rax.b
*(rbx + 8) = 0
int64_t rbp = sx.q(*(rsi + 0x10))
void* r14 = *(rsi + 8)
*(rbx + 0x10) = rbp.d

if (rbp.d != 0)
    sub_1405e3d70(rbx, rbp.d, 0)
    void* rax_1 = *(rbx + 8)
    
    if (r14 != 0)
        rsi = r14
    
    if (rax_1 != 0)
        rbx = rax_1
    
    memcpy(rbx, rsi, (rbp << 2).d)
else
    *(rbx + 0x14) = 1

return arg1
