// 函数: sub_142a94020
// 地址: 0x142a94020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = -1
uint32_t r10 = 0
uint32_t r11 = 0x8d
uint32_t r9 = 0

if (arg1 != 0 && arg2 != 0)
    int64_t rax_1 = -1
    int64_t rcx = -1
    
    do
        rcx += 1
    while (arg1[rcx] != 0)
    
    if (rcx u>= 2)
        do
            rax_1 += 1
        while (arg2[rax_1] != 0)
        
        if (rax_1 u>= 2)
            do
                uint32_t rdx_1 = (r11 + r10) u>> 1
                
                if (rdx_1 == r9)
                    break
                
                char* rax_2 = arg1
                uint64_t r9_2 = zx.q(rdx_1) * 2
                int32_t rax_3
                
                while (true)
                    char rcx_2 = *rax_2
                    char temp0_1 = *(rax_2 + *((&data_143cca578)[r9_2] + 8) - arg1)
                    
                    if (rcx_2 != temp0_1)
                        rax_3 = sbb.d(rax_2.d, rax_2.d, rcx_2 u< temp0_1) | 1
                        break
                    
                    rax_2 = &rax_2[1]
                    
                    if (rcx_2 == 0)
                        rax_3 = 0
                        break
                
                if (rax_3 s>= 0)
                    if (rax_3 s<= 0)
                        return sub_142a93ce0(&data_143cca570 + (r9_2 << 3), arg2, arg3)
                    
                    r10 = rdx_1
                else
                    r11 = rdx_1
                
                r9 = rdx_1
            while (r11 u> r10)
            
            for (int32_t i = 0; i u< 0x8d; i += 1)
                int32_t arg_8 = 0
                int32_t rax_5 = sub_142a93ce0((zx.q(i) << 4) + &data_143cca570, arg2, &arg_8)
                int32_t rcx_6 = arg_8
                
                if (rcx_6 == 0)
                    return rax_5
                
                if (rcx_6 == 0xffffff80)
                    rdi = rax_5
            
            if (rdi == 0xffffffff)
                *arg3 = 1
                return 0
            
            *arg3 = 0xffffff80
            return rdi

return 0
