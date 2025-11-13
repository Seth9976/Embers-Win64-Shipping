// 函数: sub_1409a83c0
// 地址: 0x1409a83c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void* r10 = *arg1
int32_t j_2 = 0
uint32_t rcx_1 = *(r10 + 8) u>> 2
int32_t var_210 = *(r10 + 4)
void* rdi = *(*(r10 + 0x28) + ((zx.q(rcx_1) & 0xf) << 3))
void* var_208 = rdi
int64_t* r14 = *(*(rdi + 0x1c8) + (sx.q(arg4) << 3))
int32_t var_10c = 0x21
void* var_80 = nullptr
int32_t rsi = ((zx.q(*(rdi + 0x14)) << 1) + 1).d
int32_t var_110 = rsi
void var_108
void* var_118 = &var_108

if (rsi u> 0x21)
    void* rax_6 = j_sub_140a82f30(zx.q(rsi) << 2)
    var_80 = rax_6
    var_118 = rax_6
    int32_t var_10c_1 = rsi

int32_t rsi_1 = *(rdi + 0x14)
void var_168
void* var_178 = &var_168
void* rax_7 = nullptr
void* var_128 = nullptr
int32_t var_170 = rsi_1
int32_t var_16c = 0x10

if (rsi_1 u> 0x10)
    rax_7 = j_sub_140a82f30(zx.q(rsi_1) << 2)
    var_128 = rax_7
    var_178 = rax_7
    int32_t var_16c_1 = rsi_1

int32_t i = 0
void* var_1a0 = rdi
void* var_198 = rdi
int32_t i_1 = 0

