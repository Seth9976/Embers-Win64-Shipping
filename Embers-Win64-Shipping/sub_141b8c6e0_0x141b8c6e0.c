// 函数: sub_141b8c6e0
// 地址: 0x141b8c6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x10]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0xd]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

arg1[9] = &data_142d44d70
void* rcx_4 = data_143e1a338

if (rcx_4 != 0 && arg1[0xa].b != 0)
    sub_140bb6e00(rcx_4, &arg1[9])

sub_140d95470(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
