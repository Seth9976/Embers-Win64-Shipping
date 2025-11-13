// 函数: sub_14241eaa0
// 地址: 0x14241eaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t* rdi_1 = *(arg1 + 0x10)
    void* rax_1 = rdi_1[0x23]
    
    if (rax_1 == 0)
        (*(*rdi_1 + 0x390))(rdi_1)
        rax_1 = rdi_1[0x23]
        rdi_1 = *(arg1 + 0x10)
    
    *(arg1 + 0x28) = *(rax_1 + 0x28)
    void* rax_4 = rdi_1[0x23]
    
    if (rax_4 == 0)
        (*(*rdi_1 + 0x390))(rdi_1)
        rax_4 = rdi_1[0x23]
    
    *(arg1 + 0x2c) = *(rax_4 + 0x2c)

int64_t* rdi_2 = *(arg1 + 0x10)
void* rax_7 = rdi_2[0x23]

if (rax_7 == 0)
    (*(*rdi_2 + 0x390))(rdi_2)
    rax_7 = rdi_2[0x23]

int32_t result = *(rax_7 + 0x38)
*(arg1 + 0x3c) &= 0xfffffff8
*(arg1 + 0x38) = result
return result
