// 函数: sub_141c1ba00
// 地址: 0x141c1ba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        uint64_t* rsi_1 = r14
        r14 = &r14[0xa]
        sub_140597df0(rsi_1, &rbx_1[-6])
        rsi_1[2] = rbx_1[-4]
        rsi_1[3] = rbx_1[-3]
        
        if (&rsi_1[4] != &rbx_1[-2])
            int64_t rbp_1 = sx.q(rbx_1[-1].d)
            int64_t r12_1 = rbx_1[-2]
            int32_t r8 = *(rsi_1 + 0x2c)
            rsi_1[5].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1407751d0(&rsi_1[4], rbp_1.d, r8)
                memcpy(rsi_1[4], r12_1, (rbp_1 * 0x28).d)
            else
                *(rsi_1 + 0x2c) = 0
        
        rsi_1[6] = *rbx_1
        rsi_1[7] = rbx_1[1]
        rsi_1[8].b = rbx_1[2].b
        char rax = rbx_1[3].b
        rbx_1 = &rbx_1[0xa]
        rsi_1[9].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
