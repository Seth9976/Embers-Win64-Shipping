// 函数: sub_14246ee40
// 地址: 0x14246ee40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        int64_t* rsi_1 = r15
        r15 = &r15[7]
        *rsi_1 = *(rbx_1 - 0x30)
        *(rsi_1 + 8) = *(rbx_1 - 0x28)
        
        if (&rsi_1[3] != &rbx_1[-6])
            int64_t rbp_1 = sx.q(rbx_1[-4])
            int64_t r12_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rsi_1 + 0x24)
            rsi_1[4].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rsi_1[3], rbp_1.d, r8)
                memcpy(rsi_1[3], r12_1, (rbp_1 << 3).d)
            else
                *(rsi_1 + 0x24) = 0
        
        if (&rsi_1[5] != &rbx_1[-2])
            int64_t rsi_2 = sx.q(*rbx_1)
            int64_t rbp_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rsi_1 + 0x34)
            rsi_1[6].d = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_1405c4a00(&rsi_1[5], rsi_2.d, r8_3)
                memcpy(rsi_1[5], rbp_2, (rsi_2 << 3).d)
            else
                *(rsi_1 + 0x34) = 0
        
        rbx_1 = &rbx_1[0xe]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
