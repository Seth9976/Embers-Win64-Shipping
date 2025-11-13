// 函数: sub_142a32470
// 地址: 0x142a32470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rbp = -1
int64_t r15 = *(arg1 + 0x2018)
int32_t rdi = *(arg1 + 0x6178)
int32_t i_3 = *(arg2 + 0x424) - arg5
int32_t r9 = *(arg1 + 0x64cc)
int32_t rax_3 = *(arg1 + 0x2020)
int32_t r10_1 = *(arg1 + 0x64d4)
int64_t rcx = sx.q(*(arg2 + 0x420) * arg5)
int32_t var_e8 = 0xffffffff
int32_t var_d4 = 0xffffffff
void* rax_6 = arg2 + (rcx << 2)
int32_t rdx = *(arg1 + 0x64c8)
void* rax_8 = arg2 + 0x160 + (rcx << 3)
int32_t rcx_1 = *(arg1 + 0x64d0)
int32_t rax_10 = sx.d(arg3[1])
int16_t r11 = *arg9 s>> 3
int16_t rbx = arg9[1] s>> 3

if (rax_10 s>= rdx)
    if (rax_10 s> r9)
        rax_10 = r9
    
    rdx = rax_10

int32_t rax_11 = sx.d(*arg3)
arg3[1] = rdx.w

if (rax_11 s>= rcx_1)
    if (rax_11 s> r10_1)
        rax_11 = r10_1
    
    rcx_1 = rax_11

*arg3 = rcx_1.w
int32_t r8 = sx.d(rcx_1.w)
int64_t rdx_1 = sx.q(rdx.w)
*arg7 = 0
*arg4 = r8.w
arg4[1] = rdx_1.w
int64_t r10_4 = sx.q(r8 * rdi) + *(arg1 + 0x6170) + rdx_1
rdx_1.w -= rbx
int64_t var_c0 = r10_4
int16_t temp0 = r8.w
r8.w -= r11
int32_t rcx_2

if (temp0 != r11)
    int32_t rcx_3
    rcx_3.b = rdx_1.w != 0
    rcx_2 = rcx_3 + 2
else
    rcx_2.b = rdx_1.w != 0

int32_t rbx_3 = *(*(arg1 + 0x64a8) + (sx.q(rdx_1.w) << 2)) + *(arg1 + (zx.q(rcx_2) << 2) + 0x6490)
    + *(*(arg1 + 0x64a0) + (sx.q(r8.w) << 2))
int32_t rdi_1 = 0
int32_t r14_1 = ((rbx_3 * arg6 + 0x100) u>> 9) + (*arg8)(r15, zx.q(rax_3), r10_4, zx.q(rdi))

