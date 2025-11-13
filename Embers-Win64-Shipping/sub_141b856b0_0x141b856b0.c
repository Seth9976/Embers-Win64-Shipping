// 函数: sub_141b856b0
// 地址: 0x141b856b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x6b]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x69]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x67]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x65]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x63]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x61]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* rdi = arg1[0x60]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_8 = arg1[0x5d]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140745b20(&arg1[0x59])
sub_140596eb0(&arg1[0x56])
sub_140596eb0(&arg1[0x53])
sub_140596eb0(&arg1[0x50])
sub_140596eb0(&arg1[0x4d])
sub_140596eb0(&arg1[0x4a])
sub_140596eb0(&arg1[0x47])
sub_140596eb0(&arg1[0x44])
return sub_141b857e0(arg1) __tailcall
