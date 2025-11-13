// 函数: sub_140e788f0
// 地址: 0x140e788f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct DOS_Header* const rbx
struct DOS_Header* const var_10 = rbx
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
wchar16 const* const rdx_14
uint32_t r8_1

if ((*(*rcx + 0x30))(rcx) != 0)
label_140e78cab:
    var_48 = 0
    var_40_1 = 0
label_140e78cc0:
    sub_1405947f0(&var_48, 0x1d)
    int32_t rax_25 = var_40_1 + 0x1d
    var_40_1 = rax_25
    
    if (rax_25 s> var_3c)
        sub_140594770(&var_48)
    
    rdx_14 = u"String Token Abruptly Ended."
    r8_1 = 0x3a
label_140e78ced:
    UnDecorator::getReferenceType(var_48, rdx_14, r8_1)
    sub_140e88b20(arg1, &var_48)
    int64_t rcx_20 = var_48
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    rbx.b = 0
else
    while (true)
        int64_t* rcx_1 = *(arg1 + 0x20)
        char arg_8
        (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 1)
        char rax_3 = arg_8
        *(arg1 + 0x64) += 1
        
        if (rax_3 == 0x22)
            if (arg1 + 0x48 != &var_48)
                int64_t rcx_26
                rcx_26.b = (arg1 + 0x48)->e_magic[0]
                rcx_26:1.b = (arg1 + 0x48)->e_magic[1]
                rcx_26:2.w = (arg1 + 0x48)->e_cblp
                rcx_26:4.w = (arg1 + 0x48)->e_cp
                rcx_26:6.w = (arg1 + 0x48)->e_crlc
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                (arg1 + 0x48)->e_magic[0] = r12.b
                (arg1 + 0x48)->e_magic[1] = r12:1.b
                (arg1 + 0x48)->e_cblp = r12:2.w
                (arg1 + 0x48)->e_cp = r12:4.w
                (arg1 + 0x48)->e_crlc = r12:6.w
                r12 = 0
                (arg1 + 0x48)->e_cparhdr = rdi.w
                (arg1 + 0x48)->e_minalloc = rdi:2.w
                (arg1 + 0x48)->e_maxalloc = r13.w
                (arg1 + 0x48)->e_ss = r13:2.w
            
            rbx.b = 1
            break
        
        int16_t rsi_2
        bool cond:0_1
        
        if (rax_3 != 0x5c)
            rsi_2 = sx.w(rax_3)
            cond:0_1 = rax_3 == 0
        label_140e789c7:
            
            if (not(cond:0_1))
                int32_t rbx_1 = rdi - 1
                
                if (rdi s<= 0)
                    rbx_1 = 0
                
                int32_t rdi_1
                rdi_1.b = rdi s<= 0
                rdi += rdi_1 + 1
                
                if (rdi s> r13)
                    sub_140594770(&var_48)
                    r13 = var_3c
                    r12 = var_48
                
                int64_t rax_8 = sx.q(rbx_1)
                *(r12 + (rax_8 << 1)) = rsi_2
                *(r12 + (rax_8 << 1) + 2) = 0
                goto label_140e78c99
            
        label_140e78c99:
            int64_t* rcx_15 = *(arg1 + 0x20)
            
            if ((*(*rcx_15 + 0x30))(rcx_15) != 0)
                goto label_140e78cab
        else
            int64_t* rcx_2 = *(arg1 + 0x20)
            (*(*rcx_2 + 0x150))(rcx_2, &arg_8, 1)
            int32_t rdx_3 = sx.d(arg_8)
            *(arg1 + 0x64) += 1
            
            if (rdx_3 - 0x22 u> 0x53)
            label_140e78da2:
                var_48 = 0
                int32_t var_40_3 = 0
                sub_1405947f0(&var_48, 0x17)
                int32_t rax_28 = var_40_3 + 0x17
                var_40_3 = rax_28
                
                if (rax_28 s> var_3c)
                    sub_140594770(&var_48)
                
                r8_1 = 0x2e
                rdx_14 = u"Bad Json escaped char."
                goto label_140e78ced
            
            switch (rdx_3)
                case 0x22, 0x2f, 0x5c
                    rsi_2 = sx.w(rdx_3.b)
                    cond:0_1 = rdx_3.b == 0
                    goto label_140e789c7
                case 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x30, 
                        0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                        0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 
                        0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 
                        0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 
                        0x63, 0x64, 0x65, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6f, 0x70, 
                        0x71, 0x73
                    goto label_140e78da2
                case 0x62
                    int32_t rbx_5 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_5 = 0
                    
                    int32_t rdi_9
                    rdi_9.b = rdi s<= 0
                    rdi += rdi_9 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx_5) << 1)) = 8
                    goto label_140e78c99
                case 0x66
                    int32_t rbx_2 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_2 = 0
                    
                    int32_t rdi_3
                    rdi_3.b = rdi s<= 0
                    rdi += rdi_3 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx_2) << 1)) = 0xc
                    goto label_140e78c99
                case 0x6e
                    int32_t rbx_4 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_4 = 0
                    
                    int32_t rdi_7
                    rdi_7.b = rdi s<= 0
                    rdi += rdi_7 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx_4) << 1)) = 0xa
                    goto label_140e78c99
                case 0x72
                    int32_t rbx_3 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_3 = 0
                    
                    int32_t rdi_5
                    rdi_5.b = rdi s<= 0
                    rdi += rdi_5 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx_3) << 1)) = 0xd
                    goto label_140e78c99
                case 0x74
                    int32_t rbx_6 = rdi - 1
                    
                    if (rdi s<= 0)
                        rbx_6 = 0
                    
                    int32_t rdi_11
                    rdi_11.b = rdi s<= 0
                    rdi += rdi_11 + 1
                    
                    if (rdi s> r13)
                        sub_140594770(&var_48)
                        r13 = var_3c
                        r12 = var_48
                    
                    *(r12 + (sx.q(rbx_6) << 1)) = 9
                    goto label_140e78c99
                case 0x75
                    int32_t rsi_3 = 3
                    int32_t temp0_2
                    
                    do
                        int64_t* rcx_11 = *(arg1 + 0x20)
                        
                        if ((*(*rcx_11 + 0x30))(rcx_11) != 0)
                            var_48 = 0
                            var_40_1 = 0
                            goto label_140e78cc0
                        
                        int64_t* rcx_12 = *(arg1 + 0x20)
                        (*(*rcx_12 + 0x150))(rcx_12, &arg_8, 1)
                        int16_t rdx_11 = sx.w(arg_8)
                        *(arg1 + 0x64) += 1
                        
                        if (rdx_11 - 0x30 u> 9)
                            if (rdx_11 - 0x61 u<= 5)
                                rbx = zx.q(zx.d(rdx_11) - 0x57)
                                goto label_140e78bfb
                            
                            if (rdx_11 - 0x41 u<= 5)
                                rbx = zx.q(zx.d(rdx_11) - 0x37)
                                goto label_140e78bfb
                            
                            rbx = nullptr
                        label_140e78c07:
                            
                            if (rdx_11.b != 0x30)
                                var_48 = 0
                                int32_t var_40_2 = 0
                                sub_1405947f0(&var_48, 0x22)
                                int32_t rax_27 = var_40_2 + 0x22
                                var_40_2 = rax_27
                                
                                if (rax_27 s> var_3c)
                                    sub_140594770(&var_48)
                                
                                r8_1 = 0x44
                                rdx_14 = u"Invalid Hexadecimal digit parsed."
                                goto label_140e78ced
                        else
                            rbx = zx.q(zx.d(rdx_11) - 0x30)
                        label_140e78bfb:
                            
                            if (rbx.d == 0)
                                goto label_140e78c07
                        
                        r15 += int.d(powf(16f, _mm_cvtepi32_ps(zx.o(rsi_3)).d)) * rbx.d
                        temp0_2 = rsi_3
                        rsi_3 -= 1
                    while (temp0_2 - 1 s>= 0)
                    
                    if (r15.w == 0)
                        r15 = 0
                    else
                        int32_t rbx_10 = rdi - 1
                        
                        if (rdi s<= 0)
                            rbx_10 = 0
                        
                        int32_t rdi_13
                        rdi_13.b = rdi s<= 0
                        rdi += rdi_13 + 1
                        
                        if (rdi s> r13)
                            sub_140594770(&var_48)
                            r13 = var_3c
                            r12 = var_48
                        
                        int64_t rax_22 = sx.q(rbx_10)
                        *(r12 + (rax_22 << 1)) = r15.w
                        r15 = 0
                        *(r12 + (rax_22 << 1) + 2) = 0
                    
                    goto label_140e78c99

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(rbx.b)
