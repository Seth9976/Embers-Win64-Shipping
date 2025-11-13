// 函数: sub_140db87d0
// 地址: 0x140db87d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140d9fc00(&arg1[2], arg2)
uint64_t rbx = zx.q(rax)

if (rax == 0xffffffff)
    rbx = sx.q(arg1[3].d)
    int32_t rax_1 = (rbx + 1).d
    arg1[3].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x1c))
        sub_1405c4fe0(&arg1[2])
    
    sub_140d92d60((rbx << 6) + arg1[2], arg2)

int64_t rsi = sx.q(arg1[1].d)
int32_t rcx_5 = (rsi + 1).d
arg1[1].d = rcx_5

if (rcx_5 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rsi << 2)) = rbx.d
return zx.q(rbx.d)
