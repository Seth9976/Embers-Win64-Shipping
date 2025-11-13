// 函数: sub_140dbdce0
// 地址: 0x140dbdce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb4) |= 2
*(arg1 + 0x48) = *arg2
void* rdi = arg2[1]
int64_t* rcx = *(arg1 + 0x50)

if (rdi != rcx)
    if (rdi != 0)
        *(rdi + 0xc) += 1
        rcx = *(arg1 + 0x50)
    
    if (rcx != 0)
        int32_t temp2_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx + 8))(rcx, 1)
    
    *(arg1 + 0x50) = rdi

*(arg1 + 0xb4) &= 0xfffffff3
*(arg1 + 0xb4) |= zx.d(arg4) << 3
*(arg1 + 0xb0) = arg3
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
