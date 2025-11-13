// 函数: sub_1420d0f30
// 地址: 0x1420d0f30
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

int32_t rax_1

if (arg3 s>= 0)
    rax_1 = rcx
    
    if (arg3 s< rcx)
        rax_1 = arg3
else
    rax_1 = 0

*arg1 = 0
arg1[1] = 0
int16_t* rsi = &r9_1[sx.q(rcx) - sx.q(rax_1)]

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rdx = arg1[1].d
    
    int32_t rax_3 = rdx + rbx_1.d + 1
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, rsi, (rbx_1.d + 1) * 2)

return arg1
