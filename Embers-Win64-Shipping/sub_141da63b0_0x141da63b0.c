// 函数: sub_141da63b0
// 地址: 0x141da63b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143239dc0
int64_t rcx = arg1[0xc]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xa]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_143239db0
int64_t* rdi = arg1[3]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
