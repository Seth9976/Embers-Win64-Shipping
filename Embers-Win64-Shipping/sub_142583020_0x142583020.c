// 函数: sub_142583020
// 地址: 0x142583020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        int64_t* rdi_1 = r15
        r15 = &r15[0xc]
        *rdi_1 = *(rbx_1 - 0x30)
        rdi_1[1] = *(rbx_1 - 0x28)
        *(rdi_1 + 0x10) = *(rbx_1 - 0x20)
        *(rdi_1 + 0x20) = *(rbx_1 - 0x10)
        *(rdi_1 + 0x30) = *rbx_1
        
        if (&rdi_1[8] != rbx_1 + 0x10)
            int32_t rbp_1 = *(rbx_1 + 0x18)
            int64_t r12_1 = *(rbx_1 + 0x10)
            int32_t r8 = *(rdi_1 + 0x4c)
            rdi_1[9].d = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_1405a4c70(&rdi_1[8], rbp_1, r8)
                memcpy(rdi_1[8], r12_1, rbp_1 * 2)
            else
                *(rdi_1 + 0x4c) = 0
        
        char rax = *(rbx_1 + 0x20)
        rbx_1 += 0x60
        rdi_1[0xa].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
