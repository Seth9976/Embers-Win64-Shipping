// 函数: sub_140e55ed0
// 地址: 0x140e55ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int64_t* rax = *(r8 + 0x18)
void* rcx_2 = &rax[sx.q(*(r8 + 0x20)) * 2]
int64_t rdi

if (rax == rcx_2)
label_140e55f05:
    rdi.b = 0
else
    while (*rax != *arg2)
        rax = &rax[2]
        
        if (rax == rcx_2)
            goto label_140e55f05
    
    rdi.b = 1

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_1 = *rbx_1
        (*rdx_1)(rbx_1, rdx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, 1, r8_1)

return zx.q(rdi.b)
