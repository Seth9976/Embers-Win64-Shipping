// 函数: sub_1404f7e50
// 地址: 0x1404f7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x60)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(&rax[1], 0, 0x18)
    void* rcx_1 = &rbx[4]
    *rbx = &data_14306c748
    *(rcx_1 + 0x1c) = 0x80
    void* rax_1 = *(rcx_1 + 0x10)
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    __builtin_memset(rcx_1, 0, 0x1c)
    rbx[8].d = 0xffffffff
    *(rbx + 0x44) = 0
    rbx[0xa] = 0
    rbx[0xb].d = 0

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142e4cf50
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

data_143f2d390 = rbx
data_143f2d398 = rax_2
return atexit(sub_142cf5670) __tailcall
