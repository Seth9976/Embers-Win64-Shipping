// 函数: sub_140f63ca0
// 地址: 0x140f63ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140f46840(arg1)
int64_t rcx
int64_t* rbx

if (rax == 0)
    rcx = 0
    rbx = nullptr
else
    rbx = *(rax + 0x18)
    rcx = *(rax + 0x10)
    
    if (rbx != 0)
        rbx[1].d += 1

int64_t rdi
rdi.b = arg2 == rcx

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx = *rbx
        (*rdx)(rbx, rdx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, 1, r8_1)

return zx.q(rdi.b)
