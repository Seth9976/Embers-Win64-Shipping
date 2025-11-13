// 函数: sub_1426876c0
// 地址: 0x1426876c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)
void* rcx = *(arg1 + 8)

if (rcx != 0 && rbx.d s>= 0 && rbx.d s< sub_1405f8990(rcx))
    uint64_t rax_1 = sub_142610d00(*(arg1 + 8), rbx.d)
    int32_t* r14 = rax_1
    bool cond:0_1
    
    if (rax_1 == 0)
        cond:0_1 = 0 s> 0
    else
        rax_1 = *(rax_1 + 8)
        
        if (rax_1 == 0)
            cond:0_1 = 0 s> 0
        else
            int64_t i_3 = sx.q(*(rax_1 + 0x3c))
            int32_t temp0_1 = i_3.d
            cond:0_1 = temp0_1 s> 0
            
            if (temp0_1 s> 0)
                int64_t rdi_1 = sx.q(arg3[1].d)
                sub_142674100(arg3, i_3.d)
                void* rbp_1 = *(r14 + 0x10)
                int32_t r13_1 = 0
                int64_t i_2 = i_3
                int64_t i_1 = i_3
                int32_t temp1_1 = i_3.d
                cond:0_1 = temp1_1 s> 0
                
                if (temp1_1 s> 0)
                    int64_t r15_2 = rdi_1 * 0x18
                    uint64_t var_50_1 = rbx
                    int64_t i
                    
                    do
                        uint64_t r12_1 = zx.q(*(rbp_1 + 0x1e))
                        int64_t rdi_2 = 0
                        uint128_t zmm2 = zx.o(0)
                        int64_t zmm3 = (zx.o(0)).q
                        int32_t zmm4_1 = (zx.o(0)).d
                        uint64_t r10_1 = zx.q(r12_1.d)
                        
                        if (r12_1 u>= 4)
                            int64_t rbx_1 = *(r14 + 0x18)
                            void* rsi = rbp_1 + 6
                            int64_t j_3 = ((r12_1 - 4) u>> 2) + 1
                            rdi_2 = j_3 << 2
                            int64_t j
                            
                            do
                                uint64_t r9_1 = zx.q(*(rsi - 2)) * 3
                                zmm2.d = zmm2.d f- *(rbx_1 + (r9_1 << 2))
                                zmm3.d = zmm3.d f- *(rbx_1 + (r9_1 << 2) + 8)
                                uint64_t r8 = zx.q(*rsi) * 3
                                zmm2.d = zmm2.d f- *(rbx_1 + (r8 << 2))
                                zmm3.d = zmm3.d f- *(rbx_1 + (r8 << 2) + 8)
                                uint64_t rdx_2 = zx.q(*(rsi + 2)) * 3
                                uint64_t rax_5 = zx.q(*(rsi + 4))
                                rsi += 8
                                zmm2.d = zmm2.d f- *(rbx_1 + (rdx_2 << 2))
                                zmm3.d = zmm3.d f- *(rbx_1 + (rdx_2 << 2) + 8)
                                uint64_t rcx_3 = rax_5 * 3
                                zmm2.d = zmm2.d f- *(rbx_1 + (rcx_3 << 2))
                                zmm3.d = zmm3.d f- *(rbx_1 + (rcx_3 << 2) + 8)
                                zmm4_1 = zmm4_1 f+ *(rbx_1 + (r9_1 << 2) + 4) f+
                                    *(rbx_1 + (r8 << 2) + 4) f+ *(rbx_1 + (rdx_2 << 2) + 4) f+
                                    *(rbx_1 + (rcx_3 << 2) + 4)
                                j = j_3
                                j_3 -= 1
                            while (j != 1)
                            i_1 = i_2
                            rbx = var_50_1
                        
                        if (rdi_2 s< r10_1)
                            int64_t rdx_3 = *(r14 + 0x18)
                            void* r8_2 = (rdi_2 << 1) + 4 + rbp_1
                            int64_t j_2 = r10_1 - rdi_2
                            int64_t j_1
                            
                            do
                                uint64_t rax_6 = zx.q(*r8_2)
                                r8_2 += 2
                                uint64_t rcx_4 = rax_6 * 3
                                zmm2.d = zmm2.d f- *(rdx_3 + (rcx_4 << 2))
                                zmm3.d = zmm3.d f- *(rdx_3 + (rcx_4 << 2) + 8)
                                zmm4_1 = zmm4_1 f+ *(rdx_3 + (rcx_4 << 2) + 4)
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                        
                        uint64_t r8_3 = zx.q(*r14)
                        rbp_1 += 0x20
                        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(r12_1.d))
                        int64_t r9_2 = *arg3
                        float zmm1 = 1f f/ zmm0_1.d
                        void* rax_9 = *(arg1 + 8)
                        char rdx_4 = (*(rax_9 + 0xa0)).b
                        uint64_t r8_6 =
                            r8_3 << ((*(rax_9 + 0x9c)).b + rdx_4) | rbx << rdx_4 | zx.q(r13_1)
                        r13_1 += 1
                        *(r15_2 + r9_2) = r8_6
                        zmm2.d = zmm2.d f* zmm1
                        zmm3.d = zmm3.d f* zmm1
                        *(r15_2 + r9_2 + 8) = (_mm_unpacklo_ps(zmm2, zmm3)).q
                        *(r15_2 + r9_2 + 0x10) = zmm4_1 f* zmm1
                        r15_2 += 0x18
                        i = i_1
                        i_1 -= 1
                        i_2 = i_1
                    while (i != 1)
                    cond:0_1 = i_3.d s> 0
    
    rax_1.b = cond:0_1
    return rax_1

int32_t rax
rax.b = 0
return rax
