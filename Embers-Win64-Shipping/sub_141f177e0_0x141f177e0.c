// 函数: sub_141f177e0
// 地址: 0x141f177e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t* rax = sub_142565030()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x390))(rax, arg3, r8_1)
    rax_1 = rax[0x23]

int128_t zmm9 = *(rax_1 + 0x4c)
int64_t* rax_2 = sub_142565030()
void* rax_3 = rax_2[0x23]

if (rax_3 == 0)
    int64_t rdx = *rax_2
    (*(rdx + 0x390))(rax_2, rdx)
    rax_3 = rax_2[0x23]

char rdi_2 = *(rax_3 + 0xb0)

if (rdi_2 != 0)
    int64_t rbp_1 = sx.q(arg2[7].d)
    int32_t rax_4 = (rbp_1 + 1).d
    arg2[7].d = rax_4
    
    if (rax_4 s> *(arg2 + 0x3c))
        sub_1405a4f90(&arg2[6])
    
    int64_t* rax_7 = (rbp_1 << 4) + arg2[6]
    *rax_7 = 0
    rax_7[1] = 0

int64_t rsi = sx.q(*(*(rbx + 8) + 0xe8))
uint64_t result = zx.q(arg2[1].d + rsi.d)
arg2[1].d = result.d

if (result.d s> *(arg2 + 0xc))
    sub_140638a00(arg2)

if (rdi_2 != 0)
    int64_t* rcx_4 = arg2[6]
    result = zx.q(rcx_4[1].d + rsi.d)
    rcx_4[1].d = result.d
    
    if (result.d s> *(rcx_4 + 0xc))
        sub_1405a4d70(rcx_4)

if (rsi.d s> 0)
    int64_t r9_1 = 0
    int64_t r8_2 = 0
    uint64_t* r10_1 = nullptr
    
    do
        int64_t rdx_4 = *arg2
        void* rcx_5 = *(*(rbx + 8) + 0xe0)
        *(r10_1 + rdx_4) = *(rcx_5 + r8_2)
        *(r10_1 + rdx_4 + 8) = *(rcx_5 + r8_2 + 8)
        
        if (rdi_2 != 0)
            *(*arg2[6] + (r9_1 << 3)) = *(*(*(rbx + 8) + 0xe0) + r8_2 + 0x30)
        
        r9_1 += 1
        r10_1 += 0xc
        r8_2 += 0x40
    while (r9_1 s< rsi)

int32_t i = 0

if (*(rbx + 0x38) s> 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    
    do
        void* r14_1 = *(*(rbx + 0x30) + (sx.q(i) << 3))
        uint64_t rdx_6 = zx.q(*(r14_1 + 0x4c))
        
        if (rdx_6.d != 0)
            void* r8_3 = *(r14_1 + 0x40)
            void* arg_10 = r8_3
            
            if (r8_3 != 0 && *(*(rbx + 8) + 0xe8) s>= *(r14_1 + 0x54) && *(r8_3 + 0x20)
                    s>= ((rdx_6 << 1) + -ffffffffffffffff).d + rdx_6.d + *(r14_1 + 0x48))
                int32_t j = 0
                
                if (rdx_6.d != 0)
                    int32_t rbp_2 = 0
                    
                    do
                        int64_t rcx_12 = sx.q(*(r14_1 + 0x48) + rbp_2)
                        int64_t rax_13 = *(r8_3 + 0x18)
                        int64_t rdx_7 = sx.q(*(rax_13 + (rcx_12 << 2)))
                        int64_t r8_4 = sx.q(*(rax_13 + (rcx_12 << 2) + 4))
                        int64_t r13_1 = sx.q(*(rax_13 + (rcx_12 << 2) + 8))
                        int32_t var_a4_1 = r8_4.d
                        uint128_t zmm0_1
                        
                        if (not(zmm9.d f< 0f))
                            int64_t rcx_13 = *(*(rbx + 8) + 0xe0)
                            int64_t rax_16 = rdx_7 << 6
                            uint128_t zmm3 = zx.o(*(rax_16 + rcx_13))
                            float rax_17 = *(rax_16 + rcx_13 + 8)
                            int64_t rax_19 = r8_4 << 6
                            uint64_t var_d8_1 = zmm3.q
                            zmm0_1 = zx.o(*(rax_19 + rcx_13))
                            zmm8.d = zmm0_1.d f- zmm3.d
                            uint128_t zmm2
                            zmm2.d = (*(rax_19 + rcx_13 + 8)).d f- rax_17
                            zmm7.d = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55).d f- var_d8_1:4.d
                            int64_t rax_22 = r13_1 << 6
                            uint128_t zmm4_1 = zx.o(*(rax_22 + rcx_13))
                            zmm6.d = zmm4_1.d f- zmm3.d
                            arg3 = *(rax_22 + rcx_13 + 8) f- rax_17
                            zmm3.d = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55).d f- var_d8_1:4.d
                            zmm4_1 = zmm6
                            zmm6.d = zmm6.d f* zmm7.d
                            zmm4_1.d = zmm4_1.d f* zmm2.d
                            zmm0_1.d = zmm2.d f* zmm3.d
                            float zmm5_1 = zmm7.d * arg3 f- zmm0_1.d
                            zmm0_1.d = zmm8.d f* arg3
                            zmm8.d = zmm8.d f* zmm3.d
                            zmm4_1.d = zmm4_1.d f- zmm0_1.d
                            zmm8.d = zmm8.d f- zmm6.d
                            zmm4_1.d = zmm4_1.d f* zmm4_1.d
                            zmm8.d = zmm8.d f* zmm8.d
                            zmm4_1.d = zmm4_1.d f+ zmm5_1 * zmm5_1
                            zmm4_1.d = zmm4_1.d f+ zmm8.d
                            zmm0_1.d = _mm_sqrt_ss(0, zmm4_1.d).d f* 0.5f
                        
                        if (zmm9.d f< 0f || not(zmm0_1.d f<= zmm9.d))
                            int64_t rdi_3 = sx.q(arg2[3].d)
                            int32_t rax_23 = (rdi_3 + 1).d
                            arg2[3].d = rax_23
                            
                            if (rax_23 s> *(arg2 + 0x1c))
                                sub_14083a7e0(&arg2[2])
                            
                            int64_t rax_24 = arg2[2]
                            int64_t rcx_15 = rdi_3 * 3
                            *(rax_24 + (rcx_15 << 2)) = rdx_7.d.q
                            *(rax_24 + (rcx_15 << 2) + 8) = r13_1.d
                            int64_t rdi_4 = sx.q(arg2[5].d)
                            int32_t rax_25 = (rdi_4 + 1).d
                            arg2[5].d = rax_25
                            
                            if (rax_25 s> *(arg2 + 0x2c))
                                sub_140594770(&arg2[4])
                            
                            rbx = arg1
                            *(arg2[4] + (rdi_4 << 1)) = i.w
                        
                        r8_3 = arg_10
                        j += 1
                        rbp_2 += 3
                    while (j u< *(r14_1 + 0x4c))
        
        i += 1
    while (i s< *(rbx + 0x38))

arg2[8].d |= 1
result.b = 1
return result
