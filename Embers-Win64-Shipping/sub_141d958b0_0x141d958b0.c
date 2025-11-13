// 函数: sub_141d958b0
// 地址: 0x141d958b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143239268
arg1[0x82].d = 0
int64_t rcx = arg1[0x81]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14094b8e0(&arg1[0x79])
int64_t rcx_2 = arg1[0x76]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x74]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x70]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140b4cb40(&arg1[0x5e])
int64_t rcx_6 = arg1[0x5b]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140b4cb40(&arg1[0x49])
int64_t rcx_8 = arg1[0x46]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_140b4cb40(&arg1[0x34])
int64_t* rdi = arg1[0x33]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_140596e10(&arg1[0x30])
sub_141d95a80(&arg1[0x17])
arg1[0x16].d = 0
int64_t rcx_14 = arg1[0x15]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_1407ece30(&arg1[0xd], 0)
int64_t rcx_16 = arg1[0x11]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0xd]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

arg1[0xc].d = 0
int64_t rcx_18 = arg1[0xb]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_1407ece30(&arg1[3], 0)
int64_t rcx_20 = arg1[7]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[3]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t* rcx_22 = arg1[2]

if (rcx_22 != 0)
    int32_t temp1_1 = *(rcx_22 + 0xc)
    *(rcx_22 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_22 + 8))(rcx_22, 1)

*arg1 = &data_1432388f0
return &data_1432388f0
