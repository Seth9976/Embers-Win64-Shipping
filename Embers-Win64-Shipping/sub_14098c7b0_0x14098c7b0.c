// 函数: sub_14098c7b0
// 地址: 0x14098c7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rdi_1 = rbp
        rbp = &rbp[4]
        
        if (rdi_1 != &rbx_1[-2])
            int32_t rsi_1 = rbx_1[-1].d
            int64_t r15_1 = rbx_1[-2]
            int32_t r8 = *(rdi_1 + 0xc)
            rdi_1[1].d = rsi_1
            
            if (rsi_1 != 0 || r8 != 0)
                sub_1405a4c70(rdi_1, rsi_1, r8)
                memcpy(*rdi_1, r15_1, rsi_1 * 2)
            else
                *(rdi_1 + 0xc) = 0
        
        if (&rdi_1[2] != rbx_1)
            uint32_t count = rbx_1[1].d
            int64_t r15_2 = *rbx_1
            int32_t r8_3 = *(rdi_1 + 0x1c)
            rdi_1[3].d = count
            
            if (count != 0 || r8_3 != 0)
                sub_1405da9e0(&rdi_1[2], count, r8_3)
                memcpy(rdi_1[2], r15_2, count)
            else
                *(rdi_1 + 0x1c) = 0
        
        rbx_1 = &rbx_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
