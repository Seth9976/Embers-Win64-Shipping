// 函数: sub_140f69f30
// 地址: 0x140f69f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x7e]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0x7b])
sub_140745b20(&arg1[0x77])
int64_t* rcx_4 = arg1[0x75]

if (rcx_4 != 0)
    int32_t temp1_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* rcx_5 = arg1[0x73]

if (rcx_5 != 0)
    int32_t temp3_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

sub_1406922a0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_140a74f90(arg1)
return arg1
