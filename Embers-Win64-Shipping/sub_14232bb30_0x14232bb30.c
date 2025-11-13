// 函数: sub_14232bb30
// 地址: 0x14232bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433296b0
arg1[1] = &data_1433296d0
arg1[3] = &data_143329880
int64_t rdx
rdx.b = 1
arg1[0x1a] = &data_1433298c0
arg1[0x1b] = &data_143329a10
arg1[7] = 0
arg1[1][0x35](&arg1[1], rdx, 0, 0, 2, 0)
sub_1419a21e0(0)
void* rcx_1 = data_143e29f28

if (rcx_1 != 0)
    sub_1405a46b0(*(rcx_1 + 0x20) + 0x30, arg1)
    sub_1405a46b0(*(data_143e29f28 + 0x20) + 0x48, arg1)
    sub_1405a46b0(*(data_143e29f28 + 0x20) + 0x60, arg1)

if (*(arg1 + 0x30c) != 0)
    *(arg1 + 0x30c) = 0

sub_1405d1550(&arg1[0x5d])
sub_14100dda0(&arg1[0x5b])
sub_14100dda0(&arg1[0x59])
int64_t rcx_11 = arg1[0x57]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_140745b20(&arg1[0x52])
int64_t* rcx_13 = arg1[0x4d]

if (rcx_13 != 0)
    int32_t temp1_1 = *(rcx_13 + 0xc)
    *(rcx_13 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_13 + 8))(rcx_13, 1)

int64_t* rcx_14 = arg1[0x4b]

if (rcx_14 != 0)
    int32_t temp2_1 = *(rcx_14 + 0xc)
    *(rcx_14 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_14 + 8))(rcx_14, 1)

int64_t* rdi = arg1[0x49]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

arg1[0x3c].d = 0
int64_t rcx_17 = arg1[0x3b]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_14095cde0(&arg1[0x33], 0)
int64_t rcx_19 = arg1[0x37]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0x33]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

sub_140597700(&arg1[0x1c])
arg1[0x1a] = &data_142e4cc00
return sub_1423d0170(&arg1[1]) __tailcall
