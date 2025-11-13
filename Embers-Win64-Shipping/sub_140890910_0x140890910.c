// 函数: sub_140890910
// 地址: 0x140890910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_1405fba70(*arg1, 3)
uint64_t result

if (rax == 0)
    result = sub_1405fba70(*arg1, 1)

if ((rax != 0 || result.b != 0) && (zx.q(arg1[0xc]) & 0x80002) != 0)
    result.b = 1
    return result

result.b = 0
return result
