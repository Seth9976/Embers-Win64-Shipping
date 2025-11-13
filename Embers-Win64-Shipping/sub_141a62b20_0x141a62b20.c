// 函数: sub_141a62b20
// 地址: 0x141a62b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[0x10].b
uint64_t rsi = zx.q(arg2)
int64_t* result = arg1

if ((rax & 1) != 0)
    if ((rax & 2) == 0)
        arg1 = *arg1
    
    result[0x10].b = rax & 0xfe
    (**arg1)(arg1, 0)
    rax = result[0x10].b
    
    if ((rax & 2) == 0)
        sub_140a74f90(*result)
        rax = result[0x10].b

if (rsi.d u> 0x80 || arg3 u> 8)
    arg1.b = 0
else
    arg1.b = 2

rax = (rax & 0xfd) | arg1.b
result[0x10].b = rax

if ((rax & 2) == 0)
    *result = sub_140a82f30(rsi, zx.q(arg3))
    rax = result[0x10].b

rax |= 1
result[0x10].b = rax

if ((rax & 2) != 0)
    return result

return *result
