// 函数: sub_142a8f0d0
// 地址: 0x142a8f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int16_t* i_12 = arg3
int16_t* i_13 = arg3
int16_t* i_5 = arg1
int16_t* i_6 = arg1
uint64_t result

if (*arg8 s> 0)
    result = 0
label_142a8f7e2:
    __security_check_cookie(rax_1 ^ &var_1c8)
    return result

if (arg6 != 0)
    *arg6 = 0
    *arg7 = 0

int16_t* i_8 = i_5
int16_t* i = i_5
int16_t* i_7 = i_5
int16_t* i_3 = i_5
void* var_178_1
void* r11_1

if (arg2 != 0xffffffff)
    r11_1 = &i_5[sx.q(arg2)]
    var_178_1 = r11_1
else
    r11_1 = nullptr
    var_178_1 = nullptr

int16_t* i_15 = i_12
int16_t* i_11 = i_12
int16_t* i_14 = i_12
int16_t* i_2 = i_12
void* var_170_1
void* rsi_1

if (arg4 != 0xffffffff)
    rsi_1 = &i_12[sx.q(arg4)]
    var_170_1 = rsi_1
else
    rsi_1 = nullptr
    var_170_1 = nullptr

int32_t r12_1 = arg5
int32_t rcx_1 = 0
int32_t var_1a8_1 = 0
int32_t rdx = 0
int32_t var_190_1 = 0
int64_t rbx_1 = 0
int64_t rdi_1 = 0
label_142a8f1df:
uint32_t r9 = -1
uint32_t var_1a0_1 = 0xffffffff

