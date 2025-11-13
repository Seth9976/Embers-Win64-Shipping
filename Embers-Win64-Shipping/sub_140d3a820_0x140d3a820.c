// 函数: sub_140d3a820
// 地址: 0x140d3a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t rsi = *arg2
int64_t rdi = sx.q(rbx[1].d)
int32_t rax = (rdi + 1).d
rbx[1].d = rax

if (rax s> *(rbx + 0xc))
    sub_1405a4d70(rbx)

int64_t result = *rbx
*(result + (rdi << 3)) = rsi
return result
