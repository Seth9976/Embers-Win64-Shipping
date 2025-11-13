// 函数: sub_141a734d0
// 地址: 0x141a734d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1
int512_t zmm1
rax_1, zmm1 = sub_141a701c0(arg2, arg1, arg3)
int64_t* rsi = rax_1

if ((rax_1[5].b & 2) != 0)
    void* rbx_1 = *(arg1 + 0x40)
    uint64_t r14_1 = 0
    void* r13_1 = rbx_1 + sx.q(*(arg1 + 0x48)) * 0xc
    uint64_t var_48 = 0
    int32_t rdi_1 = 0
    int64_t var_40_1 = 0
    int32_t rbp_1 = 0
    
    if (rbx_1 != r13_1)
        do
            int64_t rsi_1 = sx.q(*(rbx_1 + 4))
            
            if (rsi_1.d s<= 0)
                *rbx_1 = 0xffffffff
            else
                int32_t rax_2 = *rbx_1
                *rbx_1 = rdi_1
                int64_t rcx_2 = *(arg1 + 0x50)
                int64_t r15_1 = sx.q(rdi_1)
                rdi_1 = (r15_1 + rsi_1).d
                var_40_1.d = rdi_1
                
                if (rdi_1 s> rbp_1)
                    sub_1405a4cf0(&var_48)
                    rbp_1 = var_40_1:4.d
                    rdi_1 = var_40_1.d
                    r14_1 = var_48
                
                memcpy(r14_1 + (r15_1 << 2), rcx_2 + (sx.q(rax_2) << 2), (rsi_1 << 2).d)
            
            *(rbx_1 + 8) = *(rbx_1 + 4)
            rbx_1 += 0xc
        while (rbx_1 != r13_1)
        
        if (rbp_1 != rdi_1)
            sub_1405dadb0(&var_48, rdi_1)
            rbp_1 = var_40_1:4.d
            rdi_1 = var_40_1.d
            r14_1 = var_48
        
        rsi = rax_1
    
    if (&arg1[0x50] != &var_48)
        int64_t rcx_6 = *(arg1 + 0x50)
        
        if (rcx_6 != 0)
            zmm1 = sub_140a74f90(rcx_6)
        
        *(arg1 + 0x50) = r14_1
        *(arg1 + 0x58) = rdi_1
        *(arg1 + 0x5c) = rbp_1
    else if (r14_1 != 0)
        zmm1 = sub_140a74f90(r14_1)

(*(*rsi + 0x1d8))(rsi, &data_1439a9488)
sub_141a70a30(sub_1408dc760(rsi, &arg1[0x40], zmm1), &arg1[0x50], zmm1)
int64_t* result
result.b = 1
return result
