// 函数: sub_141a65500
// 地址: 0x141a65500
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

int64_t* rdi_1 = *(arg1 + 8)

if (rdi_1 != 0)
    int32_t arg_8 = 0xffffffff
    int32_t arg_c = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&arg_8, arg2)
    
    (*(*rdi_1 + 0x10))(rdi_1, arg_8.q)

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
