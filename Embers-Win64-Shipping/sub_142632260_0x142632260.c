// 函数: sub_142632260
// 地址: 0x142632260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
int64_t* r13 = arg1

if (*(arg1 + 9) != 0)
    (*(*arg1 + 0x20))(arg4, 9)

uint64_t j_2 = zx.q(*arg3)
uint64_t result_2 = zx.q(arg3[1])
void var_348
uint64_t result = memset(&var_348, 0, 0x300)

if (result_2.d s> 0)
    int64_t rax_4 = sx.q(j_2.d) << 3
    result = zx.q(result_2.d)
    int64_t rcx_1 = rax_4
    int64_t* r15_1 = nullptr
    uint64_t result_1 = result_2
    uint64_t i
    
    do
        if (j_2.d s> 0)
            int64_t* rsi_1 = r15_1
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                int32_t rbx = 0
                int64_t r11_1 = 0
                int32_t* k = *(rsi_1 + *(arg3 + 0x28))
                int32_t* k_1 = k
                
                if (k != 0)
                    void var_340
                    void* r9_1 = &var_340
                    
                    do
                        int32_t r10_1 = *k
                        k = *(k + 8)
                        int32_t rcx_4 = r10_1 u>> 0xd & 0x1fff
                        int32_t rax_7
                        
                        if (k == 0)
                            rax_7 = 0xffff
                        else
                            rax_7 = *k & 0x1fff
                        
                        int32_t rax_8 = rax_7 - rcx_4
                        *(r9_1 - 8) = rcx_4.w
                        
                        if (rax_7 - rcx_4 s< 0)
                            rax_8 = 0
                        else if (rax_8 s> 0xff)
                            rax_8 = 0xff
                        
                        rbx += 1
                        *(r9_1 - 6) = (r10_1 u>> 0x1a).w
                        r11_1 += 1
                        *r9_1 = rax_8.b
                        r9_1 += 0xc
                        
                        if (r11_1 s>= 0x40)
                            break
                    while (k != 0)
                
                int32_t r9_2 = rbx - 1
                uint32_t rdx = 0xffff
                
                if (r9_2 s>= 0)
                    void* rax_10 = &var_388 + r11_1 * 0xc + 0x36
                    int32_t temp3_1
                    
                    do
                        if (zx.d(*(rax_10 + 6)) s< arg2)
                            uint32_t rcx_6 = zx.d(*(rax_10 - 2))
                            
                            if (rcx_6 s>= rdx)
                                *rax_10 = 0
                            else
                                rdx = rcx_6 - arg2
                                
                                if (rcx_6 - arg2 s< 0)
                                    rdx = 0
                        else if (*rax_10 != 0)
                            rdx = zx.d(*(rax_10 - 2))
                        
                        rax_10 -= 0xc
                        temp3_1 = r9_2
                        r9_2 -= 1
                    while (temp3_1 - 1 s>= 0)
                
                int64_t rcx_7 = 0
                
                if (k_1 != 0)
                    void var_346
                    void* rdx_2 = &var_346
                    
                    do
                        if (rcx_7 s< 0x40)
                            uint32_t rax_11 = zx.d(*rdx_2)
                            *k_1 &= 0x3ffffff
                            *k_1 |= rax_11 << 0x1a
                        
                        k_1 = *(k_1 + 8)
                        rcx_7 += 1
                        rdx_2 += 0xc
                    while (k_1 != 0)
                
                rsi_1 = &rsi_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            result = result_1
            rcx_1 = rax_4
        
        r15_1 += rcx_1
        i = result
        result -= 1
        result_1 = result
    while (i != 1)
    r13 = arg1

if (*(r13 + 9) != 0)
    result = (*(*r13 + 0x28))(r13, 9)

__security_check_cookie(rax_1 ^ &var_388)
return result
