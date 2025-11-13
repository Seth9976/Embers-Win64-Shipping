// 函数: sub_1418671c0
// 地址: 0x1418671c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7f28
arg1[1] = &data_142fe7f50
*(arg1 + 0x144)
*(arg1 + 0x144) = 1

if (arg1[0x21] != 0)
    while (true)
        void* rcx = arg1[0x21]
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x70)
            
            if ((*(*rcx_1 + 0x20))(rcx_1, 0xffffffff, 0) != 0)
                break

while (arg1[0x43] != 0)
    int64_t* rcx_2 = arg1[0x43]
    arg1[0x43] = *rcx_2
    j_sub_140a74f90(rcx_2)

sub_141866090(&arg1[0x40])
int64_t rcx_4 = arg1[0x3d]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

DeleteCriticalSection(&arg1[0x38])
arg1[0x37].d = 0
int64_t rcx_6 = arg1[0x36]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405b8bd0(&arg1[0x2e], 0)
int64_t rcx_8 = arg1[0x32]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x2e]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

DeleteCriticalSection(&arg1[0x29])
sub_140745b20(&arg1[0x25])
sub_140745b20(&arg1[0x23])
int64_t* rdi = arg1[0x22]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_6 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0x20].d = 0
int64_t rcx_15 = arg1[0x1f]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

arg1[0x18].d = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405a5130(&arg1[0x17], 0)

arg1[0x1d].d = 0xffffffff
*(arg1 + 0xec) = 0
sub_14059a8e0(&arg1[0x19], 0)
int64_t rcx_18 = arg1[0x1b]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = arg1[0x17]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_141822a10(&arg1[4])
int64_t* rdi_2 = arg1[3]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))

arg1[1] = &data_142d56fa0
*arg1 = &data_142e52080
return &data_142e52080
