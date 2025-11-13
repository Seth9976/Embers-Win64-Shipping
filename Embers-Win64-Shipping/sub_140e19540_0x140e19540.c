// 函数: sub_140e19540
// 地址: 0x140e19540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x9f8)
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    rax = rbx

uint64_t rdi
uint64_t arg_8 = rdi

if (rax != 0)
    rdi = *(arg1 + 0x9f0)

if (rax == 0 || rdi == 0)
    rdi.b = 0
else if (sub_140e1a330(rdi) == 0)
    rdi = zx.q(sub_140e19540(rdi))
else
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_1 = *rbx
        (*rdx_1)(rbx, rdx_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, 1, r8_1)

return zx.q(rdi.b)
