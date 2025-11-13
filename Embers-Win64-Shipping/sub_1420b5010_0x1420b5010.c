// 函数: sub_1420b5010
// 地址: 0x1420b5010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int64_t rbx = *arg2
int64_t rsi = sx.q(rdi[1].d)
int32_t rax = (rsi + 1).d
rdi[1].d = rax

if (rax s> *(rdi + 0xc))
    sub_1405a4d70(rdi)

*(*rdi + (rsi << 3)) = rbx
int64_t result
result.b = 1
return result
