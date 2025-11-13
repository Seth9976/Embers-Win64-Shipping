// 函数: sub_142c3e860
// 地址: 0x142c3e860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x18)
int32_t rbx = 0
int32_t result

if ((*(rax + 0x28))(rax, arg5, *(rax + 0x68)) u>= 0x20)
    result = 0
else
    void* rax_2 = *(arg1 + 0x18)
    result = 1 << (*(rax_2 + 0x28))(rax_2, zx.q(arg2), *(rax_2 + 0x68))

if ((result & 0x1c00) != 0)
    result.b = 0
else if (arg2 != 0x9af || arg3 != 0x9bc)
    void* r10_1 = *(arg1 + 0x18)
    *arg4 = 0
    
    if (arg2 != 0 && arg3 != 0)
        rbx = (*(r10_1 + 0x40))(r10_1, zx.q(arg2), zx.q(arg3), arg4, *(r10_1 + 0x80))
    
    result.b = rbx != 0
else
    *arg4 = 0x9df
    result.b = 1

return result
