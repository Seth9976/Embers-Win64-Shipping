// 函数: sub_142616b60
// 地址: 0x142616b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
int32_t* rax = sub_142610f00(r15, arg2)
int32_t* rax_1 = sub_142610f00(r15, arg3)
int32_t r8 = (1 << (*(r15 + 0xa0)).b).d
arg1[0xf].d = 0
uint64_t rdi_1 = zx.q(arg3.d) & zx.q(r8 - 1)
uint64_t rdx_2 = zx.q(r8 - 1) & zx.q(arg2.d)

if (rax != 0 && rax_1 != 0)
    int64_t rcx_4 = *(rax + 0x78)
    
    if (rcx_4 != 0)
        int64_t r8_1 = *(rax_1 + 0x78)
        
        if (r8_1 != 0 && rdx_2.d u< *(*(rax + 8) + 0x3c) && rdi_1.d u< *(*(rax_1 + 8) + 0x3c))
            uint64_t rbx_1 = zx.q(*(rcx_4 + (rdx_2 << 1)))
            uint64_t rdi_2 = zx.q(*(r8_1 + (rdi_1 << 1)))
            int64_t rcx_5 = *(rax_1 + 0x70)
            uint64_t r12 = rbx_1 * 5
            uint64_t rax_4 = rdi_2 * 5
            int64_t r13 = *(rax + 0x70)
            int64_t rbp_2 = sub_14260f690(r15, rax) | rbx_1
            int64_t rax_7 = sub_14260f690(r15, rax_1) | rdi_2
            
            if (rbp_2 == rax_7)
                return 0x40000000
            
            void* rbx_2 = arg1[0xd]
            memset(*(rbx_2 + 8), 0xff, sx.q(*(rbx_2 + 0x1c)) * 2)
            *(rbx_2 + 0x24) = 0
            *(arg1[0xe] + 0xc) = 0
            int32_t* rax_10 = sub_14260fcd0(arg1[0xd], rbp_2)
            int32_t* rbx_3 = rax_10
            int32_t* var_90_1 = rax_10
            *rax_10 = *(r13 + (r12 << 2))
            rax_10[1] = *(r13 + (r12 << 2) + 4)
            rax_10[2] = *(r13 + (r12 << 2) + 8)
            rax_10[5] &= 0xc0000000
            rax_10[3] = 0
            uint64_t rax_11 = rdi_2 * 5
            float zmm0_1 = *(rcx_5 + (rax_11 << 2) + 8) f- *(r13 + (r12 << 2) + 8)
            float zmm2 = *(rcx_5 + (rax_11 << 2) + 4) f- *(r13 + (r12 << 2) + 4)
            float zmm1 = *(rcx_5 + (rax_11 << 2)) f- *(r13 + (r12 << 2))
            *(rbx_3 + 0x18) = rbp_2
            rbx_3[5] = 0x40000000
            rbx_3[4] = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0_1 * zmm0_1) * 0.999000013f
            sub_142613e10(arg1[0xe], rbx_3)
            arg1[0xf].d += 1
            int64_t* rax_12 = arg1[0xe]
            int32_t r15_1 = -0x80000000
            float zmm7[0x4] = rbx_3[4]
            int32_t arg_8 = 0x80000000
            
            if (*(rax_12 + 0xc) != 0)
                float zmm6[0x4]
                float var_58_1[0x4] = zmm6
                
                while (true)
                    int32_t* rax_13 = sub_1426136c0(rax_12)
                    int32_t rdi_5 = (rax_13[5] & 0x3fffffff) | 0x80000000
                    int64_t rsi_1 = *(rax_13 + 0x18)
                    rax_13[5] = rdi_5
                    
                    if (rsi_1 == rax_7)
                        rbx_3 = rax_13
                        break
                    
                    void* rbx_4 = *arg1
                    int32_t* rax_14 = sub_142610f00(rbx_4, rsi_1)
                    int32_t* r9_1 = rax_14
                    int32_t rdi_6 = rdi_5 & 0x3fffffff
                    int64_t rax_16
                    
                    if (rdi_6 == 0)
                        rax_16 = 0
                    else
                        rax_16 = *((zx.q(rdi_6 - 1) << 5) + *arg1[0xd] + 0x18)
                    
                    int32_t i = *(*(rax_14 + 0x70)
                        + (zx.q((1 << (*(rbx_4 + 0xa0)).b).d - 1) & zx.q(rsi_1.d)) * 0x14 + 0xc)
                    int64_t var_98_1 = rax_16
                    
                    while (i != 0xffffffff)
                        int64_t* rdi_10 = ((sx.q(i) - -0x80000000) << 4) + *(r9_1 + 0x98)
                        int64_t rsi_2 = *rdi_10
                        i = rdi_10[1].d
                        
                        if (rsi_2 != 0 && rsi_2 != rax_16 && (*(rdi_10 + 0xc) & 1) != 0)
                            void* rbx_5 = *arg1
                            int64_t r15_2 = *(sub_142610f00(rbx_5, rsi_2) + 0x70)
                            uint64_t rbp_3 =
                                (zx.q((1 << (*(rbx_5 + 0xa0)).b).d - 1) & zx.q(rsi_2.d)) * 5
                            int32_t* rax_18 = sub_14260fcd0(arg1[0xd], rsi_2)
                            
                            if (rax_18 != 0)
                                if (rax_18[5] u< 0x40000000)
                                    *rax_18 = *(r15_2 + (rbp_3 << 2))
                                    rax_18[1] = *(r15_2 + (rbp_3 << 2) + 4)
                                    rax_18[2] = *(r15_2 + (rbp_3 << 2) + 8)
                                
                                zmm6 = zx.o(0)
                                float zmm3 = rax_13[3]
                                float zmm0_2
                                
                                if (*rdi_10 != rax_7)
                                    zmm2 = *(rcx_5 + (rax_4 << 2) + 4) f- rax_18[1]
                                    zmm1 = *(rcx_5 + (rax_4 << 2)) f- *rax_18
                                    zmm0_2 = *(rcx_5 + (rax_4 << 2) + 8) f- rax_18[2]
                                    zmm6 = _mm_sqrt_ss(zmm6[0], 
                                        zmm2 * zmm2 + zmm1 * zmm1 + zmm0_2 * zmm0_2)
                                    zmm6[0] = zmm6[0] * 0.999000013f
                                
                                int32_t r8_6 = rax_18[5]
                                zmm0_2 = zmm6[0] + zmm3
                                uint8_t rax_25 = (r8_6 u>> 0x1e).b
                                
                                if (((rax_25 & 1) == 0 || not(zmm0_2 f>= rax_18[4]))
                                        && ((rax_25 & 2) == 0 || not(zmm0_2 f>= rax_18[4])))
                                    int32_t rdx_15 = ((r8_6 ^ (((rax_13 - *arg1[0xd]) s>> 5).d + 1))
                                        & 0x3fffffff) ^ r8_6
                                    rax_18[5] = rdx_15
                                    int32_t rdx_16 = rdx_15 & 0x7fffffff
                                    int64_t rax_27 = *rdi_10
                                    rax_18[3] = zmm3
                                    rax_18[4] = zmm0_2
                                    *(rax_18 + 0x18) = rax_27
                                    rax_18[5] = rdx_16
                                    
                                    if (rdx_16 u< 0x40000000)
                                        rax_18[5] = rdx_16 | 0x40000000
                                        sub_142613e10(arg1[0xe], rax_18)
                                        arg1[0xf].d += 1
                                    else
                                        sub_142612a00(arg1[0xe], rax_18)
                                    
                                    r15_1 = arg_8
                                    
                                    if (not(zmm6[0] >= zmm7[0]))
                                        zmm7 = zmm6
                                        var_90_1 = rax_18
                                else
                                    r15_1 = arg_8
                            else
                                r15_1 = arg_8 | 0x20
                                arg_8 = r15_1
                            
                            r9_1 = rax_14
                        
                        rax_16 = var_98_1
                    
                    rax_12 = arg1[0xe]
                    
                    if (*(rax_12 + 0xc) == 0)
                        rbx_3 = var_90_1
                        break
            
            if (*(rbx_3 + 0x18) == rax_7)
                r15_1 = 0x40000000
            
            return zx.q(r15_1)

return 0x80000008
