// 函数: sub_14246b930
// 地址: 0x14246b930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rdi_1 = r14
        r14 = &r14[6]
        *rdi_1 = *(rbx_1 - 8)
        rdi_1[1].d = *rbx_1
        sub_14246ac00(&rdi_1[2], &rbx_1[2])
        
        if (&rdi_1[4] != &rbx_1[6])
            int64_t rsi_1 = sx.q(rbx_1[8])
            int64_t r15_1 = *(rbx_1 + 0x18)
            int32_t r8 = *(rdi_1 + 0x2c)
            rdi_1[5].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1407c35c0(&rdi_1[4], rsi_1.d, r8)
                memcpy(rdi_1[4], r15_1, (rsi_1 << 6).d)
            else
                *(rdi_1 + 0x2c) = 0
        
        rbx_1 = &rbx_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
