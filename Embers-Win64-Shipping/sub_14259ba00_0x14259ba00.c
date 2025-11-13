// 函数: sub_14259ba00
// 地址: 0x14259ba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int16_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int16_t* rsi_1 = r14
        r14 = &r14[0x10]
        *rsi_1 = rbx_1[-1].w
        
        if (&rsi_1[4] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0x14)
            *(rsi_1 + 0x10) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405a4be0(&rsi_1[4], rbp_1.d, r8)
                memcpy(*(rsi_1 + 8), r12_1, (rbp_1 << 4).d)
            else
                *(rsi_1 + 0x14) = 0
        
        char rax = rbx_1[2].b
        rbx_1 = &rbx_1[4]
        rsi_1[0xc].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
