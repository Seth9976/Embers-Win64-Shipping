// 函数: sub_1409a1d50
// 地址: 0x1409a1d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* result = *arg1
int64_t rdi = sx.q(arg5)
void* rbp = *(*(result + 0x40) + (sx.q(arg2) << 3) - 8)

if (*(rbp + 0x34) != 0)
    int32_t* rsi_1 = *(rbp + 8)
    int64_t* r12_1 = *(*(rsi_1 + 0x1c8) + (rdi << 3))
    void* rdx_1 = *(*(*(rbp + 0x10) + 0x1c8) + (rdi << 3))
    int32_t rdi_1 = rsi_1[5]
    void var_98
    void* var_a8_1 = &var_98
    void* rax_4 = nullptr
    int32_t var_a0_1 = rdi_1
    int32_t var_9c_1 = 0x10
    void* var_58_1 = nullptr
    void* var_b0_1 = rdx_1
    
    if (rdi_1 u> 0x10)
        rax_4 = j_sub_140a82f30(zx.q(rdi_1) << 2)
        rdx_1 = var_b0_1
        var_58_1 = rax_4
        var_a8_1 = rax_4
        int32_t var_9c_2 = rdi_1
    
    int32_t i = 0
    
    if (*rsi_1 s> 0)
        int64_t r9 = 0
        void* r11_1 = nullptr
        
        do
            int64_t rcx_4 = sx.q(*(r11_1 + *(rbp + 0xa8)))
            
            if (rcx_4.d != 0xffffffff)
                int64_t rbx_1 = sx.q(*(*(rdx_1 + 0x60) + (rcx_4 << 2)))
                void* rdx_2 = *(*r12_1 + 0x18)
                uint64_t j_1 = zx.q(*(rdx_2 + r9))
                void* r15_1 = r12_1[3] + (sx.q(*(rdx_2 + r9 + 4)) << 2)
                float zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(j_1.d)).d
                int64_t rcx_7
                int64_t rdi_3
                
                if (j_1.d s> 0)
                    rdi_3, rcx_7 = __memfill_u32(var_a8_1, zmm1, sx.q(j_1.d))
                int64_t rax_10 = *arg4
                int64_t rdx_4 = rbx_1 << 5
                *(rdx_4 + rax_10 + 8) = 0
                *(rdx_4 + rax_10) = *(rdx_4 + rax_10 + 8)
                *(rdx_4 + rax_10 + 0x10) = zx.o(0)
                
                if (j_1.d s> 0)
                    int64_t rdi_4 = 0
                    uint64_t j
                    
                    do
                        int64_t rcx_8 = *arg4
                        uint128_t zmm4 = *(var_a8_1 + rdi_4)
                        int64_t rax_13 = sx.q(*(r15_1 + rdi_4)) << 5
                        rdi_4 += 4
                        int32_t* rax_14 = rax_13 + *arg3
                        uint128_t zmm0
                        zmm0.d = zmm4.d f* *rax_14
                        zmm0.d = zmm0.d f+ *(rdx_4 + rcx_8)
                        zmm1 = rax_14[1] f* zmm4.d f+ *(rdx_4 + rcx_8 + 4)
                        *(rdx_4 + rcx_8) = zmm0.d
                        *(rdx_4 + rcx_8 + 4) = zmm1
                        zmm0.d = zmm4.d f* rax_14[2]
                        zmm0.d = zmm0.d f+ *(rdx_4 + rcx_8 + 8)
                        float zmm2 = rax_14[3] f* zmm4.d f+ *(rdx_4 + rcx_8 + 0xc)
                        *(rdx_4 + rcx_8 + 8) = zmm0.d
                        *(rdx_4 + rcx_8 + 0xc) = zmm2
                        zmm0.d = zmm4.d f* rax_14[4]
                        zmm1 = rax_14[5] f* zmm4.d
                        zmm2 = rax_14[6] f* zmm4.d
                        zmm4.d = zmm4.d f* rax_14[7]
                        zmm0.d = zmm0.d f+ *(rdx_4 + rcx_8 + 0x10)
                        *(rdx_4 + rcx_8 + 0x10) = zmm0.d
                        *(rdx_4 + rcx_8 + 0x14) = zmm1 f+ *(rdx_4 + rcx_8 + 0x14)
                        *(rdx_4 + rcx_8 + 0x18) = zmm2 f+ *(rdx_4 + rcx_8 + 0x18)
                        zmm4.d = zmm4.d f+ *(rdx_4 + rcx_8 + 0x1c)
                        *(rdx_4 + rcx_8 + 0x1c) = zmm4.d
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
            
            rdx_1 = var_b0_1
            i += 1
            r11_1 += 4
            r9 += 8
        while (i s< *rsi_1)
        
        rax_4 = var_58_1
    
    result = j_sub_140a74f90(rax_4)

__security_check_cookie(rax_1 ^ &var_d8)
return result
