// 函数: sub_141d33e40
// 地址: 0x141d33e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*arg1 = &data_143222700
int64_t* rbx = arg1[0xb]
uint64_t r14_1 = sx.q(arg1[0xc].d) << 3 u>> 3

if (rbx u> &rbx[arg1[0xc]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)
    
    rbx = arg1[0xb]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

if (arg1[2] != 0)
    void* rax_4 = arg1[4]
    void* rcx_3 = &arg1[6]
    
    if (rax_4 != 0)
        rcx_3 = rax_4
    
    (*(*rcx_3 + 0x10))(rcx_3)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
