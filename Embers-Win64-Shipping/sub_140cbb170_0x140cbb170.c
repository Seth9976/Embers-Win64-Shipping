// 函数: sub_140cbb170
// 地址: 0x140cbb170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi

if (*(arg1 - 0x18) == 0)
    rsi = &data_142d40450
else
    rsi = *(arg1 - 0x20)

int32_t rcx = 0
*arg2 = 0
arg2[1] = 0

if (rsi != 0 && *rsi != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rsi[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(arg2, rdi_1.d + 1)
        rcx = arg2[1].d
    
    int32_t rax_1 = rcx + rdi_1.d + 1
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rsi, (rdi_1.d + 1) * 2)

return arg2
