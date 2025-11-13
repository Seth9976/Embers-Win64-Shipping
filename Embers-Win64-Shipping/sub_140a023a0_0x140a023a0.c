// 函数: sub_140a023a0
// 地址: 0x140a023a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r14 = nullptr
int32_t rbx = 0
int32_t rdx = arg1[0x92].d
void* var_38 = nullptr
int64_t var_30 = 0

if (rdx s> 0)
    result = sub_1405c5570(&var_38, rdx)
    rbx = var_30.d
    r14 = var_38

int64_t* r9 = arg1[0x91]
int64_t rdx_1 = sx.q(arg1[0x92].d)
int64_t* rdi = r9
void* rcx_1 = &r9[rdx_1]

if (r9 != rcx_1)
    do
        if (*rdi == arg3)
            int32_t rdi_2 = ((rdi - r9) s>> 3).d
            
            if (rdi_2 != 0xffffffff)
                if (arg2 == 0)
                    int32_t rax_3 = rdx_1.d - rdi_2
                    
                    if (rax_3 != 1)
                        memmove(&r9[sx.q(rdi_2)], &r9[sx.q(rdi_2 + 1)], (rax_3 - 1) << 3)
                        rdx_1 = zx.q(arg1[0x92].d)
                    
                    arg1[0x92].d = (rdx_1 - 1).d
                    result = sub_1405c53d0(&arg1[0x91])
                else
                    arg1[0x88] = arg3
                    sub_141ef1240(arg1)
                    int32_t i = rdi_2 + 1
                    
                    if (i s< arg1[0x92].d)
                        int64_t r15_1 = sx.q(i) << 3
                        
                        do
                            int64_t r12_1 = arg1[0x91]
                            int64_t rdi_3 = sx.q(rbx)
                            rbx = (rdi_3 + 1).d
                            var_30.d = rbx
                            
                            if (rbx s> var_30:4.d)
                                sub_1405a4d70(&var_38)
                                rbx = var_30.d
                                r14 = var_38
                            
                            int64_t rax_1 = *(r15_1 + r12_1)
                            i += 1
                            r15_1 += 8
                            *(r14 + (rdi_3 << 3)) = rax_1
                        while (i s< arg1[0x92].d)
                    
                    result = &var_38
                    
                    if (&arg1[0x91] != &var_38)
                        int32_t r8 = *(arg1 + 0x494)
                        arg1[0x92].d = rbx
                        
                        if (rbx != 0 || r8 != 0)
                            sub_1405c4a00(&arg1[0x91], rbx, r8)
                            result = memcpy(arg1[0x91], r14, rbx << 3)
                        else
                            *(arg1 + 0x494) = rbx
            
            break
        
        rdi = &rdi[1]
    while (rdi != rcx_1)

if (r14 == 0)
    return result

return sub_140a74f90(r14) __tailcall
