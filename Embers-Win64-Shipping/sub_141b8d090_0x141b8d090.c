// 函数: sub_141b8d090
// 地址: 0x141b8d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x84]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_2 = arg1[0x81]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x7f]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x7d]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x7b]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x79]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x25] = &data_142d8ad20
sub_140691a20(&arg1[0x59])
sub_140691a20(&arg1[0x48])
sub_140691a20(&arg1[0x37])
sub_140691a20(&arg1[0x26])
arg1[0x25] = &data_142d8ad00
int64_t rcx_11 = arg1[0x21]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_140660b20(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
