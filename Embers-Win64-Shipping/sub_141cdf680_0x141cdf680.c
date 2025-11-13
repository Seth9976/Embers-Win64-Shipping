// 函数: sub_141cdf680
// 地址: 0x141cdf680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1
int64_t r11_1 = sx.q(arg3) << 5
int32_t* r10 = *(r11_1 + rax + 0x10)
void* r11_2 = &r10[sx.q(*(r11_1 + rax + 0x18))]

if (r10 != r11_2)
    int64_t rdi_1 = arg1[0xe]
    
    do
        int64_t rdx = sx.q(*r10)
        int64_t rcx = rdx * 3
        int32_t rcx_1 = *(rdi_1 + (rcx << 3))
        int32_t rax_3 = *(rdi_1 + (rcx << 3) + 4)
        
        if (rcx_1 == arg3 && rax_3 == arg4)
            *arg2 = rdx.d
            return arg2
        
        if (rcx_1 == arg4 && rax_3 == arg3)
            *arg2 = rdx.d
            return arg2
        
        r10 = &r10[1]
    while (r10 != r11_2)

*arg2 = data_143a1c6bc
return arg2
