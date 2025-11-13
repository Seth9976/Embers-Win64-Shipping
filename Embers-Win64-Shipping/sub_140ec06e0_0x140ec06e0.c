// 函数: sub_140ec06e0
// 地址: 0x140ec06e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xa0)
int64_t* rdx = *(arg1 + 0x98)

if (rbx != 0)
    rbx[1].d += 1

char rax_1 = (*(*rdx + 0x20))(rdx)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t rdx_1 = *rbx
        (*rdx_1)(rbx, rdx_1)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return zx.q(rax_1)
