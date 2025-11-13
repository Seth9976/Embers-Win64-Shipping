// 函数: sub_140b7c0d0
// 地址: 0x140b7c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

*rbx = &data_142e801c8
sub_140b78990(&rbx[5])
int64_t rcx_1 = rbx[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = rbx[1]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*rbx = &data_142e800b8
return j_sub_140a74f90(rbx) __tailcall
