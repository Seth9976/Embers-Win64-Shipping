// 函数: sub_142a899d0
// 地址: 0x142a899d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t result = __security_cookie ^ &var_128
uint64_t result_1 = result
int32_t var_108 = 0

if (*arg5 s<= 0)
    void var_e8
    result = sub_142a4d730(arg1, &var_e8, 0x9d, &var_108)
    int32_t rcx = var_108
    
    if (rcx s> 0 || rcx == 0xffffff84)
        if (arg3 != 0)
            *arg5 = 1
    else if (result.d s> 0)
        int64_t* rsi_1 = nullptr
        void* rdi_1 = nullptr
        int64_t r13
        r13.b = 1
        int64_t rax_1 = sx.q(result.d)
        void* r14_1 = &var_e8
        
        while (true)
            result = zx.q(*r14_1)
            
            if (result.b != 0x2d && result.b != 0x5f)
                if (result.b == 0)
                    goto label_142a89aa8
                
                if (rdi_1 == 0)
                    rdi_1 = r14_1
                
                goto label_142a89c7f
            
            if (result.b != 0)
                *r14_1 = 0
            else
            label_142a89aa8:
                r13.b = 0
            
            if (rdi_1 != 0)
                if (*rdi_1 != 0)
                    void* rbx_1 = rdi_1
                    
                    do
                        *rbx_1 = sub_142a86220(zx.d(*rbx_1))
                        rbx_1 += 1
                    while (*rbx_1 != 0)
                
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while (*(rdi_1 + rbx_2) != 0)
                
                int32_t rdx_1 = rbx_2.d
                
                if (rbx_2.d s< 0)
                    rdx_1 = rbx_2.d
                
                result = zx.q(rdx_1 - 5)
                
                if (result.d u<= 3)
                    result = sub_142a89d60(rdi_1, rdx_1)
                    
                    if (result.b == 0)
                        goto label_142a89b6b
                    
                label_142a89b9c:
                    void* rax_3 = rdi_1
                    uint32_t i
                    uint32_t rdx_3
                    
                    do
                        rdx_3 = zx.d(*rax_3)
                        i = zx.d(*(rax_3 + "posix" - rdi_1))
                        
                        if (rdx_3 != i)
                            break
                        
                        rax_3 += 1
                    while (i != 0)
                    
                    if (rdx_3 - i != 0 || rax_1 != 5)
                        result = sub_142a7dd00(0x10)
                        uint64_t result_3 = result
                        
                        if (result == 0)
                            *arg5 = 7
                            break
                        
                        *result = rdi_1
                        
                        if (rsi_1 != 0)
                            int64_t* result_2 = rsi_1
                            
                            while (true)
                                void* rax_4 = rdi_1
                                uint32_t i_1
                                uint32_t rdx_5
                                
                                do
                                    rdx_5 = zx.d(*rax_4)
                                    i_1 = zx.d(*(rax_4 + *result_2 - rdi_1))
                                    
                                    if (rdx_5 != i_1)
                                        break
                                    
                                    rax_4 += 1
                                while (i_1 != 0)
                                
                                if (rdx_5 - i_1 == 0)
                                    result = sub_142a7dcd0(result_3)
                                    
                                    if (arg3 != 0)
                                        goto label_142a89abf
                                    
                                    goto label_142a89c7d
                                
                                result = result_2
                                result_2 = result_2[1]
                                
                                if (result_2 == 0)
                                    *(result + 8) = result_3
                                    *(result_3 + 8) = result_2
                                    break
                        else
                            *(result + 8) = rsi_1
                            rsi_1 = result
                    else
                        result = arg4
                        *result = 1
                    
                    goto label_142a89c7d
                
            label_142a89b6b:
                
                if (rbx_2.d == 4)
                    result.b = *rdi_1 - 0x30
                    
                    if (result.b u> 9)
                        goto label_142a89c50
                    
                    result = sub_142a89d60(rdi_1 + 1, (rbx_2 - 1).d)
                    
                    if (result.b != 0)
                        goto label_142a89b9c
                
            label_142a89c50:
                
                if (arg3 != 0)
                    goto label_142a89abf
                
                int64_t rdx_7 = -1
                
                do
                    rdx_7 += 1
                while (*(rdi_1 + rdx_7) != 0)
                
                result = zx.q((rdx_7 - 1).d)
                
                if (result.d u> 7)
                    goto label_142a89c7d
                
                result = sub_142a89d60(rdi_1, rdx_7.d)
                
                if (result.b == 0)
                    goto label_142a89c7d
            else
                if (arg3 != 0)
                label_142a89abf:
                    *arg5 = 1
                    break
                
            label_142a89c7d:
                rdi_1 = nullptr
            label_142a89c7f:
                r14_1 += 1
                
                if (r13.b != 0)
                    continue
            
            if (*arg5 s> 0)
                break
            
            if (rsi_1 != 0)
                int64_t* i_2 = rsi_1
                
                do
                    (*(*arg2 + 8))(arg2, &data_143642120, 1)
                    int64_t r8_3 = -1
                    
                    do
                        r8_3 += 1
                    while ((*i_2)[r8_3] != 0)
                    
                    result = (*(*arg2 + 8))(arg2)
                    i_2 = i_2[1]
                while (i_2 != 0)
            
            break
        
        if (rsi_1 != 0)
            int64_t* i_3
            
            do
                i_3 = rsi_1[1]
                result = sub_142a7dcd0(rsi_1)
                rsi_1 = i_3
            while (i_3 != 0)

__security_check_cookie(result_1 ^ &var_128)
return result
