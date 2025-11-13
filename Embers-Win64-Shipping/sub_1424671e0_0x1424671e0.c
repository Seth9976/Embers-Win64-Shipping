// 函数: sub_1424671e0
// 地址: 0x1424671e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r14 = arg2
int32_t result

if (arg4 != 0)
    int128_t* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int128_t* rdi_1 = r14
        r14 = &r14[9]
        *rdi_1 = rbx_1[-1]
        rdi_1[1] = *rbx_1
        rdi_1[2] = rbx_1[1]
        sub_140780b40(&rdi_1[3], &rbx_1[2])
        
        if (&rdi_1[4] != &rbx_1[3])
            uint32_t count = *(rbx_1 + 0x38)
            int64_t r12_1 = rbx_1[3].q
            int32_t r8 = *(rdi_1 + 0x4c)
            *(rdi_1 + 0x48) = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&rdi_1[4], count, r8)
                memcpy(rdi_1[4].q, r12_1, count)
            else
                *(rdi_1 + 0x4c) = 0
        
        sub_142465690(&rdi_1[5], &rbx_1[4])
        sub_140597df0(&rdi_1[7], &rbx_1[6])
        rdi_1[8].q = rbx_1[7].q
        result = *(rbx_1 + 0x78)
        rbx_1 = &rbx_1[9]
        *(rdi_1 + 0x88) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
