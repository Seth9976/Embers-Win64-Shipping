// 函数: sub_1425968f0
// 地址: 0x1425968f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rcx = rbp
        rbp = &rbp[3]
        *rcx = rbx_1[-1]
        
        if (&rcx[1] != rbx_1)
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rcx + 0x14)
            rcx[2].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405a4b40(&rcx[1], rsi_1.d, r8)
                memcpy(rcx[1], r15_1, (rsi_1 * 0x30).d)
            else
                *(rcx + 0x14) = 0
        
        rbx_1 = &rbx_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
