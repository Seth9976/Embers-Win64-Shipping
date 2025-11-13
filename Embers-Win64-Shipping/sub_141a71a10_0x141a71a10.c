// 函数: sub_141a71a10
// 地址: 0x141a71a10
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
            int64_t rsi_1 = sx.q(rbx_1[-1].d)
            int64_t r15_1 = rbx_1[-2]
            int32_t r8 = *(rdi_1 + 0xc)
            rdi_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1407c3650(rdi_1, rsi_1.d, r8)
                memcpy(*rdi_1, r15_1, (rsi_1 * 0xc).d)
            else
                *(rdi_1 + 0xc) = 0
        
        if (&rdi_1[2] != rbx_1)
            int64_t rsi_2 = sx.q(rbx_1[1].d)
            int64_t r15_2 = *rbx_1
            int32_t r8_3 = *(rdi_1 + 0x1c)
            rdi_1[3].d = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_1407c3650(&rdi_1[2], rsi_2.d, r8_3)
                memcpy(rdi_1[2], r15_2, (rsi_2 * 0xc).d)
            else
                *(rdi_1 + 0x1c) = 0
        
        rbx_1 = &rbx_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
