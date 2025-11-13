// 函数: sub_140f7e8e0
// 地址: 0x140f7e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x398)
int64_t* rcx = nullptr

if (rbx != 0)
    int32_t rax = rbx[1].d
    
    if (rax != 0)
        rbx[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 0x390)

if (rcx != 0)
    (*(*rcx + 0x100))(rcx)

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
