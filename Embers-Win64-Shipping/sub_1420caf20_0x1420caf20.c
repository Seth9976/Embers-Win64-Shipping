// 函数: sub_1420caf20
// 地址: 0x1420caf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int16_t* rsi

if (rax == 0)
    rsi = &data_142d40450
else
    rsi = *arg2

int32_t rdi = rax - 1

if (rax == 0)
    rdi = 0

if (arg3 s< 0)
    rdi = 0
else if (arg3 s< rdi)
    rdi = arg3

*arg1 = 0
arg1[1] = 0

if (rsi != 0 && *rsi != 0 && rdi s> 0)
    int32_t rdx = 0
    
    if (rdi + 1 s> 0)
        sub_1405947f0(arg1, rdi + 1)
        rdx = arg1[1].d
    
    int32_t rax_3 = rdi + 1 + rdx
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, rsi, rdi * 2)
    *(*arg1 + (sx.q(arg1[1].d) << 1) - 2) = 0

return arg1
