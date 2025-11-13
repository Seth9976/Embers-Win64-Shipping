// 函数: sub_14192b5a0
// 地址: 0x14192b5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
sub_141938b40(arg1, 0)
rbx[9].d = 0
int64_t rcx = rbx[8]

if (rcx != 0)
    sub_140a74f90(rcx)

rbx[1].d = 0

if (*(rbx + 0xc) != 0)
    sub_1405a5410(rbx, 0)

rbx[6].d = 0xffffffff
*(rbx + 0x34) = 0
void* result = sub_14059a8e0(&rbx[2], 0)
int64_t rcx_3 = rbx[4]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *rbx

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
