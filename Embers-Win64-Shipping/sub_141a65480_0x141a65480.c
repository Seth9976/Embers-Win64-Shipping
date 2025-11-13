// 函数: sub_141a65480
// 地址: 0x141a65480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

int32_t rax = rbx[1].d

if (rax == 0)
    rbx = nullptr
else
    rbx[1].d = rax + 1

if (rbx == 0)
    return 

int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    int32_t arg_c = 0
    (*(*rcx + 0x10))(rcx, 0xffffffff.q)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp1_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx + 8))
