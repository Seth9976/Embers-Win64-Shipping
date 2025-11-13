// 函数: sub_1409a1730
// 地址: 0x1409a1730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t r11 = sx.q(arg5)
int64_t* r12 = arg4
uint64_t var_f8 = arg4
void* r8 = *(*(*arg1 + 0x40) + (sx.q(arg2) << 3) - 8)
void* var_100 = r8
void* r13 = *(r8 + 8)
void* var_c8 = r13
int32_t rbx = *(r13 + 0x10)
void* r11_1 = *(*(r8 + 0x1e0) + (r11 << 3))
void* var_f0 = r11_1
int64_t* r10_1 = *(*(r13 + 0x1c8) + (r11 << 3))
int64_t* var_110 = r10_1
void* rdi = *(*(*(r8 + 0x10) + 0x1c8) + (r11 << 3))
void var_b0
void* var_c0 = &var_b0
int64_t rax_6 = 0
int64_t var_90 = 0
void* var_d0 = rdi
int32_t var_b8 = rbx
int32_t var_b4 = 8

if (rbx u> 8)
    rax_6, arg4 = j_sub_140a82f30(zx.q(rbx) << 2)
    r8 = var_100
    r10_1 = var_110
    r11_1 = var_f0
    var_90 = rax_6
    int64_t var_c0_1 = rax_6
    int32_t var_b4_1 = rbx

int32_t var_108
int128_t zmm7
int128_t zmm8

if (*(r10_1 + 0xc) != 0 || **arg1 == 0)
    arg4.b = 1
    zmm8 = 0x3f000000
    zmm7 = 0x3f000000
else
    int32_t var_104
    zmm7 = var_104
    arg4.b = 0
    zmm8 = var_108

int32_t i = 0
char var_118 = arg4.b

