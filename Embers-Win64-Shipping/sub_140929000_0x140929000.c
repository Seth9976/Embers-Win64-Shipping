// 函数: sub_140929000
// 地址: 0x140929000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg1 + 0x188))()
wchar16 const* const rsi

if (rax_1 == 0)
    rsi = u"Development"
else if (rax_1 == 1)
    rsi = u"Certification"
else if (rax_1 == 2)
    rsi = u"Production"
else
    rsi = u"Unknown"

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
    
    int32_t rax_3 = rcx + rbx_1.d + 1
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rsi, (rbx_1.d + 1) * 2)

return arg2
