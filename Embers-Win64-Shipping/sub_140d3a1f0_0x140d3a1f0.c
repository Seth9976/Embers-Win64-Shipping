// 函数: sub_140d3a1f0
// 地址: 0x140d3a1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx == 0 || *(arg1 + 8) != 0)
    return 

rbx[9].d = 0
int64_t rcx = rbx[8]

if (rcx != 0)
    sub_140a74f90(rcx)

rbx[1].d = 0

if (*(rbx + 0xc) != 0)
    sub_1405a5410(rbx, 0)

rbx[6].d = 0xffffffff
*(rbx + 0x34) = 0
sub_14059a8e0(&rbx[2], 0)
int64_t rcx_3 = rbx[4]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *rbx

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return j_sub_140a74f90(rbx) __tailcall