if (*(r13 + 4) s> 0)
    void* r14_1 = nullptr
    int128_t zmm9
    int128_t var_78_1 = zmm9
    var_108.q = 0
    
    do
        int64_t rcx_4 = sx.q(*(r14_1 + *(r8 + 0xd8)))
        
        if (rcx_4.d != 0xffffffff)
            int32_t* rbp_1 = *(rdi + 0x90) + (sx.q(*(*(rdi + 0x60) + (rcx_4 << 2))) << 2)
            uint32_t r15_1 = zx.d(*(*(rdi + 0x48) + (rcx_4 << 1)))
            int64_t zmm0
            int128_t zmm1
            float zmm2
            float zmm3
            
            if ((not.b((*(rdi + 0xa8))[sx.q(*rbp_1)]) & 1) == 0)
                int32_t r12_1 = 0
                
                if (r15_1 != 0)
                    do
                        int32_t var_d8
                        sub_1429d1300(var_110, i, 
                            zx.d(*(*(r11_1 + 0x28) + (
                                sx.q(*(*(*(r11_1 + 0x20) + 0x60) + (rcx_4 << 2)) + zx.d(r12_1.w))
                                << 1))), 
                            &var_d8)
                        int64_t rcx_15 = sx.q(*rbp_1)
                        int64_t rax_22 = *var_f8
                        int64_t rdx_10 = rcx_15 << 5
                        *(rdx_10 + rax_22 + 8) = 0
                        *(rdx_10 + rax_22) = *(rdx_10 + rax_22 + 8)
                        *(rdx_10 + rax_22 + 0x10) = zx.o(0)
                        int32_t* rcx_17 = (rcx_15 << 5) + *var_f8
                        int64_t* rax_25 = (sx.q(var_d8) << 5) + *arg3
                        zmm0.d = (*rax_25).d f* 0.5f
                        zmm1.d = (*(rax_25 + 4)).d f* 0.5f
                        zmm0.d = zmm0.d f+ *rcx_17
                        zmm1.d = zmm1.d f+ rcx_17[1]
                        *rcx_17 = zmm0.d
                        rcx_17[1] = zmm1.d
                        zmm0.d = rax_25[1].d.d f* 0.5f
                        zmm0.d = zmm0.d f+ rcx_17[2]
                        zmm2 = *(rax_25 + 0xc) * 0.5f f+ rcx_17[3]
                        rcx_17[2] = zmm0.d
                        rcx_17[3] = zmm2
                        zmm0.d = rax_25[2].d.d f* 0.5f
                        zmm1.d = (*(rax_25 + 0x14)).d f* 0.5f
                        zmm0.d = zmm0.d f+ rcx_17[4]
                        zmm2 = rax_25[3].d f* 0.5f
                        zmm3 = *(rax_25 + 0x1c) * 0.5f
                        rcx_17[4] = zmm0.d
                        zmm1.d = zmm1.d f+ rcx_17[5]
                        rcx_17[5] = zmm1.d
                        rcx_17[6] = zmm2 f+ rcx_17[6]
                        rcx_17[7] = zmm3 f+ rcx_17[7]
                        int64_t rcx_18 = *var_f8
                        int32_t var_d4
                        int64_t* rax_28 = (sx.q(var_d4) << 5) + *arg3
                        zmm0.d = (*rax_28).d f* 0.5f
                        zmm1.d = (*(rax_28 + 4)).d f* 0.5f
                        zmm0.d = zmm0.d f+ *(rdx_10 + rcx_18)
                        zmm1.d = zmm1.d f+ *(rdx_10 + rcx_18 + 4)
                        *(rdx_10 + rcx_18) = zmm0.d
                        *(rdx_10 + rcx_18 + 4) = zmm1.d
                        zmm0.d = rax_28[1].d.d f* 0.5f
                        zmm0.d = zmm0.d f+ *(rdx_10 + rcx_18 + 8)
                        *(rdx_10 + rcx_18 + 0xc) =
                            *(rax_28 + 0xc) * 0.5f f+ *(rdx_10 + rcx_18 + 0xc)
                        *(rdx_10 + rcx_18 + 8) = zmm0.d
                        r12_1 += 1
                        r11_1 = var_f0
                        rbp_1 = &rbp_1[1]
                        zmm0.d = rax_28[2].d.d f* 0.5f
                        zmm1.d = (*(rax_28 + 0x14)).d f* 0.5f
                        zmm2 = rax_28[3].d f* 0.5f
                        zmm3 = *(rax_28 + 0x1c) * 0.5f
                        zmm0.d = zmm0.d f+ *(rdx_10 + rcx_18 + 0x10)
                        *(rdx_10 + rcx_18 + 0x10) = zmm0.d
                        zmm1.d = zmm1.d f+ *(rdx_10 + rcx_18 + 0x14)
                        *(rdx_10 + rcx_18 + 0x14) = zmm1.d
                        *(rdx_10 + rcx_18 + 0x18) = zmm2 f+ *(rdx_10 + rcx_18 + 0x18)
                        *(rdx_10 + rcx_18 + 0x1c) = zmm3 f+ *(rdx_10 + rcx_18 + 0x1c)
                    while (r12_1 s< r15_1)
                    
                    rdi = var_d0
                    r14_1 = var_108.q
                    r13 = var_c8
                    r8 = var_100
                    r10_1 = var_110
                
                r12 = var_f8
            else
                if (arg4.b == 0)
                    zmm8 = 0x3f000000
                    zmm7 = 0x3f000000
                
                int32_t var_e8
                sub_1429d1300(r10_1, i, 0, &var_e8)
                int64_t rcx_8 = sx.q(*rbp_1)
                int64_t rax_12 = *r12
                int64_t rdx_5 = rcx_8 << 5
                __builtin_memset(rdx_5 + rax_12 + 8, 0, 0x18)
                *(rdx_5 + rax_12) = *(rdx_5 + rax_12 + 8)
                int32_t* rcx_10 = (rcx_8 << 5) + *r12
                int32_t* rax_15 = (sx.q(var_e8) << 5) + *arg3
                zmm0.d = zmm8.q.d f* *rax_15
                zmm1.d = zmm8.d f* rax_15[1]
                zmm0.d = zmm0.d f+ *rcx_10
                zmm1.d = zmm1.d f+ rcx_10[1]
                *rcx_10 = zmm0.d
                rcx_10[1] = zmm1.d
                zmm0.d = zmm8.q.d f* rax_15[2]
                zmm1.d = zmm8.d f* rax_15[3]
                zmm0.d = zmm0.d f+ rcx_10[2]
                zmm1.d = zmm1.d f+ rcx_10[3]
                rcx_10[2] = zmm0.d
                rcx_10[3] = zmm1.d
                zmm0.d = zmm8.q.d f* rax_15[4]
                zmm1 = rax_15[6]
                zmm0.d = zmm0.d f+ rcx_10[4]
                zmm3 = rax_15[7]
                zmm2 = rax_15[5] f* zmm8.d
                rcx_10[4] = zmm0.d
                zmm0.d = zmm8.q.d f* zmm1.d
                zmm1.d = zmm8.d f* zmm3
                rcx_10[5] = zmm2 f+ rcx_10[5]
                zmm0.d = zmm0.d f+ rcx_10[6]
                rcx_10[6] = zmm0.d
                zmm1.d = zmm1.d f+ rcx_10[7]
                rcx_10[7] = zmm1.d
                int64_t rcx_11 = *r12
                int32_t var_e4
                int32_t* rax_18 = (sx.q(var_e4) << 5) + *arg3
                zmm0.d = zmm7.q.d f* *rax_18
                zmm1.d = rax_18[1].d f* zmm7.d
                zmm0.d = zmm0.d f+ *(rdx_5 + rcx_11)
                zmm1.d = zmm1.d f+ *(rdx_5 + rcx_11 + 4)
                *(rdx_5 + rcx_11) = zmm0.d
                *(rdx_5 + rcx_11 + 4) = zmm1.d
                zmm0.d = zmm7.q.d f* rax_18[2]
                zmm1.d = zmm7.d f* rax_18[3]
                zmm0.d = zmm0.d f+ *(rdx_5 + rcx_11 + 8)
                zmm1.d = zmm1.d f+ *(rdx_5 + rcx_11 + 0xc)
                *(rdx_5 + rcx_11 + 8) = zmm0.d
                *(rdx_5 + rcx_11 + 0xc) = zmm1.d
                zmm1 = rax_18[6]
                zmm3 = rax_18[7]
                r8 = var_100
                zmm0.d = zmm7.q.d f* rax_18[4]
                r10_1 = var_110
                zmm2 = rax_18[5] f* zmm7.d
                zmm0.d = zmm0.d f+ *(rdx_5 + rcx_11 + 0x10)
                *(rdx_5 + rcx_11 + 0x10) = zmm0.d
                zmm0.d = zmm7.q.d f* zmm1.d
                zmm1.d = zmm7.d f* zmm3
                *(rdx_5 + rcx_11 + 0x14) = zmm2 f+ *(rdx_5 + rcx_11 + 0x14)
                zmm0.d = zmm0.d f+ *(rdx_5 + rcx_11 + 0x18)
                *(rdx_5 + rcx_11 + 0x18) = zmm0.d
                zmm1.d = zmm1.d f+ *(rdx_5 + rcx_11 + 0x1c)
                *(rdx_5 + rcx_11 + 0x1c) = zmm1.d
        
        arg4 = zx.q(var_118)
        r14_1 += 4
        r11_1 = var_f0
        i += 1
        var_108.q = r14_1
    while (i s< *(r13 + 4))
    
    rax_6 = var_90

int64_t result = j_sub_140a74f90(rax_6)
__security_check_cookie(rax_1 ^ &var_138)
return result
