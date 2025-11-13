// 函数: sub_140d977d0
// 地址: 0x140d977d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec2888
DeleteCriticalSection(&arg1[0x1d])
sub_140596eb0(&arg1[0x1a])
sub_140596eb0(&arg1[0x17])
int64_t* rdi = arg1[0x16]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140d72800(&arg1[9])
int64_t* rdi_1 = arg1[5]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140d94cb0(&arg1[2])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
