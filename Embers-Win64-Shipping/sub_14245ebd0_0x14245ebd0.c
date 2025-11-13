// 函数: sub_14245ebd0
// 地址: 0x14245ebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[5]
        sub_140780b40(rdi_1, &rbx_1[-3])
        rdi_1[2] = rbx_1[-1]
        
        if (&rdi_1[3] != rbx_1)
            uint32_t count = rbx_1[1].d
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x24)
            rdi_1[4].d = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(&rdi_1[3], count, r8)
                memcpy(rdi_1[3], r15_1, count)
            else
                *(rdi_1 + 0x24) = 0
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
