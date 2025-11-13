// 函数: sub_142b3fef0
// 地址: 0x142b3fef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int32_t rbx = *(arg2 + 8)

if (rbx != 0xffffffff)
    if (rbx u<= 0xc)
        void var_40
        sub_140dda8f0(&var_40)
        sub_142b3be70(&var_40, 2, rbx)
        sub_142b3bed0(&var_40, 2, rbx, *(arg2 + 0xc), *(arg2 + 0x10))
        
        if (sub_142b40050(arg1, &var_40, 0) == 0)
            if (rbx == 1 && *(arg2 + 0x10) == 0)
                int64_t rbp
                rbp.b = 0
                int64_t r12_1 = sx.q(*(arg1 + 0x80))
                int64_t rbx_1 = r12_1
                int32_t i = *(arg1 + 0x84) + r12_1.d
                
                if (r12_1.d s< i)
                    int64_t rdi_1 = rbx_1
                    
                    do
                        char rcx_5 = *(sub_142b3f8c0(arg1) + rdi_1)
                        void* rax_5
                        
                        if (rcx_5 != 0 && rcx_5 != 6)
                            rax_5 = sub_142b3f8c0(arg1)
                        
                        if (rcx_5 == 0 || rcx_5 == 6 || *(rax_5 + rdi_1) == 2)
                            rbp.b = 1
                        else if (rbp.b != 0)
                            break
                        
                        rbx_1 = zx.q(rbx_1.d + 1)
                        rdi_1 += 1
                    while (rbx_1.d s< i)
                
                *(arg2 + 0xc) = rbx_1.d - r12_1.d
                *(arg2 + 0x10) = rbx_1.d - *(arg1 + 0x80)
            
            rbx.b = 0
        else
            int32_t var_34
            *(arg2 + 0xc) = var_34
            int32_t var_30
            *(arg2 + 0x10) = var_30
            rbx.b = 1
        
        return zx.q(rbx.b)
    
    *arg3 = 1

void* const* result
result.b = 0
return result
