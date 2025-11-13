// 函数: sub_142401110
// 地址: 0x142401110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433452a8
arg1[5] = &data_1433455f0
sub_140b19e60()
sub_140b19e60()
sub_140b25ff0(&data_1439a8bd0, &arg1[5])
int64_t* rcx = arg1[0x25]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

sub_1405ded70(&arg1[0x21])
sub_1423feeb0(&arg1[0x1c])
sub_1405ded70(&arg1[0x17])
int64_t rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x12]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0xf]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t i_2 = arg1[0xe].d
int64_t* rdi = arg1[0xd]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_7 = *rdi
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rdi = &rdi[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rdi = arg1[0xd]

if (rdi != 0)
    sub_140a74f90(rdi)

int32_t i_3 = arg1[0xb].d
int64_t* rdi_1 = arg1[0xa]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_9 = *rdi_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rdi_1 = &rdi_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi_1 = arg1[0xa]

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
