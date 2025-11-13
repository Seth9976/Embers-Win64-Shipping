// 函数: sub_1409a05d0
// 地址: 0x1409a05d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* r10 = *arg1
int64_t r11 = sx.q(arg5)
int64_t* r15 = arg4
void* rdx_1 = *(*(r10 + 0x40) + (sx.q(arg2) << 3) - 8)
int32_t var_140 = *(r10 + 4)
void* var_150 = rdx_1
void* rdi = *(rdx_1 + 8)
void* r10_1 = *(rdx_1 + 0x10)
void* var_d0 = rdi
int32_t rbx = *(rdi + 0x10)
void* r11_1 = *(*(rdx_1 + 0x1e0) + (r11 << 3))
void* var_100 = r10_1
void* var_118 = r11_1
int64_t* r12 = *(*(rdi + 0x1c8) + (r11 << 3))
void* r13 = *(*(r10_1 + 0x1c8) + (r11 << 3))
void var_a0
void* rax_7 = &var_a0
void* var_b0 = &var_a0
void* rcx_1 = nullptr
void* var_80 = nullptr
void* var_c8 = r13
int32_t var_a8 = rbx
int32_t var_a4 = 8

if (rbx u> 8)
    rax_7, arg4 = j_sub_140a82f30(zx.q(rbx) << 2)
    rdx_1 = var_150
    rcx_1 = rax_7
    r10_1 = var_100
    r11_1 = var_118
    var_80 = rax_7
    var_b0 = rax_7
    int32_t var_a4_1 = rbx

int32_t var_148
int32_t* var_f8 = &var_148
int64_t var_f0 = 0
void* var_e8 = rax_7
int64_t var_e0 = 0
int32_t var_d8 = 0
char var_d4 = 0
int32_t var_144

if (*(r12 + 0xc) != 0 || **arg1 == 0)
    arg4.b = 1
    var_e0.d = 2
    var_148 = 0x3f000000
    var_144 = 0x3f000000
else
    arg4.b = 0

int32_t i = 0
char var_158 = arg4.b
void* var_c0 = rdi

