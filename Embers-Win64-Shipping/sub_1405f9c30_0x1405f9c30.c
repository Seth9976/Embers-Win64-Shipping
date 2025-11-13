// 函数: sub_1405f9c30
// 地址: 0x1405f9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t var_58_1 = -2
int64_t rbx_1 = arg4
EnterCriticalSection(arg1 + 0xa0)
int64_t rcx_1 = sx.q(*(arg1 + 0x154))

if (rcx_1.d s>= 0)
    int32_t r9 = *(arg1 + 0x1b8)
    
    if (rcx_1.d s< r9)
        int64_t rdx = rcx_1 * 0x68
        int64_t r8 = *(arg1 + 0x1b0)
        int64_t rax = sx.q(*(rdx + r8 + 0x5c))
        
        if (rcx_1.d s>= 0 && rcx_1.d s< r9 && rax.d s>= 0 && rax.d s< *(rdx + r8 + 0x28))
            int64_t rdi_1 = rax * 0x70
            void* rdi_2 = rdi_1 + *(rdx + r8 + 0x20)
            
            if (rdi_1 != neg.q(*(rdx + r8 + 0x20)) && *(rdi_2 + 0x34) * *(rdi_2 + 0x38) u<= arg3
                    && (*(*(arg1 + 0x180) + 8))(arg1 + 0x180).d s< 8)
                if (rbx_1 == 0)
                    float zmm1 = *(rdi_2 + 0x4c)
                    
                    if (not(zmm1 > 0f))
                        zmm1 = 30f
                    
                    rbx_1 = int.q(10000000f / zmm1)
                
                void*** var_48
                sub_1405eebd0(*(arg1 + 0x160), &var_48)
                void*** r13_1 = var_48
                int32_t r12_1 = *(rdi_2 + 0x38)
                rax = zx.q(*(rdi_2 + 0x68))
                
                if (rax.d != 0 && arg3 != 0 && r12_1 != 0 && *(rdi_2 + 0x34) * r12_1 u<= arg3)
                    r13_1[8].d = 0
                    
                    if (arg3 s> *(r13_1 + 0x44))
                        sub_1405c5510(&r13_1[7], arg3)
                    
                    sub_1405f18d0(&r13_1[7], arg2, arg3)
                    r13_1[3] = rbx_1
                    r13_1[2].d = *(rdi_2 + 0x30)
                    *(r13_1 + 0x14) = *(rdi_2 + 0x34)
                    r13_1[4].d = *(rdi_2 + 0x60)
                    *(r13_1 + 0x24) = *(rdi_2 + 0x64)
                    r13_1[5].d = rax.d
                    r13_1[9].d = r12_1
                    r13_1[6] = arg5
                    uint128_t zmm0_1 = var_48.o
                    uint128_t var_38 = zmm0_1
                    void* rax_10 = _mm_bsrli_si128(zmm0_1, 8).q
                    
                    if (rax_10 != 0)
                        *(rax_10 + 8) += 1
                    
                    (**(arg1 + 0x180))(arg1 + 0x180, &var_38)
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
                        int32_t rsi_2 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (rsi_2 == 1)
                            (*(*var_40 + 8))(var_40, zx.q(rsi_2))

if (arg1 != -0xa0)
    LeaveCriticalSection(arg1 + 0xa0)
