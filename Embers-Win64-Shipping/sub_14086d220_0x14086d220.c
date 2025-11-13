// 函数: sub_14086d220
// 地址: 0x14086d220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[7]
        *rdi_1 = rbx_1[-1]
        rdi_1[1] = *rbx_1
        sub_14081d8c0(&rdi_1[2], &rbx_1[1])
        rdi_1[4].d = rbx_1[3].d
        
        if (&rdi_1[5] != &rbx_1[4])
            int64_t rsi_1 = sx.q(rbx_1[5].d)
            int64_t r15_1 = rbx_1[4]
            int32_t r8 = *(rdi_1 + 0x34)
            rdi_1[6].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405a4be0(&rdi_1[5], rsi_1.d, r8)
                memcpy(rdi_1[5], r15_1, (rsi_1 << 4).d)
            else
                *(rdi_1 + 0x34) = 0
        
        rbx_1 = &rbx_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
