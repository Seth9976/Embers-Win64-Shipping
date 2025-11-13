// 函数: sub_142bd4180
// 地址: 0x142bd4180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t* result = __security_cookie ^ &var_108
int64_t* result_1 = result
int64_t** rsi = arg4
void* r11 = *arg1
void* var_c8 = r11
void* rdi = arg2
int64_t* r10 = arg1
int64_t* var_d0 = arg1
int128_t var_60

if (arg8 == 0)
    arg1 = arg1[1]
    
    if (arg1[3].b == 0)
        char var_e0_1 = 1
        __builtin_memset(&var_60:8, 0, 0x28)
        var_60.q = *arg4
        result, arg1 = sub_142bd4180(arg1, arg5, arg6, &var_60, arg7, var_e0_1)
        r10 = var_d0
        r11 = var_c8

if (rsi[1].b == 0)
    result, arg1 = sub_142bd4b90(rsi, *(arg3 + 0x28) + *(rdi + 0x28))

if (rsi[1].b != 0 || rsi[1].b != 0)
    int64_t* rbx_1 = var_d0
    int128_t var_40
    int128_t* rdx_2 = &var_40
    int128_t* var_c0_1 = &var_40
    rbx_1[4] = 0
    int64_t r8 = *(rdi + 0x28)
    arg5 = *(rsi + 0x10)
    int64_t var_b8_1 = r8
    var_60 = *rsi
    int128_t var_50_1 = arg5
    var_40 = *(rsi + 0x20)
    
    if (r8 u<= rsi[2])
        int64_t var_a0
        
        if (*(r11 + 0x141) != 0)
            __builtin_memset(&var_a0, 0, 0x20)
            sub_142bd4850(rbx_1, r11 + 0x178, &var_a0)
            sub_142bd4850(rbx_1, &var_a0, var_c8 + 0x158)
            r11 = var_c8
            rdx_2 = &var_40
            r8 = var_b8_1
        
        int64_t rsi_1 = 0
        arg1.b = 0x80
        char var_d8_1 = 0x80
        int64_t var_80
        
        if (r8 != 0)
            while (true)
                if ((*rdx_2 & arg1.b) != 0)
                    int32_t r9_1 = *(rbx_1 + 0x1c)
                    __builtin_memset(&var_a0, 0, 0x14)
                    int64_t var_88_1 = 0
                    int64_t rax_3 = rsi_1
                    
                    if (rsi_1 u>= *(rdi + 0x28))
                        int32_t* rax_4 = *(rdi + 8)
                        
                        if (rax_4 != 0 && *rax_4 == 0)
                            *rax_4 = 0x82
                        
                        rax_3 = 0
                    
                    char* rdx_7 = *(rdi + 0x10) * rax_3 + *(rdi + 0x38)
                    int32_t rcx_3 = *(rdx_7 + 8)
                    int32_t r8_4 = *(rdx_7 + 4)
                    int32_t rax_6 = rcx_3 - r8_4
                    int32_t var_90_1
                    int32_t rdi_1
                    
                    if (rax_6 == 0xffeb0000)
                        rdi_1 = 1
                    else if (rax_6 != 0xffec0000)
                        rdi_1 = 4
                        
                        if (rax_6 s>= 0)
                            rcx_3 = r8_4
                    else
                        rcx_3 = var_90_1
                        rdi_1 = 0
                    
                    var_a0.d = rdi_1
                    int32_t r8_6 = rdi_1 & 0xa
                    
                    if (r8_6 != 0)
                        rcx_3 += *(r11 + 0x130) << 1
                    
                    int32_t r10_1 = arg7
                    int32_t rcx_4 = rcx_3 + r10_1
                    var_90_1 = rcx_4
                    var_88_1.d = r9_1
                    int64_t var_98_1 = rsi_1
                    int32_t rax_8
                    
                    if (rdi_1 == 0 || *rdx_7 == 0)
                        rax_8 = sub_142b93e80(rcx_4, r9_1)
                        r10_1 = arg7
                    else if (r8_6 == 0)
                        rax_8 = *(rdx_7 + 0xc)
                        rdi_1 |= 0x10
                        var_a0.d = rdi_1
                    else
                        rax_8 = *(rdx_7 + 0x10)
                        rdi_1 |= 0x10
                        var_a0.d = rdi_1
                    
                    int32_t r9_2 = *(rbx_1 + 0x1c)
                    var_90_1 = rax_8
                    __builtin_memset(&var_80, 0, 0x14)
                    int64_t var_68_1 = 0
                    int64_t rax_9 = rsi_1
                    
                    if (rsi_1 u>= *(arg2 + 0x28))
                        int32_t* rax_10 = *(arg2 + 8)
                        
                        if (rax_10 != 0 && *rax_10 == 0)
                            *rax_10 = 0x82
                        
                        rax_9 = 0
                    
                    char* rdx_11 = *(arg2 + 0x10) * rax_9 + *(arg2 + 0x38)
                    int32_t r8_7 = *(rdx_11 + 8)
                    int32_t rcx_6 = *(rdx_11 + 4)
                    int32_t rax_12 = r8_7 - rcx_6
                    int32_t var_70_1
                    int32_t rbx_2
                    
                    if (rax_12 == 0xffeb0000)
                        rcx_6 = var_70_1
                        rbx_2 = 0
                    else if (rax_12 != 0xffec0000)
                        rbx_2 = 8
                        
                        if (rax_12 s>= 0)
                            rcx_6 = r8_7
                    else
                        rbx_2 = 2
                    
                    var_80.d = rbx_2
                    int32_t r8_9 = rbx_2 & 0xa
                    
                    if (r8_9 != 0)
                        rcx_6 += *(var_c8 + 0x130) << 1
                    
                    int32_t rcx_7 = rcx_6 + r10_1
                    var_68_1.d = r9_2
                    var_70_1 = rcx_7
                    int64_t var_78_1 = rsi_1
                    int32_t rax_15
                    
                    if (rbx_2 == 0 || *rdx_11 == 0)
                        rax_15 = sub_142b93e80(rcx_7, r9_2)
                    else if (r8_9 == 0)
                        rax_15 = *(rdx_11 + 0xc)
                        rbx_2 |= 0x10
                        var_80.d = rbx_2
                    else
                        rax_15 = *(rdx_11 + 0x10)
                        rbx_2 |= 0x10
                        var_80.d = rbx_2
                    
                    var_70_1 = rax_15
                    char rax_16
                    
                    if (((rdi_1 u>> 4).b & 1) == 0 && ((rbx_2 u>> 4).b & 1) == 0)
                        rax_16 = sub_142bd1640(var_c8 + 0x138, &var_a0, &var_80)
                    
                    if (((rdi_1 u>> 4).b & 1) == 0 && ((rbx_2 u>> 4).b & 1) == 0 && rax_16 == 0)
                        arg1 = zx.q(var_d8_1)
                        rdx_2 = var_c0_1
                        rbx_1 = var_d0
                    else
                        rbx_1 = var_d0
                        sub_142bd4850(rbx_1, &var_a0, &var_80)
                        arg1 = zx.q(var_d8_1)
                        rdx_2 = var_c0_1
                        *rdx_2 &= not.b(arg1.b)
                    
                    r8 = var_b8_1
                    rdi = arg2
                
                if ((rsi_1.b & 7) != 7)
                    arg1.b u>>= 1
                else
                    rdx_2 += 1
                    arg1.b = 0x80
                    var_c0_1 = rdx_2
                
                rsi_1 += 1
                var_d8_1 = arg1.b
                
                if (rsi_1 u>= r8)
                    break
                
                r11 = var_c8
        
        if (arg8 == 0)
            int64_t rbx_4 = 0
            int128_t* rcx_14 = &var_40
            int128_t* var_c0_2 = &var_40
            rsi_1.b = 0x80
            
            if (r8 != 0)
                do
                    if ((*rcx_14 & rsi_1.b) != 0)
                        int32_t r10_2 = *(var_d0 + 0x1c)
                        __builtin_memset(&var_80, 0, 0x14)
                        int64_t var_68_2 = 0
                        int64_t rax_22 = rbx_4
                        
                        if (rbx_4 u>= *(rdi + 0x28))
                            int32_t* rax_23 = *(rdi + 8)
                            
                            if (rax_23 != 0 && *rax_23 == 0)
                                *rax_23 = 0x82
                            
                            rax_22 = 0
                        
                        char* rdx_18 = *(rdi + 0x10) * rax_22 + *(rdi + 0x38)
                        int32_t r8_13 = *(rdx_18 + 8)
                        int32_t rcx_15 = *(rdx_18 + 4)
                        int32_t rax_25 = r8_13 - rcx_15
                        int32_t var_70_2
                        int32_t rcx_16
                        
                        if (rax_25 == 0xffeb0000)
                            rcx_16 = 1
                        else if (rax_25 != 0xffec0000)
                            if (rax_25 s>= 0)
                                r8_13 = rcx_15
                            
                            rcx_16 = 4
                        else
                            r8_13 = var_70_2
                            rcx_16 = 0
                        
                        var_80.d = rcx_16
                        int32_t r9_4 = rcx_16 & 0xa
                        
                        if (r9_4 != 0)
                            r8_13 += *(var_c8 + 0x130) << 1
                        
                        int32_t r11_1 = arg7
                        int32_t r8_14 = r8_13 + r11_1
                        var_70_2 = r8_14
                        var_68_2.d = r10_2
                        int64_t var_78_2 = rbx_4
                        int32_t rax_28
                        
                        if (rcx_16 == 0 || *rdx_18 == 0)
                            rax_28 = sub_142b93e80(r8_14, r10_2)
                            r11_1 = arg7
                        else if (r9_4 == 0)
                            rax_28 = *(rdx_18 + 0xc)
                            var_80.d = rcx_16 | 0x10
                        else
                            rax_28 = *(rdx_18 + 0x10)
                            var_80.d = rcx_16 | 0x10
                        
                        var_70_2 = rax_28
                        int32_t r10_3 = *(var_d0 + 0x1c)
                        __builtin_memset(&var_a0, 0, 0x14)
                        int64_t var_88_3 = 0
                        int64_t rax_30 = rbx_4
                        
                        if (rbx_4 u>= *(rdi + 0x28))
                            int32_t* rax_31 = *(rdi + 8)
                            
                            if (rax_31 != 0 && *rax_31 == 0)
                                *rax_31 = 0x82
                            
                            rax_30 = 0
                        
                        char* rdx_22 = *(rdi + 0x10) * rax_30 + *(rdi + 0x38)
                        int32_t rcx_20 = *(rdx_22 + 8)
                        int32_t r8_15 = *(rdx_22 + 4)
                        int32_t rax_33 = rcx_20 - r8_15
                        int32_t var_90_2
                        int32_t rcx_21
                        
                        if (rax_33 == 0xffeb0000)
                            r8_15 = var_90_2
                            rcx_21 = 0
                        else if (rax_33 != 0xffec0000)
                            if (rax_33 s>= 0)
                                r8_15 = rcx_20
                            
                            rcx_21 = 8
                        else
                            rcx_21 = 2
                        
                        var_a0.d = rcx_21
                        int32_t r9_6 = rcx_21 & 0xa
                        
                        if (r9_6 != 0)
                            r8_15 += *(var_c8 + 0x130) << 1
                        
                        int32_t r8_16 = r8_15 + r11_1
                        var_88_3.d = r10_3
                        var_90_2 = r8_16
                        int64_t var_98_2 = rbx_4
                        int32_t rax_36
                        
                        if (rcx_21 == 0 || *rdx_22 == 0)
                            rax_36 = sub_142b93e80(r8_16, r10_3)
                        else if (r9_6 == 0)
                            rax_36 = *(rdx_22 + 0xc)
                            var_a0.d = rcx_21 | 0x10
                        else
                            rax_36 = *(rdx_22 + 0x10)
                            var_a0.d = rcx_21 | 0x10
                        
                        var_90_2 = rax_36
                        sub_142bd4850(var_d0, &var_80, &var_a0)
                        rcx_14 = var_c0_2
                        r8 = var_b8_1
                    
                    if ((rbx_4.b & 7) != 7)
                        rsi_1.b u>>= 1
                    else
                        rcx_14 += 1
                        rsi_1.b = 0x80
                        var_c0_2 = rcx_14
                    
                    rbx_4 += 1
                while (rbx_4 u< r8)
            
            rbx_1 = var_d0
        else
            int32_t rax_19 = rbx_1[4].d
            
            if (rax_19 == 0 || rbx_1[7].d s> 0 || rbx_1[zx.q(rax_19 - 1) * 4 + 7].d s< 0)
                __builtin_memset(&var_a0, 0, 0x40)
                int64_t var_88_2
                var_88_2.d = *(rbx_1 + 0x1c)
                var_a0.d = 0x31
                sub_142bd4850(rbx_1, &var_a0, &var_80)
        
        sub_142bd3e10(rbx_1)
        
        if (arg8 == 0)
            int64_t i = 0
            
            if (rbx_1[4].d u> 0)
                void* rdx_25 = &rbx_1[5]
                
                do
                    if (((*rdx_25 u>> 5).b & 1) == 0)
                        int64_t rax_40 = *(rdx_25 + 8)
                        
                        if (rax_40 u>= *(rdi + 0x28))
                            int32_t* rax_41 = *(rdi + 8)
                            
                            if (rax_41 != 0 && *rax_41 == 0)
                                *rax_41 = 0x82
                            
                            rax_40 = 0
                        
                        int32_t rax_42 = *(rdx_25 + 0x14)
                        char* rcx_29 = *(rdi + 0x10) * rax_40 + *(rdi + 0x38)
                        
                        if ((*rdx_25 & 0xa) == 0)
                            *(rcx_29 + 0xc) = rax_42
                        else
                            *(rcx_29 + 0x10) = rax_42
                        
                        *rcx_29 = 1
                    
                    i += 1
                    rdx_25 += 0x20
                while (i u< zx.q(rbx_1[4].d))
        
        result = arg4
        rbx_1[3].b = 1
        *(result + 9) = 0
else if (*(r11 + 0xc) != 0)
    result = *rsi
    *result = 0
    *(r10 + 0x19) = 0

__security_check_cookie(result_1 ^ &var_108)
return result
