// 函数: sub_140eb7490
// 地址: 0x140eb7490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x4c8)
int64_t* rcx = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 0x4c0)

uint32_t rdi = zx.d((*(*rcx + 0x68))(rcx, zx.q(*(arg1 + 0x4d0))))

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_2 = *rbx
        (*rdx_2)(rbx, rdx_2)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, 1, r8_1)

return zx.q(rdi)
