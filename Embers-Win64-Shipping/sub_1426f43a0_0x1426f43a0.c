// 函数: sub_1426f43a0
// 地址: 0x1426f43a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x43]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x3a]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rdi = arg1[0x26]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x21]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

sub_140596eb0(&arg1[0x1a])
sub_140745b20(&arg1[0x18])
arg1[0x17] = &data_14347bdb8
arg1[0x16] = &data_143460c88
int64_t rcx_8 = arg1[0x12]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0xe]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0xc]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_1423baf20(&arg1[6])
arg1[5] = &data_142d44da8
return sub_140d163b0(arg1) __tailcall
