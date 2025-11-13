// 函数: sub_14186b4f0
// 地址: 0x14186b4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe6aa0
arg1[0x14].d
arg1[0x14].d = 1

if (arg1[0x10] != 0)
    while (true)
        void* rcx = arg1[0x10]
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            
            if ((*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0) != 0)
                break

if (arg1[0x12] != 0)
    while (true)
        void* rcx_2 = arg1[0x12]
        
        if (rcx_2 != 0)
            int64_t* rcx_3 = *(rcx_2 + 0x70)
            
            if ((*(*rcx_3 + 0x20))(rcx_3, 0xffffffff, 0) != 0)
                break

sub_140a4fc50(arg1[0x18])
sub_14090dae0(&arg1[0x16])
int64_t* rdi = arg1[0x13]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_7 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x11]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

if (arg1[8] != 0)
    void* rax_12 = arg1[0xa]
    void* rcx_10 = &arg1[0xc]
    
    if (rax_12 != 0)
        rcx_10 = rax_12
    
    (*(*rcx_10 + 0x10))(rcx_10)

sub_140846380(&arg1[6])
*arg1 = &data_142d40478

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
