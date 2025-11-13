// 函数: sub_140e558b0
// 地址: 0x140e558b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x1d0)
char rdi = 0
int64_t* rbx
int64_t rbp

if (rcx == 0)
    rbx = 0.q
    rbp.b = 0
else
    rbx = *(arg2 + 0x1d8)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rdi = 1
    
    if ((*(*rcx + 0x40))() == 0)
        rbp.b = 0
    else
        rbp = 1

if ((rdi & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp.b == 0)
    return 

return sub_140e5a710(arg2) __tailcall
