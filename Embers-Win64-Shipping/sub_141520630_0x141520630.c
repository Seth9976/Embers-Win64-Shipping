// 函数: sub_141520630
// 地址: 0x141520630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141520bd0()
void* const rbx = rax[0x23]

if (rbx == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rbx = rax[0x23]

void* rax_1
int64_t rax_2
void* rdx_2

if (rbx != 0)
    rax_1 = sub_141520bd0()
    rdx_2 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

int64_t var_18
int64_t* rax_4 = sub_140d30800(rbx + 0xa0, &var_18)
*arg1 = 0
*arg1 = *rax_4
*rax_4 = 0
arg1[1].d = rax_4[1].d
*(arg1 + 0xc) = *(rax_4 + 0xc)
rax_4[1] = 0
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg1
