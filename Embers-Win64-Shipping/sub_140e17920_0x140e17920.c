// 函数: sub_140e17920
// 地址: 0x140e17920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e20d20
int64_t* rcx = data_143e20d18

if (rbx != 0)
    rbx[1].d += 1

int32_t rax_1 = (*(*rcx + 0xc8))(rcx)

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

if (rax_1 == 0)
    return zx.q(rax_1 + 1)

int32_t rax_3
rax_3.b = rax_1 != 1
return zx.q(rax_3 + 2)
