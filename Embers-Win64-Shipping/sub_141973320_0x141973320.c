// 函数: sub_141973320
// 地址: 0x141973320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
wchar16 const* const rdx

if (rax != 0x10de)
    if (rax == 0x1002)
        rdx = u"GPU_AMD"
        goto label_14197337c
    
    if (rax == 0x8086)
        rdx = u"GPU_0x8086"
        goto label_14197337c
    
    *arg2 = 0
    arg2[1] = 0
else
    rdx = u"GPU_NVIDIA"
label_14197337c:
    void* rcx = data_143ddb400
    int64_t* var_58_1 = &data_143de5810
    int16_t** var_48 = nullptr
    int32_t i_5 = 0
    sub_140af2c50(rcx, rdx, u"SuggestedDriverVersion", &var_48, &data_143de5810)
    int32_t rax_1 = arg3[1].d
    int32_t rcx_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rcx_1 = 0
    
    int16_t** rbx_1
    int16_t** rbx_2
    int64_t i_6
    
    if (rcx_1 s<= 0)
    label_14197341c:
        i_6 = zx.q(i_5)
        rbx_1 = var_48
    label_141973426:
        int16_t** rdx_3 = rbx_1
        void* r10_3 = &rbx_1[sx.q(i_6.d) * 2]
        
        if (rbx_1 != r10_3)
            while (true)
                int16_t* r9_2 = *rdx_3
                int16_t* rax_4 = r9_2
                void* r8 = &r9_2[sx.q(rdx_3[1].d)]
                
                if (r9_2 != r8)
                    while (*rax_4 != 0x3b)
                        rax_4 = &rax_4[1]
                        
                        if (rax_4 == r8)
                            goto label_141973469
                    
                    if (((rax_4 - r9_2) s>> 1).d != 0xffffffff)
                        rdx_3 = &rdx_3[2]
                        
                        if (rdx_3 == r10_3)
                            break
                        
                        continue
                
            label_141973469:
                sub_140596d10(arg2, rdx_3)
                int32_t i_3 = i_5
                rbx_2 = var_48
                
                if (i_3 == 0)
                    goto label_14197349a
                
                int32_t i
                
                do
                    int16_t* rcx_6 = *rbx_2
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    rbx_2 = &rbx_2[2]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                goto label_141973496
        
        if (i_6.d != 0)
            int32_t i_1
            
            do
                int16_t* rcx_12 = *rbx_1
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                rbx_1 = &rbx_1[2]
                i_1 = i_6.d
                i_6 = zx.q(i_6.d - 1)
            while (i_1 != 1)
            rbx_1 = var_48
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        *arg2 = 0
        arg2[1] = 0
    else
        rbx_1 = var_48
        i_6 = sx.q(i_5)
        void* r14_3 = &rbx_1[i_6 * 2]
        
        if (rbx_1 == r14_3)
            goto label_141973426
        
        int16_t* const r15_1 = &data_142d40450
        
        while (true)
            int16_t* rdx_1
            
            if (arg3[1].d == 0)
                rdx_1 = &data_142d40450
            else
                rdx_1 = *arg3
            
            var_58_1.d = 0xffffffff
            int32_t rax_2 = sub_140a23cf0(rbx_1, rdx_1, 1, 0, 0xffffffff)
            
            if (rax_2 s>= 1)
                int16_t* rdx_2 = *rbx_1
                
                if (rdx_2[sx.q(rax_2 - 1)] == 0x3b)
                    int32_t rax_5 = rbx_1[1].d
                    
                    if (rax_5 != 0)
                        r15_1 = rdx_2
                    
                    int32_t rbx_3 = rax_5 - 1
                    
                    if (rax_5 == 0)
                        rbx_3 = 0
                    
                    if (rax_2 - 1 s< 0)
                        rbx_3 = 0
                    else if (rax_2 - 1 s< rbx_3)
                        rbx_3 = rax_2 - 1
                    
                    int64_t var_38 = 0
                    int64_t rsi_1 = 0
                    int64_t var_30_1 = 0
                    int32_t rdi_1 = 0
                    int32_t r14_4 = 0
                    
                    if (r15_1 != 0 && *r15_1 != 0 && rbx_3 s> 0)
                        if (rbx_3 + 1 s> 0)
                            sub_1405947f0(&var_38, rbx_3 + 1)
                            r14_4 = var_30_1:4.d
                            rdi_1 = var_30_1.d
                            rsi_1 = var_38
                        
                        rdi_1 = rdi_1 + 1 + rbx_3
                        var_30_1.d = rdi_1
                        
                        if (rdi_1 s> r14_4)
                            sub_140594770(&var_38)
                            r14_4 = var_30_1:4.d
                            rdi_1 = var_30_1.d
                            rsi_1 = var_38
                        
                        UnDecorator::getReferenceType(rsi_1, r15_1, rbx_3 * 2)
                        *(rsi_1 + (sx.q(rdi_1) << 1) - 2) = 0
                    
                    rbx_2 = var_48
                    *arg2 = rsi_1
                    arg2[1].d = rdi_1
                    int32_t i_4 = i_5
                    *(arg2 + 0xc) = r14_4
                    
                    if (i_4 != 0)
                        int32_t i_2
                        
                        do
                            int16_t* rcx_11 = *rbx_2
                            
                            if (rcx_11 != 0)
                                sub_140a74f90(rcx_11)
                            
                            rbx_2 = &rbx_2[2]
                            i_2 = i_4
                            i_4 -= 1
                        while (i_2 != 1)
                    label_141973496:
                        rbx_2 = var_48
                    
                label_14197349a:
                    
                    if (rbx_2 != 0)
                        sub_140a74f90(rbx_2)
                    
                    break
            
            rbx_1 = &rbx_1[2]
            
            if (rbx_1 == r14_3)
                goto label_14197341c
return arg2
