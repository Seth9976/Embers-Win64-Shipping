// 函数: sub_1425e3f80
// 地址: 0x1425e3f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&arg1[0x1f])
int64_t rcx_1 = arg1[0x1c]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[0x1b]

if (rcx_2 != 0)
    int32_t temp1_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* rdi = arg1[0x19]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi + 8))(rdi, zx.q(rsi_1))

sub_140596d80(&arg1[0x16])
int64_t rcx_6 = arg1[0x13]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x11]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0xa]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[8]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[6]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*arg1 = &data_143449940
int64_t* rcx_11 = arg1[2]

if (rcx_11 != 0)
    int32_t temp2_1 = *(rcx_11 + 0xc)
    *(rcx_11 + 0xc) -= 1
    
    if (temp2_1 == 1)
        (*(*rcx_11 + 8))(rcx_11, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
