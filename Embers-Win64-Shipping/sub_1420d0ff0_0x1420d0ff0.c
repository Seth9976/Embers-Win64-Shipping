// 函数: sub_1420d0ff0
// 地址: 0x1420d0ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t rdx = 0
int32_t rcx = rax - 1

if (rax == 0)
    rcx = 0

int16_t* const r9_1

if (rax == 0)
    r9_1 = &data_142d40450
else
    r9_1 = *arg2

int32_t rax_2 = rcx - arg3
int32_t r8

if (rcx - arg3 s>= 0)
    r8 = rcx
    
    if (rax_2 s< rcx)
        r8 = rax_2
else
    r8 = 0

*arg1 = 0
arg1[1] = 0
int16_t* rsi = &r9_1[sx.q(rcx) - sx.q(r8)]

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rdx = arg1[1].d
    
    int32_t rax_4 = rdx + rbx_1.d + 1
    arg1[1].d = rax_4
    
    if (rax_4 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, rsi, (rbx_1.d + 1) * 2)

return arg1
