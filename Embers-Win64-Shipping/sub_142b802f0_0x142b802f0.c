// 函数: sub_142b802f0
// 地址: 0x142b802f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_142b806f0(arg1, arg2, arg3)

if (result == 0)
    return result

int32_t j = arg1[0xd]

if (sub_142b80620(arg1, arg4, j) == 0)
    char i
    
    do
        if (j == 4)
            return 0
        
        if (sub_142b80410(arg1, arg4, j) != 0)
            break
        
        int32_t rsi_1 = 0
        
        if (arg1[0x28] s> 0)
            void* rax = &arg1[0xe]
            
            while (*(rax - 4) == j)
                int32_t r11_2 = *(rax - 4) + 1
                int64_t r9 = sx.q(r11_2)
                char rcx_3 = ((4 - r11_2) << 3).b
                int32_t r10_1 = 0xffffff00 << rcx_3
                rsi_1 += 1
                int32_t r10_2 = r10_1 & *(rax - 8)
                *(rax - 0xc) = arg1[r9 + 1] << rcx_3 | (*(rax - 0xc) & r10_1)
                int32_t rcx_4 = *rax
                *(rax - 8) = r10_2 | arg1[r9 + 6] << rcx_3
                int32_t rdx_8 = arg1[r9 + 6] - arg1[r9 + 1] + 1
                *(rax - 4) = r11_2
                *rax = rcx_4 * rdx_8
                rax += 0x10
                
                if (rsi_1 s>= arg1[0x28])
                    break
        
        j = arg1[0xd]
        i = sub_142b80620(arg1, arg4, j)
    while (i == 0)

arg1[0x27] = 0
return 1
