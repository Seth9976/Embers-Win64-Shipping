// 函数: sub_1417feb70
// 地址: 0x1417feb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[5]
*arg1 = &data_142fe16a8

if (rdi != 0)
    int64_t* rcx = rdi[0x10]
    
    if (rcx != 0)
        int64_t rdx
        rdx.b = 1
        (*(*rcx + 0x10))(rcx, rdx)
        int64_t* rcx_1 = rdi[0x10]
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x20))(rcx_1, 1)
        
        rdi[0x10] = 0
        rdi = arg1[5]
    
    if (rdi != 0)
        (*(*rdi + 0x28))(rdi, 1)

if (arg1[6] != 0)
    void* rax_4 = arg1[8]
    void* rcx_3 = &arg1[0xa]
    
    if (rax_4 != 0)
        rcx_3 = rax_4
    
    (*(*rcx_3 + 0x10))(rcx_3)

sub_140596d80(&arg1[3])
return sub_140a1d7d0(arg1) __tailcall
