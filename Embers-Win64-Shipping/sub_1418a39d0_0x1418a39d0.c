// 函数: sub_1418a39d0
// 地址: 0x1418a39d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0xe8)

while (true)
    bool z_1
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(rbx + 0x78)
        z_1 = false
    
    if (not(z_1))
        break
    
    int64_t* rcx = *(rbx + 0x70)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)

int64_t result = *(rbx + 0x80)
int64_t* rbx_1 = *(rbx + 0x88)

if (rbx_1 != 0)
    rbx_1[1].d += 1
    
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

return result
