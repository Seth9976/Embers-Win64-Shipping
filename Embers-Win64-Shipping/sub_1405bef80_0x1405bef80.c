// 函数: sub_1405bef80
// 地址: 0x1405bef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1 = (*(*arg1 + 0x150))()
int64_t rbx

if (rax_1 == 0)
    rbx.b = 0
else if (sub_14243ade0(rax_1).b == 0)
    rbx.b = 0
else
    rbx.b = 1

if (arg1[0x44].b == 0 || ((arg1[1].d u>> 4).b & 1) != 0)
    rax_1.b = 0
else
    rax_1.b = 1

rbx.b &= rax_1.b
void* rax_3 = sub_141dc9840(arg1)

if (rax_3 != 0)
    char rax_4 = sub_1420e6390(rax_3)
    char rax_5
    
    if (rax_4 != 0)
        rax_5 = sub_1420e6320(rax_3)
    
    if (rax_4 == 0 || rax_5 == 0)
        rbx.b = 0

return zx.q(rbx.b)
