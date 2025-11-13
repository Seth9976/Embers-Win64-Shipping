// 函数: sub_141f06080
// 地址: 0x141f06080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xd0)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t rcx_2 = *(arg1 + 0xb8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_14100e1e0(arg1 + 0x58)
int64_t rcx_4 = *(arg1 + 0x48)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0x38)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x28)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0x18)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
