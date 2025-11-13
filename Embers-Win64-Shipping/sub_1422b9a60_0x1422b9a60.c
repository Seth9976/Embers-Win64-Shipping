// 函数: sub_1422b9a60
// 地址: 0x1422b9a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x78)

if (arg4 s>= rax)
    arg4 = rax - 1

*(arg3 + 0xb8) = arg4
*(arg3 + 0xbc) = *(arg1 + 0x78)
int64_t result = *(arg1 + 0x58)
*(arg3 + 0xa8) = result
char r11 = *(arg1 + 0x80)

if (arg4 s>= 0)
    int32_t r10_1 = *(arg1 + 0x78)
    
    if (arg4 u< r10_1)
        int32_t var_10_1 = 0
        char var_9_1 = 4
        char rdx = 8
        
        if (r11 == 0)
            rdx = 4
        
        char var_c_1 = rdx * arg4.b
        result = 2
        char var_b_1 = rdx * r10_1.b
        
        if (r11 == 0)
            result = 0xc
        
        char var_a_1 = result.b
        *(arg3 + 0x78) = (arg1 + 0x28).o

return result
