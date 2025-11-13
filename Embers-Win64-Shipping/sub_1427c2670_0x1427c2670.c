// 函数: sub_1427c2670
// 地址: 0x1427c2670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e] != 0)
    void* rax_1 = arg1[0x20]
    void* rcx = &arg1[0x22]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[0x16] != 0)
    void* rax_3 = arg1[0x18]
    void* rcx_1 = &arg1[0x1a]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rdi = arg1[0x15]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_4 = arg1[0xd]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xb]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[5] = &data_142d44dd8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
