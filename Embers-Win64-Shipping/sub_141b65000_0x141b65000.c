// 函数: sub_141b65000
// 地址: 0x141b65000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x10)
*(arg1 + 8) = 0
*(arg1 + 0x18) = 0

if (rsi != 0)
    int64_t* rax_1 = *(rsi + 0x20)
    
    if (rax_1 != 0)
        *rax_1 = 0
    
    int64_t* rdi_1 = *(rsi + 0x28)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    j_sub_140a74f90(rsi)

*(arg1 + 0x10) = 0
*(arg1 + 0x20) = 0
