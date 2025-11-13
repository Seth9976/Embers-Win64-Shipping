// 函数: sub_1424a3990
// 地址: 0x1424a3990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        uint64_t* rsi_1 = r14
        r14 = &r14[5]
        sub_140597df0(rsi_1, &rbx_1[-2])
        
        if (&rsi_1[2] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0x1c)
            rsi_1[3].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rsi_1[2], rbp_1.d, r8)
                memcpy(rsi_1[2], r12_1, (rbp_1 << 3).d)
            else
                *(rsi_1 + 0x1c) = 0
        
        int32_t rax = rbx_1[2].d
        rbx_1 = &rbx_1[5]
        rsi_1[4].d ^= (rax ^ rsi_1[4].d) & 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
