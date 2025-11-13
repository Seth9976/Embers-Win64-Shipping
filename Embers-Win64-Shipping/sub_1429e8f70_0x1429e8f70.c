// 函数: sub_1429e8f70
// 地址: 0x1429e8f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rdi = *(arg1 + 0x1e70)
int32_t r11 = sx.d(*arg4)
int64_t r10 = sx.q(arg4[1])
int64_t r12 = *(arg1 + 0x2398)
int64_t r13 = *(arg1 + 0x23a0)
int64_t r9_1 = sx.q(*(arg3 + 0x20)) + *(arg1 + 0x1e98)
int64_t rsi_1 = sx.q(*(arg2 + 0x50)) + **(arg2 + 0x48)
int32_t rax_4 = *(arg2 + 0x54)
int32_t rbp_1 = r11 - arg6
int16_t rdx = arg9[1] s>> 3
int32_t r8_1 = sx.d(*arg9 s>> 3)
*(arg3 + 0x30) = r11.w
*(arg3 + 0x32) = r10.w
int32_t rcx_4 = sx.d(rdx)
int64_t r15_3 = sx.q(r11 * rdi) + r9_1 + r10
int32_t r10_1 = r10.d - arg6
int32_t i = r10.d + arg6
int32_t rsi_2 = (((*(r13 + (sx.q(r10.d - rcx_4) << 2)) + *(r12 + (sx.q(r11 - r8_1) << 2))) * arg5
    + 0x80) s>> 8) + (*arg7)(rsi_1, zx.q(rax_4), r15_3, zx.q(rdi))
int32_t rcx_7 = *(arg1 + 0x23d0)
int32_t rax_14 = *(arg1 + 0x23d8)

if (r10_1 s< rcx_7)
    r10_1 = rcx_7

int32_t i_2 = *(arg1 + 0x23d4)
int32_t var_a4_1 = r10_1

if (i s> i_2)
    i = i_2

int32_t rcx_8 = r11 + arg6
int32_t i_1 = i

if (rbp_1 s< rax_14)
    rbp_1 = rax_14

int32_t rax_15 = *(arg1 + 0x23dc)

if (rcx_8 s> rax_15)
    rcx_8 = rax_15

int32_t rbx_6 = 0
int32_t var_b0

if (rbp_1 s< rcx_8)
    int64_t r8_4 = sx.q(rdi)
    int32_t r11_1 = r10_1 + 2
    int64_t var_78_1 = r8_4
    int64_t r9_4 = sx.q(r10_1) + r9_1 + sx.q(rbp_1 * r8_4.d)
    int64_t var_98_1 = r9_4
    
    do
        int64_t rdi_1 = r9_4
        int32_t rbx_7 = r10_1
        int32_t (* var_c8)[0x4]
        
        if (r11_1 s< i)
            do
                int32_t var_68[0x4]
                var_c8 = &var_68
                (*(arg7 + 0x18))(rsi_1, zx.q(rax_4), rdi_1, zx.q(r8_4.d), var_c8)
                
                for (int64_t j = 0; j s< 3; j += 1)
                    int32_t r8_6 = var_68[j]
                    var_b0 = r8_6
                    
                    if (r8_6 u< rsi_2)
                        int32_t r8_7 = r8_6 + (((*(r12 + (sx.q(sx.d(rbp_1.w) - r8_1) << 2))
                            + *(r13 + (sx.q(sx.d(rbx_7.w) - rcx_4) << 2))) * arg5 + 0x80) s>> 8)
                        var_b0 = r8_7
                        
                        if (r8_7 u< rsi_2)
                            rsi_2 = r8_7
                            *(arg3 + 0x30) = rbp_1.w
                            *(arg3 + 0x32) = rbx_7.w
                            r15_3 = rdi_1
                    
                    rdi_1 += 1
                    rbx_7 += 1
                
                i = i_1
                r8_4 = zx.q(rdi)
            while (rbx_7 + 2 s< i)
            
            r9_4 = var_98_1
        
        if (rbx_7 s< i)
            do
                int32_t rax_32 = (*arg7)(rsi_1, zx.q(rax_4), rdi_1, zx.q(r8_4.d), var_c8)
                var_b0 = rax_32
                
                if (rax_32 u< rsi_2)
                    int32_t rax_33 = rax_32 + (((*(r12 + (sx.q(sx.d(rbp_1.w) - r8_1) << 2))
                        + *(r13 + (sx.q(sx.d(rbx_7.w) - rcx_4) << 2))) * arg5 + 0x80) s>> 8)
                    var_b0 = rax_33
                    
                    if (rax_33 u< rsi_2)
                        rsi_2 = rax_33
                        *(arg3 + 0x30) = rbp_1.w
                        *(arg3 + 0x32) = rbx_7.w
                        r15_3 = rdi_1
                
                i = i_1
                rdi_1 += 1
                r8_4 = zx.q(rdi)
                rbx_7 += 1
            while (rbx_7 s< i)
            
            r9_4 = var_98_1
        
        r9_4 += var_78_1
        rbp_1 += 1
        r10_1 = var_a4_1
        r8_4 = zx.q(rdi)
        var_98_1 = r9_4
        r11_1 = r10_1 + 2
    while (rbp_1 s< rcx_8)
    
    rdi = r8_4.d
    rbx_6 = 0

if (arg8 != 0)
    int32_t rbx_9 = *(arg8[1] + (sx.q(sx.d(*(arg3 + 0x32) << 3) - sx.d(arg9[1])) s>> 1 << 2))
        + *(*arg8 + (sx.q(sx.d(*(arg3 + 0x30) << 3) - sx.d(*arg9)) s>> 1 << 2))
    rbx_6 = (rbx_9 * *(arg1 + 0x2358) + 0x80) s>> 8

uint64_t result = zx.q((*(arg7 + 8))(rsi_1, zx.q(rax_4), r15_3, zx.q(rdi), &var_b0) + rbx_6)
__security_check_cookie(rax_1 ^ &var_e8)
return result
