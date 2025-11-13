// 函数: sub_1417e7990
// 地址: 0x1417e7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x28
    int32_t i
    
    do
        int32_t* rsi_1 = r14
        r14 = &r14[0x14]
        sub_1417e7250(rsi_1, &rbx_1[-5])
        
        if (&rsi_1[0xa] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = rsi_1[0xd]
            rsi_1[0xc] = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405a4b40(&rsi_1[0xa], rbp_1.d, r8)
                memcpy(*(rsi_1 + 0x28), r12_1, (rbp_1 * 0x30).d)
            else
                rsi_1[0xd] = 0
        
        sub_14081d8c0(&rsi_1[0xe], &rbx_1[2])
        char rax = rbx_1[4].b
        rbx_1 = &rbx_1[0xa]
        rsi_1[0x12].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
