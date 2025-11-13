// 函数: sub_1420193b0
// 地址: 0x1420193b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_14329dff8
arg1[5] = &data_14329e378
arg1[7] = 0
arg1[8] = 0
__builtin_memset(&arg1[0xa], 0, 0x20)
arg1[0xe] = 2
__builtin_memset(&arg1[0xf], 0, 0x28)
arg1[0x14] = 2
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 2
void*** rax = j_sub_140a82f30(0x160)
void*** rax_1

if (rax == 0)
    rax_1 = nullptr
else
    rax_1 = sub_1423cf3a0(rax, arg1)

arg1[0x18] = rax_1
int64_t* rax_2 = j_sub_140a82f30(0x60)
int64_t* rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    memset(&rax_2[2], 0, 0x50)
    *rbx = 0
    void* rcx_2 = &rbx[2]
    rbx[1] = 0
    *(rcx_2 + 0x10) = 0
    *(rcx_2 + 0x18) = 0
    *(rcx_2 + 0x1c) = 0x80
    void* rax_3 = *(rcx_2 + 0x10)
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    *rcx_2 = 0
    *(rcx_2 + 8) = 0
    rbx[6].d = 0xffffffff
    *(rbx + 0x34) = 0
    rbx[8] = 0
    rbx[9].d = 0
    rbx[0xa] = 0
    rbx[0xb] = 0

arg1[0x19] = rbx
sub_1423a50c0(&arg1[0x1a], sub_1424b2690())
arg1[0x1a] = &data_143297e10
return arg1
