// 函数: sub_140ec25d0
// 地址: 0x140ec25d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x4c8)
int64_t* rdi = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rdi = *(arg1 + 0x4c0)

int64_t rax_3 = (*(*rdi + 0x48))(rdi, arg1)

if (rax_3 == 0)
    rdi.b = 0
else
    int64_t r8_1 = *rdi
    rdi = zx.q((*(r8_1 + 0x60))(rdi, rax_3, r8_1))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return zx.q(rdi.b)
