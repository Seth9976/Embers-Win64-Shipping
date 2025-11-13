// 函数: sub_140e6b870
// 地址: 0x140e6b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x1c0)
void* r8_2 = &rax[sx.q(*(arg1 + 0x1c8)) * 2]
int64_t rdi

if (rax == r8_2)
label_140e6b8a5:
    rdi.b = 0
else
    while (*rax != *arg2)
        rax = &rax[2]
        
        if (rax == r8_2)
            goto label_140e6b8a5
    
    rdi.b = 1

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx = *rbx
        (*rdx)(rbx, rdx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *rbx
            (*(r8_3 + 8))(rbx, 1, r8_3)

return zx.q(rdi.b)
