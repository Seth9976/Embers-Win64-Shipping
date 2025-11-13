// 函数: sub_141a73320
// 地址: 0x141a73320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1
int512_t zmm1
rax_1, zmm1 = sub_141a701c0(arg2, arg1, arg3)
int64_t* rsi = rax_1

if ((rax_1[5].b & 2) != 0)
    void* rbx_1 = *(arg1 + 0x40)
    int64_t rbp_1 = 0
    int32_t rdi_1 = 0
    void* r13_1 = rbx_1 + sx.q(*(arg1 + 0x48)) * 0xc
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    int32_t r14_1 = 0
    
    if (rbx_1 != r13_1)
        do
            int32_t rsi_1 = *(rbx_1 + 4)
            
            if (rsi_1 s<= 0)
                *rbx_1 = 0xffffffff
            else
                int32_t rax_2 = *rbx_1
                *rbx_1 = rdi_1
                int64_t r15_1 = sx.q(rdi_1)
                int64_t rax_3 = *(arg1 + 0x50)
                rdi_1 = r15_1.d + rsi_1
                var_40_1.d = rdi_1
                
                if (rdi_1 s> r14_1)
                    sub_1405c50f0(&var_48)
                    r14_1 = var_40_1:4.d
                    rdi_1 = var_40_1.d
                    rbp_1 = var_48
                
                memcpy(r15_1 * 0x1c + rbp_1, sx.q(rax_2) * 0x1c + rax_3, rsi_1 * 0x1c)
            
            *(rbx_1 + 8) = *(rbx_1 + 4)
            rbx_1 += 0xc
        while (rbx_1 != r13_1)
        
        if (r14_1 != rdi_1)
            sub_1413f6f70(&var_48, rdi_1)
            r14_1 = var_40_1:4.d
            rdi_1 = var_40_1.d
            rbp_1 = var_48
        
        rsi = rax_1
    
    if (&arg1[0x50] != &var_48)
        int64_t rcx_6 = *(arg1 + 0x50)
        
        if (rcx_6 != 0)
            zmm1 = sub_140a74f90(rcx_6)
        
        *(arg1 + 0x50) = rbp_1
        *(arg1 + 0x58) = rdi_1
        *(arg1 + 0x5c) = r14_1
    else if (rbp_1 != 0)
        zmm1 = sub_140a74f90(rbp_1)

(*(*rsi + 0x1d8))(rsi, &data_1439a9488)
sub_141a70870(sub_1408dc760(rsi, &arg1[0x40], zmm1), &arg1[0x50], zmm1)
int64_t* result
result.b = 1
return result
