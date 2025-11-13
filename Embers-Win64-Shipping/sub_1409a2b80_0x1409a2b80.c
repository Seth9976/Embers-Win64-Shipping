// 函数: sub_1409a2b80
// 地址: 0x1409a2b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
void* r11 = *arg1
int64_t r13 = arg3
int64_t r10 = sx.q(arg5)
void* r15 = *(*(r11 + 0x40) + (sx.q(arg2) << 3) - 8)
int32_t var_248 = *(r11 + 4)
void* var_268 = r15
void* r8 = *(r15 + 8)
void* r12 = *(r15 + 0x10)
void* var_260 = r8
int64_t* rbx = *(*(r15 + 0x1e0) + (r10 << 3))
int64_t* var_258 = rbx
int64_t* r9 = *(*(r8 + 0x1c8) + (r10 << 3))
bool cond:0 = *(r9 + 0xc) != 0
void* rdi = *(*(r12 + 0x1c8) + (r10 << 3))
void* var_228 = rdi
char var_278_1

if (not(cond:0))
    var_278_1 = 0

if (cond:0 || *r11 == 0)
    var_278_1 = 1

int32_t rsi_1 = *(r8 + 0x14) * 2
void var_128
void* var_138 = &var_128
int32_t var_130 = rsi_1
int32_t var_12c = 0x20
void* var_a8 = nullptr

if (rsi_1 u> 0x20)
    void* rax_7 = j_sub_140a82f30(zx.q(rsi_1) << 2)
    r8 = var_260
    var_a8 = rax_7
    var_138 = rax_7
    int32_t var_12c_1 = rsi_1

int32_t rsi_2 = *(r8 + 0x14)
void var_188
void* var_198 = &var_188
void* rax_8 = nullptr
void* var_148 = nullptr
int32_t var_190 = rsi_2
int32_t var_18c = 0x10

if (rsi_2 u> 0x10)
    rax_8 = j_sub_140a82f30(zx.q(rsi_2) << 2)
    r8 = var_260
    var_148 = rax_8
    var_198 = rax_8
    int32_t var_18c_1 = rsi_2

bool cond:2 = *(r8 + 8) s<= 0
uint64_t rdx = 0
int32_t var_274 = 0
void* var_1e0 = r8
void* var_1d8 = r12

