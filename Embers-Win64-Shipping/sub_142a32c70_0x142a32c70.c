// 函数: sub_142a32c70
// 地址: 0x142a32c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t r11 = sx.d(*arg2)
int32_t i = *(arg1 + 0x64d0)
int32_t rcx = *(arg1 + 0x64d4)
int32_t i_1 = r11 - arg4
int32_t j_3 = *(arg1 + 0x64c8)
int32_t rdx = sx.d(arg2[1])

if (i_1 s> i)
    i = i_1

int32_t rax_3 = r11 + arg4

if (rax_3 s< rcx)
    rcx = rax_3

int32_t j_4 = rdx - arg4

if (j_4 s> j_3)
    j_3 = j_4

int32_t j_2 = rdx + arg4
int32_t j = *(arg1 + 0x64cc)

if (j_2 s< j)
    j = j_2

int16_t rdi = arg6[1] s>> 3
int16_t r13 = *arg6 s>> 3
int16_t var_88 = rdi
int32_t rax_8 = *(arg1 + 0x6178) * r11 + rdx
rdx.w -= rdi
int16_t temp0 = r11.w
r11.w -= r13
int32_t rcx_1

if (temp0 != r13)
    int32_t rcx_2
    rcx_2.b = rdx.w != 0
    rcx_1 = rcx_2 + 2
else
    rcx_1.b = rdx.w != 0

int32_t rbx_2 = *(*(arg1 + 0x64a8) + (sx.q(rdx.w) << 2)) + *(arg1 + (zx.q(rcx_1) << 2) + 0x6490)
    + *(*(arg1 + 0x64a0) + (sx.q(r11.w) << 2))
int32_t rbp_1 = ((rbx_2 * arg3 + 0x100) u>> 9)
    + (*arg5)(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), sx.q(rax_8) + *(arg1 + 0x6170))
*arg7 = *arg2

for (; i s< rcx; i += 1)
    int32_t j_1 = j_3
    void* r10_2 = arg5
    int64_t r15_2 = sx.q(i * *(arg1 + 0x6178) + j_3) + *(arg1 + 0x6170)
    int32_t (* var_98)[0x4]
    
    if (*(r10_2 + 0x28) != 0 && j_3 + 2 s< j)
        do
            int32_t var_58[0x4]
            var_98 = &var_58
            (*(r10_2 + 0x28))(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), r15_2, 
                zx.q(*(arg1 + 0x6178)), var_98)
            
            for (int64_t k = 0; k s< 3; k += 1)
                int32_t r10_3 = var_58[k]
                
                if (r10_3 u< rbp_1)
                    int16_t rcx_8 = j_1.w - var_88
                    int16_t var_7e_1 = j_1.w
                    int16_t rdi_1 = i.w
                    int32_t rax_17
                    
                    if (rdi_1 != r13)
                        int32_t rax_18
                        rax_18.b = rcx_8 != 0
                        rax_17 = rax_18 + 2
                    else
                        rax_17.b = rcx_8 != 0
                    
                    int32_t r9_6 = (*(*(arg1 + 0x64a8) + (sx.q(rcx_8) << 2))
                        + *(arg1 + (zx.q(rax_17) << 2) + 0x6490)
                        + *(*(arg1 + 0x64a0) + (sx.q(rdi_1 - r13) << 2))) * arg3 + 0x100
                    int32_t r10_4 = r10_3 + (r9_6 u>> 9)
                    
                    if (r10_4 u< rbp_1)
                        rbp_1 = r10_4
                        *arg7 = i.w.d
                
                j_1 += 1
            
            r15_2 += 3
            r10_2 = arg5
        while (j_1 + 2 s< j)
        
        rdi = var_88
    
    for (; j_1 s< j; j_1 += 1)
        int32_t rax_22 = (*r10_2)(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), r15_2, 
            zx.q(*(arg1 + 0x6178)), var_98)
        
        if (rax_22 u< rbp_1)
            int16_t rax_23 = j_1.w - rdi
            int16_t var_76_1 = j_1.w
            int16_t r10_5 = i.w
            int32_t rcx_12
            
            if (r10_5 != r13)
                int32_t rcx_13
                rcx_13.b = rax_23 != 0
                rcx_12 = rcx_13 + 2
            else
                rcx_12.b = rax_23 != 0
            
            int32_t r8_8 = (*(*(arg1 + 0x64a8) + (sx.q(rax_23) << 2))
                + *(arg1 + (zx.q(rcx_12) << 2) + 0x6490)
                + *(*(arg1 + 0x64a0) + (sx.q(r10_5 - r13) << 2))) * arg3 + 0x100
            int32_t r9_10 = rax_22 + (r8_8 u>> 9)
            
            if (r9_10 u< rbp_1)
                rbp_1 = r9_10
                *arg7 = i.w.d
        
        r10_2 = arg5
        r15_2 += 1

__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rbp_1)
