// 函数: sub_1429e9350
// 地址: 0x1429e9350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t r10 = sx.d(*arg4)
int64_t r11 = sx.q(arg4[1])
int32_t rsi = *(arg1 + 0x1e70)
int64_t r12 = *(arg1 + 0x2398)
int64_t r13 = *(arg1 + 0x23a0)
int64_t rdi_1 = sx.q(*(arg3 + 0x20)) + *(arg1 + 0x1e98)
int64_t rcx_1 = sx.q(*(arg2 + 0x50)) + **(arg2 + 0x48)
int32_t rax_4 = *(arg2 + 0x54)
int32_t rbp_1 = r10 - arg6
int16_t rdx = arg9[1] s>> 3
int16_t r8 = *arg9 s>> 3
*(arg3 + 0x30) = r10.w
*(arg3 + 0x32) = r11.w
int32_t rcx_6 = sx.d(rdx)
int32_t rdx_1 = sx.d(r8)
int64_t r15_3 = sx.q(r10 * rsi) + rdi_1 + r11
int32_t i_4 = r11.d - arg6
int32_t i = r11.d + arg6
int32_t rsi_1 = (((*(r12 + (sx.q(r10 - rdx_1) << 2)) + *(r13 + (sx.q(r11.d - rcx_6) << 2))) * arg5
    + 0x80) s>> 8) + (*arg7)(rcx_1, zx.q(rax_4), r15_3, zx.q(rsi))
int32_t i_6 = *(arg1 + 0x23d0)
int32_t rax_14 = *(arg1 + 0x23d8)

if (i_4 s< i_6)
    i_4 = i_6

int32_t i_3 = *(arg1 + 0x23d4)
int32_t i_5 = i_4

if (i s> i_3)
    i = i_3

int32_t rcx_9 = r10 + arg6
int32_t i_2 = i

if (rbp_1 s< rax_14)
    rbp_1 = rax_14

int32_t rax_15 = *(arg1 + 0x23dc)

if (rcx_9 s> rax_15)
    rcx_9 = rax_15

int32_t rbx_6 = 0
int32_t var_d4

if (rbp_1 s< rcx_9)
    int64_t r8_3 = sx.q(rsi)
    int32_t r11_1 = i_4 + 7
    int64_t var_98_1 = r8_3
    int64_t r9_2 = sx.q(i_4) + rdi_1 + sx.q(rbp_1 * r8_3.d)
    int64_t var_a8_1 = r9_2
    
    while (true)
        int64_t rdi_2 = r9_2
        int32_t i_1 = i_4
        int32_t (* var_e8)[0x8]
        
        if (r11_1 s< i)
            do
                int32_t var_78[0x8]
                var_e8 = &var_78
                (*(arg7 + 0x20))(rcx_1, zx.q(rax_4), rdi_2, zx.q(r8_3.d), var_e8)
                
                for (int64_t j = 0; j s< 8; j += 1)
                    int32_t r8_5 = var_78[j]
                    var_d4 = r8_5
                    
                    if (r8_5 u< rsi_1)
                        int32_t r8_6 = r8_5 + (((*(r13 + (sx.q(sx.d(i_1.w) - rcx_6) << 2))
                            + *(r12 + (sx.q(sx.d(rbp_1.w) - rdx_1) << 2))) * arg5 + 0x80) s>> 8)
                        var_d4 = r8_6
                        
                        if (r8_6 u< rsi_1)
                            rsi_1 = r8_6
                            *(arg3 + 0x30) = rbp_1.w
                            *(arg3 + 0x32) = i_1.w
                            r15_3 = rdi_2
                    
                    rdi_2 += 1
                    i_1 += 1
                
                i = i_2
                r8_3 = zx.q(rsi)
            while (i_1 + 7 s< i)
        
        while (i_1 + 2 s< i)
            int32_t var_88[0x4]
            var_e8 = &var_88
            (*(arg7 + 0x18))(rcx_1, zx.q(rax_4), rdi_2, zx.q(r8_3.d), var_e8)
            
            for (int64_t j_1 = 0; j_1 s< 3; j_1 += 1)
                int32_t r8_8 = var_88[j_1]
                var_d4 = r8_8
                
                if (r8_8 u< rsi_1)
                    int32_t r8_9 = r8_8 + (((*(r13 + (sx.q(sx.d(i_1.w) - rcx_6) << 2))
                        + *(r12 + (sx.q(sx.d(rbp_1.w) - rdx_1) << 2))) * arg5 + 0x80) s>> 8)
                    var_d4 = r8_9
                    
                    if (r8_9 u< rsi_1)
                        rsi_1 = r8_9
                        *(arg3 + 0x30) = rbp_1.w
                        *(arg3 + 0x32) = i_1.w
                        r15_3 = rdi_2
                
                rdi_2 += 1
                i_1 += 1
            
            i = i_2
            r8_3 = zx.q(rsi)
        
        for (; i_1 s< i; i_1 += 1)
            int32_t rax_43 = (*arg7)(rcx_1, zx.q(rax_4), rdi_2, zx.q(rsi), var_e8)
            var_d4 = rax_43
            
            if (rax_43 u< rsi_1)
                int32_t rax_44 = rax_43 + (((*(r13 + (sx.q(sx.d(i_1.w) - rcx_6) << 2))
                    + *(r12 + (sx.q(sx.d(rbp_1.w) - rdx_1) << 2))) * arg5 + 0x80) s>> 8)
                var_d4 = rax_44
                
                if (rax_44 u< rsi_1)
                    rsi_1 = rax_44
                    *(arg3 + 0x30) = rbp_1.w
                    *(arg3 + 0x32) = i_1.w
                    r15_3 = rdi_2
            
            i = i_2
            rdi_2 += 1
        
        rbp_1 += 1
        r9_2 = var_a8_1 + var_98_1
        i_4 = i_5
        var_a8_1 = r9_2
        r11_1 = i_4 + 7
        
        if (rbp_1 s>= rcx_9)
            break
        
        r8_3 = zx.q(rsi)
    
    rbx_6 = 0

if (arg8 != 0)
    int32_t rbx_8 = *(arg8[1] + (sx.q(sx.d(*(arg3 + 0x32) << 3) - sx.d(arg9[1])) s>> 1 << 2))
        + *(*arg8 + (sx.q(sx.d(*(arg3 + 0x30) << 3) - sx.d(*arg9)) s>> 1 << 2))
    rbx_6 = (rbx_8 * *(arg1 + 0x2358) + 0x80) s>> 8

uint64_t result = zx.q((*(arg7 + 8))(rcx_1, zx.q(rax_4), r15_3, zx.q(rsi), &var_d4) + rbx_6)
__security_check_cookie(rax_1 ^ &var_108)
return result
