// 函数: sub_140a54c20
// 地址: 0x140a54c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rsi = u"false"

if (*arg2 != 0)
    rsi = u"true"

int32_t rcx = 0
*arg1 = 0
arg1[1] = 0

if (*rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rcx = arg1[1].d
    
    int32_t rax_1 = rcx + rbx_1.d + 1
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    memcpy(*arg1, rsi, (rbx_1.d + 1) * 2)

return arg1
