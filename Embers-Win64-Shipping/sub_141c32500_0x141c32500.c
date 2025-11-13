// 函数: sub_141c32500
// 地址: 0x141c32500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c32460(arg1 + 0x740)
sub_141c32460(arg1 + 0x5f0)
int64_t* rdi = *(arg1 + 0x5e8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_4 = *(arg1 + 0x598)
*(arg1 + 0x590) = &data_143205000

if (rcx_4 != 0)
    j_sub_140a74f90(rcx_4)
    *(arg1 + 0x598) = 0

int64_t rcx_5 = *(arg1 + 0x548)
*(arg1 + 0x540) = &data_143205000

if (rcx_5 != 0)
    j_sub_140a74f90(rcx_5)
    *(arg1 + 0x548) = 0

int64_t rcx_6 = *(arg1 + 0x4f8)
*(arg1 + 0x4f0) = &data_143205000

if (rcx_6 != 0)
    j_sub_140a74f90(rcx_6)
    *(arg1 + 0x4f8) = 0

int64_t rcx_7 = *(arg1 + 0x4a8)
*(arg1 + 0x4a0) = &data_143205000

if (rcx_7 != 0)
    j_sub_140a74f90(rcx_7)
    *(arg1 + 0x4a8) = 0

int64_t rcx_8 = *(arg1 + 0x450)
*(arg1 + 0x448) = &data_143205000

if (rcx_8 != 0)
    j_sub_140a74f90(rcx_8)
    *(arg1 + 0x450) = 0

return sub_141c319d0(arg1 + 0x38) __tailcall
