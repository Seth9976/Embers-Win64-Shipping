// 函数: sub_14264b150
// 地址: 0x14264b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rbx = *(arg1 + 0xa0)

if (rbx == 0)
    __builtin_memset(arg2, 0, 0x1c)
else
    void* rax_2 = *(rbx + 0x130)
    int64_t rdi
    rdi.b = 0
    uint128_t zmm6 = data_143dbb200
    uint128_t zmm7 = data_143dbb1fc
    uint128_t zmm8 = data_143dbb1f8
    uint128_t zmm9 = zmm8
    uint128_t zmm10 = zmm7
    uint128_t zmm11 = zmm6
    int128_t* rax_3
    
    if (rax_2 == 0)
        rax_3 = &data_143dbb0c0
    else
        rax_3 = rax_2 + 0x1c0
    
    int128_t var_d8 = *rax_3
    uint128_t var_c8_1 = rax_3[1]
    int128_t var_b8_1 = rax_3[2]
    void* rax_5 = sub_140d21950(rbx, sub_1426a0c60())
    uint128_t zmm0_1
    uint128_t zmm1
    uint128_t zmm2
    
    if (rax_5 != 0)
        int64_t r8_1 = *rax_5
        int64_t var_128 = 0
        int32_t var_120
        var_120.q = 0
        void* var_f8 = nullptr
        int32_t var_f0_1 = 0
        int64_t var_e8 = 0
        int64_t var_e0_1 = 0
        
        if ((*(r8_1 + 0x10))(rax_5, &var_128, r8_1) != 0)
            int32_t r15_1 = 0
            
            if (var_120 s> 0)
                int64_t* r14_1 = nullptr
                
                do
                    int64_t rbx_1 = var_128
                    
                    if (*(r14_1 + rbx_1) != 0)
                        void* rax_7 = sub_142549b60()
                        
                        if (rax_7 != 0)
                            void* rdx_2 = *(r14_1 + rbx_1)
                            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                            
                            if (rax_8.d s<= *(rdx_2 + 0x38)
                                    && *(*(rdx_2 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30
                                    && rdx_2 != 0)
                                int64_t rbx_2 = var_128
                                int64_t* rdx_3
                                
                                if (*(r14_1 + rbx_2) == 0)
                                    rdx_3 = nullptr
                                else
                                    void* rax_10 = sub_142549b60()
                                    
                                    if (rax_10 == 0)
                                        rdx_3 = nullptr
                                    else
                                        rdx_3 = *(r14_1 + rbx_2)
                                        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                                        
                                        if (rax_11.d s> rdx_3[7].d
                                                || *(rdx_3[6] + (rax_11 << 3)) != rax_10 + 0x30)
                                            rdx_3 = nullptr
                                
                                void* rax_13 = sub_141dc9e00(rdx_3)
                                void* rdx_4 = *rax_13
                                void* r8_4 = rdx_4 + sx.q(*(rax_13 + 8)) * 0x48
                                
                                if (rdx_4 != r8_4)
                                    void* rcx_6 = rdx_4 + 0x38
                                    
                                    do
                                        if (rdi.b == 0)
                                            zmm0_1 = zx.o(*(rcx_6 - 8))
                                            rdi.b = 1
                                            zmm8 = zmm0_1
                                            zmm9 = zmm8
                                            zmm7 = zmm0_1.q:4.d
                                            zmm10 = zmm7
                                            zmm6 = *rcx_6
                                            zmm11 = zmm6
                                        else
                                            zmm1 = *(rcx_6 - 8)
                                            
                                            if (not(zmm9.d f<= zmm1.d))
                                                zmm9 = zmm1
                                            
                                            zmm0_1 = *(rcx_6 - 4)
                                            
                                            if (not(zmm10.d f<= zmm0_1.d))
                                                zmm10 = zmm0_1
                                            
                                            zmm2 = *rcx_6
                                            
                                            if (not(zmm11.d f<= zmm2.d))
                                                zmm11 = zmm2
                                            
                                            if (not(zmm8.d f>= zmm1.d))
                                                zmm8 = zmm1
                                            
                                            if (not(zmm7.d f>= zmm0_1.d))
                                                zmm7 = zmm0_1
                                            
                                            if (not(zmm6.d f>= zmm2.d))
                                                zmm6 = zmm2
                                        
                                        zmm0_1 = *(rcx_6 + 4)
                                        
                                        if (not(zmm9.d f<= zmm0_1.d))
                                            zmm9 = zmm0_1
                                        
                                        zmm1 = *(rcx_6 + 8)
                                        
                                        if (not(zmm10.d f<= zmm1.d))
                                            zmm10 = zmm1
                                        
                                        zmm2 = *(rcx_6 + 0xc)
                                        
                                        if (not(zmm11.d f<= zmm2.d))
                                            zmm11 = zmm2
                                        
                                        if (not(zmm8.d f>= zmm0_1.d))
                                            zmm8 = zmm0_1
                                        
                                        if (not(zmm7.d f>= zmm1.d))
                                            zmm7 = zmm1
                                        
                                        if (not(zmm6.d f>= zmm2.d))
                                            zmm6 = zmm2
                                        
                                        rdx_4 += 0x48
                                        rcx_6 += 0x48
                                    while (rdx_4 != r8_4)
                    
                    r15_1 += 1
                    r14_1 = &r14_1[1]
                while (r15_1 s< var_120)
        
        char rax_17 = (*(*rax_5 + 0x18))(rax_5, &var_f8, &var_e8)
        void* rdx_6 = var_f8
        
        if (rax_17 != 0)
            void* i = rdx_6 + sx.q(var_f0_1) * 0x48
            
            if (rdx_6 != i)
                void* rcx_9 = rdx_6 + 0x38
                
                do
                    if (rdi.b == 0)
                        zmm0_1 = zx.o(*(rcx_9 - 8))
                        rdi.b = 1
                        zmm8 = zmm0_1
                        zmm9 = zmm8
                        zmm7 = zmm0_1.q:4.d
                        zmm10 = zmm7
                        zmm6 = *rcx_9
                        zmm11 = zmm6
                    else
                        zmm1 = *(rcx_9 - 8)
                        
                        if (not(zmm9.d f<= zmm1.d))
                            zmm9 = zmm1
                        
                        zmm0_1 = *(rcx_9 - 4)
                        
                        if (not(zmm10.d f<= zmm0_1.d))
                            zmm10 = zmm0_1
                        
                        zmm2 = *rcx_9
                        
                        if (not(zmm11.d f<= zmm2.d))
                            zmm11 = zmm2
                        
                        if (not(zmm8.d f>= zmm1.d))
                            zmm8 = zmm1
                        
                        if (not(zmm7.d f>= zmm0_1.d))
                            zmm7 = zmm0_1
                        
                        if (not(zmm6.d f>= zmm2.d))
                            zmm6 = zmm2
                    
                    zmm0_1 = *(rcx_9 + 4)
                    
                    if (not(zmm9.d f<= zmm0_1.d))
                        zmm9 = zmm0_1
                    
                    zmm1 = *(rcx_9 + 8)
                    
                    if (not(zmm10.d f<= zmm1.d))
                        zmm10 = zmm1
                    
                    zmm2 = *(rcx_9 + 0xc)
                    
                    if (not(zmm11.d f<= zmm2.d))
                        zmm11 = zmm2
                    
                    if (not(zmm8.d f>= zmm0_1.d))
                        zmm8 = zmm0_1
                    
                    if (not(zmm7.d f>= zmm1.d))
                        zmm7 = zmm1
                    
                    if (not(zmm6.d f>= zmm2.d))
                        zmm6 = zmm2
                    
                    rcx_9 += 0x48
                while (rcx_9 - 0x38 != i)
        
        int64_t rcx_10 = var_e8
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
            rdx_6 = var_f8
        
        if (rdx_6 != 0)
            sub_140a74f90(rdx_6)
        
        int64_t rcx_12 = var_128
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    zmm8.d = zmm8.d f- zmm9.d
    zmm7.d = zmm7.d f- zmm10.d
    zmm6.d = zmm6.d f- zmm11.d
    uint128_t zmm3 = zmm8
    zmm8.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f* 0.5f
    zmm2.d = zmm7.d f* 0.5f
    zmm1.d = zmm6.d f* 0.5f
    zmm0_1 = zmm3
    zmm3.d = zmm3.d f+ zmm9.d
    zmm7.d = zmm7.d f* zmm7.d
    zmm0_1 = _mm_unpacklo_ps(zmm0_1, zmm2.q)
    zmm2.d = zmm2.d f+ zmm10.d
    uint64_t var_10c_3 = zmm0_1.q
    zmm8.d = zmm8.d f+ zmm7.d
    int32_t var_120_1 = zmm1.d
    zmm1.d = zmm1.d f+ zmm11.d
    zmm6.d = zmm6.d f* zmm6.d
    int32_t var_104_3 = var_120_1
    uint64_t var_118 = (_mm_unpacklo_ps(zmm3, zmm2.q)).q
    zmm8.d = zmm8.d f+ zmm6.d
    int32_t var_110_1 = zmm1.d
    zmm8.d = zmm8.d f* 0.25f
    int32_t var_100_1 = _mm_sqrt_ss(0, zmm8.d).d
    sub_140ae2e90(&var_118, arg2, &var_d8)

__security_check_cookie(rax_1 ^ &var_148)
return arg2
