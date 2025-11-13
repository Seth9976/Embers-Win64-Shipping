// 函数: sub_142223f50
// 地址: 0x142223f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_10 = arg2[0]
uint128_t zmm9 = arg2
char arg_18 = 1
int32_t i = 0
int32_t i_1 = 0
void* rbx = **(arg1[2] + 0x40)
int32_t rdi = *(arg1[0x47] + 0x3c)
void* var_1a0 = rbx
int32_t var_220 = rdi

if (*(arg1 + 0x1dc) s<= 0)
    return 1

int64_t r12_1 = 0
float zmm6[0x4] = 0x3e800000
uint128_t zmm7 = 0x40400000
float zmm8[0x4] = zx.o(0)
uint128_t zmm10 = 0x3f800000
uint128_t zmm11 = 0x322bcc77
float zmm12[0x4] = 0x7fffffff
uint128_t zmm13
uint128_t var_c8_1 = zmm13
int128_t zmm14
int128_t var_d8_1 = zmm14
float zmm15[0x4]
float var_e8_1[0x4] = zmm15
int64_t var_198_1 = 0

do
    void* rax_2 = arg1[0x48]
    int32_t r14_1 = 0
    int32_t var_208_1 = 0
    int32_t* var_238
    int32_t* var_230
    uint32_t var_228
    float var_218
    float var_210
    float var_200
    float var_1f8
    int64_t var_1f0
    float var_1e8
    float var_1e0
    uint64_t var_1d8
    int32_t var_1d0
    int32_t var_1c8
    int32_t* var_1c0
    int32_t arg_8
    
    if (rax_2 != 0 && (*(rax_2 + 0x28) & 0x80) != 0)
        int64_t rax_3 = *arg1
        var_238 = &arg_18
        arg_8 = 0
        arg_18.d = 0
        char rax_4 = (*(rax_3 + 0x258))(arg1, zmm9, zx.q(i), &arg_8, var_238, var_230, var_228, 
            var_220, var_218, var_210, 0, var_200, var_1f8, var_1f0, var_1e8, var_1e0, var_1d8, 
            var_1d0, var_1c8, var_1c0)
        r14_1 = arg_8
        arg_18 = rax_4
        var_208_1 = r14_1
    
    uint64_t r8
    
    if (rdi s> 0)
        int32_t rcx_1 = arg1[0x23].d
        r8 = zx.q(rcx_1 - rdi + r14_1)
        
        if (r8.d s> 0)
            (*(*arg1 + 0x228))(arg1, zx.q(i), r8)
            rcx_1 = arg1[0x23].d
        
        if (r14_1 + rcx_1 s> rdi)
            r14_1 = rdi - rcx_1
            
            if (rdi - rcx_1 s< 0)
                r14_1 = 0
            
            var_208_1 = r14_1
    
    int32_t rcx_4 = arg1[0x23].d + r14_1
    char rax_8
    uint128_t zmm0
    
    if (rcx_4 s>= arg1[0x24].d)
        void* rax_7 = *arg1
        zmm0 = _mm_cvtepi32_ps(zx.o(rcx_4))
        int64_t r9_2 = *(rax_7 + 0x18)
        _mm_sqrt_ss(zx.o(0)[0], zmm0.d)
        zmm6[0]
        rax_8 = r9_2()
    
    if (rcx_4 s< arg1[0x24].d || rax_8 != 0)
        r8 = 0
        var_1d8 = 0
        int32_t* rdi_1 = nullptr
        var_1c0 = nullptr
        int32_t r10_1 = 0
        int32_t r15_1 = arg1[0x23].d
        uint32_t var_204_1 = 0xffffffff
        
        if (r15_1 s> 0)
            int16_t* r9_3 = arg1[0x1f]
            
            do
                uint32_t r11_1 = zx.d(*r9_3)
                uint64_t rcx_6 = sx.q(*(arg1 + 0x114) * r11_1) + arg1[0x1e]
                int32_t* rdx_3 = sx.q(arg1[6].d) + rcx_6
                
                if (rdx_3[1] == i && (*rdx_3 & 0xf0000000) == 0x40000000)
                    var_1d8 = rcx_6
                    var_204_1 = r11_1
                    r8 = rcx_6
                    rdi_1 = rdx_3
                    var_1c0 = rdx_3
                    break
                
                r10_1 += 1
                r9_3 = &r9_3[1]
            while (r10_1 s< r15_1)
        
        void* rdx_4 = arg1[0x47]
        
        if ((*(rdx_4 + 0x40) & 2) == 0
                || (*(arg1[0x66] + (r12_1 << 2))).d f>= *(arg1[0x68] + (r12_1 << 2)))
            int64_t rdx_7 = *(rbx + 0x58)
            zmm0 = _mm_and_ps(*(rdx_4 + 0x50), zmm12)
            arg_8.b = r8 == 0
            bool arg_20 = zmm0.d f> zmm11.d
            
            if (rdx_7 != 0)
                sub_1421b7c40(arg1, rdx_7)
                r8 = var_1d8
            
            zmm6 = arg1[0x3c].d
            var_1e0 = zmm6[0]
            
            if (r14_1 s<= 0)
                zmm6 = 0x3e800000
            else
                uint128_t zmm2
                float zmm3[0x4]
                
                if (not((*(arg1[0x3e] + (r12_1 << 2))).d f<= arg1[0x25].d))
                    int64_t rax_26 = arg1[0x4b]
                    rdx_7 = r12_1 * 3
                    int64_t rcx_14 = arg1[0x55]
                    zmm2.d = zmm10.d f/ zmm6[0]
                    zmm0.d = (*(rax_26 + (rdx_7 << 2) + 8)).d f- *(rcx_14 + (rdx_7 << 2) + 8)
                    zmm3 = *(rax_26 + (rdx_7 << 2))
                    zmm3[0] = zmm3[0] f- *(rcx_14 + (rdx_7 << 2))
                    arg2 = *(rax_26 + (rdx_7 << 2) + 4)
                    arg2[0] = arg2[0] f- *(rcx_14 + (rdx_7 << 2) + 4)
                    int64_t rcx_15 = arg1[0x5b]
                    zmm0.d = zmm0.d f* zmm2.d
                    zmm3[0] = zmm3[0] f* zmm2.d
                    int32_t var_170_1 = zmm0.d
                    arg2[0] = arg2[0] f* zmm2.d
                    *(rcx_15 + (rdx_7 << 2)) = (_mm_unpacklo_ps(zmm3, arg2[0].q)).q
                    *(rcx_15 + (rdx_7 << 2) + 8) = var_170_1
                
                char rcx_16 = (*(arg1[0x47] + 0x40)).b
                uint128_t zmm4
                uint128_t zmm5
                
                if ((rcx_16 & 8) != 0 && (rcx_16 & 0x10) == 0)
                    uint64_t r11_2 = 0
                    int32_t* r13 = nullptr
                    
                    if (r8 != 0 && rdi_1 != 0)
                        uint64_t rcx_17 = r8
                        int32_t* rax_29 = rdi_1
                        
                        while (true)
                            if ((rax_29[9].b & 1) == 0)
                                r11_2 = rcx_17
                                r13 = rax_29
                                break
                            
                            int32_t rax_31 = *rax_29 & 0x3fff
                            
                            if (rax_31 == 0x3fff)
                                break
                            
                            rcx_17 = sx.q(rax_31 * *(arg1 + 0x114)) + arg1[0x1e]
                            rax_29 = sx.q(arg1[6].d) + rcx_17
                    
                    uint64_t r10_2 = 0
                    int32_t* r9_4 = nullptr
                    
                    if (r11_2 != 0)
                        if (r13 != 0)
                            uint64_t rcx_19 = r11_2
                            int32_t* rax_34 = r13
                            rdx_7.b = 0
                            
                            while (true)
                                if (rdx_7.b == 1 && (rax_34[9].b & rdx_7.b) == 0)
                                    r10_2 = rcx_19
                                    r9_4 = rax_34
                                    break
                                
                                int32_t rax_36 = *rax_34 & 0x3fff
                                
                                if (rax_36 == 0x3fff)
                                    break
                                
                                rdx_7.b = 1
                                rcx_19 = sx.q(rax_36 * *(arg1 + 0x114)) + arg1[0x1e]
                                rax_34 = sx.q(arg1[6].d) + rcx_19
                        
                        if (r10_2 != 0)
                            int64_t rax_39 = arg1[0x4b]
                            int64_t rdx_8 = r12_1 * 3
                            zmm5 = r9_4[3]
                            zmm6[0] = zmm6[0] f- zmm5.d
                            zmm3 = *(rax_39 + (rdx_8 << 2) + 4)
                            zmm4 = *(rax_39 + (rdx_8 << 2) + 8)
                            bool cond:2_1 = zmm6[0] f<= zmm11.d
                            zmm2.d = (*(rax_39 + (rdx_8 << 2))).d f- arg1[0x35].d
                            zmm3[0] = zmm3[0] f- *(arg1 + 0x1ac)
                            zmm4.d = zmm4.d f- arg1[0x36].d
                            
                            if (cond:2_1)
                                zmm2 = data_143dbb1f8
                                zmm3 = data_143dbb1fc
                                zmm4 = data_143dbb200
                            else
                                zmm2.d = zmm2.d f- *(r10_2 + 0x10)
                                zmm3[0] = zmm3[0] f- *(r10_2 + 0x14)
                                zmm4.d = zmm4.d f- *(r10_2 + 0x18)
                                zmm0.d = zmm10.d f/ zmm6[0]
                                zmm2.d = zmm2.d f* zmm0.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm4.d = zmm4.d f* zmm0.d
                            
                            int32_t r8_4 = r13[6]
                            var_1c8 = zmm4.d
                            float var_1cc_1 = zmm3[0]
                            var_1d0 = zmm2.d
                            
                            if (r8_4 s> 0)
                                arg2 = r13[3]
                                zmm12 = zmm2
                                int32_t rax_40 = *r9_4
                                arg2[0] = arg2[0] f- zmm5.d
                                int64_t rdx_9 = sx.q(arg1[6].d)
                                int32_t rax_43 = (rax_40 s>> 0xe & 0x3fff) * *(arg1 + 0x114)
                                int32_t r8_5 = 1
                                zmm0 = _mm_cvtepi32_ps(zx.o(r8_4))
                                uint64_t* rcx_22 = sx.q(rax_43) + arg1[0x1e]
                                zmm5.d = zmm10.d f/ zmm0.d
                                void* rdx_10 = rdx_9 + rcx_22
                                zmm12[0] = zmm12[0] * arg2[0]
                                zmm0.d = zmm3.d f* arg2[0]
                                var_210 = zmm5.d
                                var_228 = zmm12[0]
                                int32_t var_214_1 = zmm0.d
                                zmm0.d = zmm4.d f* arg2[0]
                                arg2[0] = arg2[0] + arg2[0]
                                int32_t var_218_1 = zmm0.d
                                zmm0.d = arg2.d f* zmm2.d
                                int32_t var_1f8_1 = zmm0.d
                                zmm0.d = arg2.d f* zmm3[0]
                                arg2[0] = arg2[0] f* zmm4.d
                                int32_t var_1fc_1 = zmm0.d
                                var_200 = arg2[0]
                                int32_t r15_2
                                
                                do
                                    zmm9 = *(r10_2 + 0x10)
                                    zmm15 = zx.o(0)
                                    zmm14 = *(r11_2 + 0x10)
                                    zmm8 = r9_4[0xc]
                                    zmm11 = *(r10_2 + 0x18)
                                    zmm15[0] = float.s(r8_5)
                                    zmm15[0] = zmm15[0] f* zmm5.d
                                    zmm15[0] = zmm15[0] * zmm15[0]
                                    float var_1f4_1 = zmm15[0]
                                    zmm4.d = zmm15.d f* zmm15[0]
                                    zmm15[0] = zmm15[0] f* zmm7.d
                                    zmm7 = r9_4[0xb]
                                    zmm0.d = zmm15.d f+ zmm15[0]
                                    zmm5.d = zmm4.d f+ zmm4.d
                                    zmm2.d = zmm4.d f- zmm15[0]
                                    zmm6 = r9_4[0xa]
                                    zmm4.d = zmm4.d f- zmm0.d
                                    zmm15[0] = zmm15[0] f- zmm5.d
                                    zmm5.d = zmm5.d f- zmm15[0]
                                    arg2 = zmm2
                                    arg2[0] = arg2[0] * zmm12[0]
                                    zmm4.d = zmm4.d f+ zmm15[0]
                                    zmm5.d = zmm5.d f+ zmm10.d
                                    zmm10 = *(r10_2 + 0x14)
                                    zmm0.d = zmm4.d f* zmm6[0]
                                    zmm13 = zmm5
                                    zmm12 = zmm5
                                    zmm5.d = zmm5.d f* zmm11.d
                                    zmm13.d = zmm13.d f* zmm9.d
                                    zmm12[0] = zmm12[0] f* zmm10.d
                                    zmm13.d = zmm13.d f+ zmm0.d
                                    zmm0.d = zmm15.d f* zmm14.d
                                    zmm13.d = zmm13.d f+ arg2[0]
                                    arg2 = zmm2
                                    arg2[0] = arg2[0] f* var_214_1
                                    zmm2.d = zmm2.d f* var_218_1
                                    zmm13.d = zmm13.d f+ zmm0.d
                                    zmm0.d = zmm4.d f* zmm7.d
                                    zmm4.d = zmm4.d f* zmm8[0]
                                    zmm12[0] = zmm12[0] f+ zmm0.d
                                    zmm0.d = zmm15.d f* *(r11_2 + 0x14)
                                    zmm5.d = zmm5.d f+ zmm4.d
                                    zmm4.d = var_214_1.d f+ zmm7.d
                                    zmm12[0] = zmm12[0] + arg2[0]
                                    arg2 = var_228
                                    arg2[0] = arg2[0] + zmm6[0]
                                    zmm5.d = zmm5.d f+ zmm2.d
                                    zmm2 = *(r11_2 + 0x18)
                                    zmm4.d = zmm4.d f* 3f
                                    zmm15[0] = zmm15[0] f* zmm2.d
                                    zmm12[0] = zmm12[0] f+ zmm0.d
                                    arg2[0] = arg2[0] * 3f
                                    zmm5.d = zmm5.d f+ zmm15[0]
                                    zmm0.d = zmm9.d f* 6f
                                    zmm14.d = zmm14.d f* 6f
                                    arg2[0] = arg2[0] f+ zmm0.d
                                    int32_t var_160_1 = zmm5.d
                                    zmm0.d = zmm10.d f* 6f
                                    zmm5.d = (*(r11_2 + 0x14)).d f* 6f
                                    zmm2.d = zmm2.d f* 6f
                                    arg2[0] = arg2[0] f- zmm14.d
                                    zmm4.d = zmm4.d f+ zmm0.d
                                    zmm8[0] = zmm8[0] f+ var_218_1
                                    zmm4.d = zmm4.d f- zmm5.d
                                    int32_t rax_44 = r9_4[0xc]
                                    zmm0.d = zmm11.d f* 6f
                                    zmm8[0] = zmm8[0] * 3f
                                    int32_t rax_45 = rcx_22[3].d
                                    zmm8[0] = zmm8[0] f+ zmm0.d
                                    zmm6[0] = zmm6[0] * 4f
                                    zmm7.d = zmm7.d f* 4f
                                    zmm8[0] = zmm8[0] * 4f
                                    zmm8[0] = zmm8[0] f- zmm2.d
                                    zmm9.d = zmm9.d f* -6f
                                    zmm10.d = zmm10.d f* -6f
                                    zmm11.d = zmm11.d f* -6f
                                    zmm9.d = zmm9.d f- zmm6[0]
                                    zmm6 = zmm2
                                    zmm10.d = zmm10.d f- zmm7.d
                                    zmm7 = var_1f4_1
                                    zmm11.d = zmm11.d f- zmm8[0]
                                    zmm9.d = zmm9.d f- var_1f8_1
                                    zmm0.d = zmm7.d f* arg2[0]
                                    arg2 = zmm7
                                    zmm10.d = zmm10.d f- var_1fc_1
                                    zmm11.d = zmm11.d f- var_200
                                    arg2[0] = arg2[0] f* zmm4.d
                                    zmm14.d = zmm14.d f+ zmm9.d
                                    zmm4 = zx.o(*(r9_4 + 0x28))
                                    zmm7.d = zmm7.d f* zmm8[0]
                                    zmm5.d = zmm5.d f+ zmm10.d
                                    zmm3 = r9_4[0xb]
                                    zmm6[0] = zmm6[0] f+ zmm11.d
                                    zmm14.d = zmm14.d f* zmm15[0]
                                    zmm5.d = zmm5.d f* zmm15[0]
                                    zmm14.d = zmm14.d f+ zmm0.d
                                    zmm6[0] = zmm6[0] * zmm15[0]
                                    zmm5.d = zmm5.d f+ arg2[0]
                                    *rcx_22 = rcx_22[2]
                                    rcx_22[1].d = rax_45
                                    zmm6[0] = zmm6[0] f+ zmm7.d
                                    zmm4.d = zmm4.d f+ zmm14.d
                                    rcx_22[2] = (_mm_unpacklo_ps(zmm13, zmm12[0].q)).q
                                    zmm3[0] = zmm3[0] f+ zmm5.d
                                    zmm5 = var_210
                                    rcx_22[3].d = var_160_1
                                    zmm2.d = rax_44.d f+ zmm6[0]
                                    zmm4.d = zmm4.d f* zmm5.d
                                    zmm3[0] = zmm3[0] f* zmm5.d
                                    zmm2.d = zmm2.d f* zmm5.d
                                    *(rdx_10 + 0x28) = (_mm_unpacklo_ps(zmm4, zmm3[0].q)).q
                                    *(rdx_10 + 0x30) = zmm2.d
                                    r15_2 = r13[6]
                                    
                                    if (r8_5 s< r15_2)
                                        rcx_22 = sx.q((*rdx_10 s>> 0xe & 0x3fff) * *(arg1 + 0x114))
                                            + arg1[0x1e]
                                        rdx_10 = sx.q(arg1[6].d) + rcx_22
                                    
                                    zmm10 = 0x3f800000
                                    r8_5 += 1
                                    zmm12 = var_228
                                    zmm7 = 0x40400000
                                while (r8_5 s<= r15_2)
                                zmm6 = var_1e0
                                rdx_8 = r12_1 * 3
                                zmm9 = arg_10
                                zmm8 = zx.o(0)
                            
                            int64_t rcx_24 = arg1[0x5b]
                            *(rcx_24 + (rdx_8 << 2)) = var_1d0.q
                            *(rcx_24 + (rdx_8 << 2) + 8) = var_1c8
                
                arg2 = zmm10
                var_1f0 = 0
                var_1e8 = 1f
                int32_t var_214_2 = 0
                int32_t r13_1 = 0
                zmm0.d = zmm6.d f- *(arg1[0x3e] + (r12_1 << 2))
                void* rax_54 = arg1[3]
                int32_t var_21c_1 = zmm0.d
                zmm0 = _mm_cvtepi32_ps(zx.o(r14_1))
                arg2[0] = arg2[0] f/ zmm0.d
                var_218 = arg2[0]
                zmm0.d = arg2.d f* zmm9.d
                var_1f8 = arg2[0]
                int32_t var_1f4_2 = zmm0.d
                uint128_t var_128_1 = *(rax_54 + 0x1c0)
                uint128_t var_118_1 = *(rax_54 + 0x1d0)
                uint128_t var_108_1 = *(rax_54 + 0x1e0)
                zmm0 = arg2
                
                if (r14_1 s> 0)
                    int64_t r9_6 = sx.q(i_1) << 4
                    int64_t var_190_1 = r9_6
                    int32_t rdx_21
                    
                    do
                        int64_t rdi_2 = r12_1 * 3
                        
                        if (zmm0.d f>= zmm8[0])
                            zmm2 = _mm_min_ss(zmm0.d, zmm10.d)
                        else
                            zmm2 = zmm8
                        
                        int64_t rcx_25 = arg1[0x5b]
                        zmm15 = zmm2
                        int64_t r8_6 = arg1[0x51]
                        int64_t rdx_12 = arg1[0x4b]
                        int64_t rax_56 = arg1[0x55]
                        zmm12 = *(rcx_25 + (rdi_2 << 2) + 4)
                        zmm11 = *(r8_6 + (rdi_2 << 2) + 4)
                        zmm5 = *(rdx_12 + (rdi_2 << 2) + 4)
                        zmm13 = *(r8_6 + (rdi_2 << 2) + 8)
                        zmm8 = *(rdx_12 + (rdi_2 << 2) + 8)
                        zmm3 = *(rax_56 + (rdi_2 << 2) + 4)
                        zmm14 = *(rcx_25 + (rdi_2 << 2) + 8)
                        zmm12[0] = zmm12[0] f* var_21c_1
                        zmm4 = *(rax_56 + (rdi_2 << 2) + 8)
                        zmm11.d = zmm11.d f* var_21c_1
                        zmm15[0] = zmm15[0] f* zmm2.d
                        int32_t var_228_1 = zmm2.d
                        zmm9.d = zmm2.d f* zmm15[0]
                        zmm15[0] = zmm15[0] f* zmm7.d
                        zmm0.d = zmm15.d f+ zmm15[0]
                        zmm7.d = zmm9.d f+ zmm9.d
                        zmm6 = zmm9
                        zmm6[0] = zmm6[0] - zmm15[0]
                        zmm9.d = zmm9.d f- zmm0.d
                        zmm10.d = zmm15.d f- zmm7.d
                        zmm7.d = zmm7.d f- zmm15[0]
                        zmm11.d = zmm11.d f* zmm6[0]
                        arg2 = var_21c_1
                        zmm9.d = zmm9.d f+ zmm2.d
                        zmm2.d = arg2.d f* *(rcx_25 + (rdi_2 << 2))
                        arg2[0] = arg2[0] f* *(r8_6 + (rdi_2 << 2))
                        zmm7.d = zmm7.d f+ 1f
                        zmm2.d = zmm2.d f* zmm9.d
                        int32_t* r8_8 = arg1[0x4d] + r9_6
                        zmm12[0] = zmm12[0] f* zmm9.d
                        zmm3[0] = zmm3[0] f* zmm7.d
                        zmm0.d = zmm7.d f* *(rax_56 + (rdi_2 << 2))
                        zmm12[0] = zmm12[0] + zmm3[0]
                        arg2[0] = arg2[0] * zmm6[0]
                        zmm2.d = zmm2.d f+ zmm0.d
                        zmm4.d = zmm4.d f* zmm7.d
                        zmm0.d = zmm10.d f* *(rdx_12 + (rdi_2 << 2))
                        zmm12[0] = zmm12[0] f+ zmm11.d
                        zmm2.d = zmm2.d f+ arg2[0]
                        int128_t* rdx_14 = arg1[0x57] + r9_6
                        zmm2.d = zmm2.d f+ zmm0.d
                        zmm0.d = zmm10.d f* zmm5.d
                        zmm10.d = zmm10.d f* zmm8[0]
                        zmm12[0] = zmm12[0] f+ zmm0.d
                        int32_t var_1b8 = zmm2.d
                        float var_1b4_1 = zmm12[0]
                        zmm12 = var_21c_1
                        zmm14.d = zmm14.d f* zmm12[0]
                        zmm13.d = zmm13.d f* zmm12[0]
                        zmm14.d = zmm14.d f* zmm9.d
                        zmm13.d = zmm13.d f* zmm6[0]
                        zmm14.d = zmm14.d f+ zmm4.d
                        zmm14.d = zmm14.d f+ zmm13.d
                        zmm14.d = zmm14.d f+ zmm10.d
                        int32_t var_1b0_1 = zmm14.d
                        float var_f8[0x4]
                        float zmm5_1[0x4] = *sub_140ae0e60(&var_f8, rdx_14, r8_8, var_228_1)
                        float temp0_11[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                        float temp0_13[0x4] =
                            _mm_add_ps(temp0_11, _mm_shuffle_ps(temp0_11, temp0_11, 0x4e))
                        float zmm6_1[0x4] = data_143f50de0
                        int64_t rax_58 = arg1[0x51]
                        int64_t rcx_27 = arg1[0x55]
                        float temp0_15[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x39), temp0_13)
                        zmm11.d = zmm12.d f* *(rax_58 + (rdi_2 << 2))
                        zmm10.d = zmm12.d f* *(rax_58 + (rdi_2 << 2) + 4)
                        zmm9.d = zmm12.d f* *(rax_58 + (rdi_2 << 2) + 8)
                        int64_t rax_59 = arg1[0x5b]
                        float temp0_16[0x4] = _mm_mul_ps(temp0_15, zmm6_1)
                        zmm8 = zmm11
                        float temp0_17[0x4] = _mm_rsqrt_ps(temp0_15)
                        zmm11.d = zmm11.d f+ zmm11.d
                        float temp0_22[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm6_1, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_17, temp0_17), temp0_16)), 
                                temp0_17), 
                            temp0_17)
                        float temp0_24[0x4] = _mm_mul_ps(_mm_mul_ps(temp0_22, temp0_22), temp0_16)
                        zmm12[0] = zmm12[0] f* *(rax_59 + (rdi_2 << 2))
                        float temp0_25[0x4] = _mm_sub_ps(zmm6_1, temp0_24)
                        float temp0_26[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
                        zmm8[0] = zmm8[0] + zmm12[0]
                        float temp0_27[0x4] = _mm_cmpeq_ps(temp0_26, temp0_15, 2)
                        float zmm4_1[0x4] = *(rcx_27 + (rdi_2 << 2) + 4)
                        var_200 = zmm12[0]
                        zmm3 = *(rcx_27 + (rdi_2 << 2) + 8)
                        zmm8[0] = zmm8[0] * 3f
                        float temp0_28[0x4] = _mm_mul_ps(temp0_25, temp0_22)
                        zmm4_1[0] = zmm4_1[0] * 6f
                        float temp0_29[0x4] = _mm_add_ps(temp0_28, temp0_22)
                        float zmm2_1[0x4] = zmm12
                        zmm2_1[0] = zmm2_1[0] f* *(rax_59 + (rdi_2 << 2) + 8)
                        float temp0_30[0x4] = _mm_mul_ps(temp0_29, zmm5_1)
                        zmm5_1 = *(rcx_27 + (rdi_2 << 2))
                        var_210 = zmm2_1[0]
                        zmm6_1 = _mm_and_ps(temp0_30 ^ data_143f50dd0, temp0_27) ^ data_143f50dd0
                        zmm5_1[0] = zmm5_1[0] * 6f
                        float var_138_1[0x4] = zmm6_1
                        zmm6_1 = zmm12
                        zmm6_1[0] = zmm6_1[0] f* *(rax_59 + (rdi_2 << 2) + 4)
                        int64_t rax_60 = arg1[0x4b]
                        zmm8[0] = zmm8[0] + zmm5_1[0]
                        zmm3[0] = zmm3[0] * 6f
                        zmm13 = *(rax_60 + (rdi_2 << 2) + 4)
                        zmm12 = *(rax_60 + (rdi_2 << 2) + 8)
                        zmm14.d = (*(rax_60 + (rdi_2 << 2))).d f* 6f
                        zmm12[0] = zmm12[0] * 6f
                        zmm13.d = zmm13.d f* 6f
                        float var_1fc_2 = zmm6_1[0]
                        zmm8[0] = zmm8[0] f- zmm14.d
                        zmm7.d = zmm10.d f+ zmm6_1[0]
                        zmm2_1[0] = zmm2_1[0] f+ zmm9.d
                        zmm10.d = zmm10.d f+ zmm10.d
                        zmm9.d = zmm9.d f+ zmm9.d
                        zmm7.d = zmm7.d f* 3f
                        zmm2_1[0] = zmm2_1[0] * 3f
                        zmm7.d = zmm7.d f+ zmm4_1[0]
                        zmm2_1[0] = zmm2_1[0] + zmm3[0]
                        zmm7.d = zmm7.d f- zmm13.d
                        zmm2_1[0] = zmm2_1[0] - zmm12[0]
                        zmm5_1[0] = zmm5_1[0] * -6f
                        void* rax_61 = arg1[0x47]
                        zmm4_1[0] = zmm4_1[0] * -6f
                        zmm3[0] = zmm3[0] * -6f
                        char rcx_28 = *(rax_61 + 0x44)
                        float zmm0_1[0x4] = var_200
                        zmm0_1[0] = zmm0_1[0] * 4f
                        float zmm1[0x4] = var_1fc_2
                        zmm1[0] = zmm1[0] * 4f
                        zmm2_1[0] = zmm2_1[0] * 4f
                        zmm5_1[0] = zmm5_1[0] - zmm0_1[0]
                        zmm8[0] = zmm8[0] * zmm15[0]
                        zmm4_1[0] = zmm4_1[0] - zmm1[0]
                        zmm7.d = zmm7.d f* zmm15[0]
                        zmm3[0] = zmm3[0] - zmm2_1[0]
                        zmm2_1[0] = zmm2_1[0] * zmm15[0]
                        zmm5_1[0] = zmm5_1[0] f- zmm11.d
                        zmm15 = var_200
                        zmm4_1[0] = zmm4_1[0] f- zmm10.d
                        zmm3[0] = zmm3[0] f- zmm9.d
                        zmm9 = var_228_1
                        zmm14.d = zmm14.d f+ zmm5_1[0]
                        zmm13.d = zmm13.d f+ zmm4_1[0]
                        zmm12[0] = zmm12[0] + zmm3[0]
                        zmm14.d = zmm14.d f* zmm9.d
                        zmm13.d = zmm13.d f* zmm9.d
                        zmm12[0] = zmm12[0] f* zmm9.d
                        zmm14.d = zmm14.d f+ zmm8[0]
                        zmm13.d = zmm13.d f+ zmm7.d
                        zmm12[0] = zmm12[0] + zmm2_1[0]
                        zmm15[0] = zmm15[0] f+ zmm14.d
                        zmm14.d = var_1fc_2.d f+ zmm13.d
                        zmm11.d = var_210.d f+ zmm12[0]
                        
                        if (rcx_28 == 1)
                            int64_t rax_62 = arg1[0x59]
                            int64_t rcx_29 = arg1[0x4f]
                            zmm4_1 = *(rcx_29 + (rdi_2 << 2))
                            zmm4_1[0] = zmm4_1[0] f- *(rax_62 + (rdi_2 << 2))
                            zmm2_1 = *(rcx_29 + (rdi_2 << 2) + 4)
                            zmm2_1[0] = zmm2_1[0] f- *(rax_62 + (rdi_2 << 2) + 4)
                            zmm0_1 = *(rcx_29 + (rdi_2 << 2) + 8)
                            zmm0_1[0] = zmm0_1[0] f- *(rax_62 + (rdi_2 << 2) + 8)
                            zmm4_1[0] = zmm4_1[0] f* zmm9.d
                            zmm2_1[0] = zmm2_1[0] f* zmm9.d
                            zmm4_1[0] = zmm4_1[0] f+ *(rax_62 + (rdi_2 << 2))
                            zmm0_1[0] = zmm0_1[0] f* zmm9.d
                            zmm2_1[0] = zmm2_1[0] f+ *(rax_62 + (rdi_2 << 2) + 4)
                            zmm0_1[0] = zmm0_1[0] f+ *(rax_62 + (rdi_2 << 2) + 8)
                            var_1f0.d = zmm4_1[0]
                            var_1f0:4.d = zmm2_1[0]
                            var_1e8 = zmm0_1[0]
                        else if (rcx_28 == 2)
                            var_1f0 = 0
                            var_1e8 = 1f
                        
                        zmm4_1 = var_1b8
                        zmm8 = zx.o(0)
                        zmm3 = data_14399f668
                        uint32_t rcx_31 = zx.d(*(arg1[0x1f] + (sx.q(arg1[0x23].d) << 1)))
                        int64_t r14_3 = sx.q(arg1[6].d)
                        zmm6_1 = arg_10
                        zmm10 = 0x3f800000
                        int32_t rax_65 = *(arg1 + 0x114) * rcx_31
                        float temp0_32[0x4] = _mm_unpacklo_ps(var_1b4_1, 0)
                        zmm7.d = 1f f- zmm9.d
                        zmm9.d = zmm9.d f* var_21c_1
                        var_228 = rcx_31
                        float temp0_33[0x4] = _mm_cvtepi32_ps(zx.o(r13_1))
                        uint64_t r15_4 = sx.q(rax_65) + arg1[0x1e]
                        void* rax_66 = arg1[3]
                        int32_t* r14_4 = r14_3 + r15_4
                        zmm7.d = zmm7.d f* var_21c_1
                        temp0_33[0] = temp0_33[0] f* var_1f4_2
                        zmm6_1[0] = zmm6_1[0] - temp0_33[0]
                        float temp0_34[0x4] = _mm_unpacklo_ps(zmm4_1, var_1b0_1[0].q)
                        zmm0_1 = data_14399f670
                        float temp0_35[0x4] = _mm_unpacklo_ps(temp0_34, temp0_32[0].q)
                        zmm2_1 = data_14399f66c
                        *(rax_66 + 0x14c) |= 1
                        *(rax_66 + 0x1e0) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1[0].q), 
                            _mm_unpacklo_ps(zmm2_1, 0)[0].q)
                        *(rax_66 + 0x1c0) = var_138_1
                        *(rax_66 + 0x1d0) = temp0_35
                        (*(*arg1 + 0xc8))(arg1, r15_4, &var_1b8, &data_143dbb1f8, var_238, var_230, 
                            var_228, var_220, var_218, var_210, var_208_1, var_200, var_1f8, 
                            var_1f0, var_1e8, var_1e0, var_1d8, var_1d0, var_1c8, var_1c0)
                        int32_t j = 0
                        
                        if (*(rbx + 0x78) s> 0)
                            int64_t* r12_2 = nullptr
                            
                            do
                                int64_t* rdi_3 = *(r12_2 + *(rbx + 0x70))
                                
                                if (rdi_3 != 0 && rdi_3[5].b s< 0)
                                    var_238 = r15_4
                                    (*(*rdi_3 + 0x268))(rdi_3, arg1, 
                                        zx.q(sub_1421b7be0(arg1, rdi_3)), zmm6_1, var_238)
                                    rbx = var_1a0
                                
                                j += 1
                                r12_2 = &r12_2[1]
                            while (j s< *(rbx + 0x78))
                            
                            r12_1 = var_198_1
                        
                        int64_t* rcx_35 = *(rbx + 0x48)
                        
                        if (rcx_35 != 0)
                            var_238 = r15_4
                            (*(*rcx_35 + 0x268))(rcx_35, arg1, zx.q(arg1[6].d), zmm6_1, var_238)
                        
                        if (data_143a2f090 == 0)
                            zmm2_1 = 0x3f800000
                            float temp0_39[0x4] = _mm_cvtepi32_ps(zx.o(var_214_2 + 1))
                            temp0_39[0] = temp0_39[0] * var_218
                            zmm2_1[0] = 1f - temp0_39[0]
                        else
                            zmm2_1 = zx.o(0)
                        
                        (*(*arg1 + 0xd0))(arg1, r15_4, zmm2_1, zmm6_1, var_238)
                        var_230 = r15_4 + 0x50
                        var_238 = r15_4 + 0x1c
                        zmm6 = sub_142217b70(arg1, i_1, r15_4, arg_8.b, zmm6_1, var_238, var_230)
                        int32_t rax_73 = *(r15_4 + 0x50)
                        zmm6[0] = zmm6[0] f* *(r15_4 + 0x1c)
                        rdx_21 = var_208_1
                        zmm2 = var_218
                        *(r15_4 + 0x54) = rax_73
                        int32_t rax_74 = *(r15_4 + 0x58)
                        *(r15_4 + 0x40) = *(r15_4 + 0x50)
                        *(r15_4 + 0x48) = rax_74
                        *(r15_4 + 0xc) = zmm6[0]
                        void* rax_75 = arg1[3]
                        zmm6 = var_1e0
                        zmm15[0] = zmm15[0] f* zmm2.d
                        *(rax_75 + 0x14c) |= 1
                        *(rax_75 + 0x1c0) = var_128_1
                        *(rax_75 + 0x1d0) = var_118_1
                        *(rax_75 + 0x1e0) = var_108_1
                        int32_t rcx_38 = r14_4[9]
                        *r14_4 |= 0xfffffff
                        int32_t rcx_39 = rcx_38 | 2
                        r14_4[1] = i_1
                        zmm14.d = zmm14.d f* zmm2.d
                        r14_4[6] = rdx_21
                        zmm11.d = zmm11.d f* zmm2.d
                        *(r14_4 + 0x28) = (_mm_unpacklo_ps(zmm15, zmm14.q)).q
                        zmm0.d = zmm6.d f- zmm7.d
                        r14_4[0xc] = zmm11.d
                        r14_4[4] = zmm9.d
                        r14_4[3] = zmm0.d
                        *(r14_4 + 0x34) = var_1f0
                        r14_4[0xf] = var_1e8
                        int32_t rcx_40 = rcx_39 & 0xfffffffe
                        
                        if (var_214_2 != r14_1 - 1)
                            rcx_40 = rcx_39 | 1
                        
                        bool cond:4_1 = arg_8.b == 0
                        r14_4[9] = rcx_40
                        uint32_t r9_8
                        
                        if (cond:4_1)
                            if (var_1d8 != 0)
                                int32_t rcx_41 = *var_1c0
                                int32_t rax_89
                                
                                if ((rcx_41 & 0xf0000000) != 0x40000000
                                        || (rcx_41 & 0x3fff) != 0x3fff)
                                    r9_8 = var_228
                                    rax_89 = ((r9_8 & 0x3fff) | 0x8000) << 0xe | (rcx_41 & 0x3fff)
                                else
                                    r9_8 = var_228
                                    rax_89 = (r9_8 & 0x3fff) << 0xe | 0x80003fff
                                
                                *var_1c0 = rax_89
                                rdx_21 = var_208_1
                                *r14_4 = (((*r14_4 & 0xffffc000) | (var_204_1 & 0x3fff) | 0xfffc000)
                                    & 0xfffffff) | 0x40000000
                                goto label_142225130
                            
                            rdi_1 = var_1c0
                        else
                            *r14_4 &= 0xfffffff
                            *r14_4 |= 0x40000000
                            r9_8 = var_228
                            arg_8.b = 0
                            *(arg1[0x44] + (r12_1 << 2)) = 0
                            r14_4[5] = 0
                        label_142225130:
                            
                            if (arg_20 == 1)
                                if (var_1d8 != 0)
                                    zmm2.d = (*(r15_4 + 0x14)).d f- *(var_1d8 + 0x14)
                                    zmm0.d = (*(r15_4 + 0x18)).d f- *(var_1d8 + 0x18)
                                    arg2 = *(r15_4 + 0x10)
                                    arg2[0] = arg2[0] f- *(var_1d8 + 0x10)
                                    int64_t rax_100 = arg1[0x44]
                                    zmm2.d = zmm2.d f* zmm2.d
                                    zmm0.d = zmm0.d f* zmm0.d
                                    arg2[0] = arg2[0] * arg2[0]
                                    zmm2.d = zmm2.d f+ arg2[0]
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    zmm0 = _mm_sqrt_ss(0, zmm2.d)
                                    zmm2 = var_218
                                    zmm0.d = zmm0.d f+ *(rax_100 + (r12_1 << 2))
                                    *(rax_100 + (r12_1 << 2)) = zmm0.d
                                    zmm0.d =
                                        (*(arg1[0x44] + (r12_1 << 2))).d f/ *(arg1[0x47] + 0x50)
                                    r14_4[5] = zmm0.d
                                else
                                    r14_4[5] = 0
                            
                            arg1[0x23].d += 1
                            rdi_1 = r14_4
                            var_1d8 = r15_4
                            var_204_1 = r9_8
                            var_1c0 = r14_4
                        r13_1 = var_214_2 + 1
                        zmm7 = 0x40400000
                        zmm0.d = var_1f8.d f+ zmm2.d
                        rbx = var_1a0
                        r9_6 = var_190_1
                        var_214_2 = r13_1
                        var_1f8 = zmm0.d
                    while (r13_1 s< rdx_21)
                    zmm9 = arg_10
                
                int64_t rax_102 = arg1[0x4b]
                r8 = r12_1 * 3
                int64_t rcx_46 = arg1[0x55]
                int64_t rdx_24 = r12_1 * 2
                *(rcx_46 + (r8 << 2)) = *(rax_102 + (r8 << 2))
                *(rcx_46 + (r8 << 2) + 8) = *(rax_102 + (r8 << 2) + 8)
                *(arg1[0x57] + (rdx_24 << 3)) = *(arg1[0x4d] + (rdx_24 << 3))
                int64_t rax_105 = arg1[0x51]
                int64_t rcx_48 = arg1[0x5b]
                *(rcx_48 + (r8 << 2)) = *(rax_105 + (r8 << 2))
                *(rcx_48 + (r8 << 2) + 8) = *(rax_105 + (r8 << 2) + 8)
                int64_t rax_107 = arg1[0x4f]
                int64_t rcx_49 = arg1[0x59]
                *(rcx_49 + (r8 << 2)) = *(rax_107 + (r8 << 2))
                *(rcx_49 + (r8 << 2) + 8) = *(rax_107 + (r8 << 2) + 8)
                *(arg1[0x3e] + (r12_1 << 2)) = zmm6[0]
                *(arg1[0x68] + (r12_1 << 2)) = *(arg1[0x66] + (r12_1 << 2))
                void* rax_112 = arg1[0x49]
                
                if (rax_112 == 0 || *(rax_112 + 0x30) != 1)
                    zmm7 = 0x40400000
                    zmm11 = 0x322bcc77
                    zmm6 = 0x3e800000
                    zmm12 = 0x7fffffff
                    i = i_1
                else
                    zmm7 = 0x40400000
                    zmm11 = 0x322bcc77
                    zmm6 = 0x3e800000
                    i = i_1
                    zmm12 = 0x7fffffff
                    
                    if (not(zmm10.d f>= *(arg1[0x66] + (r12_1 << 2))))
                        *rdi_1 &= 0xfffffff
                        *rdi_1 |= 0x10000000
                        *(arg1[0x64] + (r12_1 << 2)) = 0xffffffff
        else
            if (rdi_1 != 0)
                *rdi_1 &= 0xfffffff
                *rdi_1 |= 0x10000000
            
            int64_t rax_15 = arg1[0x4b]
            r8 = r12_1 * 3
            int64_t rcx_8 = arg1[0x55]
            int64_t rdx_6 = r12_1 * 2
            *(rcx_8 + (r8 << 2)) = *(rax_15 + (r8 << 2))
            *(rcx_8 + (r8 << 2) + 8) = *(rax_15 + (r8 << 2) + 8)
            *(arg1[0x57] + (rdx_6 << 3)) = *(arg1[0x4d] + (rdx_6 << 3))
            int64_t rax_18 = arg1[0x51]
            int64_t rcx_10 = arg1[0x5b]
            *(rcx_10 + (r8 << 2)) = *(rax_18 + (r8 << 2))
            *(rcx_10 + (r8 << 2) + 8) = *(rax_18 + (r8 << 2) + 8)
            int64_t rax_20 = arg1[0x4f]
            int64_t rcx_11 = arg1[0x59]
            *(rcx_11 + (r8 << 2)) = *(rax_20 + (r8 << 2))
            *(rcx_11 + (r8 << 2) + 8) = *(rax_20 + (r8 << 2) + 8)
            *(arg1[0x68] + (r12_1 << 2)) = *(arg1[0x66] + (r12_1 << 2))
            *(arg1[0x64] + (r12_1 << 2)) = 0xffffffff
        
        rdi = var_220
    
    i += 1
    r12_1 += 1
    i_1 = i
    var_198_1 = r12_1
while (i s< *(arg1 + 0x1dc))

return zx.q(arg_18)
