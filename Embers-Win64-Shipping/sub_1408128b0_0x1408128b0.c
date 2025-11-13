// 函数: sub_1408128b0
// 地址: 0x1408128b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
int32_t r11 = 0
int32_t* result = arg1

if (arg5 != 0)
    int64_t rbx = sx.q(rax - 1)
    
    if (rax - 1 s>= 0)
        int64_t temp1_1
        
        do
            if (arg4 s> 0)
                uint64_t i_2 = zx.q(arg4)
                int32_t rax_10 = ((zx.q(*(*arg3 + (rbx << 2)) * arg4) << 1) + 1).d
                uint64_t i
                
                do
                    *result = rax_10 - 1
                    result[1] = rax_10
                    result[2] = rax_10 + 1
                    result[3] = rax_10
                    int32_t rax_11 = rax_10 + 3
                    result[4] = rax_10 + 2
                    result[5] = rax_10 + 1
                    result = &result[6]
                    
                    if (r11 u>= rax_11)
                        rax_11 = r11
                    
                    r11 = rax_11
                    rax_10 += 2
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            temp1_1 = rbx
            rbx -= 1
        while (temp1_1 - 1 s>= 0)
        *arg2 = r11
        return result
else
    int32_t i_1 = 0
    
    if (rax s> 0)
        int32_t* rdi = nullptr
        
        do
            if (arg4 s> 0)
                uint64_t j_1 = zx.q(arg4)
                int32_t rdx_2 = ((zx.q(*(rdi + *arg3) * arg4) << 1) + 1).d
                uint64_t j
                
                do
                    *result = rdx_2 - 1
                    result[1] = rdx_2
                    result[2] = rdx_2 + 1
                    result[3] = rdx_2
                    result[4] = rdx_2 + 2
                    result[5] = rdx_2 + 1
                    int32_t rax_4 = rdx_2 + 3
                    result = &result[6]
                    rdx_2 += 2
                    
                    if (r11 u>= rax_4)
                        rax_4 = r11
                    
                    r11 = rax_4
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            i_1 += 1
            rdi = &rdi[1]
        while (i_1 s< arg3[1].d)
        
        *arg2 = r11
        return result

*arg2 = 0
return result
