// 函数: sub_14217e6b0
// 地址: 0x14217e6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x88) != 0)
    return 

int32_t rax = *(arg1 + 0x98)

if (rax == 0 || *(arg1 + 0x2c0) == 0 || *(arg1 + 0x2c1) != 0 || rax s<= 2)
    return 

int32_t rsi_1 = 0
int32_t rdx_1 = 0
int32_t r13_1 = 0
int32_t arg_8 = 0
void* r8_1 = nullptr
void* arg_10 = nullptr
int32_t r15_1 = 0

if (rax s<= 0)
    return 

void** r14_1 = nullptr
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

do
    void* rbp_1 = *(r14_1 + *(arg1 + 0x90))
    
    if (rbp_1 != 0)
        int64_t* rdi_1 = *(rbp_1 + 0x30)
        
        if (rdi_1 != 0)
            void* rax_3 = (*(*rdi_1 + 0x150))(rdi_1)
            
            if (rax_3 != 0)
                zmm0.d = (*(rax_3 + 0x520)).d f- *(rdi_1 + 0x9c)
            
            if (rax_3 == 0 || zmm0.d f<= *(arg1 + 0x2dc))
                r8_1 = arg_10
                rdx_1 = arg_8
            else
                r8_1 = arg_10
                
                if (sub_141dce620(rdi_1) != 0)
                    rdx_1 = arg_8
                else
                    zmm2 = zx.o(*(arg1 + 0x218))
                    int32_t rax_5 = r13_1 + 1
                    void* rdx_2 = rdi_1[0x45]
                    zmm1.q = zmm2.q f- *(rbp_1 + 0x1d0)
                    zmm2.q = zmm2.q f- *(rbp_1 + 0x210)
                    
                    if (r8_1 == 0)
                        r8_1 = rax_3
                    
                    arg_10 = r8_1
                    bool cond:2_1 = zmm1.q f<= _mm_cvtps_pd((*(arg1 + 0x2c4)).q).q
                    zmm0 = _mm_cvtps_pd((*(arg1 + 0x2c8)).q)
                    
                    if (cond:2_1)
                        rax_5 = r13_1
                    
                    r13_1 = rax_5
                    int32_t rax_6 = rsi_1 + 1
                    
                    if (zmm2.q f<= zmm0.q)
                        rax_6 = rsi_1
                    
                    rsi_1 = rax_6
                    
                    if (rdx_2 == 0)
                        rdx_1 = arg_8
                    else
                        rdx_1 = arg_8
                        
                        if (not(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x2cc))).d f>= *(rdx_2 + 0x238)))
                            rdx_1 += 1
                            arg_8 = rdx_1
    
    rax = *(arg1 + 0x98)
    r15_1 += 1
    r14_1 = &r14_1[1]
while (r15_1 s< rax)

if (r8_1 == 0)
    return 

int64_t* rcx_3 = *(r8_1 + 0x58)

if (rcx_3 == 0)
    return 

zmm0 = _mm_cvtepi32_ps(zx.o(rax))
zmm2.d = 1f f/ zmm0.d
zmm1.d = _mm_cvtepi32_ps(zx.o(r13_1)).d f* zmm2.d

if (not(zmm1.d f<= *(arg1 + 0x2d0)))
    *(arg1 + 0x2c1) = 1
    (*(*rcx_3 + 0x668))(zmm0, 0)
    return 

zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* zmm2.d

if (not(zmm0.d f<= *(arg1 + 0x2d8)))
    *(arg1 + 0x2c1) = 1
    (*(*rcx_3 + 0x668))(zmm0, 2)
    return 

zmm0.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* zmm2.d

if (not(zmm0.d f<= *(arg1 + 0x2d4)))
    *(arg1 + 0x2c1) = 1
    (*(*rcx_3 + 0x668))(zmm0, 1)
