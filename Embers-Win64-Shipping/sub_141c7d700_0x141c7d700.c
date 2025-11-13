// 函数: sub_141c7d700
// 地址: 0x141c7d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2] = arg3
arg1[7] = 0
arg1[8] = 0
__builtin_memset(&arg1[9], 0, 0x1c)
arg1[0xb] = 0
arg1[0xc] = 0
__builtin_memset(&arg1[3], 0, 0x2c)
void* rcx = &arg1[5]
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0xf]
arg1[9].d = 0xffffffff
arg1[0x15] = 0
arg1[0x16] = 0
__builtin_memset(&arg1[0xd], 0, 0x4c)
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)

if (rax_3 != 0)
    rcx_1 = rax_3

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x19]
arg1[0x13].d = 0xffffffff
arg1[0x1f] = 0
arg1[0x20] = 0
__builtin_memset(&arg1[0x17], 0, 0x4c)
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

__builtin_memset(rcx_2, 0, 0x1c)
arg1[0x1d].d = 0xffffffff
arg1[0x21].b = 0
int64_t* rdi = arg2[1]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg1
