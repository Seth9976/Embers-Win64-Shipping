// 函数: sub_1427c2900
// 地址: 0x1427c2900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x2f]

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 1)

int64_t rcx_1 = arg1[0x20]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x1e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x1c]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

if (arg1[0x14] != 0)
    void* rax_2 = arg1[0x16]
    void* rcx_4 = &arg1[0x18]
    
    if (rax_2 != 0)
        rcx_4 = rax_2
    
    (*(*rcx_4 + 0x10))(rcx_4)

if (arg1[0xc] != 0)
    void* rax_4 = arg1[0xe]
    void* rcx_5 = &arg1[0x10]
    
    if (rax_4 != 0)
        rcx_5 = rax_4
    
    (*(*rcx_5 + 0x10))(rcx_5)

int64_t* rdi = arg1[0xb]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[7] = &data_142e52080
arg1[5] = &data_142d44dd8
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
