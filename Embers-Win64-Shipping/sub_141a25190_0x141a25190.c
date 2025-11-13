// 函数: sub_141a25190
// 地址: 0x141a25190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rsi_1 = r14
        r14 = &r14[7]
        *rsi_1 = rbx_1[-1]
        
        if (&rsi_1[1] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0x14)
            rsi_1[2].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rsi_1[1], rbp_1.d, r8)
                memcpy(rsi_1[1], r15_1, (rbp_1 << 3).d)
            else
                *(rsi_1 + 0x14) = 0
        
        rsi_1[3].d ^= (rbx_1[2].d ^ rsi_1[3].d) & 1
        *(rsi_1 + 0x1c) = *(rbx_1 + 0x14)
        *(rsi_1 + 0x24) ^= (*(rbx_1 + 0x1c) ^ *(rsi_1 + 0x24)) & 1
        rsi_1[5] = rbx_1[4]
        rsi_1[6].d = rbx_1[5].d
        *(rsi_1 + 0x34) = *(rbx_1 + 0x2c)
        *(rsi_1 + 0x35) = *(rbx_1 + 0x2d)
        char rax = *(rbx_1 + 0x2e)
        rbx_1 = &rbx_1[7]
        *(rsi_1 + 0x36) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