if (not(cond:2))
    int128_t zmm6
    int128_t var_48_1 = zmm6
    void* r8_1 = nullptr
    int128_t zmm7 = 0x3f400000
    int128_t zmm8 = 0x3e000000
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10 = 0x3f800000
    void* var_250_1 = nullptr
    int64_t var_218_1 = 0
    int32_t var_270_1 = 0
    void* var_220_1 = nullptr
    
    do
        int64_t r8_2 = sx.q(*(r8_1 + *(r15 + 0xf0)))
        int32_t var_26c_1 = r8_2.d
        
        if (r8_2.d != 0xffffffff)
            int64_t* r10_1 = r9
            int64_t r9_1 = r8_2
            int64_t rsi_3 = sx.q(*(r10_1[0xc] + var_220_1))
            int32_t* r12_1 = r10_1[0x12] + (rsi_3 << 2)
            int64_t rcx_6 = sx.q(*(*(rdi + 0x60) + (r8_2 << 2)))
            int32_t* r15_1 = *(rdi + 0x90) + (rcx_6 << 2)
            uint32_t r11_1 = zx.d(*(*(rdi + 0x48) + (r8_2 << 1)))
            int64_t rax_15 = sx.q(*r15_1)
            uint32_t var_238_1 = r11_1
            char rcx_8 = not.b(*(rax_15 + *(rdi + 0xa8))) & 1
            int64_t zmm0
            int128_t zmm1
            float zmm2
            float zmm3
            
            if (var_278_1 != 0)
                if (rcx_8 == 0)
                    goto label_1409a3274
                
                int64_t* rax_17 = (rax_15 << 5) + *arg4
                rax_17[1] = 0
                *rax_17 = rax_17[1]
                *(rax_17 + 0x10) = zx.o(0)
                int32_t* rax_20 = (sx.q(*r12_1) << 5) + *r13
                int64_t* rcx_11 = (sx.q(*r15_1) << 5) + *arg4
                zmm0.d = (*rcx_11).d f+ *rax_20
                zmm1.d = rax_20[1].d f+ *(rcx_11 + 4)
                *rcx_11 = zmm0.d
                *(rcx_11 + 4) = zmm1.d
                zmm0.d = rcx_11[1].d.d f+ rax_20[2]
                rcx_11[1].d = zmm0.d
                *(rcx_11 + 0xc) = rax_20[3] f+ *(rcx_11 + 0xc)
                zmm2 = rax_20[6]
                zmm3 = rax_20[7]
                zmm0.d = rcx_11[2].d.d f+ rax_20[4]
                rcx_11[2].d = zmm0.d
                zmm1.d = rax_20[5].d f+ *(rcx_11 + 0x14)
                *(rcx_11 + 0x14) = zmm1.d
                rcx_11[3].d = zmm2 f+ rcx_11[3].d
                *(rcx_11 + 0x1c) = zmm3 f+ *(rcx_11 + 0x1c)
                r15 = var_268
            else
                int32_t zmm4
                int128_t zmm5
                
                if (rcx_8 == 0)
                label_1409a3274:
                    int64_t rax_40 = r10_1[0x15] + rsi_3
                    char* r12_4 = rcx_6 + *(rdi + 0xa8)
                    int32_t rsi_5 = 0
                    
                    if (r11_1 != 0)
                        do
                            uint32_t r13_1 = zx.d(rsi_5.w)
                            int64_t rbx_4 = sx.q(*r15_1) << 5
                            uint64_t rdi_3 = zx.q(
                                *(rbx[5] + (sx.q(*(*(rbx[4] + 0x60) + (r9_1 << 2)) + r13_1) << 1)))
                            int64_t rcx_31 = sx.q(r12_1[rdi_3])
                            int64_t rax_46 = *arg4
                            int64_t var_240_1
                            var_240_1.d = rcx_31.d
                            *(rbx_4 + rax_46 + 8) = 0
                            *(rbx_4 + rax_46) = *(rbx_4 + rax_46 + 8)
                            *(rbx_4 + rax_46 + 0x10) = zx.o(0)
                            int64_t rcx_37
                            
                            if (var_278_1 != 0 || (*r12_4 & 8) == 0)
                                r13 = arg3
                                rcx_37 = *arg4
                                int64_t* rax_61 = (rcx_31 << 5) + *r13
                                zmm0.d = (*rax_61).d f+ *(rbx_4 + rcx_37)
                                zmm1.d = (*(rax_61 + 4)).d f+ *(rbx_4 + rcx_37 + 4)
                                *(rbx_4 + rcx_37) = zmm0.d
                                *(rbx_4 + rcx_37 + 4) = zmm1.d
                                zmm0.d = (*(rbx_4 + rcx_37 + 8)).d f+ rax_61[1].d
                                zmm2 = *(rax_61 + 0xc) f+ *(rbx_4 + rcx_37 + 0xc)
                                *(rbx_4 + rcx_37 + 8) = zmm0.d
                                *(rbx_4 + rcx_37 + 0xc) = zmm2
                                zmm1 = *(rax_61 + 0x14)
                                zmm2 = rax_61[3].d
                                zmm0.d = (*(rbx_4 + rcx_37 + 0x10)).d f+ rax_61[2].d
                                zmm3 = *(rax_61 + 0x1c)
                                *(rbx_4 + rcx_37 + 0x10) = zmm0.d
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_37 + 0x14)
                                *(rbx_4 + rcx_37 + 0x14) = zmm1.d
                                *(rbx_4 + rcx_37 + 0x18) = zmm2 f+ *(rbx_4 + rcx_37 + 0x18)
                            else
                                int32_t var_210
                                sub_1429d1470(r10_1, rdx, rdi_3.w, &var_210)
                                zmm6 = zmm7
                                zmm5 = zmm8
                                char rax_48 = *(rdi_3 + rax_40)
                                
                                if ((rax_48 & 0x10) != 0)
                                    int16_t rax_49
                                    int16_t rcx_33
                                    
                                    if ((rax_48 & 0x20) == 0)
                                        rax_49 = rdi_3.w
                                        rcx_33 = r13_1.w
                                    else
                                        rax_49.b = rdi_3.w == 0
                                        rcx_33.b = rsi_5 == 0
                                    
                                    int32_t var_288
                                    var_288.w = rcx_33
                                    zmm0 = sub_1429d2190(var_258, var_274, rax_49, var_26c_1)
                                    zmm5.d = zmm10.d f- zmm0.d
                                    zmm6 = zmm5
                                    zmm5.d = zmm5.d f* zmm8.d
                                    zmm6.d = zmm6.d f* zmm7.d
                                    zmm6.d = zmm6.d f+ zmm0.d
                                
                                int64_t rcx_35 = *arg4
                                r13 = arg3
                                int32_t* rax_52 = (sx.q(var_210) << 5) + *r13
                                zmm0.d = zmm5.q.d f* *rax_52
                                zmm1.d = zmm5.d f* rax_52[1]
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_35)
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_35 + 4)
                                *(rbx_4 + rcx_35) = zmm0.d
                                *(rbx_4 + rcx_35 + 4) = zmm1.d
                                zmm0.d = zmm5.q.d f* rax_52[2]
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_35 + 8)
                                zmm2 = rax_52[3] f* zmm5.d f+ *(rbx_4 + rcx_35 + 0xc)
                                *(rbx_4 + rcx_35 + 8) = zmm0.d
                                *(rbx_4 + rcx_35 + 0xc) = zmm2
                                zmm0.d = zmm5.q.d f* rax_52[4]
                                zmm3 = rax_52[6]
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_35 + 0x10)
                                zmm4 = rax_52[7]
                                zmm1.d = zmm5.d f* rax_52[5]
                                *(rbx_4 + rcx_35 + 0x10) = zmm0.d
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_35 + 0x14)
                                zmm0.d = zmm5.q.d f* zmm3
                                *(rbx_4 + rcx_35 + 0x14) = zmm1.d
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_35 + 0x18)
                                zmm1.d = zmm5.d f* zmm4
                                *(rbx_4 + rcx_35 + 0x18) = zmm0.d
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_35 + 0x1c)
                                *(rbx_4 + rcx_35 + 0x1c) = zmm1.d
                                int64_t rcx_36 = *arg4
                                int32_t var_20c
                                int32_t* rax_55 = (sx.q(var_20c) << 5) + *r13
                                zmm0.d = zmm5.q.d f* *rax_55
                                zmm1.d = rax_55[1].d f* zmm5.d
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_36)
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_36 + 4)
                                *(rbx_4 + rcx_36) = zmm0.d
                                *(rbx_4 + rcx_36 + 4) = zmm1.d
                                zmm0.d = zmm5.q.d f* rax_55[2]
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_36 + 8)
                                zmm2 = rax_55[3] f* zmm5.d f+ *(rbx_4 + rcx_36 + 0xc)
                                *(rbx_4 + rcx_36 + 8) = zmm0.d
                                *(rbx_4 + rcx_36 + 0xc) = zmm2
                                zmm0.d = zmm5.q.d f* rax_55[4]
                                zmm2 = rax_55[6]
                                zmm3 = rax_55[7]
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_36 + 0x10)
                                zmm1.d = rax_55[5].d f* zmm5.d
                                int32_t* rax_58 = (sx.q(var_240_1.d) << 5) + *r13
                                *(rbx_4 + rcx_36 + 0x10) = zmm0.d
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_36 + 0x14)
                                *(rbx_4 + rcx_36 + 0x14) = zmm1.d
                                *(rbx_4 + rcx_36 + 0x18) =
                                    zmm2 f* zmm5.d f+ *(rbx_4 + rcx_36 + 0x18)
                                *(rbx_4 + rcx_36 + 0x1c) =
                                    zmm3 f* zmm5.d f+ *(rbx_4 + rcx_36 + 0x1c)
                                rcx_37 = *arg4
                                zmm0.d = zmm6.q.d f* *rax_58
                                rdx = zx.q(var_274)
                                r9_1 = r8_2
                                r10_1 = r9
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_37)
                                r11_1 = var_238_1
                                zmm1.d = rax_58[1].d f* zmm6.d
                                *(rbx_4 + rcx_37) = zmm0.d
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_37 + 4)
                                *(rbx_4 + rcx_37 + 4) = zmm1.d
                                zmm0.d = zmm6.q.d f* rax_58[2]
                                zmm1.d = zmm6.d f* rax_58[3]
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_37 + 8)
                                zmm1.d = zmm1.d f+ *(rbx_4 + rcx_37 + 0xc)
                                *(rbx_4 + rcx_37 + 8) = zmm0.d
                                *(rbx_4 + rcx_37 + 0xc) = zmm1.d
                                zmm0.d = zmm6.q.d f* rax_58[4]
                                zmm1 = rax_58[6]
                                zmm0.d = zmm0.d f+ *(rbx_4 + rcx_37 + 0x10)
                                zmm3 = zmm6.d f* rax_58[7]
                                zmm2 = rax_58[5] f* zmm6.d
                                *(rbx_4 + rcx_37 + 0x10) = zmm0.d
                                zmm6.d = zmm6.d f* zmm1.d
                                *(rbx_4 + rcx_37 + 0x14) = zmm2 f+ *(rbx_4 + rcx_37 + 0x14)
                                zmm6.d = zmm6.d f+ *(rbx_4 + rcx_37 + 0x18)
                                *(rbx_4 + rcx_37 + 0x18) = zmm6.d
                            
                            rsi_5 += 1
                            r15_1 = &r15_1[1]
                            r12_4 = &r12_4[1]
                            *(rbx_4 + rcx_37 + 0x1c) = zmm3 f+ *(rbx_4 + rcx_37 + 0x1c)
                            rbx = var_258
                        while (rsi_5 s< r11_1)
                        
                        rdi = var_228
                    
                    r15 = var_268
                else
                    int32_t var_1d0_1 = rdx.d
                    int64_t rdx_1 = sx.q(var_270_1)
                    int32_t var_1cc_1 = r8_2.d
                    void* r8_3 = var_1e0
                    void* var_1b8_1 = var_138
                    int64_t rax_22 = sx.q(*(var_250_1 + *(var_260 + 0x150)))
                    int32_t i_4 = rax_22.d
                    void* rdi_1 = var_138 + (rax_22 << 2)
                    void* var_1b0_1 = rdi_1
                    int32_t var_244
                    int32_t* var_1c0 = &var_244
                    int64_t var_1a8_1 = 0
                    int32_t var_1a0_1 = 0
                    char var_19c_1 = 0
                    int32_t var_1c8_1 = *(*(r8_3 + 0x150) + (rdx_1 << 2))
                    int32_t var_1c4_1 = *(*(r8_3 + 0x108) + (rdx_1 << 2))
                    zmm7, zmm8, zmm10 = sub_140996b60(&var_248, &var_1e0, &var_1c0, 
                        zx.d(*(*(var_260 + 0x1b0) + var_218_1)) u>> 7 & 0xf, 
                        zx.d(*(*(r12 + 0x1b0) + (r9_1 << 1))) u>> 7 & 0xf)
                    int64_t rax_28 = *arg4
                    int64_t r12_2 = sx.q(*r12_1)
                    r15 = var_268
                    int64_t rbx_2 = sx.q(*r15_1) << 5
                    *(rbx_2 + rax_28 + 8) = 0
                    *(rbx_2 + rax_28) = *(rbx_2 + rax_28 + 8)
                    *(rbx_2 + rax_28 + 0x10) = zx.o(0)
                    
                    if (var_1a0_1 s> 0)
                        int32_t* rdx_4 = *(var_260 + 0x108)
                        int32_t* r9_5 = *(var_260 + 0x120) + (sx.q(*(rdx_4 + var_250_1 + 4)) << 2)
                        int32_t i_5 = *(rdx_4 + var_250_1)
                        
                        if (i_5 s> 0)
                            void* rdi_2 = rdi_1 - r9_5
                            uint64_t i_3 = zx.q(i_5)
                            uint64_t i
                            
                            do
                                int64_t r8_6 = *arg4
                                zmm5 = *(rdi_2 + r9_5)
                                int64_t rcx_20 = sx.q(*r9_5)
                                r9_5 = &r9_5[1]
                                int32_t* rcx_23 = (sx.q(*(*(var_228 + 0x60)
                                    + (sx.q(*(*(r15 + 0xa8) + (rcx_20 << 2))) << 2))) << 5) + r8_6
                                zmm0.d = zmm5.q.d f* *rcx_23
                                zmm1.d = zmm5.d f* rcx_23[1]
                                zmm0.d = zmm0.d f+ *(rbx_2 + r8_6)
                                zmm1.d = zmm1.d f+ *(rbx_2 + r8_6 + 4)
                                *(rbx_2 + r8_6) = zmm0.d
                                *(rbx_2 + r8_6 + 4) = zmm1.d
                                zmm0.d = zmm5.q.d f* rcx_23[2]
                                zmm1.d = zmm5.d f* rcx_23[3]
                                zmm0.d = zmm0.d f+ *(rbx_2 + r8_6 + 8)
                                zmm1.d = zmm1.d f+ *(rbx_2 + r8_6 + 0xc)
                                *(rbx_2 + r8_6 + 8) = zmm0.d
                                *(rbx_2 + r8_6 + 0xc) = zmm1.d
                                zmm0.d = zmm5.q.d f* rcx_23[4]
                                zmm3 = rcx_23[6]
                                zmm4 = rcx_23[7]
                                zmm1.d = zmm5.d f* rcx_23[5]
                                zmm0.d = zmm0.d f+ *(rbx_2 + r8_6 + 0x10)
                                *(rbx_2 + r8_6 + 0x10) = zmm0.d
                                zmm0.d = zmm5.q.d f* zmm3
                                zmm5.d = zmm5.d f* zmm4
                                zmm1.d = zmm1.d f+ *(rbx_2 + r8_6 + 0x14)
                                *(rbx_2 + r8_6 + 0x14) = zmm1.d
                                zmm0.d = zmm0.d f+ *(rbx_2 + r8_6 + 0x18)
                                *(rbx_2 + r8_6 + 0x18) = zmm0.d
                                zmm5.d = zmm5.d f+ *(rbx_2 + r8_6 + 0x1c)
                                *(rbx_2 + r8_6 + 0x1c) = zmm5.d
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                    
                    if (var_1a8_1:4.d s> 0)
                        sub_1429d1590(r9, var_274, var_198)
                        
                        if (i_4 s> 0)
                            int128_t* rdx_7 = nullptr
                            uint64_t i_2 = zx.q(i_4)
                            uint64_t i_1
                            
                            do
                                zmm5 = *(rdx_7 + var_138)
                                int64_t rcx_25 = sx.q(*(var_198 + rdx_7))
                                rdx_7 += 4
                                int64_t rax_35 = *arg4
                                int32_t* rcx_27 = (rcx_25 << 5) + *r13
                                zmm0.d = zmm5.q.d f* *rcx_27
                                zmm1.d = zmm5.d f* rcx_27[1]
                                zmm0.d = zmm0.d f+ *(rbx_2 + rax_35)
                                zmm1.d = zmm1.d f+ *(rbx_2 + rax_35 + 4)
                                *(rbx_2 + rax_35) = zmm0.d
                                *(rbx_2 + rax_35 + 4) = zmm1.d
                                zmm0.d = zmm5.q.d f* rcx_27[2]
                                zmm1.d = zmm5.d f* rcx_27[3]
                                zmm0.d = zmm0.d f+ *(rbx_2 + rax_35 + 8)
                                zmm1.d = zmm1.d f+ *(rbx_2 + rax_35 + 0xc)
                                *(rbx_2 + rax_35 + 8) = zmm0.d
                                *(rbx_2 + rax_35 + 0xc) = zmm1.d
                                zmm0.d = zmm5.q.d f* rcx_27[4]
                                zmm3 = rcx_27[6]
                                zmm4 = rcx_27[7]
                                zmm1.d = zmm5.d f* rcx_27[5]
                                zmm0.d = zmm0.d f+ *(rbx_2 + rax_35 + 0x10)
                                *(rbx_2 + rax_35 + 0x10) = zmm0.d
                                zmm0.d = zmm5.q.d f* zmm3
                                zmm5.d = zmm5.d f* zmm4
                                zmm1.d = zmm1.d f+ *(rbx_2 + rax_35 + 0x14)
                                *(rbx_2 + rax_35 + 0x14) = zmm1.d
                                zmm0.d = zmm0.d f+ *(rbx_2 + rax_35 + 0x18)
                                *(rbx_2 + rax_35 + 0x18) = zmm0.d
                                zmm5.d = zmm5.d f+ *(rbx_2 + rax_35 + 0x1c)
                                *(rbx_2 + rax_35 + 0x1c) = zmm5.d
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                    
                    zmm5 = var_244
                    int64_t rcx_28 = *arg4
                    rdx = zx.q(var_274)
                    rdi = var_228
                    int32_t* rax_38 = (r12_2 << 5) + *r13
                    zmm0.d = zmm5.q.d f* *rax_38
                    zmm1.d = rax_38[1].d f* zmm5.d
                    zmm0.d = zmm0.d f+ *(rbx_2 + rcx_28)
                    zmm1.d = zmm1.d f+ *(rbx_2 + rcx_28 + 4)
                    *(rbx_2 + rcx_28) = zmm0.d
                    *(rbx_2 + rcx_28 + 4) = zmm1.d
                    zmm0.d = zmm5.q.d f* rax_38[2]
                    zmm1.d = zmm5.d f* rax_38[3]
                    zmm0.d = zmm0.d f+ *(rbx_2 + rcx_28 + 8)
                    zmm1.d = zmm1.d f+ *(rbx_2 + rcx_28 + 0xc)
                    *(rbx_2 + rcx_28 + 8) = zmm0.d
                    *(rbx_2 + rcx_28 + 0xc) = zmm1.d
                    zmm0.d = zmm5.q.d f* rax_38[4]
                    zmm3 = rax_38[6]
                    zmm0.d = zmm0.d f+ *(rbx_2 + rcx_28 + 0x10)
                    zmm4 = rax_38[7]
                    zmm1.d = zmm5.d f* rax_38[5]
                    *(rbx_2 + rcx_28 + 0x10) = zmm0.d
                    zmm1.d = zmm1.d f+ *(rbx_2 + rcx_28 + 0x14)
                    zmm0.d = zmm5.q.d f* zmm3
                    zmm5.d = zmm5.d f* zmm4
                    *(rbx_2 + rcx_28 + 0x14) = zmm1.d
                    zmm0.d = zmm0.d f+ *(rbx_2 + rcx_28 + 0x18)
                    *(rbx_2 + rcx_28 + 0x18) = zmm0.d
                    zmm5.d = zmm5.d f+ *(rbx_2 + rcx_28 + 0x1c)
                    *(rbx_2 + rcx_28 + 0x1c) = zmm5.d
                    rbx = var_258
        
        rdx = zx.q(rdx.d + 1)
        r8_1 = var_220_1 + 4
        var_270_1 += 2
        var_218_1 += 2
        var_250_1 += 8
        var_274 = rdx.d
        var_220_1 = r8_1
    while (rdx.d s< *(var_260 + 8))
    
    rax_8 = var_148

j_sub_140a74f90(rax_8)
void* var_198_1 = &var_188
int32_t var_18c_2 = 0x10
int64_t result = j_sub_140a74f90(var_a8)
__security_check_cookie(rax_1 ^ &var_2a8)
return result
