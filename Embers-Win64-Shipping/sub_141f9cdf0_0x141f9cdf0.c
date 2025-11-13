// 函数: sub_141f9cdf0
// 地址: 0x141f9cdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*(arg1 + 0x80) = 0

if (*(arg1 + 0x84) != 0)
    sub_1405c5570(arg1 + 0x78, 0)

void* result = sub_141453140(arg1 + 8, 0)
*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) != 0)
    result = sub_1405dadb0(arg1 + 0x58, 0)

if (arg2[1].d s> 0)
    int64_t rbp_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg1 + 0x80))
        int64_t* r15_1 = *arg2
        int32_t rax = (rdi_1 + 1).d
        *(arg1 + 0x80) = rax
        
        if (rax s> *(arg1 + 0x84))
            sub_1405a4d70(arg1 + 0x78)
        
        *(*(arg1 + 0x78) + (rdi_1 << 3)) = *(r15_1 + rbp_1)
        int32_t rax_3 = data_143a2d8ec + 1
        data_143a2d8ec = rax_3
        int32_t arg_8 = rax_3
        result = sub_141f7f180(arg1 + 8, &arg_8, i)
        i += 1
        rbp_1 += 8
    while (i s< arg2[1].d)

return result
