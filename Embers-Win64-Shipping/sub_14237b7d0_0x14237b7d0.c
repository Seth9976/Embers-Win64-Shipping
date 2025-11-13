// 函数: sub_14237b7d0
// 地址: 0x14237b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r14 = result.d

if (result.d s>= 0)
    int32_t r15_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t rdi_1 = zx.q(r14)
        
        if (r15_1 s< arg2)
            do
                uint64_t r11_1 = zx.q(((rdi_1 << 1) + 1).d)
                int32_t rbx_1 = (r11_1 + 1).d
                
                if (rbx_1 s< arg2)
                    int64_t r8 = *(*arg4 + 0x60)
                    
                    if (*((sx.q(arg1[sx.q(rbx_1)]) << 5) + r8 + 0x18) f>
                            *((sx.q(arg1[sx.q(r11_1.d)]) << 5) + r8 + 0x18))
                        rbx_1 = r11_1.d
                    
                    r11_1 = zx.q(rbx_1)
                
                int64_t r8_1 = sx.q(rdi_1.d)
                int64_t rdi_2 = sx.q(r11_1.d)
                int64_t rdx_3 = *(*arg4 + 0x60)
                int64_t rbx_2 = sx.q(arg1[r8_1])
                int64_t rbp_1 = sx.q(arg1[rdi_2])
                result = rbp_1 << 5
                
                if (*(result + rdx_3 + 0x18) f>= *((rbx_2 << 5) + rdx_3 + 0x18))
                    break
                
                result = zx.q(((r11_1 << 1) + 1).d)
                arg1[r8_1] = rbp_1.d
                arg1[rdi_2] = rbx_2.d
                rdi_1 = zx.q(r11_1.d)
            while (result.d s< arg2)
        
        r15_1 -= 2
        temp2_1 = r14
        r14 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        int32_t rcx_4 = *arg1
        uint64_t rsi_1 = 0
        result = zx.q(arg1[i])
        *arg1 = result.d
        arg1[i] = rcx_4
        
        if (j s> 1)
            do
                uint64_t r11_2 = zx.q(((rsi_1 << 1) + 1).d)
                int32_t rbx_3 = (r11_2 + 1).d
                
                if (rbx_3 s< j)
                    int64_t r8_2 = *(*arg4 + 0x60)
                    
                    if (*((sx.q(arg1[sx.q(rbx_3)]) << 5) + r8_2 + 0x18) f>
                            *((sx.q(arg1[sx.q(r11_2.d)]) << 5) + r8_2 + 0x18))
                        rbx_3 = r11_2.d
                    
                    r11_2 = zx.q(rbx_3)
                
                int64_t r8_3 = sx.q(rsi_1.d)
                int64_t rsi_2 = sx.q(r11_2.d)
                int64_t rdx_6 = *(*arg4 + 0x60)
                int64_t rbx_4 = sx.q(arg1[r8_3])
                int64_t rbp_2 = sx.q(arg1[rsi_2])
                result = rbp_2 << 5
                
                if (*(result + rdx_6 + 0x18) f>= *((rbx_4 << 5) + rdx_6 + 0x18))
                    break
                
                result = zx.q(((r11_2 << 1) + 1).d)
                arg1[r8_3] = rbp_2.d
                arg1[rsi_2] = rbx_4.d
                rsi_1 = zx.q(r11_2.d)
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
