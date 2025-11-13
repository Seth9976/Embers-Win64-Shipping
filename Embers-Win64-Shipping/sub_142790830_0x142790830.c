// 函数: sub_142790830
// 地址: 0x142790830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x438)

if (rbx == 0)
    return 0

int64_t result = *(rbx + 0x288)
int64_t* rbx_1 = *(rbx + 0x290)

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
