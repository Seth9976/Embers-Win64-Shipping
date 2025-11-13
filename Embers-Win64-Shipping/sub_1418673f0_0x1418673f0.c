// 函数: sub_1418673f0
// 地址: 0x1418673f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe73e8

if (arg1[0x60] != 0)
    while (true)
        void* rcx = arg1[0x60]
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            
            if ((*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0) != 0)
                break

int64_t* rdi = arg1[0x61]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_5 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0x5e].d = 0
int64_t rcx_4 = arg1[0x5d]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1418666f0(&arg1[0x55])
arg1[0x54].d = 0
int64_t rcx_6 = arg1[0x53]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x4c].d = 0

if (*(arg1 + 0x264) != 0)
    sub_1405a5130(&arg1[0x4b], 0)

arg1[0x51].d = 0xffffffff
*(arg1 + 0x28c) = 0
sub_14059a8e0(&arg1[0x4d], 0)
int64_t rcx_9 = arg1[0x4f]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x4b]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x4a].d = 0
int64_t rcx_11 = arg1[0x49]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_141821e80(&arg1[0x41])
sub_140f23e90(&arg1[0x37])
arg1[0x36].d = 0
int64_t rcx_14 = arg1[0x35]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[0x2e].d = 0

if (*(arg1 + 0x174) != 0)
    sub_140638cc0(&arg1[0x2d], 0)

arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
sub_14059a8e0(&arg1[0x2f], 0)
int64_t rcx_17 = arg1[0x31]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t rcx_18 = arg1[0x2d]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_141821a30(&arg1[0x23])
sub_1405ae100(&arg1[0x19])
sub_1405ae100(&arg1[0xf])
arg1[0xe].d = 0
int64_t rcx_22 = arg1[0xd]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

sub_141821e80(&arg1[5])
int64_t rcx_24 = arg1[1]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

*arg1 = &data_142fe6b08
return &data_142fe6b08
