// 函数: sub_142a823a0
// 地址: 0x142a823a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0x70)
int32_t result = 0
int64_t rbx = *(arg1 + 0x78)
int64_t rcx = sx.q(arg2)
int64_t r10 = sx.q(arg3)

if (rcx s< r10)
    char* rdx = rcx + rbx
    int64_t i_1 = r10 - rcx
    int64_t i
    
    do
        char r8 = *(r11 - rbx + rdx)
        int32_t result_1 = result - 1
        
        if (r8 != 0x16)
            result_1 = result
        
        result = result_1
        
        if (result_1 == 0)
            *rdx = arg4
        
        if (r8 == 0x14 || r8 == 0x15)
            result += 1
        
        rdx = &rdx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
