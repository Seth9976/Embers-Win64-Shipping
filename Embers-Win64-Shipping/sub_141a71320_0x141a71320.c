// 函数: sub_141a71320
// 地址: 0x141a71320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r14 = arg2

if (arg4 != 0)
    int64_t* rbx_1 = arg3 + 0x20
    int32_t i
    
    do
        int128_t* rdi_1 = r14
        r14 = &r14[3]
        *rdi_1 = *(rbx_1 - 0x20)
        sub_140597df0(&rdi_1[1], &rbx_1[-2])
        
        if (&rdi_1[2] != rbx_1)
            int64_t rsi_1 = sx.q(rbx_1[1].d)
            int64_t r15_1 = *rbx_1
            int32_t r8 = *(rdi_1 + 0x2c)
            *(rdi_1 + 0x28) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4a00(&rdi_1[2], rsi_1.d, r8)
                memcpy(rdi_1[2].q, r15_1, (rsi_1 << 3).d)
            else
                *(rdi_1 + 0x2c) = 0
        
        rbx_1 = &rbx_1[6]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
