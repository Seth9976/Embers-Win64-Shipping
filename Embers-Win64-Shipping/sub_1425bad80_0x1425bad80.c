// 函数: sub_1425bad80
// 地址: 0x1425bad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int32_t* rdi_1 = r14
        r14 = &r14[8]
        *rdi_1 = rbx_1[-1].d
        rdi_1[1] = *(rbx_1 - 4)
        
        if (&rdi_1[2] != rbx_1)
            uint32_t count = rbx_1[1].d
            int64_t r12_1 = *rbx_1
            int32_t r8 = rdi_1[5]
            rdi_1[4] = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&rdi_1[2], count, r8)
                memcpy(*(rdi_1 + 8), r12_1, count)
            else
                rdi_1[5] = 0
        
        rdi_1[6] = rbx_1[2].d
        char rax = *(rbx_1 + 0x14)
        rbx_1 = &rbx_1[4]
        rdi_1[7].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
