// 函数: sub_140a73e30
// 地址: 0x140a73e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t* rbx = *(rcx + 0x48)
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    rax = rbx

int64_t rdi

if (rax == 0)
    rdi.b = 0
else
    void* rcx_1 = *(rcx + 0x40)
    
    if (rcx_1 == 0)
        rdi.b = 0
    else if (sub_142a7a500(rcx_1, arg2) == 0)
        rdi.b = 0
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
