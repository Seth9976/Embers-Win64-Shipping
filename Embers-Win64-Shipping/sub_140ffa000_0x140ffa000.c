// 函数: sub_140ffa000
// 地址: 0x140ffa000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = nullptr
int32_t rbp = arg3
int32_t arg_8 = 0
int64_t* rax_2
int64_t* rbx_1
int32_t rdi

if (arg4 == 0)
    rbx_1 = arg_8.q
    rax_2 = nullptr
    rdi = 2
else
    arg3.b = 1
    sub_140fdf350(arg1 - 0x18, *(arg4 + 0x20), arg3.b)
    void* rdx_1 = *(arg4 + 0x20)
    int32_t rax = *(arg1 + 0x40e8)
    *(rdx_1 + 0x10) = 1
    *(rdx_1 + 0xc) = rax
    rbx_1 = *(arg4 + 0x18)
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 8))(rbx_1)
    
    rcx = arg_8.q
    rax_2 = rbx_1
    rdi = 1

int64_t* arg_20 = rax_2

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    
    if (rcx != 0)
        (*(*rcx + 0x10))(rcx)

if ((rdi.b & 1) != 0 && rbx_1 != 0)
    (*(*rbx_1 + 0x10))(rbx_1)

int64_t* rcx_4 = *(arg1 + 0x138)
arg_8 = 0xffffffff
return (*(*rcx_4 + 0x220))(rcx_4, zx.q(rbp), 1, &arg_20, &arg_8)