if (*(rdi + 8) s> 0)
    void* rax_8 = nullptr
    int128_t zmm6
    int128_t var_48_1 = zmm6
    void* rcx_8 = nullptr
    void* r9 = nullptr
    int128_t zmm7 = 0x3e2aaaab
    int128_t zmm8 = 0x3f2aaaab
    int32_t* var_200_1 = nullptr
    int32_t var_214_1 = 0
    void* var_1e8_1 = nullptr
    void* var_1f0_1 = nullptr
    
    do
        void* r11_1 = *(rdi + 0x150)
        int64_t r8 = sx.q(*(r11_1 + rax_8))
        int32_t j_7 = r8.d
        int32_t* rsi_2 = r14[0x12] + (sx.q(*(rcx_8 + r14[0xc])) << 2)
        uint64_t j_9 = zx.q(*(r9 + r14[9]))
        uint32_t r9_1 = zx.d(*(r9 + *(rdi + 0x1b0)))
        int64_t zmm0
        float zmm2
        float zmm3
        
        if ((0x800 & r9_1.w) == 0 && r8.d != 0 && *(r14 + 0xc) == 0)
            if ((not.b(*(sx.q(*rsi_2) + r14[0x15])) & 1) != 0)
                void* var_1c8 = var_118
                int64_t var_1b0_1 = 0
                void* r13_1 = var_118 + 4
                int32_t var_1a8_1 = 0
                int64_t rcx_12 = sx.q(var_214_1)
                void* r15_1 = (r8 << 2) + r13_1
                char var_1a4_1 = 0
                int32_t var_188_1 = *(r11_1 + (rcx_12 << 2))
                void* var_1c0_1 = r13_1
                void* var_1b8_1 = r15_1
                int32_t i_2 = i
                int32_t var_184_1 = *(*(rdi + 0x108) + (rcx_12 << 2))
                int32_t i_3 = i
                zmm7, zmm8 = sub_1409962d0(&var_210, &var_1a0, &var_1c8, r9_1 u>> 7 & 0xf)
                int64_t rdi_2 = sx.q(*rsi_2) << 5
                arg3[sx.q(*rsi_2) * 4 + 1] = 0
                arg3[sx.q(*rsi_2) * 4] = arg3[sx.q(*rsi_2) * 4 + 1]
                *(arg3 + rdi_2 + 0x10) = zx.o(0)
                int128_t zmm4
                
                if (var_1a8_1 s> 0)
                    int64_t rcx_15 = *(var_208 + 0x108)
                    int64_t rdx_2 = sx.q(*(var_200_1 + rcx_15 + 4))
                    int32_t j_8 = *(var_200_1 + rcx_15)
                    int16_t* r10_2 = *(var_208 + 0x138) + (rdx_2 << 1)
                    
                    if (j_8 s> 0)
                        uint64_t j_6 = zx.q(j_8)
                        void* r13_3 = *(var_208 + 0x120) + (rdx_2 << 2) - r15_1
                        uint64_t j
                        
                        do
                            int64_t r8_3 = sx.q(*(r15_1 + r13_3) * 2)
                            int64_t rdx_3 = *(*r14 + 0x18)
                            int32_t r9_5 = *(rdx_3 + (r8_3 << 2))
                            int16_t rcx_17 = *r10_2 + 2
                            
                            if (zx.d(rcx_17) s>= r9_5)
                                rcx_17 -= r9_5.w
                            
                            zmm4 = *r15_1
                            r10_2 = &r10_2[1]
                            r15_1 += 4
                            int32_t* rcx_20 = (sx.q(*(r14[3]
                                + (sx.q(*(rdx_3 + (r8_3 << 2) + 4)) << 2) + (zx.q(rcx_17) << 2))) << 5)
                                + *arg2
                            zmm0.d = zmm4.q.d f* *rcx_20
                            zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4].d
                            arg3[sx.q(*rsi_2) * 4].d = zmm0.d
                            *(&arg3[sx.q(*rsi_2) * 4] + 4) =
                                rcx_20[1] f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 4)
                            zmm0.d = zmm4.q.d f* rcx_20[2]
                            zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4 + 1].d
                            arg3[sx.q(*rsi_2) * 4 + 1].d = zmm0.d
                            *(&arg3[sx.q(*rsi_2) * 4] + 0xc) =
                                rcx_20[3] f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 0xc)
                            zmm0.d = zmm4.q.d f* rcx_20[4]
                            zmm2 = rcx_20[6] f* zmm4.d
                            zmm3 = rcx_20[7] f* zmm4.d
                            zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4 + 2].d
                            arg3[sx.q(*rsi_2) * 4 + 2].d = zmm0.d
                            *(&arg3[sx.q(*rsi_2) * 4] + 0x14) =
                                rcx_20[5] f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 0x14)
                            arg3[sx.q(*rsi_2) * 4 + 3].d = zmm2 f+ arg3[sx.q(*rsi_2) * 4 + 3].d
                            *(&arg3[sx.q(*rsi_2) * 4] + 0x1c) =
                                zmm3 f+ *(&arg3[sx.q(*rsi_2) * 4] + 0x1c)
                            j = j_6
                            j_6 -= 1
                        while (j != 1)
                
                if (var_1b0_1:4.d s> 0)
                    int128_t* rsi_3 = var_178
                    sub_1429d1590(r14, i_1, rsi_3)
                    
                    if (j_7 s> 0)
                        void* r13_4 = r13_1 - rsi_3
                        uint64_t j_4 = zx.q(j_7)
                        uint64_t j_1
                        
                        do
                            zmm4 = *(rsi_3 + r13_4)
                            int64_t rax_26 = sx.q(*rsi_3) << 5
                            rsi_3 += 4
                            int32_t* rax_27 = rax_26 + *arg2
                            zmm0.d = zmm4.q.d f* *rax_27
                            zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4].d
                            arg3[sx.q(*rsi_2) * 4].d = zmm0.d
                            *(&arg3[sx.q(*rsi_2) * 4] + 4) =
                                rax_27[1] f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 4)
                            zmm0.d = zmm4.q.d f* rax_27[2]
                            zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4 + 1].d
                            arg3[sx.q(*rsi_2) * 4 + 1].d = zmm0.d
                            *(&arg3[sx.q(*rsi_2) * 4] + 0xc) =
                                rax_27[3] f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 0xc)
                            zmm0.d = zmm4.q.d f* rax_27[4]
                            zmm2 = rax_27[6] f* zmm4.d
                            zmm3 = rax_27[7] f* zmm4.d
                            zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4 + 2].d
                            arg3[sx.q(*rsi_2) * 4 + 2].d = zmm0.d
                            *(&arg3[sx.q(*rsi_2) * 4] + 0x14) =
                                rax_27[5] f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 0x14)
                            arg3[sx.q(*rsi_2) * 4 + 3].d = zmm2 f+ arg3[sx.q(*rsi_2) * 4 + 3].d
                            *(&arg3[sx.q(*rsi_2) * 4] + 0x1c) =
                                zmm3 f+ *(&arg3[sx.q(*rsi_2) * 4] + 0x1c)
                            j_1 = j_4
                            j_4 -= 1
                        while (j_1 != 1)
                
                i = i_1
                zmm4 = *var_118
                int64_t rax_29 = *arg2
                zmm0.d = zmm4.q.d f* *(rdi_2 + rax_29)
                zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4].d
                arg3[sx.q(*rsi_2) * 4].d = zmm0.d
                *(&arg3[sx.q(*rsi_2) * 4] + 4) =
                    *(rdi_2 + rax_29 + 4) f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 4)
                zmm0.d = zmm4.q.d f* *(rdi_2 + rax_29 + 8)
                zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4 + 1].d
                arg3[sx.q(*rsi_2) * 4 + 1].d = zmm0.d
                *(&arg3[sx.q(*rsi_2) * 4] + 0xc) =
                    *(rdi_2 + rax_29 + 0xc) f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 0xc)
                zmm0.d = zmm4.q.d f* *(rdi_2 + rax_29 + 0x10)
                zmm3 = *(rdi_2 + rax_29 + 0x1c)
                zmm0.d = zmm0.d f+ arg3[sx.q(*rsi_2) * 4 + 2].d
                zmm2 = *(rdi_2 + rax_29 + 0x18) f* zmm4.d
                arg3[sx.q(*rsi_2) * 4 + 2].d = zmm0.d
                *(&arg3[sx.q(*rsi_2) * 4] + 0x14) =
                    *(rdi_2 + rax_29 + 0x14) f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 0x14)
                arg3[sx.q(*rsi_2) * 4 + 3].d = zmm2 f+ arg3[sx.q(*rsi_2) * 4 + 3].d
                *(&arg3[sx.q(*rsi_2) * 4] + 0x1c) =
                    zmm3 f* zmm4.d f+ *(&arg3[sx.q(*rsi_2) * 4] + 0x1c)
                rdi = var_208
            else if (j_9.d != 0)
                do
                    int64_t rcx_27 = sx.q(*rsi_2)
                    int64_t rdi_4 = rcx_27 << 5
                    arg3[rcx_27 * 4 + 1] = 0
                    arg3[rcx_27 * 4] = arg3[rcx_27 * 4 + 1]
                    *(arg3 + rdi_4 + 0x10) = zx.o(0)
                    int32_t zmm1
                    
                    if ((*(rcx_27 + r14[0x15]) & 8) != 0)
                        int32_t var_1f8
                        sub_1429d1470(r14, zx.q(i), j_2.w, &var_1f8)
                        int64_t* rax_35 = (sx.q(var_1f8) << 5) + *arg2
                        zmm0.d = (*rax_35).d f* zmm7.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4].d
                        arg3[rcx_27 * 4].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 4) =
                            *(rax_35 + 4) f* zmm7.d f+ *(&arg3[rcx_27 * 4] + 4)
                        zmm0.d = rax_35[1].d.d f* zmm7.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4 + 1].d
                        arg3[rcx_27 * 4 + 1].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 0xc) =
                            *(rax_35 + 0xc) f* zmm7.d f+ *(&arg3[rcx_27 * 4] + 0xc)
                        zmm0.d = rax_35[2].d.d f* zmm7.d
                        int32_t var_1f4
                        int64_t* rax_38 = (sx.q(var_1f4) << 5) + *arg2
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4 + 2].d
                        zmm2 = rax_35[3].d f* zmm7.d
                        zmm3 = *(rax_35 + 0x1c) f* zmm7.d
                        arg3[rcx_27 * 4 + 2].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 0x14) =
                            *(rax_35 + 0x14) f* zmm7.d f+ *(&arg3[rcx_27 * 4] + 0x14)
                        arg3[rcx_27 * 4 + 3].d = zmm2 f+ arg3[rcx_27 * 4 + 3].d
                        *(&arg3[rcx_27 * 4] + 0x1c) = zmm3 f+ *(&arg3[rcx_27 * 4] + 0x1c)
                        zmm0.d = (*rax_38).d f* zmm7.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4].d
                        arg3[rcx_27 * 4].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 4) =
                            *(rax_38 + 4) f* zmm7.d f+ *(&arg3[rcx_27 * 4] + 4)
                        zmm0.d = rax_38[1].d.d f* zmm7.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4 + 1].d
                        arg3[rcx_27 * 4 + 1].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 0xc) =
                            *(rax_38 + 0xc) f* zmm7.d f+ *(&arg3[rcx_27 * 4] + 0xc)
                        int64_t rax_39 = *arg2
                        zmm0.d = rax_38[2].d.d f* zmm7.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4 + 2].d
                        zmm2 = rax_38[3].d f* zmm7.d
                        zmm3 = *(rax_38 + 0x1c) f* zmm7.d
                        arg3[rcx_27 * 4 + 2].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 0x14) =
                            *(rax_38 + 0x14) f* zmm7.d f+ *(&arg3[rcx_27 * 4] + 0x14)
                        arg3[rcx_27 * 4 + 3].d = zmm2 f+ arg3[rcx_27 * 4 + 3].d
                        *(&arg3[rcx_27 * 4] + 0x1c) = zmm3 f+ *(&arg3[rcx_27 * 4] + 0x1c)
                        zmm0.d = (*(rdi_4 + rax_39)).d f* zmm8.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4].d
                        arg3[rcx_27 * 4].d = zmm0.d
                        i = i_1
                        *(&arg3[rcx_27 * 4] + 4) =
                            *(rdi_4 + rax_39 + 4) f* zmm8.d f+ *(&arg3[rcx_27 * 4] + 4)
                        zmm0.d = (*(rdi_4 + rax_39 + 8)).d f* zmm8.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4 + 1].d
                        arg3[rcx_27 * 4 + 1].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 0xc) =
                            *(rdi_4 + rax_39 + 0xc) f* zmm8.d f+ *(&arg3[rcx_27 * 4] + 0xc)
                        zmm0.d = (*(rdi_4 + rax_39 + 0x10)).d f* zmm8.d
                        zmm3 = *(rdi_4 + rax_39 + 0x1c) f* zmm8.d
                        zmm0.d = zmm0.d f+ arg3[rcx_27 * 4 + 2].d
                        zmm1 = *(rdi_4 + rax_39 + 0x14) f* zmm8.d
                        zmm2 = *(rdi_4 + rax_39 + 0x18) f* zmm8.d
                    else
                        int64_t rax_32 = *arg2
                        zmm0.d = (*(rdi_4 + rax_32)).d f+ arg3[rcx_27 * 4].d
                        arg3[rcx_27 * 4].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 4) = *(rdi_4 + rax_32 + 4) f+ *(&arg3[rcx_27 * 4] + 4)
                        zmm0.d = (*(rdi_4 + rax_32 + 8)).d f+ arg3[rcx_27 * 4 + 1].d
                        arg3[rcx_27 * 4 + 1].d = zmm0.d
                        *(&arg3[rcx_27 * 4] + 0xc) =
                            *(rdi_4 + rax_32 + 0xc) f+ *(&arg3[rcx_27 * 4] + 0xc)
                        zmm0.d = arg3[rcx_27 * 4 + 2].d.d f+ *(rdi_4 + rax_32 + 0x10)
                        zmm1 = *(rdi_4 + rax_32 + 0x14)
                        zmm2 = *(rdi_4 + rax_32 + 0x18)
                        zmm3 = *(rdi_4 + rax_32 + 0x1c)
                    
                    arg3[rcx_27 * 4 + 2].d = zmm0.d
                    j_2 += 1
                    rsi_2 = &rsi_2[1]
                    *(&arg3[rcx_27 * 4] + 0x14) = zmm1 f+ *(&arg3[rcx_27 * 4] + 0x14)
                    arg3[rcx_27 * 4 + 3].d = zmm2 f+ arg3[rcx_27 * 4 + 3].d
                    *(&arg3[rcx_27 * 4] + 0x1c) = zmm3 f+ *(&arg3[rcx_27 * 4] + 0x1c)
                while (j_2 s< j_9.d)
                
                rdi = var_208
            
            j_2 = 0
        else if (j_9.d != 0)
            uint64_t j_5 = j_9
            uint64_t j_3
            
            do
                int64_t rcx_29 = sx.q(*rsi_2)
                rsi_2 = &rsi_2[1]
                int64_t rcx_30 = rcx_29 << 5
                void* rax_42 = &arg3[rcx_29 * 4]
                *(rax_42 + 8) = 0
                *rax_42 = *(rax_42 + 8)
                *(rax_42 + 0x10) = zx.o(0)
                int64_t rax_43 = *arg2
                zmm0.d = (*(rcx_30 + rax_43)).d f+ arg3[rcx_29 * 4].d
                arg3[rcx_29 * 4].d = zmm0.d
                *(&arg3[rcx_29 * 4] + 4) = *(rcx_30 + rax_43 + 4) f+ *(&arg3[rcx_29 * 4] + 4)
                zmm0.d = arg3[rcx_29 * 4 + 1].d.d f+ *(rcx_30 + rax_43 + 8)
                arg3[rcx_29 * 4 + 1].d = zmm0.d
                *(&arg3[rcx_29 * 4] + 0xc) = *(rcx_30 + rax_43 + 0xc) f+ *(&arg3[rcx_29 * 4] + 0xc)
                zmm2 = *(rcx_30 + rax_43 + 0x18)
                zmm3 = *(rcx_30 + rax_43 + 0x1c)
                zmm0.d = (*(rcx_30 + rax_43 + 0x10)).d f+ arg3[rcx_29 * 4 + 2].d
                arg3[rcx_29 * 4 + 2].d = zmm0.d
                *(&arg3[rcx_29 * 4] + 0x14) =
                    *(rcx_30 + rax_43 + 0x14) f+ *(&arg3[rcx_29 * 4] + 0x14)
                arg3[rcx_29 * 4 + 3].d = zmm2 f+ arg3[rcx_29 * 4 + 3].d
                *(&arg3[rcx_29 * 4] + 0x1c) = zmm3 f+ *(&arg3[rcx_29 * 4] + 0x1c)
                j_3 = j_5
                j_5 -= 1
            while (j_3 != 1)
        i += 1
        rcx_8 = var_1f0_1 + 4
        r9 = var_1e8_1 + 2
        var_214_1 += 2
        rax_8 = &var_200_1[2]
        i_1 = i
        var_1f0_1 = rcx_8
        var_1e8_1 = r9
        var_200_1 = rax_8
    while (i s< *(rdi + 8))
    
    rax_7 = var_128

j_sub_140a74f90(rax_7)
void* var_178_1 = &var_168
int32_t var_16c_2 = 0x10
int64_t result = j_sub_140a74f90(var_80)
__security_check_cookie(rax_1 ^ &var_238)
return result
