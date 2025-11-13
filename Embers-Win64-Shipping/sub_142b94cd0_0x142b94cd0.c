// 函数: sub_142b94cd0
// 地址: 0x142b94cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int128_t var_38 = zx.o(0)

if (arg1 == 0 || arg1[1] s<= 0)
    return 0

sub_142b94c20(arg1, &var_38)
int32_t r10 = var_38.d
int32_t rax = var_38:8.d

if (r10 != rax)
    int32_t r9_1 = var_38:4.d
    int32_t r8_1 = var_38:0xc.d
    
    if (r9_1 != r8_1)
        int64_t r11 = *(arg1 + 8)
        int32_t temp0
        int32_t temp1
        temp0:temp1 = sx.q(rax)
        int64_t i_1 = sx.q(*arg1)
        int32_t temp2
        int32_t temp3
        temp2:temp3 = sx.q(r10)
        char rsi = 0
        char rbp = 0
        uint64_t rflags
        int32_t temp0_1
        temp0_1, rflags = _bit_scan_reverse(((temp1 ^ temp0) - temp0) | ((temp3 ^ temp2) - temp2))
        
        if (temp0_1 - 0xe s> 0)
            rsi = (temp0_1 - 0xe).b
        
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(r8_1 - r9_1)
        
        if (temp0_2 - 0xe s> 0)
            rbp = (temp0_2 - 0xe).b
        
        int32_t rax_10 = 0
        
        if (i_1 s> 0)
            int16_t* r14_1 = *(arg1 + 0x18)
            int64_t i
            
            do
                int64_t r15_1 = sx.q(*r14_1)
                int64_t rax_11 = sx.q(rax_10)
                int32_t r9_3 = *(r11 + (r15_1 << 3)) s>> rsi
                int32_t r10_2 = *(r11 + (r15_1 << 3) + 4) s>> rbp
                
                if (rax_11 s<= r15_1)
                    while (true)
                        int32_t r8_3 = *(r11 + (rax_11 << 3))
                        int32_t rdx_3 = *(r11 + (rax_11 << 3) + 4)
                        rax_11 += 1
                        int32_t r8_4 = r8_3 s>> rsi
                        int32_t rdx_4 = rdx_3 s>> rbp
                        int32_t arg_c = rdx_4
                        int64_t rcx_9 = r8_4.q
                        rbx += (rdx_4 - r10_2) * (r8_4 + r9_3)
                        
                        if (rax_11 s> r15_1)
                            break
                        
                        r10_2 = rcx_9:4.d
                        r9_3 = rcx_9.d
                
                r14_1 = &r14_1[1]
                rax_10 = (r15_1 + 1).d
                i = i_1
                i_1 -= 1
            while (i != 1)
            
            if (rbx s> 0)
                return zx.q((i_1 + 1).d)
            
            if (rbx s< 0)
                return 0

return 2
