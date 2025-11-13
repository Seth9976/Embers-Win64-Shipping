// 函数: sub_140972600
// 地址: 0x140972600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[6].d s> arg4)
    int64_t rax
    rax.b = 0
    return rax

int32_t i = arg1[7].d
uint64_t rsi
rsi.b = 0
uint64_t rdi
uint64_t arg_18 = rdi

if (i s> arg2)
    rdi = zx.q(arg2)
    
    do
        bool cond:1_1 = (*(*arg1 + 0x310))(arg1, zx.q(rdi.d)) s> 0
        rsi = zx.q(rsi.b)
        i = arg1[7].d
        
        if (cond:1_1)
            rsi = 1
        
        rdi = zx.q(rdi.d + 1)
    while (rdi.d s< i)

rdi.b = 0

if (*(arg1 + 0x3c) s> arg3)
    int32_t i_1 = 0
    
    if (i s> 0)
        do
            rdi = zx.q(rdi.b)
            
            if ((*(*arg1 + 0x310))(arg1, zx.q(i_1)) s> arg3)
                rdi = 1
            
            i_1 += 1
        while (i_1 s< arg1[7].d)

if (rsi.b != 0 || rdi.b != 0)
    i.b = 0
    return i

int64_t rax_4 = *arg1
arg1[7].d = arg2
*(arg1 + 0x3c) = arg3
*(arg1 + 0x34) = arg4
(*(rax_4 + 0x340))(arg1)
int64_t rax_5
rax_5.b = 1
return rax_5
