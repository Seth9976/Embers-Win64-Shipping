// 函数: sub_1425c6ce0
// 地址: 0x1425c6ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* var_10 = rbx
int64_t* rcx = *(arg1 + 0x20)
int32_t r15 = 0
int128_t zmm6
int128_t var_38 = zmm6
int64_t r12 = 0
int64_t var_48 = 0
int32_t rdi = 0
int32_t r13 = 0
int32_t var_3c = 0
int32_t var_40_1
wchar16 const* const rdx_12
uint32_t r8_1

if ((*(*rcx + 0x30))(rcx) != 0)
label_1425c7064:
    var_48 = 0
    var_40_1 = 0
label_1425c7079:
    sub_1405947f0(&var_48, 0x1d)
    int32_t rax_24 = var_40_1 + 0x1d
    var_40_1 = rax_24
    
    if (rax_24 s> var_3c)
        sub_140594770(&var_48)
    
    rdx_12 = u"String Token Abruptly Ended."
    r8_1 = 0x3a
label_1425c70a6:
    UnDecorator::getReferenceType(var_48, rdx_12, r8_1)
    sub_140e88b20(arg1, &var_48)
    int64_t rcx_20 = var_48
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    rbx.b = 0
else
    while (true)
        int64_t* rcx_1 = *(arg1 + 0x20)
        int16_t arg_8
        (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)
        *(arg1 + 0x64) += 1
        rbx = zx.q(arg_8)
        
        if (rbx.w == 0x22)
            if (arg1 + 0x48 != &var_48)
                int64_t rcx_26 = *(arg1 + 0x48)
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                *(arg1 + 0x48) = r12
                r12 = 0
                *(arg1 + 0x50) = rdi
                *(arg1 + 0x54) = r13
            
            rbx.b = 1
            break
        
        if (rbx.w != 0x5c)
        label_1425c6db0:
            
            if (rbx.w != 0)
                int32_t rsi_1 = rdi - 1
                
                if (rdi s<= 0)
                    rsi_1 = 0
                
                int32_t rdi_1
                rdi_1.b = rdi s<= 0
                rdi += rdi_1 + 1
                
                if (rdi s> r13)
                    sub_140594770(&var_48)
                    r13 = var_3c
                    r12 = var_48
                
                int64_t rax_7 = sx.q(rsi_1)
                *(r12 + (rax_7 << 1)) = rbx.w
                *(r12 + (rax_7 << 1) + 2) = 0
                goto label_1425c7052
            
        label_1425c7052:
            int64_t* rcx_15 = *(arg1 + 0x20)
            
            if ((*(*rcx_15 + 0x30))(rcx_15) != 0)
                goto label_1425c7064
        else
            int64_t* rcx_2 = *(arg1 + 0x20)
            (*(*rcx_2 + 0x150))(rcx_2, &arg_8, 2)
            rbx = zx.q(arg_8)
            *(arg1 + 0x64) += 1
            
            switch ((rbx - 0x22).d)
                case 0, 0xd, 0x3a
                    goto label_1425c6db0
                case 0x40
                    rbx = zx.q(rdi - 1)
                    
                    if (rdi s<= 0)
                        rbx = nullptr
                    
                    int32_t rdi_9
                    rdi_9.b = rdi s<= 0
                    rdi += rdi_9 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx.d) << 1)) = 8
                    goto label_1425c7052
                case 0x44
                    rbx = zx.q(rdi - 1)
                    
                    if (rdi s<= 0)
                        rbx = nullptr
                    
                    int32_t rdi_3
                    rdi_3.b = rdi s<= 0
                    rdi += rdi_3 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx.d) << 1)) = 0xc
                    goto label_1425c7052
                case 0x4c
                    rbx = zx.q(rdi - 1)
                    
                    if (rdi s<= 0)
                        rbx = nullptr
                    
                    int32_t rdi_7
                    rdi_7.b = rdi s<= 0
                    rdi += rdi_7 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx.d) << 1)) = 0xa
                    goto label_1425c7052
                case 0x50
                    rbx = zx.q(rdi - 1)
                    
                    if (rdi s<= 0)
                        rbx = nullptr
                    
                    int32_t rdi_5
                    rdi_5.b = rdi s<= 0
                    rdi += rdi_5 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx.d) << 1)) = 0xd
                    goto label_1425c7052
                case 0x52
                    rbx = zx.q(rdi - 1)
                    
                    if (rdi s<= 0)
                        rbx = nullptr
                    
                    int32_t rdi_11
                    rdi_11.b = rdi s<= 0
                    rdi += rdi_11 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx.d) << 1)) = 9
                    goto label_1425c7052
                case 0x53
                    int32_t rsi_2 = 3
                    int32_t temp0_2
                    
                    do
                        int64_t* rcx_11 = *(arg1 + 0x20)
                        
                        if ((*(*rcx_11 + 0x30))(rcx_11) != 0)
                            var_48 = 0
                            var_40_1 = 0
                            goto label_1425c7079
                        
                        int64_t* rcx_12 = *(arg1 + 0x20)
                        (*(*rcx_12 + 0x150))(rcx_12, &arg_8, 2)
                        int16_t rcx_13 = arg_8
                        *(arg1 + 0x64) += 1
                        
                        if (rcx_13 - 0x30 u> 9)
                            if (rcx_13 - 0x61 u<= 5)
                                rbx = zx.q(zx.d(rcx_13) - 0x57)
                                goto label_1425c6fc2
                            
                            if (rcx_13 - 0x41 u<= 5)
                                rbx = zx.q(zx.d(rcx_13) - 0x37)
                                goto label_1425c6fc2
                            
                            rbx = nullptr
                        label_1425c6fce:
                            
                            if (rcx_13 != 0x30)
                                var_48 = 0
                                int32_t var_40_2 = 0
                                sub_1405947f0(&var_48, 0x22)
                                int32_t rax_26 = var_40_2 + 0x22
                                var_40_2 = rax_26
                                
                                if (rax_26 s> var_3c)
                                    sub_140594770(&var_48)
                                
                                r8_1 = 0x44
                                rdx_12 = u"Invalid Hexadecimal digit parsed."
                                goto label_1425c70a6
                        else
                            rbx = zx.q(zx.d(rcx_13) - 0x30)
                        label_1425c6fc2:
                            
                            if (rbx.d == 0)
                                goto label_1425c6fce
                        
                        r15 += int.d(powf(16f, _mm_cvtepi32_ps(zx.o(rsi_2)).d)) * rbx.d
                        temp0_2 = rsi_2
                        rsi_2 -= 1
                    while (temp0_2 - 1 s>= 0)
                    
                    if (r15.w == 0)
                        r15 = 0
                    else
                        rbx = zx.q(rdi - 1)
                        
                        if (rdi s<= 0)
                            rbx = nullptr
                        
                        int32_t rdi_13
                        rdi_13.b = rdi s<= 0
                        rdi += rdi_13 + 1
                        
                        if (rdi s> r13)
                            sub_140594770(&var_48)
                            r13 = var_3c
                            r12 = var_48
                        
                        int64_t rax_21 = sx.q(rbx.d)
                        *(r12 + (rax_21 << 1)) = r15.w
                        r15 = 0
                        *(r12 + (rax_21 << 1) + 2) = 0
                    
                    goto label_1425c7052
                default
                    var_48 = 0
                    int32_t var_40_3 = 0
                    sub_1405947f0(&var_48, 0x17)
                    int32_t rax_27 = var_40_3 + 0x17
                    var_40_3 = rax_27
                    
                    if (rax_27 s> var_3c)
                        sub_140594770(&var_48)
                    
                    r8_1 = 0x2e
                    rdx_12 = u"Bad Json escaped char."
                    goto label_1425c70a6

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx.b)
