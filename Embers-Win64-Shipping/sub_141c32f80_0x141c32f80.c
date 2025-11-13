// 函数: sub_141c32f80
// 地址: 0x141c32f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432051b8
int64_t rcx = arg1[0x19]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x18].d = 0
int64_t rcx_1 = arg1[0x17]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1409f43d0(&arg1[0xf])
int32_t i_2 = arg1[0xe].d
void* rdi = arg1[0xd]

if (i_2 != 0)
    int32_t i
    
    do
        sub_141c31cb0(rdi)
        rdi += 0x48
        i = i_2
        i_2 -= 1
    while (i != 1)
    rdi = arg1[0xd]

if (rdi != 0)
    sub_140a74f90(rdi)

int32_t i_3 = arg1[0xc].d
void* rdi_1 = arg1[0xb]

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_141c32280(rdi_1)
        rdi_1 += 0x48
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi_1 = arg1[0xb]

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

sub_141c31640(&arg1[9])
int64_t* rdi_2 = arg1[8]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp3_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t rcx_10 = arg1[5]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*arg1 = &data_142fe6aa8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
