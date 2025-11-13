// 函数: sub_142bdcc50
// 地址: 0x142bdcc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

void var_108
int64_t rax_2 = __security_cookie ^ &var_108
int32_t i = arg3
int32_t rbp_1 = 0
int64_t var_d8_1 = arg4

do
    int32_t r14_1 = i
    
    if (i s> 0x10)
        r14_1 = 0x10
    
    int64_t rbx_1 = 0
    int32_t rax_3 = r14_1 * 2
    int64_t rdi_1 = sx.q(rax_3)
    void var_c8
    
    if (rax_3 s> 0)
        do
            rbp_1 += *(&var_c8 + arg4 - &var_c8 + (rbx_1 << 2))
            *(&var_c8 + (rbx_1 << 2)) = sub_142b96160(rbp_1) s>> 0x10
            rbx_1 += 1
        while (rbx_1 s< rdi_1)
    
    int64_t rax_7 = 0
    
    if (rdi_1 s> 0)
        do
            int32_t var_c4[0x1f]
            var_c4[rax_7] -= *(&var_c8 + (rax_7 << 2))
            rax_7 += 2
        while (rax_7 s< rdi_1)
    
    void* rdi_2 = &var_c8
    int32_t j = r14_1
    int32_t rax_8 = arg2
    
    if (arg1[1].d == 0)
        if (arg2 u> 1)
            rax_8.b = arg2 != 0
        
        if (r14_1 s> 0)
            do
                int64_t var_e8_1 = 0
                int32_t rax_10 =
                    sub_142bd9250(&arg1[3 + zx.q(rax_8) * 6], *rdi_2, *(rdi_2 + 4), *arg1)
                
                if (rax_10 != 0)
                    arg1[1].d = rax_10
                    break
                
                j -= 1
                rdi_2 += 8
            while (j s> 0)
    
    arg4 = var_d8_1
    i -= r14_1
while (i s> 0)

__security_check_cookie(rax_2 ^ &var_108)
