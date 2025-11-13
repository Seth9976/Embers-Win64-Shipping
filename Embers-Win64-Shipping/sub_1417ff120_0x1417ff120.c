// 函数: sub_1417ff120
// 地址: 0x1417ff120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x140)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rdi = *(arg1 + 0x130)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

*(arg1 + 0x120) = 0
int64_t rcx_3 = *(arg1 + 0x118)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*(arg1 + 0xe0) = 0

if (*(arg1 + 0xe4) != 0)
    sub_1405a5410(arg1 + 0xd8, 0)

*(arg1 + 0x108) = 0xffffffff
*(arg1 + 0x10c) = 0
sub_14059a8e0(arg1 + 0xe8, 0)
int64_t rcx_6 = *(arg1 + 0xf8)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0xd8)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*(arg1 + 0xd0) = 0
int64_t rcx_8 = *(arg1 + 0xc8)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*(arg1 + 0x90) = 0

if (*(arg1 + 0x94) != 0)
    sub_140638cc0(arg1 + 0x88, 0)

*(arg1 + 0xb8) = 0xffffffff
*(arg1 + 0xbc) = 0
sub_14059a8e0(arg1 + 0x98, 0)
int64_t rcx_11 = *(arg1 + 0xa8)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = *(arg1 + 0x88)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

if (*(arg1 + 0x80) != 0)
    *(arg1 + 0x80) = 0

if (*(arg1 + 0x70) != 0)
    *(arg1 + 0x70) = 0

sub_1417fec20(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
