// 函数: sub_141965f50
// 地址: 0x141965f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x23]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rdi = arg1[0x22]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x20]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

arg1[0x1a].d = 0
int64_t rcx_5 = arg1[0x19]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_14196cb10(&arg1[0x11], 0)
int64_t rcx_7 = arg1[0x15]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x11]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[0xf].d = 0
int64_t rcx_9 = arg1[0xe]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_14196cb10(&arg1[6], 0)
int64_t rcx_11 = arg1[0xa]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[6]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = *arg1

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
