// 函数: sub_140671370
// 地址: 0x140671370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int32_t r14 = 0
int64_t r12 = 0
int128_t zmm6
int128_t var_38 = zmm6
int32_t rdi = 0
int64_t rax = *rcx
int32_t r15 = 0
int64_t var_68 = 0
int32_t var_5c = 0
void* rbx_1
int64_t var_58
int64_t var_50
int64_t rcx_24
int32_t rcx_31
int32_t rbx_8
int64_t rsi_3
int32_t rdi_16

if ((*(rax + 0x30))(rcx) != 0)
label_1406716ef:
    var_58 = 0
    var_50 = 0
    sub_1405947f0(&var_58, 0x1d)
    rbx_8 = var_50.d + 0x1d
    var_50.d = rbx_8
    
    if (rbx_8 s> 0)
        sub_140594770(&var_58)
        rbx_8 = var_50.d
    
    rsi_3 = var_58
    UnDecorator::getReferenceType(rsi_3, u"String Token Abruptly Ended.", 0x3a)
    *(arg1 + 0x64)
    sub_140a2e390(&var_58, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
    int64_t rdi_18
    int32_t r14_1
    int32_t r15_1
    
    if (rbx_8 s> 1)
        int32_t rdi_17 = var_50.d
        
        if (rdi_17 == 0)
            rdi_16 = 0
        else
            rdi_16 = rdi_17 - 1
        
        int32_t rax_27
        
        if (rbx_8 == 0)
            rax_27 = rbx_8 + 1
        
        if (rbx_8 != 0 || rdi_16 == 0)
            rax_27 = 0
        
        rcx_31 = rax_27 + rdi_16
    label_1406718f8:
        var_68 = 0
        
        if (rbx_8 != 0 || rcx_31 != 0)
            sub_1405a4c70(&var_68, rbx_8 + rcx_31, 0)
            memcpy(var_68, rsi_3, rbx_8 * 2)
        else
            var_5c = 0
        
        sub_140a20ba0(&var_68, var_58, rdi_16)
        rdi_18 = var_68
        r15_1 = var_5c
        var_68 = 0
        r14_1 = rbx_8
        int64_t var_60_3 = 0
    else
    label_140671758:
        rdi_18 = var_58
        r15_1 = var_50:4.d
        var_58 = 0
        r14_1 = var_50.d
        int64_t var_50_1 = 0
    
    void var_48
    
    if (arg1 + 0x38 != &var_48)
        int64_t rcx_37 = *(arg1 + 0x38)
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        *(arg1 + 0x38) = rdi_18
        *(arg1 + 0x44) = r15_1
        *(arg1 + 0x40) = r14_1
    else if (rdi_18 != 0)
        sub_140a74f90(rdi_18)
    
    int64_t rcx_39 = var_58
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    if (rsi_3 != 0)
        rcx_24 = rsi_3
    label_14067199e:
        sub_140a74f90(rcx_24)
    
label_1406719a3:
    rbx_1.b = 0
else
    while (true)
        int64_t* rcx_1 = *(arg1 + 0x20)
        int16_t arg_8
        (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
        *(arg1 + 0x64) += 1
        rbx_1 = zx.q(arg_8)
        
        if (rbx_1.w == 0x22)
            if (arg1 + 0x48 != &var_68)
                int64_t rcx_32 = *(arg1 + 0x48)
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
                
                *(arg1 + 0x48) = r12
                r12 = 0
                *(arg1 + 0x50) = rdi
                *(arg1 + 0x54) = r15
            
            rbx_1.b = 1
            break
        
        if (rbx_1.w != 0x5c)
        label_140671440:
            
            if (rbx_1.w != 0)
                int32_t rsi_1 = rdi - 1
                
                if (rdi s<= 0)
                    rsi_1 = 0
                
                int32_t rdi_1
                rdi_1.b = rdi s<= 0
                rdi += rdi_1 + 1
                
                if (rdi s> r15)
                    sub_140594770(&var_68)
                    r15 = var_5c
                    r12 = var_68
                
                int64_t rax_7 = sx.q(rsi_1)
                *(r12 + (rax_7 << 1)) = rbx_1.w
                *(r12 + (rax_7 << 1) + 2) = 0
                goto label_1406716d8
            
        label_1406716d8:
            int64_t* rcx_15 = *(arg1 + 0x20)
            
            if ((*(*rcx_15 + 0x30))(rcx_15) != 0)
                goto label_1406716ef
        else
            int64_t* rcx_2 = *(arg1 + 0x20)
            (*(*rcx_2 + 0x150))(rcx_2, &arg_8, 2)
            rbx_1 = zx.q(arg_8)
            *(arg1 + 0x64) += 1
            
            switch ((rbx_1 - 0x22).d)
                case 0, 0xd, 0x3a
                    goto label_140671440
                case 0x40
                    int32_t rbx_5 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_5 = 0
                    
                    int32_t rdi_9
                    rdi_9.b = rdi s<= 0
                    rdi += rdi_9 + 1
                    
                    if (rdi s> r15)
                        sub_140594770(&var_68)
                        r15 = var_5c
                        r12 = var_68
                    
                    *(r12 + (sx.q(rbx_5) << 1)) = 8
                    goto label_1406716d8
                case 0x44
                    int32_t rbx_2 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_2 = 0
                    
                    int32_t rdi_3
                    rdi_3.b = rdi s<= 0
                    rdi += rdi_3 + 1
                    
                    if (rdi s> r15)
                        sub_140594770(&var_68)
                        r15 = var_5c
                        r12 = var_68
                    
                    *(r12 + (sx.q(rbx_2) << 1)) = 0xc
                    goto label_1406716d8
                case 0x4c
                    int32_t rbx_4 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_4 = 0
                    
                    int32_t rdi_7
                    rdi_7.b = rdi s<= 0
                    rdi += rdi_7 + 1
                    
                    if (rdi s> r15)
                        sub_140594770(&var_68)
                        r15 = var_5c
                        r12 = var_68
                    
                    *(r12 + (sx.q(rbx_4) << 1)) = 0xa
                    goto label_1406716d8
                case 0x50
                    int32_t rbx_3 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_3 = 0
                    
                    int32_t rdi_5
                    rdi_5.b = rdi s<= 0
                    rdi += rdi_5 + 1
                    
                    if (rdi s> r15)
                        sub_140594770(&var_68)
                        r15 = var_5c
                        r12 = var_68
                    
                    *(r12 + (sx.q(rbx_3) << 1)) = 0xd
                    goto label_1406716d8
                case 0x52
                    int32_t rbx_6 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_6 = 0
                    
                    int32_t rdi_11
                    rdi_11.b = rdi s<= 0
                    rdi += rdi_11 + 1
                    
                    if (rdi s> r15)
                        sub_140594770(&var_68)
                        r15 = var_5c
                        r12 = var_68
                    
                    *(r12 + (sx.q(rbx_6) << 1)) = 9
                    goto label_1406716d8
                case 0x53
                    int32_t rsi_2 = 3
                    wchar16 const* const rdx_13
                    uint32_t r8_2
                    
                    while (true)
                        int64_t* rcx_11 = *(arg1 + 0x20)
                        
                        if ((*(*rcx_11 + 0x30))(rcx_11) != 0)
                            var_68 = 0
                            int32_t var_60_2 = 0
                            sub_1405947f0(&var_68, 0x1d)
                            int32_t rax_25 = var_60_2 + 0x1d
                            var_60_2 = rax_25
                            
                            if (rax_25 s> var_5c)
                                sub_140594770(&var_68)
                            
                            r8_2 = 0x3a
                            rdx_13 = u"String Token Abruptly Ended."
                            break
                        
                        int64_t* rcx_12 = *(arg1 + 0x20)
                        (*(*rcx_12 + 0x150))(rcx_12, &arg_8, 2)
                        uint32_t rcx_13 = zx.d(arg_8)
                        *(arg1 + 0x64) += 1
                        
                        if (rcx_13.w - 0x30 u> 9)
                            if (rcx_13.w - 0x61 u<= 5)
                                rbx_1 = zx.q(rcx_13 - 0x57)
                                goto label_140671649
                            
                            if (rcx_13.w - 0x41 u<= 5)
                                rbx_1 = zx.q(rcx_13 - 0x37)
                                goto label_140671649
                            
                            rbx_1 = nullptr
                        label_140671655:
                            
                            if (rcx_13 != 0x30)
                                var_68 = 0
                                int32_t var_60_1 = 0
                                sub_1405947f0(&var_68, 0x22)
                                int32_t rax_24 = var_60_1 + 0x22
                                var_60_1 = rax_24
                                
                                if (rax_24 s> var_5c)
                                    sub_140594770(&var_68)
                                
                                r8_2 = 0x44
                                rdx_13 = u"Invalid Hexadecimal digit parsed."
                                break
                        else
                            rbx_1 = zx.q(rcx_13 - 0x30)
                        label_140671649:
                            
                            if (rbx_1.d == 0)
                                goto label_140671655
                        
                        r14 += int.d(powf(16f, _mm_cvtepi32_ps(zx.o(rsi_2)).d)) * rbx_1.d
                        int32_t temp0_2 = rsi_2
                        rsi_2 -= 1
                        
                        if (temp0_2 - 1 s< 0)
                            if (r14.w == 0)
                                r14 = 0
                            else
                                int32_t rbx_7 = rdi - 1
                                
                                if (rdi s<= 0)
                                    rbx_7 = 0
                                
                                int32_t rdi_13
                                rdi_13.b = rdi s<= 0
                                rdi += rdi_13 + 1
                                
                                if (rdi s> r15)
                                    sub_140594770(&var_68)
                                    r15 = var_5c
                                    r12 = var_68
                                
                                int64_t rax_21 = sx.q(rbx_7)
                                *(r12 + (rax_21 << 1)) = r14.w
                                r14 = 0
                                *(r12 + (rax_21 << 1) + 2) = 0
                            
                            goto label_1406716d8
                    
                    UnDecorator::getReferenceType(var_68, rdx_13, r8_2)
                    sub_14067a5a0(arg1, &var_68)
                    rcx_24 = var_68
                    
                    if (rcx_24 == 0)
                        goto label_1406719a3
                    
                    goto label_14067199e
                default
                    var_68 = 0
                    int32_t var_60 = 0
                    sub_1405947f0(&var_68, 0x17)
                    rbx_8 = var_60 + 0x17
                    
                    if (rbx_8 s> var_5c)
                        sub_140594770(&var_68)
                    
                    rsi_3 = var_68
                    UnDecorator::getReferenceType(rsi_3, u"Bad Json escaped char.", 0x2e)
                    *(arg1 + 0x64)
                    sub_140a2e390(&var_58, u" Line: %u Ch: %u", zx.q(*(arg1 + 0x60)))
                    
                    if (rbx_8 s<= 1)
                        goto label_140671758
                    
                    int32_t rdi_15 = var_50.d
                    
                    if (rdi_15 == 0)
                        rdi_16 = 0
                    else
                        rdi_16 = rdi_15 - 1
                    
                    int32_t rax_26
                    
                    if (rbx_8 == 0)
                        rax_26 = rbx_8 + 1
                    
                    if (rbx_8 != 0 || rdi_16 == 0)
                        rax_26 = 0
                    
                    rcx_31 = rdi_16 + rax_26
                    goto label_1406718f8

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx_1.b)
