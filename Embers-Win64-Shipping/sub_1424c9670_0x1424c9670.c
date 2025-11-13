// 函数: sub_1424c9670
// 地址: 0x1424c9670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int128_t* r14 = arg2

if (arg4 != 0)
    int128_t* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int128_t* rax = r14
        r14 = &r14[4]
        *rax = rbx_1[-1]
        rax[1] = *rbx_1
        rax[2] = rbx_1[1]
        
        if (&rax[3] != &rbx_1[2])
            int64_t rsi_1 = sx.q(*(rbx_1 + 0x28))
            int64_t r15_1 = rbx_1[2].q
            int32_t r8 = *(rax + 0x3c)
            *(rax + 0x38) = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405a4be0(&rax[3], rsi_1.d, r8)
                memcpy(rax[3].q, r15_1, (rsi_1 << 4).d)
            else
                *(rax + 0x3c) = 0
        
        rbx_1 = &rbx_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
