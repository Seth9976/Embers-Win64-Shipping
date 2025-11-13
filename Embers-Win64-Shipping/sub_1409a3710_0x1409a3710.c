// 函数: sub_1409a3710
// 地址: 0x1409a3710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t r10 = sx.q(arg5)
void* r9 = *arg1
int64_t rdi = arg3
void* r15 = *(*(r9 + 0x40) + (sx.q(arg2) << 3) - 8)
void* var_1f8 = r15
void* rsi = *(r15 + 8)
int64_t* rbx = *(*(r15 + 0x1e0) + (r10 << 3))
int64_t* var_1e0 = rbx
int64_t* r8 = *(*(rsi + 0x1c8) + (r10 << 3))
void* r12 = *(*(*(r15 + 0x10) + 0x1c8) + (r10 << 3))
void* var_200 = r12
char var_208_1

if (*(r8 + 0xc) == 0)
    var_208_1 = 0

if (*(r8 + 0xc) != 0 || *r9 == 0)
    var_208_1 = 1

int32_t rsi_2 = *(rsi + 0x14) * 2
void var_128
void* var_138 = &var_128
int32_t var_130 = rsi_2
int32_t var_12c = 0x20
int64_t var_a8 = 0

if (rsi_2 u> 0x20)
    int64_t rax_6 = j_sub_140a82f30(zx.q(rsi_2) << 2)
    var_a8 = rax_6
    int64_t var_138_1 = rax_6
    int32_t var_12c_1 = rsi_2

int32_t rsi_3 = *(rsi + 0x14)
void var_188
void* var_198 = &var_188
int64_t rax_7 = 0
int32_t var_190 = rsi_3
int32_t var_18c = 0x10
int64_t var_148 = 0

if (rsi_3 u> 0x10)
    rax_7 = j_sub_140a82f30(zx.q(rsi_3) << 2)
    var_148 = rax_7
    int64_t var_198_1 = rax_7
    int32_t var_18c_1 = rsi_3

int32_t i = 0
int32_t i_1 = 0

