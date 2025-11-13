// 函数: sub_1413e0640
// 地址: 0x1413e0640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5f8
int64_t rax_1 = __security_cookie ^ &var_5f8
int64_t var_478
__builtin_memset(&var_478, 0, 0x3c)
int64_t var_438
__builtin_memset(&var_438, 0, 0x3c)
int64_t var_3f8
__builtin_memset(&var_3f8, 0, 0x3c)
int64_t var_3b8
__builtin_memset(&var_3b8, 0, 0x3c)
int64_t var_378
__builtin_memset(&var_378, 0, 0x3c)
int64_t var_338
__builtin_memset(&var_338, 0, 0x3c)
int64_t var_2f8
__builtin_memset(&var_2f8, 0, 0x3c)
int64_t var_2b8
__builtin_memset(&var_2b8, 0, 0x3c)
int64_t var_278
__builtin_memset(&var_278, 0, 0x3c)
int64_t var_238
__builtin_memset(&var_238, 0, 0x3c)
int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x3c)
int64_t var_1b8
__builtin_memset(&var_1b8, 0, 0x3c)
int64_t var_178
__builtin_memset(&var_178, 0, 0x3c)
int64_t var_138
__builtin_memset(&var_138, 0, 0x3c)
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x3c)
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x3c)
int64_t var_78
__builtin_memset(&var_78, 0, 0x3c)
int64_t var_5d8
__builtin_memset(&var_5d8, 0, 0x15c)
int64_t i_2 = 0x12
int64_t i_3 = 0x12
int64_t var_5d0
int64_t* rbx = &var_5d0
int32_t* r14 = arg1 + 0x3f8
uint64_t result
int64_t i

do
    int32_t rdi_1 = *r14
    int32_t rsi_1 = 0
    *rbx = 0
    
    if (*(rbx + 4) != rdi_1)
        sub_1405c5510(&rbx[-1], rdi_1)
        rdi_1 = *r14
        rsi_1 = *rbx
    
    int32_t rax_2 = rsi_1 + rdi_1
    *rbx = rax_2
    
    if (rax_2 s> *(rbx + 4))
        sub_140679a80(&rbx[-1])
    
    memset(sx.q(rsi_1) + rbx[-1], 0, sx.q(rdi_1))
    r14 = &r14[0x12]
    rbx = &rbx[2]
    result = 0
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t i_1 = 0
int64_t var_4b8

if (*(arg1 + 0xdc0) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        result = *(arg1 + 0xdb8)
        int32_t j = 0
        void* rdi_2 = *(r14_1 + result)
        
        if (*(rdi_2 + 0x30) s> 0)
            int64_t r9_1 = 0
            
            do
                int64_t r8_2 = *(rdi_2 + 0x28)
                int64_t rdx_3 = sx.q(*(r9_1 + r8_2 + 0xc))
                result = zx.q(*(r9_1 + r8_2 + 0x10) << 0x1a)
                void* rdx_6
                
                if (rdx_3.d == 0xffffffff)
                    int64_t rdx_7 = sx.q(*(r9_1 + r8_2 + 8))
                    
                    if (rdx_7.d s>= 0)
                        rdx_6 = rdx_7 * 0xe8 + *((((sx.q(result.d) s>> 0x1a) + 0x24) << 6) + arg1)
                    label_1413e0bfc:
                        
                        if (rdx_6 != 0)
                            int64_t r11_1 = sx.q(*(rdx_6 + 0x1c))
                            *(r9_1 + r8_2 + 0x10)
                            int64_t r8_4
                            
                            if (r11_1.d u<= 2)
                                r8_4 = 0
                            else
                                r8_4 = r11_1 << 3
                            
                            int16_t result_1 = *(rdx_6 + 0x72)
                            
                            if (result_1 u> 0x50)
                                r8_4 += zx.q(result_1)
                            
                            int64_t rax_8 = sx.q(*(rdx_6 + 0xb4))
                            int64_t rdx_10
                            
                            if (rax_8.d u<= 4)
                                rdx_10 = 0
                            else
                                rdx_10 = rax_8 * 0xc
                            
                            int64_t var_4b0
                            (&var_4b0)[(sx.q(*(r9_1 + r8_2 + 0x10) << 0x1a) s>> 0x1a) * 8] += 4
                            int64_t var_4a8
                            (&var_4a8)[(sx.q(*(r9_1 + r8_2 + 0x10) << 0x1a) s>> 0x1a) * 8] += 0x78
                            result = r8_4 + 0xe8 + rdx_10
                            (&var_4b8)[(sx.q(*(r9_1 + r8_2 + 0x10) << 0x1a) s>> 0x1a) * 8] += result
                            int64_t rdx_12
                            
                            if (r11_1.d u<= 2)
                                rdx_12 = 0
                            else
                                rdx_12 = r11_1 << 3
                            
                            if (result_1 u> 0x50)
                                result = zx.q(result_1)
                                rdx_12 += result
                            
                            int64_t var_4a0
                            (&var_4a0)[(sx.q(*(r9_1 + r8_2 + 0x10) << 0x1a) s>> 0x1a) * 8] += rdx_12
                            int64_t var_498
                            (&var_498)[(sx.q(*(r9_1 + r8_2 + 0x10) << 0x1a) s>> 0x1a) * 8] += 0x40
                            int64_t var_488
                            (&var_488)[(sx.q(*(r9_1 + r8_2 + 0x10) << 0x1a) s>> 0x1a) * 8] += 0x1c
                            int32_t var_480
                            (&var_480)[(sx.q(*(r9_1 + r8_2 + 0x10) << 0x1a) s>> 0x1a) * 0x10] += 1
                else
                    int64_t rcx_5 = sx.q(result.d) s>> 0x1a
                    result = rcx_5 * 2
                    char* rdx_4 = (&var_5d8)[result]
                    
                    if (rdx_4[rdx_3] == 0)
                        rdx_4[rdx_3] = 1
                        result = sx.q(*(r9_1 + r8_2 + 0xc))
                        rdx_6 = result * 0xf8 + *(arg1 + rcx_5 * 0x48 + 0x3f0)
                        goto label_1413e0bfc
                j += 1
                r9_1 += 0x14
            while (j s< *(rdi_2 + 0x30))
        
        i_1 += 1
        r14_1 = &r14_1[1]
    while (i_1 s< *(arg1 + 0xdc0))

int64_t* rbx_1 = &var_4b8

do
    int64_t rcx_14 = rbx_1[-2]
    rbx_1 = &rbx_1[-2]
    i_2 -= 1
    
    if (rcx_14 != 0)
        result = sub_140a74f90(rcx_14)
while (i_2 != 0)

__security_check_cookie(rax_1 ^ &var_5f8)
return result
