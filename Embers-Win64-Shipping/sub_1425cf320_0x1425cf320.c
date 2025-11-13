// 函数: sub_1425cf320
// 地址: 0x1425cf320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rsi_1 = r14
        r14 = &r14[5]
        *rsi_1 = rbx_1[-2]
        rsi_1[1] = rbx_1[-1]
        
        if (&rsi_1[2] != rbx_1)
            int32_t rbp_1 = rbx_1[1].d
            int64_t r12_1 = *rbx_1
            int32_t r8 = *(rsi_1 + 0x1c)
            rsi_1[3].d = rbp_1
            
            if (rbp_1 != 0 || r8 != 0)
                sub_1405a4c70(&rsi_1[2], rbp_1, r8)
                memcpy(rsi_1[2], r12_1, rbp_1 * 2)
            else
                *(rsi_1 + 0x1c) = 0
        
        int64_t zmm0 = rbx_1[2]
        rbx_1 = &rbx_1[5]
        rsi_1[4] = zmm0
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
