// 函数: sub_1406219e0
// 地址: 0x1406219e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r12 = arg3[1]
int128_t zmm6 = arg2
int64_t rbx = 0
int64_t r12_1 = r12 - *arg3

if (r12 != *arg3)
    while (true)
        char* r8 = *arg3
        void* rcx_1 = arg3[1] - r8
        
        if (rcx_1 u> rbx)
            char r14_1 = r8[rbx]
            rbx += 1
            uint32_t r9_1
            r9_1.b = r14_1 u>> 4
            char rdx_1 = r14_1 & 0xf
            void* rcx_10
            int64_t* rdx_6
            
            if (r9_1.b != 0xf)
                if (*(arg1 + 0x100) != 0)
                    char* rbp_2 = sx.q(*(arg1 + 0x110))
                    int32_t rax_4 = (&rbp_2[1]).d
                    *(arg1 + 0x110) = rax_4
                    
                    if (rax_4 s> *(arg1 + 0x114))
                        sub_1405daba0(arg1 + 0x108)
                    
                    result = *(arg1 + 0x108)
                    *(rbp_2 + result) = r14_1
                    goto label_140621c3c
                
                result = zx.q(r9_1 - 8)
                
                if (result.b u> 6)
                    goto label_140621c3c
                
                char r10 = 0
                
                if (rcx_1 u> rbx)
                    char r11_1 = r8[rbx]
                    rbx += 1
                    
                    if (r9_1.b - 0xc u<= 1)
                        goto label_140621bfc
                    
                    if (rcx_1 u> rbx)
                        r10 = r8[rbx]
                        rbx += 1
                    label_140621bfc:
                        char arg_19 = rdx_1
                        char arg_18 = r9_1.b
                        rcx_10 = arg1 + 0xd0
                        char arg_1a = r11_1
                        rdx_6 = &arg_18
                        char arg_1b = r10
                        int32_t arg_1c = fconvert.s(zmm6.q)
                        goto label_140621c37
            else
                if (rdx_1 == 0)
                    *(arg1 + 0x110) = 0
                    
                    if (*(arg1 + 0x114) != 0)
                        result = sub_1405c5510(arg1 + 0x108, 0)
                    
                    *(arg1 + 0x100) = 1
                    goto label_140621c3c
                
                if (rdx_1 == 7)
                    if (*(arg1 + 0x100) != 0)
                        *(arg1 + 0x100) = 0
                        int64_t var_68 = 0
                        int64_t var_60_1 = 0
                        
                        if (&var_68 != arg1 + 0x108)
                            uint32_t count = *(arg1 + 0x110)
                            int64_t rbp_1 = *(arg1 + 0x108)
                            var_60_1.d = count
                            
                            if (count != 0)
                                sub_1405da9e0(&var_68, count, 0)
                                memcpy(var_68, rbp_1, count)
                        
                        int32_t var_58_1 = fconvert.s(zmm6.q)
                        result, zmm6 = sub_1405a9f90(arg1 + 0xe0, &var_68)
                        int64_t rcx_6 = var_68
                        
                        if (rcx_6 != 0)
                            result = sub_140a74f90(rcx_6)
                    
                    goto label_140621c3c
                
                uint32_t arg_24 = 0
                
                if (rdx_1 != 2)
                    goto label_140621b68
                
                int64_t rdx_5 = rbx
                
                if (rcx_1 u> rbx && rcx_1 u> rbx + 1)
                    uint32_t rcx_7 = zx.d(r8[rbx + 1])
                    rbx += 2
                    arg_24 = (rcx_7 << 7) + zx.d(r8[rdx_5])
                label_140621b68:
                    rcx_10 = arg1 + 0xf0
                    int64_t var_78 = rdx_1.q
                    rdx_6 = &var_78
                    int32_t var_70_1 = fconvert.s(zmm6.q)
                label_140621c37:
                    result, zmm6 = sub_1405a9f90(rcx_10, rdx_6)
                label_140621c3c:
                    
                    if (rbx u>= r12_1)
                        break
                    
                    continue
        
        sub_140620820()
        noreturn

return result
