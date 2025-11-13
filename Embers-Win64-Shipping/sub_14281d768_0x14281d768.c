// 函数: sub_14281d768
// 地址: 0x14281d768
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x18)
void** rbx = *(rcx + 8)

if (*(rbx + 0x19) == 0)
    do
        sub_14281d6ec(arg1 + 0x18, arg1 + 0x18, rbx[2])
        void** rcx_2 = rbx
        rbx = *rbx
        sub_14058ba50(rcx_2, 0x30)
    while (*(rbx + 0x19) == 0)
    
    rcx = *(arg1 + 0x18)

uint64_t result = sub_14058ba50(rcx, 0x30)
int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 != 0)
    int32_t rax = rbx_1[1].d
    rbx_1[1].d -= 1
    result = zx.q(rax - 1)
    
    if (rax == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_2 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        result = zx.q(rax_2 - 1)
        
        if (rax_2 == 1)
            return (*(*rbx_1 + 8))(rbx_1)

return result
