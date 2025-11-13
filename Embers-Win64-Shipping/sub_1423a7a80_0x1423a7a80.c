// 函数: sub_1423a7a80
// 地址: 0x1423a7a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int32_t rdi = 0
int64_t* rsi = arg1
int64_t var_c8 = 0
int64_t var_c0 = 0
int64_t r12 = 0
int32_t r15 = 0
int64_t* var_b8
sub_14237e7a0(&var_b8, rdx)
void* result_1
void* result = result_1
int32_t i_1
int32_t i = i_1

if (i s< *(result + 0x18))
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    
    do
        int64_t rdx_1 = sx.q(i) * 3
        int64_t rcx_1 = *var_b8
        int64_t r14_1 = *(rcx_1 + (rdx_1 << 3))
        int32_t rax_2 = *(rcx_1 + (rdx_1 << 3) + 0xc)
        
        if (rax_2 == 0x11 || rax_2 == 0x16)
            if (r15 s< 0)
                var_c0.d = 0
                
                if (r15 != 0)
                    sub_1405dadb0(&var_c8, 0)
                    r15 = var_c0:4.d
                    rdi = var_c0.d
                    r12 = var_c8
            
            void* r13_1 = *rsi
            int32_t arg_20
            sub_140865c40(r13_1 + 0x30, &arg_20, r14_1)
            int64_t rax_3 = sx.q(arg_20)
            void* const rcx_4
            
            if (rax_3.d == 0xffffffff)
                rcx_4 = nullptr
            else
                rcx_4 = *(r13_1 + 0x30) + rax_3 * 0x18
            
            int32_t* rax_5 = rcx_4 + 8
            
            if (rcx_4 == 0)
                rax_5 = nullptr
            
            if (rax_5 != 0)
                int32_t j = *rax_5
                
                if (j != 0xffffffff)
                    int64_t rcx_5 = *(r13_1 + 0x20)
                    
                    do
                        int64_t rsi_1 = sx.q(rdi)
                        rdi = (rsi_1 + 1).d
                        var_c0.d = rdi
                        int64_t r14_2 = sx.q(j) * 5
                        zmm6 = *(rcx_5 + (r14_2 << 3) + 0x14)
                        
                        if (rdi s> r15)
                            sub_1406105e0(&var_c8)
                            rcx_5 = *(r13_1 + 0x20)
                            r15 = var_c0:4.d
                            rdi = var_c0.d
                            r12 = var_c8
                        
                        *(r12 + (rsi_1 << 2)) = zmm6.d
                        j = *(rcx_5 + (r14_2 << 3) + 0x20)
                    while (j != 0xffffffff)
            
            sub_140626020(r12, rdi)
            uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(rdi))
            void* rsi_3 = *arg1
            float zmm1_1 = zmm2_1.d
            zmm2_1.d = zmm2_1.d f* 0.800000012f
            zmm1_1 = zmm1_1 * 0.200000003f
            zmm2_1.d = zmm2_1.d f+ zmm2_1.d
            zmm2_1.d = zmm2_1.d f- 0.5f
            zmm6 = *(r12 + (sx.q(int.d(zmm1_1 + zmm1_1 - 0.5f)) s>> 1 << 2))
            zmm7 = *(r12 + (sx.q(int.d(zmm2_1.d)) s>> 1 << 2))
            int32_t var_d8
            sub_140865c40(rsi_3 + 0x30, &var_d8, r14_1)
            int64_t rax_9 = sx.q(var_d8)
            rdi = 0
            void* const rcx_13
            
            if (rax_9.d == 0xffffffff)
                rcx_13 = nullptr
            else
                rcx_13 = *(rsi_3 + 0x30) + rax_9 * 0x18
            
            int32_t* rax_11 = rcx_13 + 8
            
            if (rcx_13 == 0)
                rax_11 = nullptr
            
            if (rax_11 != 0)
                int32_t j_1 = *rax_11
                
                if (j_1 != 0xffffffff)
                    int64_t rdx_8 = *(rsi_3 + 0x20)
                    
                    do
                        int64_t rcx_14 = sx.q(j_1) * 5
                        int32_t zmm0_1 = *(rdx_8 + (rcx_14 << 3) + 0x14)
                        
                        if (zmm0_1 f>= zmm6.d)
                            zmm0_1 = _mm_min_ss(zmm0_1, zmm7.d)
                        else
                            zmm0_1 = zmm6.d
                        
                        *(rdx_8 + (rcx_14 << 3) + 0x14) = zmm0_1
                        j_1 = *(rdx_8 + (rcx_14 << 3) + 0x20)
                    while (j_1 != 0xffffffff)
            
            rsi = arg1
        
        int32_t var_ac
        int32_t var_a0 = var_a0 & not.d(var_ac)
        void var_b0
        sub_14059bdd0(&var_b0)
        result = result_1
        i = i_1
    while (i s< *(result + 0x18))
    
    if (r12 != 0)
        return sub_140a74f90(r12)

return result
