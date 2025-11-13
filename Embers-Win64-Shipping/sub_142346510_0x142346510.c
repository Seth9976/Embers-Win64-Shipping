// 函数: sub_142346510
// 地址: 0x142346510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg2
*(arg1 + 0x260) = result
void* rbx = arg2[1]
int64_t* rcx = *(arg1 + 0x268)

if (rbx != rcx)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx = *(arg1 + 0x268)
    
    if (rcx != 0)
        int32_t temp2_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x268) = rbx

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
