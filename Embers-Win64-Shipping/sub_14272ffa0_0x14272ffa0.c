// 函数: sub_14272ffa0
// 地址: 0x14272ffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x28
    int32_t i
    
    do
        int64_t* rsi_1 = r15
        r15 = &r15[6]
        *rsi_1 = *(rbx_1 - 0x28)
        rsi_1[1] = *(rbx_1 - 0x20)
        
        if (&rsi_1[2] != &rbx_1[-6])
            int64_t rbp_1 = sx.q(rbx_1[-4])
            int64_t r12_1 = *(rbx_1 - 0x18)
            int32_t r8 = *(rsi_1 + 0x1c)
            rsi_1[3].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rsi_1[2], rbp_1.d, r8)
                memcpy(rsi_1[2], r12_1, (rbp_1 << 3).d)
            else
                *(rsi_1 + 0x1c) = 0
        
        if (&rsi_1[4] != &rbx_1[-2])
            int64_t rsi_2 = sx.q(*rbx_1)
            int64_t rbp_2 = *(rbx_1 - 8)
            int32_t r8_3 = *(rsi_1 + 0x2c)
            rsi_1[5].d = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_1405c4a90(&rsi_1[4], rsi_2.d, r8_3)
                memcpy(rsi_1[4], rbp_2, (rsi_2 << 2).d)
            else
                *(rsi_1 + 0x2c) = 0
        
        rbx_1 = &rbx_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
