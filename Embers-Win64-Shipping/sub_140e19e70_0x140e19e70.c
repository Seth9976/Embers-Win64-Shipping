// 函数: sub_140e19e70
// 地址: 0x140e19e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
int64_t* rcx = nullptr
int64_t* rbx = *(r8 + 0x270)

if (rbx != 0)
    int32_t rax = rbx[1].d
    
    if (rax != 0)
        rbx[1].d = rax + 1
        rax.b = 1
    
    if (rax.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(r8 + 0x268)

if (rcx != 0)
    sub_140e19ef0(rcx, arg2)

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
