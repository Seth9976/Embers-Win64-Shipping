// 函数: sub_141780090
// 地址: 0x141780090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = 3.40282347e+38f
int32_t r11 = 0
int64_t rdi = sx.q(arg2)
void* r15 = arg3
float zmm5 = 3.40282347e+38f
int64_t* rdx_2 = (rdi << 4) + *(arg1 + 0x88)

if (*(rdi + *(arg1 + 0x28)) == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t r9 = 0
int32_t rbp = 0
uint64_t* rsi = *rdx_2
int64_t* r10 = rsi
int64_t r12 = *(arg1 + 0xa8)
int128_t zmm7 = zx.o(0)
int128_t zmm9 = zx.o(0)
int128_t zmm10 = zx.o(0)
uint64_t r14_1 = sx.q(rdx_2[1].d) << 3 u>> 3
float zmm11[0x4] = zx.o(0)
int128_t zmm12 = zx.o(0)

if (rsi u> &rsi[rdx_2[1]])
    r14_1 = 0

int128_t zmm13 = zx.o(0)
int128_t zmm14 = zx.o(0)
uint64_t rax_2

if (r14_1 == 0)
    rax_2.b = 0
else
    float zmm3[0x4] = data_1439b8de0
    int32_t rbx_1 = data_143ef7c20
    int128_t zmm6 = data_1439b8de4
    float zmm1
    float zmm2[0x4]
    
    do
        uint64_t rdx_3 = *r10
        rax_2 = 0
        
        if (*(rdx_3 + 0xc) u>= 2)
            rax_2 = rdx_3
        
        if (rax_2 != 0)
            int64_t rcx = sx.q(*(rax_2 + 8))
            arg3 = *rax_2
            
            if (*(rcx + *(arg3 + 0x398)) == 4)
                rbp += 1
                zmm2 = *(*(arg3 + 0x2c0) + (rcx << 2))
                int64_t rcx_1 = rcx * 3
                int64_t rax_4 = *(arg3 + 0x1b8)
                zmm11[0] = zmm11[0] + zmm2[0]
                zmm1 = zmm2[0]
                zmm2[0] = zmm2[0] f* *(rax_4 + (rcx_1 << 2))
                zmm1 = zmm1 f* *(rax_4 + (rcx_1 << 2) + 4)
                zmm2[0] = zmm2[0] f* *(rax_4 + (rcx_1 << 2) + 8)
                zmm7.d = zmm7.d f+ zmm2[0]
                zmm9.d = zmm9.d f+ zmm1
                zmm10.d = zmm10.d f+ zmm2[0]
                rax_2 = *(*(r15 + 8) + (sx.q(*(rdx_3 + 0x10)) << 3))
                
                if (rax_2 == 0)
                    if (not(zmm4 <= zmm3[0]))
                        zmm4 = zmm3[0]
                    
                    if (not(zmm5 f<= zmm6.d))
                        zmm5 = zmm6.d
                    
                    rax_2 = zx.q(rbx_1)
                    
                    if (r11 s>= rbx_1)
                        rax_2 = zx.q(r11)
                    
                    r11 = rax_2.d
                else
                    zmm1 = *(rax_2 + 0x18)
                    float temp0_1[0x4] = _mm_min_ss((*(rax_2 + 0x14))[0], zmm4)
                    int32_t rcx_3 = *(rax_2 + 0x24)
                    float temp0_2 = _mm_min_ss(zmm1, zmm5)
                    
                    if (r11 s>= rcx_3)
                        rcx_3 = r11
                    
                    zmm4 = temp0_1[0]
                    r11 = rcx_3
                    zmm5 = temp0_2
        
        r10 = &r10[1]
        r9 += 1
    while (r9 != r14_1)
    
    if (rbp == 0)
        rax_2.b = 0
    else if (__andps_xmmxud_memxud(zmm11, data_142d3f770)[0] <= 9.99999994e-09f)
        rax_2.b = 0
    else
        zmm3 = 0x3f800000
        int64_t r9_1 = 0
        zmm3[0] = 1f / zmm11[0]
        uint64_t* r10_1 = rsi
        zmm7.d = zmm7.d f* zmm3[0]
        zmm9.d = zmm9.d f* zmm3[0]
        zmm10.d = zmm10.d f* zmm3[0]
        
        do
            rax_2 = *r10_1
            void** rcx_4 = nullptr
            
            if (*(rax_2 + 0xc) u>= 2)
                rcx_4 = rax_2
            
            if (rcx_4 != 0)
                arg3 = *rcx_4
                int64_t rdx_4 = sx.q(rcx_4[1].d)
                
                if (*(rdx_4 + *(arg3 + 0x398)) == 4)
                    int64_t rcx_5 = rdx_4 * 3
                    zmm2 = *(*(arg3 + 0x2c0) + (rdx_4 << 2))
                    rax_2 = *(arg3 + 0x1d0)
                    zmm1 = zmm2[0]
                    zmm2[0] = zmm2[0] f* *(rax_2 + (rcx_5 << 2))
                    zmm1 = zmm1 f* *(rax_2 + (rcx_5 << 2) + 4)
                    zmm2[0] = zmm2[0] f* *(rax_2 + (rcx_5 << 2) + 8)
                    zmm12.d = zmm12.d f+ zmm2[0]
                    zmm13.d = zmm13.d f+ zmm1
                    zmm14.d = zmm14.d f+ zmm2[0]
            
            r10_1 = &r10_1[1]
            r9_1 += 1
        while (r9_1 != r14_1)
        
        zmm7.d = zmm7.d f* zmm7.d
        zmm9.d = zmm9.d f* zmm9.d
        zmm10.d = zmm10.d f* zmm10.d
        zmm7.d = zmm7.d f+ zmm9.d
        zmm1 = zmm3[0] f* zmm12.d
        zmm3[0] = zmm3[0] f* zmm13.d
        zmm3[0] = zmm3[0] f* zmm14.d
        zmm7.d = zmm7.d f+ zmm10.d
        
        if (zmm7.d f>= zmm4)
            rax_2.b = 0
        else
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm3[0] = zmm3[0] * zmm3[0]
            zmm3[0] = zmm3[0] + zmm1 * zmm1
            zmm3[0] = zmm3[0] + zmm3[0]
            
            if (zmm3[0] >= zmm5)
                rax_2.b = 0
            else
                rax_2 = zx.q(*(r12 + (rdi << 2)))
                
                if (rax_2.d s< r11)
                    *(r12 + (rdi << 2)) = rax_2.d + 1
                    rax_2.b = 0
                else
                    int64_t rdi_1 = 0
                    
                    if (r14_1 != 0)
                        do
                            rax_2 = *rsi
                            uint64_t rbx_2 = 0
                            
                            if (*(rax_2 + 0xc) u>= 2)
                                rbx_2 = rax_2
                            
                            if (rbx_2 != 0)
                                void* rcx_6 = *rbx_2
                                int64_t rdx_5 = sx.q(*(rbx_2 + 8))
                                
                                if (*(rdx_5 + *(rcx_6 + 0x398)) == 4)
                                    arg3.b = 1
                                    sub_14177fe50(rcx_6, rdx_5.d, arg3.b)
                                    int64_t rax_7 = sx.q(*(rbx_2 + 8))
                                    float temp0_4[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
                                    int32_t var_d0_1 = 0
                                    int32_t var_c4_1 = 0
                                    int64_t rdx_6 = rax_7 * 3
                                    int64_t rcx_7 = *(*rbx_2 + 0x1b8)
                                    *(rcx_7 + (rdx_6 << 2)) = temp0_4.q
                                    *(rcx_7 + (rdx_6 << 2) + 8) = 0
                                    int64_t rax_9 = sx.q(*(rbx_2 + 8))
                                    float temp0_5[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
                                    int64_t rdx_7 = rax_9 * 3
                                    int64_t rcx_8 = *(*rbx_2 + 0x1d0)
                                    *(rcx_8 + (rdx_7 << 2)) = temp0_5.q
                                    *(rcx_8 + (rdx_7 << 2) + 8) = 0
                            
                            rsi = &rsi[1]
                            rdi_1 += 1
                        while (rdi_1 != r14_1)
                    
                    rax_2.b = 1

return rax_2
