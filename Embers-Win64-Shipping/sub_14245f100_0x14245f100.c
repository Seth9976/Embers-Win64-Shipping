// 函数: sub_14245f100
// 地址: 0x14245f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
char* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        char* rsi_1 = r14
        r14 = &r14[0x40]
        *rsi_1 = rbx_1[-3].b
        *(rsi_1 + 4) = *(rbx_1 - 0x14)
        
        if (&rsi_1[8] != &rbx_1[-2])
            int64_t rbp_1 = sx.q(rbx_1[-1].d)
            int64_t r12_1 = rbx_1[-2]
            int32_t r8 = *(rsi_1 + 0x14)
            *(rsi_1 + 0x10) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_141acb760(&rsi_1[8], rbp_1.d, r8)
                memcpy(*(rsi_1 + 8), r12_1, (rbp_1 * 0x30).d)
            else
                *(rsi_1 + 0x14) = 0
        
        *(rsi_1 + 0x18) = *rbx_1
        
        if (&rsi_1[0x20] != &rbx_1[1])
            int64_t rsi_2 = sx.q(rbx_1[2].d)
            int64_t rbp_2 = rbx_1[1]
            int32_t r8_4 = *(rsi_1 + 0x2c)
            *(rsi_1 + 0x28) = rsi_2.d
            
            if (rsi_2.d != 0 || r8_4 != 0)
                sub_14119a550(&rsi_1[0x20], rsi_2.d, r8_4)
                memcpy(*(rsi_1 + 0x20), rbp_2, (rsi_2 << 3).d)
            else
                *(rsi_1 + 0x2c) = 0
        
        *(rsi_1 + 0x30) = rbx_1[3]
        *(rsi_1 + 0x38) = rbx_1[4].w
        char rax = *(rbx_1 + 0x22)
        rbx_1 = &rbx_1[8]
        rsi_1[0x3a] = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
