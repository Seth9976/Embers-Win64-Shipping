// 函数: sub_14266a200
// 地址: 0x14266a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = data_143f714b0
sub_140b34200("PathfindingSync", r14)

if (sub_140d3e110(arg2 + 0x40) == 0)
    sub_140d3a3a0(arg2 + 0x40, *(arg1 + 0x28))

uint64_t rdi
rdi.b = 0

if (sub_140d3e110(arg2 + 0x40) != 0)
    int64_t rax_2 = sub_140d3c6e0(arg2 + 0x40)
    char rax_3
    
    if (arg3 != 1)
        rax_3 = (*(rax_2 + 0x2c8))(arg2 + 0x58, arg2, arg4)
    else
        rax_3 = (*(rax_2 + 0x2d0))(arg2 + 0x58, arg2, arg4)
    
    rdi = zx.q(rax_3)

sub_140b38680("PathfindingSync", r14)
sub_142645530(arg2)
return zx.q(rdi.b)