if (*(rsi + 8) s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    void* rcx_6 = nullptr
    int128_t zmm9
    int128_t var_78_1 = zmm9
    void* var_1d8_1 = nullptr
    
    do
        int64_t rcx_7 = sx.q(*(rcx_6 + *(r15 + 0xf0)))
        int32_t var_1f0_1 = rcx_7.d
        
        if (rcx_7.d != 0xffffffff)
            int64_t* r11_1 = r8
            int64_t r8_1 = rcx_7
            int64_t rsi_4 = sx.q(*(r11_1[0xc] + var_1d8_1))
            int32_t* r9_1 = r11_1[0x12] + (rsi_4 << 2)
            int32_t* var_1a0_1 = r9_1
            int64_t r15_1 = sx.q(*(*(r12 + 0x60) + (rcx_7 << 2)))
            int64_t rax_12 = *(r12 + 0x90)
            int64_t rdx_1 = sx.q(*(rax_12 + (r15_1 << 2)))
            int32_t* r14_1 = rax_12 + (r15_1 << 2)
            int64_t r12_1 = *(r12 + 0xa8)
            uint32_t rcx_8 = zx.d(*(*(r12 + 0x48) + (rcx_7 << 1)))
            int64_t zmm0
            int128_t zmm1
            float zmm2
            float zmm3
            
            if ((not.b(*(rdx_1 + r12_1)) & 1) == 0)
                int64_t rax_23 = r11_1[0x15] + rsi_4
                char* r15_2 = r15_1 + r12_1
                int32_t rsi_5 = 0
                
                if (rcx_8 != 0)
                    do
                        uint32_t r12_2 = zx.d(rsi_5.w)
                        int64_t rbx_2 = sx.q(*r14_1) << 5
                        uint64_t rdi_1 =
                            zx.q(*(rbx[5] + (sx.q(*(*(rbx[4] + 0x60) + (r8_1 << 2)) + r12_2) << 1)))
                        int64_t rax_28 = *arg4
                        int64_t rcx_15 = sx.q(r9_1[rdi_1])
                        *(rbx_2 + rax_28 + 8) = 0
                        *(rbx_2 + rax_28) = *(rbx_2 + rax_28 + 8)
                        int32_t var_1ec_1 = rcx_15.d
                        *(rbx_2 + rax_28 + 0x10) = zx.o(0)
                        int64_t rcx_21
                        
                        if (var_208_1 != 0 || (*r15_2 & 8) == 0)
                            rdi = arg3
                            rcx_21 = *arg4
                            int64_t* rax_43 = (rcx_15 << 5) + *rdi
                            zmm0.d = (*rax_43).d f+ *(rbx_2 + rcx_21)
                            zmm1.d = (*(rax_43 + 4)).d f+ *(rbx_2 + rcx_21 + 4)
                            *(rbx_2 + rcx_21) = zmm0.d
                            *(rbx_2 + rcx_21 + 4) = zmm1.d
                            zmm0.d = (*(rbx_2 + rcx_21 + 8)).d f+ rax_43[1].d
                            zmm2 = *(rax_43 + 0xc) f+ *(rbx_2 + rcx_21 + 0xc)
                            *(rbx_2 + rcx_21 + 8) = zmm0.d
                            *(rbx_2 + rcx_21 + 0xc) = zmm2
                            zmm0.d = (*(rbx_2 + rcx_21 + 0x10)).d f+ rax_43[2].d
                            zmm1 = *(rax_43 + 0x14)
                            zmm2 = rax_43[3].d
                            zmm3 = *(rax_43 + 0x1c)
                        else
                            int32_t var_1d0
                            sub_1429d1470(r11_1, zx.q(i), rdi_1.w, &var_1d0)
                            zmm6 = 0x3f400000
                            int128_t zmm5 = 0x3e000000
                            char rax_30 = *(rdi_1 + rax_23)
                            
                            if ((rax_30 & 0x10) != 0)
                                int16_t rax_31
                                int16_t rcx_17
                                
                                if ((rax_30 & 0x20) == 0)
                                    rax_31 = rdi_1.w
                                    rcx_17 = r12_2.w
                                else
                                    rax_31.b = rdi_1.w == 0
                                    rcx_17.b = rsi_5 == 0
                                
                                int16_t var_218_1 = rcx_17
                                zmm0 = sub_1429d2190(var_1e0, i_1, rax_31, var_1f0_1)
                                zmm5.d = 1f f- zmm0.d
                                zmm6 = zmm5
                                zmm5.d = zmm5.d f* 0.125f
                                zmm6.d = zmm6.d f* 0.75f
                                zmm6.d = zmm6.d f+ zmm0.d
                            
                            int64_t rcx_19 = *arg4
                            rdi = arg3
                            int32_t* rax_34 = (sx.q(var_1d0) << 5) + *rdi
                            zmm0.d = zmm5.q.d f* *rax_34
                            zmm1.d = rax_34[1].d f* zmm5.d
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_19)
                            zmm1.d = zmm1.d f+ *(rbx_2 + rcx_19 + 4)
                            *(rbx_2 + rcx_19) = zmm0.d
                            *(rbx_2 + rcx_19 + 4) = zmm1.d
                            zmm0.d = zmm5.q.d f* rax_34[2]
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_19 + 8)
                            zmm2 = rax_34[3] f* zmm5.d f+ *(rbx_2 + rcx_19 + 0xc)
                            *(rbx_2 + rcx_19 + 8) = zmm0.d
                            *(rbx_2 + rcx_19 + 0xc) = zmm2
                            zmm0.d = zmm5.q.d f* rax_34[4]
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_19 + 0x10)
                            zmm3 = rax_34[7]
                            zmm1.d = rax_34[5].d f* zmm5.d
                            zmm2 = rax_34[6] f* zmm5.d
                            *(rbx_2 + rcx_19 + 0x10) = zmm0.d
                            zmm1.d = zmm1.d f+ *(rbx_2 + rcx_19 + 0x14)
                            *(rbx_2 + rcx_19 + 0x14) = zmm1.d
                            *(rbx_2 + rcx_19 + 0x18) = zmm2 f+ *(rbx_2 + rcx_19 + 0x18)
                            *(rbx_2 + rcx_19 + 0x1c) = zmm3 f* zmm5.d f+ *(rbx_2 + rcx_19 + 0x1c)
                            int64_t rcx_20 = *arg4
                            int32_t var_1cc
                            int32_t* rax_37 = (sx.q(var_1cc) << 5) + *rdi
                            zmm0.d = zmm5.q.d f* *rax_37
                            zmm1.d = rax_37[1].d f* zmm5.d
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_20)
                            zmm1.d = zmm1.d f+ *(rbx_2 + rcx_20 + 4)
                            *(rbx_2 + rcx_20) = zmm0.d
                            *(rbx_2 + rcx_20 + 4) = zmm1.d
                            zmm0.d = zmm5.q.d f* rax_37[2]
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_20 + 8)
                            zmm2 = rax_37[3] f* zmm5.d f+ *(rbx_2 + rcx_20 + 0xc)
                            *(rbx_2 + rcx_20 + 8) = zmm0.d
                            *(rbx_2 + rcx_20 + 0xc) = zmm2
                            zmm0.d = zmm5.q.d f* rax_37[4]
                            zmm2 = rax_37[5]
                            int32_t zmm4 = rax_37[7]
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_20 + 0x10)
                            zmm3 = rax_37[6] f* zmm5.d
                            int32_t* rax_40 = (sx.q(var_1ec_1) << 5) + *rdi
                            *(rbx_2 + rcx_20 + 0x10) = zmm0.d
                            zmm1.d = zmm5.d f* zmm2
                            zmm5.d = zmm5.d f* zmm4
                            zmm1.d = zmm1.d f+ *(rbx_2 + rcx_20 + 0x14)
                            *(rbx_2 + rcx_20 + 0x14) = zmm1.d
                            *(rbx_2 + rcx_20 + 0x18) = zmm3 f+ *(rbx_2 + rcx_20 + 0x18)
                            zmm5.d = zmm5.d f+ *(rbx_2 + rcx_20 + 0x1c)
                            *(rbx_2 + rcx_20 + 0x1c) = zmm5.d
                            rcx_21 = *arg4
                            zmm2 = rax_40[1]
                            zmm0.d = zmm6.q.d f* *rax_40
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_21)
                            i = i_1
                            r11_1 = r8
                            r8_1 = rcx_7
                            r9_1 = var_1a0_1
                            *(rbx_2 + rcx_21) = zmm0.d
                            zmm1.d = zmm6.d f* zmm2
                            zmm1.d = zmm1.d f+ *(rbx_2 + rcx_21 + 4)
                            *(rbx_2 + rcx_21 + 4) = zmm1.d
                            zmm0.d = zmm6.q.d f* rax_40[2]
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_21 + 8)
                            zmm2 = rax_40[3] f* zmm6.d f+ *(rbx_2 + rcx_21 + 0xc)
                            *(rbx_2 + rcx_21 + 8) = zmm0.d
                            *(rbx_2 + rcx_21 + 0xc) = zmm2
                            zmm0.d = zmm6.q.d f* rax_40[4]
                            zmm0.d = zmm0.d f+ *(rbx_2 + rcx_21 + 0x10)
                            zmm3 = zmm6.d f* rax_40[7]
                            zmm1.d = rax_40[5].d f* zmm6.d
                            zmm2 = rax_40[6] f* zmm6.d
                        
                        *(rbx_2 + rcx_21 + 0x10) = zmm0.d
                        rsi_5 += 1
                        zmm1.d = zmm1.d f+ *(rbx_2 + rcx_21 + 0x14)
                        r14_1 = &r14_1[1]
                        r15_2 = &r15_2[1]
                        *(rbx_2 + rcx_21 + 0x14) = zmm1.d
                        *(rbx_2 + rcx_21 + 0x18) = zmm2 f+ *(rbx_2 + rcx_21 + 0x18)
                        *(rbx_2 + rcx_21 + 0x1c) = zmm3 f+ *(rbx_2 + rcx_21 + 0x1c)
                        rbx = var_1e0
                    while (rsi_5 s< rcx_8)
            else
                int64_t rax_15 = *arg4
                int64_t r8_3 = rdx_1 << 5
                
                if (var_208_1 == 0)
                    int64_t rcx_12 = sx.q(*r9_1)
                    *(r8_3 + rax_15 + 8) = 0
                    *(r8_3 + rax_15) = *(r8_3 + rax_15 + 8)
                    *(r8_3 + rax_15 + 0x10) = zx.o(0)
                    int32_t* rax_21 = (rcx_12 << 5) + *rdi
                    int32_t* rdx_3 = (rdx_1 << 5) + *arg4
                    zmm0.d = (*rdx_3).d f+ *rax_21
                    zmm1.d = rax_21[1].d f+ rdx_3[1]
                    *rdx_3 = zmm0.d
                    rdx_3[1] = zmm1.d
                    zmm0.d = rdx_3[2].d f+ rax_21[2]
                    zmm2 = rax_21[3] f+ rdx_3[3]
                    rdx_3[2] = zmm0.d
                    rdx_3[3] = zmm2
                    zmm1 = rax_21[5]
                    zmm2 = rax_21[6]
                    zmm3 = rax_21[7]
                    zmm0.d = rdx_3[4].d f+ rax_21[4]
                    rdx_3[4] = zmm0.d
                    zmm1.d = zmm1.d f+ rdx_3[5]
                    rdx_3[5] = zmm1.d
                    rdx_3[6] = zmm2 f+ rdx_3[6]
                    rdx_3[7] = zmm3 f+ rdx_3[7]
                else
                    __builtin_memset(r8_3 + rax_15 + 8, 0, 0x18)
                    *(r8_3 + rax_15) = *(r8_3 + rax_15 + 8)
                    int32_t* rax_18 = (sx.q(*r9_1) << 5) + *rdi
                    int64_t* rcx_11 = (sx.q(*r14_1) << 5) + *arg4
                    zmm0.d = (*rcx_11).d f+ *rax_18
                    zmm1.d = rax_18[1].d f+ *(rcx_11 + 4)
                    *rcx_11 = zmm0.d
                    *(rcx_11 + 4) = zmm1.d
                    zmm0.d = rcx_11[1].d.d f+ rax_18[2]
                    rcx_11[1].d = zmm0.d
                    *(rcx_11 + 0xc) = rax_18[3] f+ *(rcx_11 + 0xc)
                    zmm2 = rax_18[6]
                    zmm3 = rax_18[7]
                    zmm0.d = rcx_11[2].d.d f+ rax_18[4]
                    rcx_11[2].d = zmm0.d
                    zmm1.d = rax_18[5].d f+ *(rcx_11 + 0x14)
                    *(rcx_11 + 0x14) = zmm1.d
                    rcx_11[3].d = zmm2 f+ rcx_11[3].d
                    *(rcx_11 + 0x1c) = zmm3 f+ *(rcx_11 + 0x1c)
            r15 = var_1f8
            r12 = var_200
        
        i += 1
        rcx_6 = var_1d8_1 + 4
        i_1 = i
        var_1d8_1 = rcx_6
    while (i s< *(rsi + 8))
    
    rax_7 = var_148

j_sub_140a74f90(rax_7)
void* var_198_2 = &var_188
int32_t var_18c_2 = 0x10
int64_t result = j_sub_140a74f90(var_a8)
__security_check_cookie(rax_1 ^ &var_238)
return result
