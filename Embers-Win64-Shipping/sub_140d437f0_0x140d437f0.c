// 函数: sub_140d437f0
// 地址: 0x140d437f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

rbx[0x13].d = 0
int64_t rcx = rbx[0x12]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140d42dc0(&rbx[0xa])
rbx[9].d = 0
int64_t rcx_2 = rbx[8]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140d42dc0(rbx)
return j_sub_140a74f90(rbx) __tailcall
