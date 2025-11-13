// 函数: sub_140a7a1a0
// 地址: 0x140a7a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t arg_8 = 0
int64_t* rbx = *(rcx + 0x48)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr

void* rcx_1

if (rbx != 0)
    rcx_1 = *(rcx + 0x40)

int32_t rdi

if (rbx == 0 || rcx_1 == 0)
    rdi = -1
else
    rdi = sub_142a79b80(rcx_1, &arg_8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return zx.q(rdi)
