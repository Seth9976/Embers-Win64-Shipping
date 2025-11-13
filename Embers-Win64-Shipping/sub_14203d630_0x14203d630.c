// 函数: sub_14203d630
// 地址: 0x14203d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc8) = *arg2
void* rdi = arg2[1]
int64_t* rcx = *(arg1 + 0xd0)

if (rdi != rcx)
    if (rdi != 0)
        *(rdi + 0xc) += 1
        rcx = *(arg1 + 0xd0)
    
    if (rcx != 0)
        int32_t temp1_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0xd0) = rdi

int64_t result = *arg3
*(arg1 + 0xd8) = result
void* rdi_1 = arg3[1]
int64_t* rcx_1 = *(arg1 + 0xe0)

if (rdi_1 != rcx_1)
    if (rdi_1 != 0)
        *(rdi_1 + 0xc) += 1
        rcx_1 = *(arg1 + 0xe0)
    
    if (rcx_1 != 0)
        int32_t temp4_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rcx_1 + 8))(rcx_1, 1)
    
    *(arg1 + 0xe0) = rdi_1

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
