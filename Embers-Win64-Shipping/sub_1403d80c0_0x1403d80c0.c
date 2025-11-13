// 函数: sub_1403d80c0
// 地址: 0x1403d80c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg2
void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_2 = result
arg2.b = arg1[4].b

if (arg2.b != 3)
    uint32_t rbx_1 = zx.d(*(arg1 + 0x11))
    int32_t r9_1
    char result_3
    
    if ((arg2.b & 2) != 0)
        result_3 = *arg3
        uint32_t rbp_1 = zx.d(arg3[1])
        uint32_t var_44_1 = rbx_1 - rbp_1
        uint32_t var_54_1 = rbp_1
        uint32_t rax_3 = zx.d(arg3[2])
        uint32_t var_40_1 = rbx_1 - rax_3
        uint32_t var_50_1 = rax_3
        r9_1 = 3
    else
        result_3 = arg3[3]
        r9_1 = 1
    
    result = zx.q(result_3)
    int32_t result_1 = rbx_1 - result.d
    int32_t var_58 = result.d
    
    if ((arg2.b & 4) != 0)
        result = zx.q(arg3[4])
        uint64_t rbp_3 = zx.q(r9_1)
        (&result_1)[rbp_3] = rbx_1 - result.d
        (&var_58)[rbp_3] = result.d
        r9_1 += 1
    
    if (rbx_1.b u> 7)
        int32_t r10_2 = *arg1 * r9_1
        
        if (rbx_1.b != 8)
            if (r10_2 != 0)
                int32_t r8_2 = 0
                
                do
                    uint64_t rdx_7 = zx.q(modu.dp.d(0:r8_2, r9_1))
                    result = zx.q((&result_1)[rdx_7])
                    int32_t r14_1 = (&var_58)[rdx_7]
                    int32_t i = neg.d(r14_1)
                    int32_t rbx_5
                    char* r15_1
                    
                    if (result.d s<= i)
                        r15_1 = rdi
                        rbx_5 = 0
                    else
                        r15_1 = rdi
                        uint32_t rsi_5 = zx.d(rdi[1]) | zx.d(*rdi) << 8
                        int32_t rdx_9 = neg.d(result.d)
                        rbx_5 = 0
                        
                        do
                            uint32_t rdi_6 = rsi_5 u>> rdx_9.b
                            
                            if (result.d s> 0)
                                rdi_6 = rsi_5 << result.b
                            
                            rbx_5 |= rdi_6
                            result = zx.q(result.d - r14_1)
                            rdx_9 += r14_1
                        while (result.d s> i)
                    
                    *r15_1 = rbx_5:1.b
                    r15_1[1] = rbx_5.b
                    rdi = &r15_1[2]
                    r8_2 += 1
                while (r8_2 != r10_2)
        else if (r10_2 != 0)
            int32_t r8_1 = 0
            
            do
                uint64_t rdx_6 = zx.q(modu.dp.d(0:r8_1, r9_1))
                uint32_t r11_1 = zx.d(*rdi)
                *rdi = 0
                result = zx.q((&result_1)[rdx_6])
                
                if (result.d s> 0 - (&var_58)[rdx_6])
                    char rbp_5 = 0
                    int32_t rcx_8
                    
                    do
                        char* rsi_3 = rdi
                        uint8_t rdi_4 = (r11_1 << result.b).b
                        
                        if (result.d s<= 0)
                            rdi_4 = (r11_1 u>> neg.b(result.b)).b
                        
                        rbp_5 |= rdi_4
                        rdi = rsi_3
                        *rsi_3 = rbp_5
                        rcx_8 = (&var_58)[rdx_6]
                        result = zx.q(result.d - rcx_8)
                    while (result.d s> neg.d(rcx_8))
                
                r8_1 += 1
                rdi = &rdi[1]
            while (r8_1 != r10_2)
    else
        int64_t r9_2 = *(arg1 + 8)
        arg1.b = arg3[3]
        char r8
        
        if (rbx_1.b == 2)
            r8 = 0x55
        
        if (rbx_1.b != 2 || arg1.b != 1)
            rbx_1.b ^= 4
            arg1.b ^= 3
            arg1.b |= rbx_1.b
            result = 0x11
            r8 = -1
            
            if (arg1.b == 0)
                r8 = 0x11
        
        if (r9_2 != 0)
            int64_t r10 = 0
            
            do
                uint32_t rbp_4 = zx.d(*rdi)
                *rdi = 0
                result = zx.q(result_1)
                
                if (result.d s> 0 - var_58)
                    char rbx_2 = 0
                    int32_t rcx_3
                    
                    do
                        uint8_t rdx_3
                        
                        if (result.d s<= 0)
                            rdx_3 = (rbp_4 u>> neg.b(result.b)).b & r8
                        else
                            rdx_3 = (rbp_4 << result.b).b
                        
                        rbx_2 |= rdx_3
                        *rdi = rbx_2
                        rcx_3 = var_58
                        result = zx.q(result.d - rcx_3)
                    while (result.d s> neg.d(rcx_3))
                
                r10 += 1
                rdi = &rdi[1]
            while (r10 != r9_2)

__security_check_cookie(result_2 ^ &var_78)
return result
