// 函数: sub_1405b54f0
// 地址: 0x1405b54f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140d3e110(arg1 + 0x18)

if (result == 0)
    return result

int64_t* i = *arg2
int64_t rdi
rdi.b = 0

for (; i != &i[sx.q(arg2[1].d)]; i = &i[1])
    void* rcx_2 = *i
    
    if (rcx_2 != 0 && *(rcx_2 + 0xd64) != 0)
        rdi.b = 1
        break

return sub_1405ce750(sub_140d3c6e0(arg1 + 0x18), rdi.b)
