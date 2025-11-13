// 函数: sub_14098b2f0
// 地址: 0x14098b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2

if (arg3 != 0)
    rax_2 = sub_140d21950(arg3, sub_14098c5b0())

void*** rdi_3

if (arg3 == 0 || rax_2 == 0)
    void*** rax_15 =
        sub_14098b830(ConvertToPNG only supports UAppleImageInterface derived textures")
    *arg2 = &rax_15[2]
    arg2[1] = rax_15
    
    if (rax_15 != 0)
        rax_15[1].d += 1
        rdi_3 = rax_15
    label_14098b53e:
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rbx_4 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rbx_4 == 1)
                    (*rdi_3)[1](rdi_3, zx.q(rbx_4))
else
    int64_t rdx_1 = *rax_2
    
    if ((*(rdx_1 + 0x10))(rax_2, rdx_1) - 1 u<= 2)
        void*** rax_12 = sub_14098b830(u"ConvertToPNG requires iOS 11.0+ or macOS 10.13.4+")
        *arg2 = &rax_12[2]
        arg2[1] = rax_12
        
        if (rax_12 != 0)
            rax_12[1].d += 1
            rdi_3 = rax_12
            goto label_14098b53e
    else
        int64_t rdx_2 = *rax_2
        int64_t var_18
        sub_140a2e390(&var_18, ConvertToPNG texture type (%d) was not supported", 
            zx.q((*(rdx_2 + 0x10))(rax_2, rdx_2)))
        void*** rax_5 = j_sub_140a82f30(0x40)
        void*** rbx_2 = rax_5
        
        if (rax_5 == 0)
            rbx_2 = rax_5
        else
            rax_5[1].d = 1
            *(rax_5 + 0xc) = 1
            *rbx_2 = &data_142e3bc28
            rbx_2[2] = &data_142e3b5c8
            __builtin_memset(&rbx_2[3], 0, 0x18)
            rbx_2[6] = 0
            rbx_2[7] = 0
            rbx_2[2] = &data_142e3b638
            
            if (&rbx_2[6] != &var_18)
                int32_t r8_1 = *(rbx_2 + 0x3c)
                int64_t r14_1 = var_18
                int32_t var_10
                rbx_2[7].d = var_10
                
                if (var_10 != 0 || r8_1 != 0)
                    sub_1405a4c70(&rbx_2[6], var_10, r8_1)
                    memcpy(rbx_2[6], r14_1, var_10 * 2)
                else
                    *(rbx_2 + 0x3c) = 0
            
            *(rbx_2 + 0x1c)
            *(rbx_2 + 0x1c) = 1
            rbx_2[3].d
            rbx_2[3].d = 1
        
        *arg2 = &rbx_2[2]
        arg2[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rbx_3 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        (*rbx_2)[1](rbx_2, zx.q(rbx_3))
        
        int64_t rcx_9 = var_18
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
return arg2
