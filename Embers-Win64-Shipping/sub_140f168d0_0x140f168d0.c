// 函数: sub_140f168d0
// 地址: 0x140f168d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg2
*(arg1 + 0x4c8) = result
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0x4d0)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x4d0)
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            result = (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x4d0) = rbx

return result
