// 函数: sub_14282e44c
// 地址: 0x14282e44c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0x7fffffffffffffff

if (arg2 u> 0x7fffffffffffffff)
    sub_1405871e0()
    noreturn

int64_t rsi = arg1[3]
int64_t rcx_1 = arg2 | 0xf

if (rcx_1 u<= 0x7fffffffffffffff)
    uint64_t rdx_1 = rsi u>> 1
    
    if (rsi u<= 0x7fffffffffffffff - rdx_1)
        int64_t rax_2 = rdx_1 + rsi
        rdi = rcx_1
        
        if (rcx_1 u< rax_2)
            rdi = rax_2

void* rax_3 = sub_14058b9f0(rdi + 1)
void* arg_10 = rax_3
arg1[2] = arg2
arg1[3] = rdi
memset(rax_3, sx.d(arg4), arg2)
*(rax_3 + arg2) = 0

if (rsi u< 0x10)
    sub_14058b9e0(arg1, &arg_10)
else
    sub_14058ba50(*arg1, rsi + 1)
    *arg1 = rax_3

return arg1
