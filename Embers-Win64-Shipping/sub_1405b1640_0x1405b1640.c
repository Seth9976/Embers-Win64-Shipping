// 函数: sub_1405b1640
// 地址: 0x1405b1640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xa1]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0x8b] = &data_142d45448
sub_1405ae080(&arg1[0x96])
sub_1405ae100(&arg1[0x8c])
arg1[0x8b] = &data_142d44dd8
int64_t rcx_4 = arg1[0x88]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x86]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x84]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405ae080(&arg1[0x7a])
sub_1405ae080(&arg1[0x70])
sub_1405ae080(&arg1[0x66])
int64_t rcx_10 = arg1[0x63]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x5f]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x5d]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_140596eb0(&arg1[0x59])
sub_140596eb0(&arg1[0x56])
int64_t rcx_15 = arg1[0x4e]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x4c]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x4a]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

arg1[0x47] = &data_142d45438
sub_1405ae5e0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
