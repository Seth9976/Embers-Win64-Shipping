// 函数: sub_1417e7a80
// 地址: 0x1417e7a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int32_t* rsi_1 = r14
        r14 = &r14[0xa]
        *rsi_1 = rbx_1[-1].d
        
        if (&rsi_1[2] != rbx_1)
            int64_t rbp_1 = sx.q(rbx_1[1].d)
            int64_t r12_1 = *rbx_1
            int32_t r8 = rsi_1[5]
            rsi_1[4] = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rsi_1[2], rbp_1.d, r8)
                memcpy(*(rsi_1 + 8), r12_1, (rbp_1 << 3).d)
            else
                rsi_1[5] = 0
        
        if (&rsi_1[6] != &rbx_1[2])
            int64_t rsi_2 = sx.q(rbx_1[3].d)
            int64_t rbp_2 = rbx_1[2]
            int32_t r8_3 = rsi_1[9]
            rsi_1[8] = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_140638750(&rsi_1[6], rsi_2.d, r8_3)
                memcpy(*(rsi_1 + 0x18), rbp_2, (rsi_2 << 2).d)
            else
                rsi_1[9] = 0
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
