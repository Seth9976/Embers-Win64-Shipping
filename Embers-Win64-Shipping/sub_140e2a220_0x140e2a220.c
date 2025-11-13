// 函数: sub_140e2a220
// 地址: 0x140e2a220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        int64_t* rsi_1 = r14
        r14 = &r14[7]
        sub_140e294f0(rsi_1, &rbx_1[-3])
        rsi_1[2].d = rbx_1[-1].d
        
        if (&rsi_1[3] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0x24)
            rsi_1[4].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405a4be0(&rsi_1[3], rbp_1.d, r8)
                memcpy(rsi_1[3], r12_1, (rbp_1 << 4).d)
            else
                *(rsi_1 + 0x24) = 0
        
        sub_140597df0(&rsi_1[5], &rbx_1[2])
        rbx_1 = &rbx_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
