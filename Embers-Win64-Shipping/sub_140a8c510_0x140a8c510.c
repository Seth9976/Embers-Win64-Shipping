// 函数: sub_140a8c510
// 地址: 0x140a8c510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int64_t* rbx = *(r9 + 0x48)

if (rbx != 0)
    int32_t rax = rbx[1].d
    
    if (rax != 0)
        rbx[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx = nullptr

void* rcx = nullptr

if (rbx != 0)
    rcx = *(r9 + 0x40)

if (rcx != 0)
    int32_t arg_8 = 0
    sub_142a7bfc0(rcx, sx.q(arg2), sx.q(arg3), &arg_8)

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
