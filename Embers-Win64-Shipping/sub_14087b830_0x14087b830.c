// 函数: sub_14087b830
// 地址: 0x14087b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2
int32_t result

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x20
    int32_t i
    
    do
        int64_t* rsi_1 = r14
        r14 = &r14[8]
        *rsi_1 = *(rbx_1 - 0x20)
        
        if (&rsi_1[1] != &rbx_1[-6])
            int64_t rbp_1 = sx.q(rbx_1[-4])
            int64_t r12_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rsi_1 + 0x14)
            rsi_1[2].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rsi_1[1], rbp_1.d, r8)
                memcpy(rsi_1[1], r12_1, (rbp_1 << 3).d)
            else
                *(rsi_1 + 0x14) = 0
        
        if (&rsi_1[3] != &rbx_1[-2])
            int64_t rbp_2 = sx.q(*rbx_1)
            int64_t r12_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rsi_1 + 0x24)
            rsi_1[4].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_1405c4a00(&rsi_1[3], rbp_2.d, r8_3)
                memcpy(rsi_1[3], r12_2, (rbp_2 << 3).d)
            else
                *(rsi_1 + 0x24) = 0
        
        if (&rsi_1[5] != &rbx_1[2])
            int64_t rbp_3 = sx.q(rbx_1[4])
            int64_t r12_3 = *(rbx_1 + 8)
            int32_t r8_6 = *(rsi_1 + 0x34)
            rsi_1[6].d = rbp_3.d
            
            if (rbp_3.d != 0 || r8_6 != 0)
                sub_140638750(&rsi_1[5], rbp_3.d, r8_6)
                memcpy(rsi_1[5], r12_3, (rbp_3 << 2).d)
            else
                *(rsi_1 + 0x34) = 0
        
        result = rbx_1[6]
        rbx_1 = &rbx_1[0x10]
        rsi_1[7].d = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
