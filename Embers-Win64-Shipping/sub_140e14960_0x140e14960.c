// 函数: sub_140e14960
// 地址: 0x140e14960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 8)
int64_t* rbx = rax[1]
int64_t result = *rax

if (rbx != 0)
    rbx[1].d += 1
    
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

return result
