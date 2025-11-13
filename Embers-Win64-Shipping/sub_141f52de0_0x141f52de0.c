// 函数: sub_141f52de0
// 地址: 0x141f52de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xc8)

if (rcx != 0)
    sub_1422ce7f0(rcx)

int64_t* rdi = *(arg1 + 0xc0)

if (rdi != 0)
    rdi[0xd].d -= 1
    
    if (rdi[0xd].d == 1)
        sub_141997f50(rdi)
        sub_141997870(&rdi[9])

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
