// 函数: sub_141c82cd0
// 地址: 0x141c82cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[6] == 0
*arg1 = &data_14320f550

if (not(cond:0))
    sub_140599090(&arg1[9])
    int64_t* rcx_1 = arg1[6]
    int64_t rdx_1
    rdx_1.b = 1
    (*(*rcx_1 + 0x10))(rcx_1, rdx_1)
    int64_t* rcx_2 = arg1[6]
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x20))(rcx_2, 1)
    
    arg1[6] = 0

int64_t* rcx_3 = arg1[5]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x28))(rcx_3, 1)

sub_140596eb0(&arg1[9])
int64_t* rdi = arg1[8]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_7 = arg1[3]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t result = 0x4320f4a8
*arg1 = &data_14320f4a8
int64_t* rcx_8 = arg1[2]

if (rcx_8 != 0)
    result = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (result == 1 && rcx_8 != 0)
        return (*(*rcx_8 + 8))(rcx_8, 1)

return result
