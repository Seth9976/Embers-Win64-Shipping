// 函数: sub_140848ea0
// 地址: 0x140848ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ddb308
sub_14084ae80(arg1)
int64_t rcx = arg1[0xe1]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xdf]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405ae100(&arg1[0xcd])
int64_t rcx_3 = arg1[0xca]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_14081ccd0(&arg1[0x2a])
sub_1405ae200(&arg1[0x20])
int64_t rcx_6 = arg1[0x1e]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140596eb0(&arg1[0x19])
sub_140596eb0(&arg1[0x16])
sub_140596e10(&arg1[0x14])
arg1[0x13].d = 0
int64_t rcx_10 = arg1[0x12]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_1408467e0(&arg1[0xa])
int64_t* rdi = arg1[4]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
