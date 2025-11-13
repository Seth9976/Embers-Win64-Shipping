// 函数: sub_1426ae890
// 地址: 0x1426ae890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rsi = u"false"

if (*arg4 != 0)
    rsi = u"true"

int32_t rcx = 0
*arg2 = 0
arg2[1] = 0

if (*rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_1.d + 1)
        rcx = arg2[1].d
    
    int32_t rax_1 = rcx + rbx_1.d + 1
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rsi, (rbx_1.d + 1) * 2)

return arg2
