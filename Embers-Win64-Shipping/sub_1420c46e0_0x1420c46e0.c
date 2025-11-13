// 函数: sub_1420c46e0
// 地址: 0x1420c46e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
arg1.b = 1
int16_t* rax = sub_140b73b20(arg1.b)
int32_t rcx = 0
*result = 0
result[1] = 0

if (rax != 0 && *rax != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rax[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(result, rbx_1.d + 1)
        rcx = result[1].d
    
    int32_t rax_1 = rcx + rbx_1.d + 1
    result[1].d = rax_1
    
    if (rax_1 s> *(result + 0xc))
        sub_140594770(result)
    
    UnDecorator::getReferenceType(*result, rax, (rbx_1.d + 1) * 2)

return result
