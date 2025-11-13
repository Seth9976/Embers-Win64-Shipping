// 函数: sub_141c48770
// 地址: 0x141c48770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[3].d)
int32_t rbp = arg4
int64_t* rdi = arg1
int64_t rax

if (arg3 s> rsi.d)
    arg1[3].d = arg3
    
    if (arg3 s> *(arg1 + 0x1c))
        sub_140775270(&arg1[2])
    
    rax, arg1 = memset(rdi[2] + (rsi << 2), 0, sx.q(arg3 - rsi.d) << 2)
else if (arg3 s< rsi.d && arg3 != rsi.d)
    arg1[3].d = arg3
    rax, arg1 = sub_1407758e0(&arg1[2])

bool cond:1 = *rdi != 0
rdi[1] = arg2
rdi[6].d = rbp

if (not(cond:1))
    arg1.b = 1
    rax = sub_140a491d0(arg1.b)
    rbp = rdi[6].d
    *rdi = rax

if (rbp != 2)
    return 

rax = zx.q(arg3 * 2)
int64_t rbx_1 = sx.q(rdi[5].d)

if (rax.d s> rbx_1.d)
    rdi[5].d = rax.d
    
    if (rax.d s> *(rdi + 0x2c))
        sub_14085a250(&rdi[4])
    
    return memset(rbx_1 + rdi[4], 0, sx.q(rax.d - rbx_1.d)) __tailcall

if (rax.d s< rbx_1.d && rax.d != rbx_1.d)
    rdi[5].d = rax.d
    sub_14085a6a0(&rdi[4])
