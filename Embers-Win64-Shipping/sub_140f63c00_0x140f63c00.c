// 函数: sub_140f63c00
// 地址: 0x140f63c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = *arg2
void* rdi = arg2[1]
int64_t* rcx = *(arg1 + 0x40)

if (rdi != rcx)
    if (rdi != 0)
        *(rdi + 0xc) += 1
        rcx = *(arg1 + 0x40)
    
    if (rcx != 0)
        int32_t temp2_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x40) = rdi

*(arg1 + 0xb4) |= 0x20
int64_t* rdi_1 = arg2[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return arg1
