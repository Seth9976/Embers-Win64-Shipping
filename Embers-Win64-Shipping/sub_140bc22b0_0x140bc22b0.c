// 函数: sub_140bc22b0
// 地址: 0x140bc22b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x37]
*arg1 = &data_142e868b8

if (rdi != 0)
    int64_t* rcx = *(rdi + 0x20)
    
    if (rcx == 0)
        bool z_1
        
        if (0 == *(rdi + 0x10))
            *(rdi + 0x10) = 0
            z_1 = true
        else
            *(rdi + 0x10)
            z_1 = false
        
        if (not(z_1))
            sub_140bc50a0(*(rdi + 8))
            *(rdi + 0x10) -= 1
        
        goto label_140bc2332
    
    if ((*(*rcx + 0x18))(rcx, rdi) == 0)
    label_140bc2332:
        
        if (*(rdi + 0x20) != 0)
            int64_t* rcx_4 = *(rdi + 0x18)
            (*(*rcx_4 + 0x20))(rcx_4, 0xffffffff, 0)
            *(rdi + 0x20) = 0
    else
        sub_140bc50a0(*(rdi + 8))
        *(rdi + 0x10) -= 1
        int64_t* rcx_2 = *(rdi + 0x18)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x10))(rcx_2)
        
        *(rdi + 0x20) = 0
    
    int64_t* rcx_5 = arg1[0x37]
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5, 1)

if (arg1[0x34] == 0)
    sub_140a74f90(arg1[0x35])
    arg1[0x35] = 0

if (arg1[0x2c] != 0)
    void* rax_7 = arg1[0x2e]
    void* rcx_7 = &arg1[0x30]
    
    if (rax_7 != 0)
        rcx_7 = rax_7
    
    (*(*rcx_7 + 0x10))(rcx_7)

int64_t rcx_8 = arg1[0x29]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
