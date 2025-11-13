// 函数: sub_1405f9690
// 地址: 0x1405f9690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t var_50_1 = -2
uint64_t r14_1 = zx.q(arg3)
EnterCriticalSection(arg1 + 0xa0)
int64_t r9_1 = sx.q(*(arg1 + 0x148))

if (r9_1.d s>= 0)
    int32_t r8 = *(arg1 + 0x58)
    
    if (r9_1.d s< r8)
        void* rdx_1 = r9_1 * 0x68 + *(arg1 + 0x50)
        int64_t rax = sx.q(*(rdx_1 + 0x5c))
        
        if (r9_1.d s>= 0 && r9_1.d s< r8 && rax.d s>= 0 && rax.d s< *(rdx_1 + 0x28))
            int64_t rbp_1 = rax * 0x70
            void* rbp_2 = rbp_1 + *(rdx_1 + 0x20)
            
            if (rbp_1 != neg.q(*(rdx_1 + 0x20)) && (*(*(arg1 + 0x20) + 8))(arg1 + 0x20).d s< 0x200)
                uint64_t rcx_3 = zx.q(*(rbp_2 + 0x24) * *(rbp_2 + 0x28))
                void*** var_48
                sub_1405ee890(*(arg1 + 0x10), &var_48)
                void*** r15_1 = var_48
                int32_t r13_1 = *(rbp_2 + 0x28)
                int32_t arg_10 = *(rbp_2 + 0x24)
                
                if (r14_1.d != 0)
                    r15_1[3].d = 0
                    
                    if (r14_1.d s> *(r15_1 + 0x1c))
                        sub_1405c5510(&r15_1[2], r14_1.d)
                    
                    sub_1405f18d0(&r15_1[2], arg2, r14_1.d)
                    r15_1[4].d = arg_10
                    r15_1[5] = divu.dp.q(0:(r14_1 * 0x989680), rcx_3 * 2)
                    r15_1[6].d = r13_1
                    r15_1[7] = arg4
                    uint128_t zmm0_1 = var_48.o
                    uint128_t var_38 = zmm0_1
                    void* rax_6 = _mm_bsrli_si128(zmm0_1, 8).q
                    
                    if (rax_6 != 0)
                        *(rax_6 + 8) += 1
                    
                    (**(arg1 + 0x20))(arg1 + 0x20, &var_38)
                    int64_t* rbx_2 = var_38:8.q
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            rax = zx.q(*(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) -= 1
                            
                            if (rax.d == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t rdi_2 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (rdi_2 == 1)
                            (*(*var_40 + 8))(var_40, zx.q(rdi_2))

if (arg1 != -0xa0)
    LeaveCriticalSection(arg1 + 0xa0)
