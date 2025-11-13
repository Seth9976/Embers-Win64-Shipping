// 函数: sub_14279e3f0
// 地址: 0x14279e3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x20]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0x1d].d = 0
int64_t rcx_2 = arg1[0x1c]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_14189def0(&arg1[0x14])
int64_t rcx_4 = arg1[0x12]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rdi_1 = arg1[0x11]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (arg1[6] != 0)
    void* rax_5 = arg1[8]
    void* rcx_7 = &arg1[0xa]
    
    if (rax_5 != 0)
        rcx_7 = rax_5
    
    (*(*rcx_7 + 0x10))(rcx_7)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
