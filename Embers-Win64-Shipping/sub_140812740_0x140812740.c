// 函数: sub_140812740
// 地址: 0x140812740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int16_t* result = arg1
int16_t r11 = 0

if (arg5 != 0)
    int64_t rdi = sx.q(rax - 1)
    
    if (rax - 1 s>= 0)
        int64_t temp1_1
        
        do
            int32_t rax_7 = 0
            
            if (arg4 s> 0)
                int16_t rbx_4 = arg4.w * *(*arg3 + (rdi << 2))
                
                do
                    int16_t r8_1 = (rbx_4 + rax_7.w) * 2
                    *result = r8_1
                    result[1] = r8_1 + 1
                    int16_t rdx_1 = r8_1 + 2
                    result[2] = rdx_1
                    result[3] = r8_1 + 1
                    int16_t rcx_4 = r8_1 + 3
                    r8_1 += 4
                    result[4] = rcx_4
                    result[5] = rdx_1
                    result = &result[6]
                    
                    if (r11 u>= r8_1)
                        r8_1 = r11
                    
                    rax_7 += 1
                    r11 = r8_1
                while (rax_7 s< arg4)
            
            temp1_1 = rdi
            rdi -= 1
        while (temp1_1 - 1 s>= 0)
else
    int32_t i = 0
    
    if (rax s> 0)
        int16_t* rsi_1 = nullptr
        
        do
            int32_t r8 = 0
            
            if (arg4 s> 0)
                int16_t rbx_2 = arg4.w * *(rsi_1 + *arg3)
                
                do
                    int16_t rdx = (rbx_2 + r8.w) * 2
                    *result = rdx
                    result[1] = rdx + 1
                    int16_t rcx = rdx + 2
                    result[2] = rcx
                    result[3] = rdx + 1
                    int16_t rax_4 = rdx + 3
                    rdx += 4
                    result[4] = rax_4
                    result[5] = rcx
                    result = &result[6]
                    
                    if (r11 u>= rdx)
                        rdx = r11
                    
                    r8 += 1
                    r11 = rdx
                while (r8 s< arg4)
            
            i += 1
            rsi_1 = &rsi_1[2]
        while (i s< arg3[1].d)

*arg2 = zx.d(r11)
return result