if (*(rdi + 4) s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    void* rcx_4 = nullptr
    float* var_128_1 = nullptr
    int64_t var_120_1 = 0
    
    do
        int64_t rcx_5 = sx.q(*(rcx_4 + *(rdx_1 + 0xd8)))
        
        if (rcx_5.d != 0xffffffff)
            int32_t* r14_1 = *(r13 + 0x90) + (sx.q(*(*(r13 + 0x60) + (rcx_5 << 2))) << 2)
            uint32_t r8 = zx.d(*(*(r13 + 0x48) + (rcx_5 << 1)))
            int64_t zmm0
            int128_t zmm1
            float zmm2
            float zmm3
            
            if ((not.b((*(r13 + 0xa8))[sx.q(*r14_1)]) & 1) == 0)
                int32_t var_138_1 = 0
                
                if (r8 != 0)
                    int32_t rdi_1 = 0
                    
                    do
                        int32_t var_108
                        sub_1429d1300(r12, i, 
                            zx.d(*(*(r11_1 + 0x28) + (
                                sx.q(*(*(*(r11_1 + 0x20) + 0x60) + (rcx_5 << 2)) + zx.d(rdi_1.w))
                                << 1))), 
                            &var_108)
                        int64_t rcx_32 = sx.q(*r14_1)
                        int64_t rax_42 = *r15
                        int64_t rdx_16 = rcx_32 << 5
                        *(rdx_16 + rax_42 + 8) = 0
                        *(rdx_16 + rax_42) = *(rdx_16 + rax_42 + 8)
                        *(rdx_16 + rax_42 + 0x10) = zx.o(0)
                        int32_t* rcx_34 = (rcx_32 << 5) + *r15
                        int64_t* rax_45 = (sx.q(var_108) << 5) + *arg3
                        zmm0.d = (*rax_45).d f* 0.5f
                        zmm1.d = (*(rax_45 + 4)).d f* 0.5f
                        zmm0.d = zmm0.d f+ *rcx_34
                        zmm1.d = zmm1.d f+ rcx_34[1]
                        *rcx_34 = zmm0.d
                        rcx_34[1] = zmm1.d
                        zmm0.d = rax_45[1].d.d f* 0.5f
                        zmm0.d = zmm0.d f+ rcx_34[2]
                        zmm2 = *(rax_45 + 0xc) * 0.5f f+ rcx_34[3]
                        rcx_34[2] = zmm0.d
                        rcx_34[3] = zmm2
                        zmm0.d = rax_45[2].d.d f* 0.5f
                        zmm1.d = (*(rax_45 + 0x14)).d f* 0.5f
                        zmm0.d = zmm0.d f+ rcx_34[4]
                        zmm2 = rax_45[3].d f* 0.5f
                        zmm3 = *(rax_45 + 0x1c) * 0.5f
                        rcx_34[4] = zmm0.d
                        zmm1.d = zmm1.d f+ rcx_34[5]
                        rcx_34[5] = zmm1.d
                        rcx_34[6] = zmm2 f+ rcx_34[6]
                        rcx_34[7] = zmm3 f+ rcx_34[7]
                        int64_t rcx_35 = *r15
                        int32_t var_104
                        int64_t* rax_48 = (sx.q(var_104) << 5) + *arg3
                        zmm0.d = (*rax_48).d f* 0.5f
                        zmm1.d = (*(rax_48 + 4)).d f* 0.5f
                        zmm0.d = zmm0.d f+ *(rdx_16 + rcx_35)
                        zmm1.d = zmm1.d f+ *(rdx_16 + rcx_35 + 4)
                        *(rdx_16 + rcx_35) = zmm0.d
                        *(rdx_16 + rcx_35 + 4) = zmm1.d
                        zmm0.d = rax_48[1].d.d f* 0.5f
                        zmm0.d = zmm0.d f+ *(rdx_16 + rcx_35 + 8)
                        *(rdx_16 + rcx_35 + 0xc) =
                            *(rax_48 + 0xc) * 0.5f f+ *(rdx_16 + rcx_35 + 0xc)
                        *(rdx_16 + rcx_35 + 8) = zmm0.d
                        rdi_1 += 1
                        r14_1 = &r14_1[1]
                        r11_1 = var_118
                        zmm0.d = rax_48[2].d.d f* 0.5f
                        zmm1.d = (*(rax_48 + 0x14)).d f* 0.5f
                        zmm2 = rax_48[3].d f* 0.5f
                        zmm3 = *(rax_48 + 0x1c) * 0.5f
                        zmm0.d = zmm0.d f+ *(rdx_16 + rcx_35 + 0x10)
                        *(rdx_16 + rcx_35 + 0x10) = zmm0.d
                        zmm1.d = zmm1.d f+ *(rdx_16 + rcx_35 + 0x14)
                        *(rdx_16 + rcx_35 + 0x14) = zmm1.d
                        *(rdx_16 + rcx_35 + 0x18) = zmm2 f+ *(rdx_16 + rcx_35 + 0x18)
                        *(rdx_16 + rcx_35 + 0x1c) = zmm3 f+ *(rdx_16 + rcx_35 + 0x1c)
                    while (rdi_1 s< r8)
                    
                    rdi = var_d0
                    r13 = var_c8
            else
                if (arg4.b == 0)
                    int32_t r9 = 1
                    int32_t i_1 = i
                    
                    if (0f f< *(var_128_1 + *(rdi + 0xd8)))
                        r9 = 4
                    
                    sub_140995ae0(&var_140, &var_c0, &var_f8, r9, 
                        zx.d(*(*(r10_1 + 0x1b0) + (rcx_5 << 1))) u>> 7 & 0xf)
                
                int32_t var_110
                sub_1429d1300(r12, i, 0, &var_110)
                int64_t rcx_13 = sx.q(*r14_1)
                int64_t rax_16 = *r15
                void* r10_2 = nullptr
                int64_t r9_3 = rcx_13 << 5
                __builtin_memset(r9_3 + rax_16 + 8, 0, 0x18)
                *(r9_3 + rax_16) = *(r9_3 + rax_16 + 8)
                int32_t* rcx_15 = (rcx_13 << 5) + *r15
                int128_t zmm4 = var_148
                int32_t* rax_19 = (sx.q(var_110) << 5) + *arg3
                zmm0.d = zmm4.q.d f* *rax_19
                zmm1.d = rax_19[1].d f* zmm4.d
                zmm0.d = zmm0.d f+ *rcx_15
                zmm1.d = zmm1.d f+ rcx_15[1]
                *rcx_15 = zmm0.d
                rcx_15[1] = zmm1.d
                zmm0.d = zmm4.q.d f* rax_19[2]
                zmm0.d = zmm0.d f+ rcx_15[2]
                zmm2 = rax_19[3] f* zmm4.d f+ rcx_15[3]
                rcx_15[2] = zmm0.d
                rcx_15[3] = zmm2
                zmm0.d = zmm4.q.d f* rax_19[4]
                zmm0.d = zmm0.d f+ rcx_15[4]
                zmm3 = rax_19[7]
                zmm1.d = rax_19[5].d f* zmm4.d
                zmm2 = rax_19[6] f* zmm4.d
                rcx_15[4] = zmm0.d
                zmm1.d = zmm1.d f+ rcx_15[5]
                rcx_15[5] = zmm1.d
                rcx_15[6] = zmm2 f+ rcx_15[6]
                rcx_15[7] = zmm3 f* zmm4.d f+ rcx_15[7]
                zmm4 = var_144
                int64_t rcx_16 = *r15
                int32_t var_10c
                int32_t* rax_22 = (sx.q(var_10c) << 5) + *arg3
                zmm0.d = zmm4.q.d f* *rax_22
                zmm1.d = rax_22[1].d f* zmm4.d
                zmm0.d = zmm0.d f+ *(r9_3 + rcx_16)
                zmm1.d = zmm1.d f+ *(r9_3 + rcx_16 + 4)
                *(r9_3 + rcx_16) = zmm0.d
                *(r9_3 + rcx_16 + 4) = zmm1.d
                zmm0.d = zmm4.q.d f* rax_22[2]
                zmm0.d = zmm0.d f+ *(r9_3 + rcx_16 + 8)
                zmm2 = rax_22[3] f* zmm4.d f+ *(r9_3 + rcx_16 + 0xc)
                *(r9_3 + rcx_16 + 8) = zmm0.d
                *(r9_3 + rcx_16 + 0xc) = zmm2
                zmm0.d = zmm4.q.d f* rax_22[4]
                zmm1 = rax_22[5]
                zmm2 = rax_22[6]
                zmm0.d = zmm0.d f+ *(r9_3 + rcx_16 + 0x10)
                zmm3 = rax_22[7]
                *(r9_3 + rcx_16 + 0x10) = zmm0.d
                zmm1.d = zmm1.d f* zmm4.d
                zmm1.d = zmm1.d f+ *(r9_3 + rcx_16 + 0x14)
                *(r9_3 + rcx_16 + 0x14) = zmm1.d
                *(r9_3 + rcx_16 + 0x18) = zmm2 f* zmm4.d f+ *(r9_3 + rcx_16 + 0x18)
                *(r9_3 + rcx_16 + 0x1c) = zmm3 f* zmm4.d f+ *(r9_3 + rcx_16 + 0x1c)
                
                if (var_d8 s> 0)
                    int32_t* rdx_6 = *(rdi + 0x90)
                    int64_t r14_2 = *(rdi + 0xa8) + (sx.q(*(rdx_6 + var_120_1 + 4)) << 2)
                    int32_t j_2 = *(rdx_6 + var_120_1)
                    
                    if (j_2 s> 0)
                        uint64_t j_1 = zx.q(j_2)
                        uint64_t j
                        
                        do
                            if (var_d4 == 0)
                                int64_t rdx_8 = *(rdi + 0x18)
                                int64_t r11_2 = sx.q(*(r10_2 + r14_2) * 2)
                                int32_t rdx_9 = *(rdx_8 + (r11_2 << 2))
                                int32_t* r8_5 =
                                    *(rdi + 0x48) + (sx.q(*(rdx_8 + (r11_2 << 2) + 4)) << 2)
                                int32_t rcx_23 = 0
                                
                                while (*r8_5 != i)
                                    rcx_23 += 1
                                    r8_5 = &r8_5[1]
                                
                                int128_t zmm5 = *(var_b0 + r10_2)
                                int32_t rax_33 = rcx_23 + 2 - rdx_9
                                
                                if (rcx_23 + 2 s< rdx_9)
                                    rax_33 = rcx_23 + 2
                                
                                int32_t* rcx_28 = (sx.q(*(r12[3] + ((sx.q(rax_33)
                                    + sx.q(*(*(*r12 + 0x18) + (r11_2 << 2) + 4))) << 2))) << 5) + *arg3
                                int64_t rax_38 = *r15
                                zmm0.d = zmm5.q.d f* *rcx_28
                                zmm1.d = zmm5.d f* rcx_28[1]
                                zmm0.d = zmm0.d f+ *(r9_3 + rax_38)
                                zmm1.d = zmm1.d f+ *(r9_3 + rax_38 + 4)
                                *(r9_3 + rax_38) = zmm0.d
                                *(r9_3 + rax_38 + 4) = zmm1.d
                                zmm0.d = zmm5.q.d f* rcx_28[2]
                                zmm0.d = zmm0.d f+ *(r9_3 + rax_38 + 8)
                                zmm2 = rcx_28[3] f* zmm5.d f+ *(r9_3 + rax_38 + 0xc)
                                *(r9_3 + rax_38 + 8) = zmm0.d
                                *(r9_3 + rax_38 + 0xc) = zmm2
                                zmm0.d = zmm5.q.d f* rcx_28[4]
                                zmm3 = rcx_28[6]
                                zmm0.d = zmm0.d f+ *(r9_3 + rax_38 + 0x10)
                                zmm1.d = zmm5.d f* rcx_28[5]
                                zmm4.d = rcx_28[7].d f* zmm5.d
                                *(r9_3 + rax_38 + 0x10) = zmm0.d
                                zmm1.d = zmm1.d f+ *(r9_3 + rax_38 + 0x14)
                                zmm0.d = zmm5.q.d f* zmm3
                                *(r9_3 + rax_38 + 0x14) = zmm1.d
                                zmm0.d = zmm0.d f+ *(r9_3 + rax_38 + 0x18)
                                *(r9_3 + rax_38 + 0x18) = zmm0.d
                                zmm4.d = zmm4.d f+ *(r9_3 + rax_38 + 0x1c)
                                *(r9_3 + rax_38 + 0x1c) = zmm4.d
                            else
                                int64_t r8_4 = *r15
                                zmm4 = *(var_b0 + r10_2)
                                int32_t* rcx_21 = (sx.q(*(*(r13 + 0x60) + (
                                    sx.q(*(*(var_150 + 0xa8) + (sx.q(*(r10_2 + r14_2)) << 2)))
                                    << 2))) << 5) + r8_4
                                zmm0.d = zmm4.q.d f* *rcx_21
                                zmm1.d = zmm4.d f* rcx_21[1]
                                zmm0.d = zmm0.d f+ *(r9_3 + r8_4)
                                zmm1.d = zmm1.d f+ *(r9_3 + r8_4 + 4)
                                *(r9_3 + r8_4) = zmm0.d
                                *(r9_3 + r8_4 + 4) = zmm1.d
                                zmm0.d = zmm4.q.d f* rcx_21[2]
                                zmm0.d = zmm0.d f+ *(r9_3 + r8_4 + 8)
                                zmm2 = rcx_21[3] f* zmm4.d f+ *(r9_3 + r8_4 + 0xc)
                                *(r9_3 + r8_4 + 8) = zmm0.d
                                *(r9_3 + r8_4 + 0xc) = zmm2
                                zmm0.d = zmm4.q.d f* rcx_21[4]
                                zmm3 = rcx_21[7]
                                zmm0.d = zmm0.d f+ *(r9_3 + r8_4 + 0x10)
                                zmm1.d = rcx_21[5].d f* zmm4.d
                                zmm2 = rcx_21[6] f* zmm4.d
                                *(r9_3 + r8_4 + 0x10) = zmm0.d
                                zmm1.d = zmm1.d f+ *(r9_3 + r8_4 + 0x14)
                                *(r9_3 + r8_4 + 0x14) = zmm1.d
                                *(r9_3 + r8_4 + 0x18) = zmm2 f+ *(r9_3 + r8_4 + 0x18)
                                *(r9_3 + r8_4 + 0x1c) = zmm3 f* zmm4.d f+ *(r9_3 + r8_4 + 0x1c)
                            
                            r10_2 += 4
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
            rdx_1 = var_150
        
        i += 1
        var_120_1 += 8
        rcx_4 = &var_128_1[1]
        arg4 = zx.q(var_158)
        r10_1 = var_100
        r11_1 = var_118
        var_128_1 = rcx_4
    while (i s< *(rdi + 4))
    
    rcx_1 = var_80

int64_t result = j_sub_140a74f90(rcx_1)
__security_check_cookie(rax_1 ^ &var_188)
return result
