// 函数: sub_1420b4f60
// 地址: 0x1420b4f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int64_t rdi = sx.q(rbx[1].d)
int32_t rax = (rdi + 1).d
rbx[1].d = rax

if (rax s> *(rbx + 0xc))
    sub_1405a4f90(rbx)

sub_140596d10((rdi << 4) + *rbx, arg2)
int64_t* result
result.b = 1
return result
