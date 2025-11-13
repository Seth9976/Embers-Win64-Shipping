// 函数: sub_141941880
// 地址: 0x141941880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = 0
uint64_t rbx_1

if (arg2 != 0)
    (*(*arg2 + 0x48))(arg2)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rbx_1 = (*(*arg2 + 0x48))(arg2)
else
    rbx_1 = 0

if (arg3 != 0)
    (*(*arg3 + 0x48))(arg3)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rdi = (*(*arg3 + 0x48))(arg3)

if (rbx_1 == 0 || rdi == 0)
    return 

*(rbx_1 + 0x10) = *(rdi + 0x10)
uint64_t rax = zx.q(*(rdi + 0x20))
*(rbx_1 + 0x28) |= 0x80000000
*(rbx_1 + 0x20) = rax.d
