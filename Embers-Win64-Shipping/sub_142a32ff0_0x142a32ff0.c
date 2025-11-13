// 函数: sub_142a32ff0
// 地址: 0x142a32ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r11 = sx.d(*arg2)
int32_t i = *(arg1 + 0x64d0)
int32_t rcx = *(arg1 + 0x64d4)
int32_t i_1 = r11 - arg4
int32_t rbx = *(arg1 + 0x64c8)
int32_t rdx = sx.d(arg2[1])

if (i_1 s> i)
    i = i_1

int32_t rax_3 = r11 + arg4

if (rax_3 s< rcx)
    rcx = rax_3

int32_t rax_5 = rdx - arg4

if (rax_5 s> rbx)
    rbx = rax_5

int32_t j_2 = rdx + arg4
int32_t j_1 = *(arg1 + 0x64cc)

if (j_2 s< j_1)
    j_1 = j_2

int16_t r13 = arg6[1] s>> 3
int16_t r12 = *arg6 s>> 3
int32_t rax_9 = *(arg1 + 0x6178) * r11 + rdx
rdx.w -= r13
int16_t temp0 = r11.w
r11.w -= r12
int32_t rcx_1

if (temp0 != r12)
    int32_t rcx_2
    rcx_2.b = rdx.w != 0
    rcx_1 = rcx_2 + 2
else
    rcx_1.b = rdx.w != 0

int32_t rbx_3 = *(*(arg1 + 0x64a8) + (sx.q(rdx.w) << 2)) + *(arg1 + (zx.q(rcx_1) << 2) + 0x6490)
    + *(*(arg1 + 0x64a0) + (sx.q(r11.w) << 2))
int32_t rsi_1 = ((rbx_3 * arg3 + 0x100) u>> 9)
    + (*arg5)(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), sx.q(rax_9) + *(arg1 + 0x6170))
*arg7 = *arg2

for (; i s< rcx; i += 1)
    int32_t rbx_7 = rbx
    void* r10_2 = arg5
    int64_t r15_2 = sx.q(i * *(arg1 + 0x6178) + rbx) + *(arg1 + 0x6170)
    int32_t (* var_b8)[0x8]
    int32_t j
    
    if (*(r10_2 + 0x30) == 0)
        j = j_1
    else
        j = j_1
        
        if (rbx + 7 s< j)
            do
                int32_t var_68[0x8]
                var_b8 = &var_68
                (*(r10_2 + 0x30))(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), r15_2, 
                    zx.q(*(arg1 + 0x6178)), var_b8)
                
                for (int64_t k = 0; k s< 8; k += 1)
                    int32_t r9_2 = var_68[k]
                    
                    if (r9_2 u< rsi_1)
                        int16_t rax_18 = rbx_7.w - r13
                        int16_t var_96_1 = rbx_7.w
                        int16_t r11_1 = i.w
                        int32_t rcx_8
                        
                        if (r11_1 != r12)
                            int32_t rcx_9
                            rcx_9.b = rax_18 != 0
                            rcx_8 = rcx_9 + 2
                        else
                            rcx_8.b = rax_18 != 0
                        
                        int32_t r8_6 = (*(*(arg1 + 0x64a8) + (sx.q(rax_18) << 2))
                            + *(arg1 + (zx.q(rcx_8) << 2) + 0x6490)
                            + *(*(arg1 + 0x64a0) + (sx.q(r11_1 - r12) << 2))) * arg3 + 0x100
                        int32_t r9_3 = r9_2 + (r8_6 u>> 9)
                        
                        if (r9_3 u< rsi_1)
                            rsi_1 = r9_3
                            *arg7 = i.w.d
                    
                    rbx_7 += 1
                
                j = j_1
                r15_2 += 8
                r10_2 = arg5
            while (rbx_7 + 7 s< j)
    
    if (*(r10_2 + 0x28) != 0 && rbx_7 + 2 s< j)
        do
            int32_t var_78[0x4]
            var_b8 = &var_78
            (*(r10_2 + 0x28))(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), r15_2, 
                zx.q(*(arg1 + 0x6178)), var_b8)
            
            for (int64_t k_1 = 0; k_1 s< 3; k_1 += 1)
                int32_t r9_5 = var_78[k_1]
                
                if (r9_5 u< rsi_1)
                    int16_t rax_24 = rbx_7.w - r13
                    int16_t var_92_1 = rbx_7.w
                    int16_t r11_2 = i.w
                    int32_t rcx_13
                    
                    if (r11_2 != r12)
                        int32_t rcx_14
                        rcx_14.b = rax_24 != 0
                        rcx_13 = rcx_14 + 2
                    else
                        rcx_13.b = rax_24 != 0
                    
                    int32_t r8_13 = (*(*(arg1 + 0x64a8) + (sx.q(rax_24) << 2))
                        + *(arg1 + (zx.q(rcx_13) << 2) + 0x6490)
                        + *(*(arg1 + 0x64a0) + (sx.q(r11_2 - r12) << 2))) * arg3 + 0x100
                    int32_t r9_6 = r9_5 + (r8_13 u>> 9)
                    
                    if (r9_6 u< rsi_1)
                        rsi_1 = r9_6
                        *arg7 = i.w.d
                
                rbx_7 += 1
            
            j = j_1
            r15_2 += 3
            r10_2 = arg5
        while (rbx_7 + 2 s< j)
    
    if (rbx_7 s< j)
        do
            int32_t rax_29 = (*r10_2)(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), r15_2, 
                zx.q(*(arg1 + 0x6178)), var_b8)
            
            if (rax_29 u< rsi_1)
                int16_t rax_30 = rbx_7.w - r13
                int16_t var_8e_1 = rbx_7.w
                int16_t r10_3 = i.w
                int32_t rcx_18
                
                if (r10_3 != r12)
                    int32_t rcx_19
                    rcx_19.b = rax_30 != 0
                    rcx_18 = rcx_19 + 2
                else
                    rcx_18.b = rax_30 != 0
                
                int32_t r8_20 = (*(*(arg1 + 0x64a8) + (sx.q(rax_30) << 2))
                    + *(arg1 + (zx.q(rcx_18) << 2) + 0x6490)
                    + *(*(arg1 + 0x64a0) + (sx.q(r10_3 - r12) << 2))) * arg3 + 0x100
                int32_t r9_9 = rax_29 + (r8_20 u>> 9)
                
                if (r9_9 u< rsi_1)
                    rsi_1 = r9_9
                    *arg7 = i.w.d
            
            r10_2 = arg5
            r15_2 += 1
            rbx_7 += 1
        while (rbx_7 s< j_1)

__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(rsi_1)