while (true)
    uint32_t r14_1 = -1
    uint32_t var_1a4_1 = 0xffffffff
    
    while (true)
        int16_t* i_4
        int64_t var_120[0x5]
        
        if (r14_1 s< 0)
            while (true)
                if (i_5 != r11_1)
                    r14_1 = zx.d(*i_5)
                    var_1a4_1 = r14_1
                    
                    if (r14_1 != 0)
                    label_142a8f265:
                        i_5 = &i_5[1]
                        i_6 = i_5
                        break
                    
                    if (r11_1 != 0 && not(test_bit(r12_1, 0xc)))
                        goto label_142a8f265
                
                if (rdi_1 == 0)
                    r14_1 = -1
                    var_1a4_1 = 0xffffffff
                    break
                
                void* rcx_2 = &(&i_4)[rdi_1 * 3]
                
                do
                    i = *(rcx_2 - 0x18)
                    rcx_2 -= 0x18
                    rdx -= 1
                    i_3 = i
                    rdi_1 -= 1
                while (i == 0)
                
                int64_t rax_6 = rdi_1 * 3
                var_190_1 = rdx
                i_5 = var_120[rax_6]
                var_118
                r11_1 = *(&var_118 + (rax_6 << 3))
                i_6 = i_5
                var_178_1 = r11_1
            
            rcx_1 = var_1a8_1
        
        int64_t var_f0[0x5]
        int16_t var_c8
        
        if (r9 s< 0)
            while (true)
                if (i_12 != rsi_1)
                    r9 = zx.d(*i_12)
                    var_1a0_1 = r9
                    
                    if (r9 != 0)
                    label_142a8f2fa:
                        i_12 = &i_12[1]
                        i_13 = i_12
                        break
                    
                    if (rsi_1 != 0 && not(test_bit(r12_1, 0xc)))
                        goto label_142a8f2fa
                
                if (rbx_1 == 0)
                    r9 = -1
                    var_1a0_1 = 0xffffffff
                    break
                
                void* rax_8 = &(&var_c8)[rbx_1 * 0xc - 0x18]
                int16_t* i_1
                
                do
                    i_1 = *(rax_8 - 0x18)
                    rax_8 -= 0x18
                    rcx_1 -= 1
                    i_2 = i_1
                    rbx_1 -= 1
                while (i_1 == 0)
                i = i_3
                int64_t rax_9 = rbx_1 * 3
                i_12 = var_f0[rax_9]
                var_e8
                rsi_1 = *(&var_e8 + (rax_9 << 3))
                i_13 = i_12
                var_170_1 = rsi_1
                var_1a8_1 = rcx_1
            
            i_11 = i_2
        
        uint32_t result_1
        
        if (r14_1 == r9)
            if (r14_1 s>= 0)
                int16_t* i_10
                
                if (rdi_1 != 0)
                    if (i_5 != r11_1)
                        goto label_142a8f1df
                    
                    i_10 = var_120[0]
                else
                    i_10 = i_5
                
                if (i_10 != 0)
                    int16_t* i_16
                    
                    if (rbx_1 == 0)
                        i_16 = i_12
                    label_142a8f350:
                        
                        if (i_16 != 0)
                            i_7 = i_10
                            i_14 = i_16
                    else if (i_12 == rsi_1)
                        i_16 = var_f0[0]
                        goto label_142a8f350
                
                rcx_1 = var_1a8_1
                goto label_142a8f1df
            
            result_1 = 0
        else if (r14_1 s< 0)
            result_1 = -1
        else if (r9 s< 0)
            result_1 = 1
        else
            uint32_t rcx_3 = r14_1
            int32_t r12_3 = r14_1 & 0xfffff800
            
            if (r12_3 == 0xd800)
                if (test_bit(r14_1, 0xa))
                    if (i u<= &i_5[-2])
                        uint32_t rdx_2 = zx.d(i_5[-2])
                        
                        if ((rdx_2 & 0xfffffc00) == 0xd800)
                            rcx_3 = ((rdx_2 - 0xd7f7) << 0xa) + r14_1
                else if (i_5 != r11_1)
                    uint32_t rdx_1 = zx.d(*i_5)
                    
                    if ((rdx_1 & 0xfffffc00) == 0xdc00)
                        rcx_3 = ((r14_1 - 0xd7f7) << 0xa) + rdx_1
            
            uint32_t r14_2 = r9
            int32_t r15_1 = r9 & 0xfffff800
            
            if (r15_1 == 0xd800)
                if (test_bit(r9, 0xa))
                    if (i_11 u<= &i_12[-2])
                        uint32_t rdx_4 = zx.d(i_12[-2])
                        
                        if ((rdx_4 & 0xfffffc00) == 0xd800)
                            r14_2 = ((rdx_4 - 0xd7f7) << 0xa) + r9
                else if (i_12 != rsi_1)
                    uint32_t rdx_3 = zx.d(*i_12)
                    
                    if ((rdx_3 & 0xfffffc00) == 0xdc00)
                        r14_2 = ((r9 - 0xd7f7) << 0xa) + rdx_3
            
            void* var_158
            
            if (rdi_1 == 0)
                int32_t rax_20 = sub_142a53530(rcx_3, &var_158, arg5.b)
                int32_t rsi_2 = rax_20
                
                if (rax_20 s>= 0)
                    int16_t* i_17 = i_6
                    
                    if (r12_3 == 0xd800)
                        if ((var_1a4_1 & 0x400) != 0)
                            void* i_18 = i_13 - 2
                            i_14 -= 2
                            i_13 = i_18
                            var_1a0_1 = zx.d(*(i_18 - 2))
                        else
                            i_17 = &i_17[1]
                    
                    rdi_1 = 1
                    rdx = var_190_1 + 1
                    i_4 = i
                    var_120[0] = i_17
                    var_120[1] = var_178_1
                    var_190_1 = rdx
                    
                    if (rsi_2 s<= 0x1f)
                        sub_142a8bca0(&var_c8, var_158, rsi_2)
                        rdx = var_190_1
                    else if (rsi_2 u> 0xffff)
                        var_c8 = (rsi_2 s>> 0xa).w - 0x2840
                        rsi_2.w &= 0x3ff
                        rsi_2.w |= 0xdc00
                        int16_t var_c6_1 = rsi_2.w
                        rsi_2 = 2
                    else
                        var_c8 = rsi_2.w
                        rsi_2 = 1
                    
                    i_11 = i_2
                    i_12 = i_13
                    i_5 = &var_c8
                    r9 = var_1a0_1
                    i = &var_c8
                    rcx_1 = var_1a8_1
                    r12_1 = arg5
                    rsi_1 = var_170_1
                    i_6 = &var_c8
                    i_3 = &var_c8
                    r11_1 = &(&var_c8)[sx.q(rsi_2)]
                    var_178_1 = r11_1
                    break
            
            r12_1 = arg5
            
            if (rbx_1 == 0)
                int32_t rax_25 = sub_142a53530(r14_2, &var_158, r12_1.b)
                int32_t rsi_3 = rax_25
                
                if (rax_25 s>= 0)
                    int16_t* i_19 = i_13
                    i_5 = i_6
                    
                    if (r15_1 != 0xd800)
                        r14_1 = var_1a4_1
                    else if ((var_1a0_1 & 0x400) != 0)
                        r14_1 = zx.d(i_5[-2])
                        i_5 -= 2
                        i_14 -= 2
                        var_1a4_1 = r14_1
                        i_6 = i_5
                    else
                        i_19 = &i_19[1]
                        r14_1 = var_1a4_1
                    
                    rbx_1 = 1
                    int16_t* i_9 = i_2
                    var_f0[1] = var_170_1
                    var_f0[0] = i_19
                    int16_t var_88
                    
                    if (rsi_3 s<= 0x1f)
                        sub_142a8bca0(&var_88, var_158, rsi_3)
                    else if (rsi_3 u> 0xffff)
                        var_88 = (rsi_3 s>> 0xa).w - 0x2840
                        rsi_3.w &= 0x3ff
                        rsi_3.w |= 0xdc00
                        int16_t var_86_1 = rsi_3.w
                        rsi_3 = 2
                    else
                        var_88 = rsi_3.w
                        rsi_3 = 1
                    
                    rdx = var_190_1
                    i_12 = &var_88
                    rcx_1 = var_1a8_1
                    i_11 = &var_88
                    r11_1 = var_178_1
                    r9 = -1
                    i_13 = &var_88
                    i_2 = &var_88
                    var_1a0_1 = 0xffffffff
                    rsi_1 = &(&var_88)[sx.q(rsi_3)]
                    var_170_1 = rsi_1
                    continue
            
            uint32_t rdx_10 = var_1a4_1
            uint32_t r9_2 = var_1a0_1
            
            if (rdx_10 s>= 0xd800 && r9_2 s>= 0xd800 && test_bit(r12_1, 0xf))
                if ((rdx_10 s> 0xdbff || i_6 == var_178_1 || (zx.d(*i_6) & 0xfffffc00) != 0xdc00)
                        && ((rdx_10 & 0xfffffc00) != 0xdc00 || i == &i_6[-1]
                        || (zx.d(i_6[-2]) & 0xfffffc00) != 0xd800))
                    rdx_10 -= 0x2800
                
                if ((r9_2 s> 0xdbff || i_13 == var_170_1 || (zx.d(*i_13) & 0xfffffc00) != 0xdc00)
                        && ((r9_2 & 0xfffffc00) != 0xdc00 || i_2 == &i_13[-1]
                        || (zx.d(i_13[-2]) & 0xfffffc00) != 0xd800))
                    r9_2 -= 0x2800
            
            result_1 = rdx_10 - r9_2
        
        if (arg6 != 0)
            *arg6 = ((i_7 - i_8) s>> 1).d
            *arg7 = ((i_14 - i_15) s>> 1).d
        
        result = zx.q(result_1)
        goto label_142a8f7e2
