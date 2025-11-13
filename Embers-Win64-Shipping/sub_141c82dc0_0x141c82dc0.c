// 函数: sub_141c82dc0
// 地址: 0x141c82dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0xe] == 0
*arg1 = &data_14320f690

if (not(cond:0))
    int64_t* rax_1 = sub_140d3c6e0(&arg1[0x18])
    
    if (rax_1 != 0)
        int64_t r9_1 = *rax_1
        (*(r9_1 + 0x2a8))(rax_1, arg1[0xe], 1, r9_1)
    
    sub_140a74f90(arg1[0xe])

int64_t rcx_3 = arg1[0x11]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rdi = arg1[0x10]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_4 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0xc]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

arg1[0xa].d = 0
int64_t rcx_8 = arg1[9]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_1407547c0(&arg1[1], 0)
int64_t rcx_10 = arg1[5]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[1]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

*arg1 = &data_142e1cdc8
return &data_142e1cdc8
