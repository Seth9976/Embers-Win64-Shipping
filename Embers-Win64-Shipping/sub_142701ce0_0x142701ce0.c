// 函数: sub_142701ce0
// 地址: 0x142701ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[0x6e].b

if (rax == 0)
    return 1

if (rax u> 3)
    return 0

void* rbx = *(arg1 + 0x100)

if (rbx == 0)
    return 0

if (*(rbx + 0x70) == data_143f71450.d)
    arg1.b = 1
else
    arg1 = *(rbx + 0x78)
    
    if (arg1 == 0)
        arg1.b = 0
    else
        char rax_3
        rax_3, arg1 = sub_14268a5a0(arg1, &data_143f71450)
        
        if (rax_3 != 0)
            arg1.b = 1
        else
            arg1.b = 0

void* const rax_4 = nullptr

if (arg1.b != 0)
    rax_4 = rbx

if (rax_4 != 0)
    return 2

uint32_t rax_7
rax_7.b = not.b((*(rbx + 0x98) u>> 2).b)
return zx.q((rax_7 & 1) + 3)