if (i_3 s> 0)
    void* r10_5 = arg2
    int64_t rbx_7 = 0
    uint64_t i_1 = zx.q(i_3)
    void* rsi_1 = rax_6
    uint64_t i_2 = i_1
    uint64_t i
    
    do
        int32_t rdx_4 = sx.d(arg4[1])
        int32_t r8_2 = sx.d(*arg4)
        int32_t r9_2
        r9_2.b = sx.d(*(rsi_1 + (rbx_7 << 2) + 0xa)) + rdx_4 s> *(arg1 + 0x64c8)
        int32_t rcx_7
        rcx_7.b = sx.d(*(rsi_1 + (rbx_7 << 2) + 4)) + r8_2 s< *(arg1 + 0x64d4)
        int32_t rcx_8
        rcx_8.b = sx.d(*(rsi_1 + (rbx_7 << 2) + 0xe)) + rdx_4 s< *(arg1 + 0x64cc)
        int32_t rcx_9
        rcx_9.b = sx.d(*(rsi_1 + (rbx_7 << 2))) + r8_2 s> *(arg1 + 0x64d0)
        int32_t j_1 = 0
        void* var_f8
        
        if ((rcx_9 & r9_2 & rcx_7 & rcx_8) != 0)
            int32_t j_2 = 0
            
            if (*(r10_5 + 0x420) s> 0)
                int32_t j
                
                do
                    void var_68
                    var_f8 = &var_68
                    int64_t var_88 = *(rax_8 + (rbx_7 << 3)) + var_c0
                    int64_t var_80_1 = *(rax_8 + (rbx_7 << 3) + 8) + var_c0
                    int64_t var_78_1 = *(rax_8 + (rbx_7 << 3) + 0x10) + var_c0
                    int64_t var_70_1 = *(rax_8 + (rbx_7 << 3) + 0x18) + var_c0
                    (*(arg8 + 0x38))(r15, zx.q(rax_3), &var_88, zx.q(rdi), var_f8)
                    void* r10_6 = &var_68
                    int64_t k_1 = 4
                    int64_t k
                    
                    do
                        int32_t rsi_2 = *r10_6
                        
                        if (rsi_2 u< r14_1)
                            int16_t rcx_19 = *(rax_6 + (rbx_7 << 2) + 2) + arg4[1] - rbx
                            int16_t r11_1 = *(rax_6 + (rbx_7 << 2)) + *arg4
                            int32_t rax_27
                            
                            if (r11_1 != r11)
                                int32_t rax_28
                                rax_28.b = rcx_19 != 0
                                rax_27 = rax_28 + 2
                            else
                                rax_27.b = rcx_19 != 0
                            
                            int32_t rax_30 = (*(*(arg1 + 0x64a8) + (sx.q(rcx_19) << 2))
                                + *(arg1 + (zx.q(rax_27) << 2) + 0x6490)
                                + *(*(arg1 + 0x64a0) + (sx.q(r11_1 - r11) << 2))) * arg6 + 0x100
                            int32_t rax_32 = (rax_30 u>> 9) + rsi_2
                            *r10_6 = rax_32
                            
                            if (rax_32 u< r14_1)
                                r14_1 = rax_32
                                var_e8 = rdi_1
                        
                        r10_6 += 4
                        rdi_1 += 1
                        rbx_7 += 1
                        k = k_1
                        k_1 -= 1
                    while (k != 1)
                    j = j_2 + 4
                    j_2 = j
                while (j s< *(arg2 + 0x420))
                rbp = var_e8
                rsi_1 = rax_6
                i_1 = i_2
                r10_5 = arg2
        else if (*(r10_5 + 0x420) s> 0)
            do
                int16_t rsi_3 = *(rsi_1 + (rbx_7 << 2) + 2) + arg4[1]
                int16_t rbp_1 = *(rsi_1 + (rbx_7 << 2)) + *arg4
                int32_t rax_34 = sx.d(rsi_3)
                
                if (rax_34 s< *(arg1 + 0x64c8) || rax_34 s> *(arg1 + 0x64cc))
                    rbp = var_e8
                else
                    int32_t rax_35 = sx.d(rbp_1)
                    
                    if (rax_35 s< *(arg1 + 0x64d0) || rax_35 s> *(arg1 + 0x64d4))
                        rbp = var_e8
                    else
                        int32_t rax_39 = (*arg8)(r15, zx.q(rax_3), 
                            var_c0 + *(rax_8 + (rbx_7 << 3)), zx.q(rdi), var_f8)
                        
                        if (rax_39 u>= r14_1)
                            rbp = var_e8
                        else
                            rsi_3 -= rbx
                            int32_t rcx_23
                            
                            if (rbp_1 != r11)
                                int32_t rcx_24
                                rcx_24.b = rsi_3 != 0
                                rcx_23 = rcx_24 + 2
                            else
                                rcx_23.b = rsi_3 != 0
                            
                            int32_t r8_12 = (*(*(arg1 + 0x64a8) + (sx.q(rsi_3) << 2))
                                + *(arg1 + (zx.q(rcx_23) << 2) + 0x6490)
                                + *(*(arg1 + 0x64a0) + (sx.q(rbp_1 - r11) << 2))) * arg6 + 0x100
                            int32_t r9_12 = rax_39 + (r8_12 u>> 9)
                            
                            if (r9_12 u>= r14_1)
                                rbp = var_e8
                            else
                                r14_1 = r9_12
                                var_e8 = rdi_1
                                rbp = rdi_1
                
                rdi_1 += 1
                rsi_1 = rax_6
                rbx_7 += 1
                j_1 += 1
            while (j_1 s< *(arg2 + 0x420))
            
            i_1 = i_2
            r10_5 = arg2
        
        if (rbp != var_d4)
            int64_t rcx_27 = sx.q(rbp)
            var_d4 = rbp
            *arg4 += *(rsi_1 + (rcx_27 << 2))
            arg4[1] += *(rsi_1 + (rcx_27 << 2) + 2)
            var_c0 += *(rax_8 + (rcx_27 << 3))
        else if (var_c0 == r10_4)
            *arg7 += 1
        
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(r14_1)
