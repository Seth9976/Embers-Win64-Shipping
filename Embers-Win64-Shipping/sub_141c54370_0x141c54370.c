// 函数: sub_141c54370
// 地址: 0x141c54370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int32_t var_54 = 0
int32_t var_48 = 0xffffffff
int32_t arg_8 = 0
int64_t var_50 = *(*(rdx + 0x28) + 0x360)
uint64_t result = *(rdx + 0x28)
int32_t var_58 = _mm_cvtepi32_ps(zx.o(*(result + 0xc))).d

if (*(rdx + 0x1ac) s> 0)
    int64_t r15_1 = 0
    
    do
        int64_t r12_1 = *(rdx + 0xc8)
        
        if (*(r15_1 + r12_1 + 0x1a0) == arg1[1].d)
            int32_t rax_1
            rax_1.b = arg1[4].b == 0
            *(r15_1 + r12_1 + 0x1c8) = rax_1.b
            CRITICAL_SECTION* lpCriticalSection = *arg1
            EnterCriticalSection(lpCriticalSection)
            int32_t rax_2 = *(r15_1 + r12_1 + 0x1b0)
            
            if (arg1[3].d != rax_2)
            label_141c5454e:
                int32_t var_54_1 = *(r15_1 + r12_1 + 0x3d4)
                sub_141c6cfc0(*arg1, arg_8)
                sub_141c56900(*arg1, arg_8, &var_58, &arg1[2])
            else
                int32_t i = 0
                
                if (rax_2 s> 0)
                    int64_t* r14_1 = nullptr
                    
                    do
                        int64_t rax_3 = *(r15_1 + r12_1 + 0x1a8)
                        int64_t rcx_1 = arg1[2]
                        int64_t* rdi_1 = *(r14_1 + rax_3 + 8)
                        void* r8_1 = *(r14_1 + rax_3)
                        
                        if (rdi_1 != 0)
                            rdi_1[1].d += 1
                        
                        if (sub_14236bd70(r8_1, *(r14_1 + rcx_1), r8_1.d) == 0)
                            if (rdi_1 != 0)
                                rdi_1[1].d -= 1
                                
                                if (rdi_1[1].d == 1)
                                    (**rdi_1)(rdi_1)
                                    int32_t rax_12 = *(rdi_1 + 0xc)
                                    *(rdi_1 + 0xc) -= 1
                                    
                                    if (rax_12 == 1 && rdi_1 != 0)
                                        (*(*rdi_1 + 8))(rdi_1, 1)
                            
                            goto label_141c5454e
                        
                        sub_142376b50(r8_1, not.b(*(r14_1 + rcx_1 + 8)) & 1)
                        
                        if (rdi_1 != 0)
                            rdi_1[1].d -= 1
                            
                            if (rdi_1[1].d == 1)
                                (**rdi_1)(rdi_1)
                                int32_t rax_8 = *(rdi_1 + 0xc)
                                *(rdi_1 + 0xc) -= 1
                                
                                if (rax_8 == 1)
                                    (*(*rdi_1 + 8))(rdi_1, 1)
                        
                        i += 1
                        r14_1 = &r14_1[2]
                    while (i s< *(r15_1 + r12_1 + 0x1b0))
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
        
        r15_1 += 0x3f0
        rdx = *arg1
        result = zx.q(arg_8 + 1)
        arg_8 = result.d
    while (result.d s< *(rdx + 0x1ac))

return result
