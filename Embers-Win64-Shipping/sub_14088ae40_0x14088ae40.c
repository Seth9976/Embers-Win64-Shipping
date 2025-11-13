// 函数: sub_14088ae40
// 地址: 0x14088ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[5]
        *rdi_1 = rbx_1[-3]
        sub_140597df0(&rdi_1[1], &rbx_1[-2])
        
        if (&rdi_1[3] != rbx_1)
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x24)
            rdi_1[4].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405a4be0(&rdi_1[3], rsi_1.d, r8)
                memcpy(rdi_1[3], r15_1, (rsi_1 << 4).d)
            else
                *(rdi_1 + 0x24) = 0
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
