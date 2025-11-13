// 函数: sub_140e8e3f0
// 地址: 0x140e8e3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x50)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr

int64_t* rcx

if (rbx != 0)
    rcx = *(arg1 + 0x48)

uint64_t rdi

if (rbx == 0 || rcx == 0)
    rdi.b = 1
else
    rdi = zx.q((*(*rcx + 0x10))(rcx))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return zx.q(rdi.b)
