// 函数: sub_140806300
// 地址: 0x140806300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x910)

for (void* rcx_1 = sx.q(*(arg1 + 0x918)) * 0x78 + i; i != rcx_1; i += 0x78)
    void* rax_1 = *(i + 0x58)
    
    if (rax_1 != 0)
        *(rax_1 + 8) -= 1
    
    *(i + 0x58) = 0

*(arg1 + 0x34) = data_143dbb1f8.q
int32_t rax_2 = data_143dbb200
*(arg1 + 0x3c) = rax_2
*(arg1 + 0x28) = *(arg1 + 0x34)
*(arg1 + 0x30) = rax_2
*(arg1 + 0x40) = 0
uint128_t zmm1

if (*(arg1 + 0x84c) != 0)
    int32_t rax_3 = *(arg1 + 0x848)
    zmm1 = zx.o(*(arg1 + 0x840))
    *(arg1 + 0x28) = *(arg1 + 0x830)
    *(arg1 + 0x38) = zmm1.q
    *(arg1 + 0x40) = rax_3
    return rax_3

void* rdx = *(arg1 + 0x788)

if ((*(rdx + 0x148) & 2) == 0 && *(rdx + 0xd8) != 1)
    int32_t r15_1 = *(*(*(arg1 + 0x778) + 0x98) + 0xb0)
    int32_t rax_12
    void* const rcx_2
    uint128_t zmm0
    uint128_t zmm2
    
    if (r15_1 == 0 || *(arg1 + 0x940) == 0)
        zmm0 = zx.o(data_143dbb1f8.q)
        rcx_2.b = 0
        int32_t rax_11 = data_143dbb200
        int32_t var_d0_1 = rax_11
        int32_t var_c4_1 = rax_11
        zmm2 = zx.o(zmm0.q)
        zmm0.q = zmm0.q
        rax_12 = 0.d
    else
        void* rax_5 = *(arg1 + 0x938)
        void* rdi_1 = arg1 + 0x930
        uint64_t r14
        r14.b = 0
        uint128_t zmm6 = data_143dbb200
        
        if (rax_5 != 0)
            rdi_1 = rax_5
        
        uint128_t zmm7 = data_143dbb1f8
        uint128_t zmm8 = data_143dbb1fc
        uint128_t zmm9 = zmm7
        void* rsi_1 = rdi_1 + (sx.q(*(arg1 + 0x940)) << 3)
        uint128_t zmm10 = zmm8
        int32_t var_ec_1 = zmm7.d
        uint128_t zmm11 = zmm6
        int32_t var_e8_1 = zmm8.d
        int32_t var_e4_1 = zmm6.d
        int32_t var_f8_1 = zmm7.d
        int32_t var_f4_1 = zmm8.d
        int32_t var_f0_1 = zmm6.d
        char var_e0_1 = 0
        
        if (rdi_1 != rsi_1)
            do
                int64_t* rcx_4 = *rdi_1
                (*(*rcx_4 + 0x10))(rcx_4)
                int64_t* rcx_5 = *rdi_1
                void var_b8
                uint128_t* rax_9 = (*(*rcx_5 + 0x18))(rcx_5, &var_b8, zx.q(r15_1))
                
                if (r14.b == 0)
                    if (*(rax_9 + 0x18) != 0)
                        zmm1 = zx.o(rax_9[1].q)
                        zmm2 = *rax_9
                        int32_t rax_10 = *(rax_9 + 0x18)
                        r14 = zx.q(rax_10.b)
                        var_e8_1.q = zmm1.q
                        zmm8 = var_e8_1
                        var_f8_1.o = zmm2
                        var_e0_1.d = rax_10
                        zmm11 = var_f0_1
                        zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        zmm10 = var_f4_1
                        zmm9 = var_f8_1
                        zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                else if (*(rax_9 + 0x18) != 0)
                    zmm0 = *rax_9
                    
                    if (not(zmm9.d f<= zmm0.d))
                        var_f8_1 = zmm0.d
                        zmm9 = zmm0
                    
                    zmm0 = *(rax_9 + 4)
                    
                    if (not(zmm10.d f<= zmm0.d))
                        var_f4_1 = zmm0.d
                        zmm10 = zmm0
                    
                    zmm0 = *(rax_9 + 8)
                    
                    if (not(zmm11.d f<= zmm0.d))
                        var_f0_1 = zmm0.d
                        zmm11 = zmm0
                    
                    zmm0 = *(rax_9 + 0xc)
                    
                    if (not(zmm7.d f>= zmm0.d))
                        int32_t var_ec_2 = zmm0.d
                        zmm7 = zmm0
                    
                    zmm0 = rax_9[1].d
                    
                    if (not(zmm8.d f>= zmm0.d))
                        var_e8_1 = zmm0.d
                        zmm8 = zmm0
                    
                    zmm0 = *(rax_9 + 0x14)
                    
                    if (not(zmm6.d f>= zmm0.d))
                        int32_t var_e4_2 = zmm0.d
                        zmm6 = zmm0
                
                rdi_1 += 8
            while (rdi_1 != rsi_1)
            
            rdx = *(arg1 + 0x788)
        
        rax_12 = 0
        rcx_2 = nullptr
        zmm2 = zx.o(var_e8_1.q)
        zmm0 = var_f8_1.o
        int64_t var_cc = zmm2.q
        char var_c0
        var_c0.d = 0
    
    uint128_t var_d8 = zmm0
    
    if (rcx_2.b != 0)
        if (*(rdx + 0x28) != 0)
            *(arg1 + 0x28) = zmm0
            *(arg1 + 0x38) = zmm2.q
            *(arg1 + 0x40) = rax_12
            return rax_12
        
        void* rcx_6 = *(arg1 + 0x780)
        uint64_t var_9c[0x4]
        uint64_t* rax_16 =
            sub_140ae2b00(&var_d8, &var_9c, rcx_6 + 0x2b0 + (zx.q(*(rcx_6 + 0x660)) & 1) * 0x1f0)
        *(arg1 + 0x28) = *rax_16
        *(arg1 + 0x38) = rax_16[2]
        int32_t rax_17 = rax_16[3].d
        *(arg1 + 0x40) = rax_17
        return rax_17

*(arg1 + 0x28) = *(rdx + 0xdc)
*(arg1 + 0x38) = *(rdx + 0xec)
int32_t rax_18 = *(rdx + 0xf4)
*(arg1 + 0x40) = rax_18
return rax_18
