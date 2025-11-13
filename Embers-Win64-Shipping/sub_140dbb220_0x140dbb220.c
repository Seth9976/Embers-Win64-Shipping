// 函数: sub_140dbb220
// 地址: 0x140dbb220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
void* rcx = nullptr

if (rbx != 0)
    int32_t rax = rbx[1].d
    
    if (rax != 0)
        rbx[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *arg1

if (rcx != 0)
    sub_140dbb2a0(*(rcx + 0x28), arg1)

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
