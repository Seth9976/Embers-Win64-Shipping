// 函数: sub_1429d5c10
// 地址: 0x1429d5c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
int128_t zmm6
int128_t var_38 = zmm6
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_c8 = *(arg1 + 0x18)
void* rdx = *(arg1 + 0x10)
*(rdx + 0xe0) = *(rdx + 0xd8)
void* rcx = *(arg1 + 0x10)
sub_1429d5b30(rcx + 0xd8, sx.q(*(rcx + 4)), &data_1435fc440)
void var_98
void* var_a8 = &var_98
int32_t var_a0 = 0
int32_t var_9c = 0x10
void* r9 = nullptr
void* var_58 = nullptr

if ((var_c8.b & 0x60) != 0)
    int32_t rbx_1 = *(*(arg1 + 8) + 0x14)
    
    if (rbx_1 u> 0x10)
        j_sub_140a74f90(0)
        void* var_a8_1 = &var_98
        int32_t var_9c_1 = 0x10
        void* rax_5 = j_sub_140a82f30(zx.q(rbx_1) << 2)
        r9 = rax_5
        var_58 = rax_5
        var_a8 = rax_5
        int32_t var_9c_2 = rbx_1

int64_t rdx_2 = sx.q(*(arg1 + 0x48))
int64_t rbx_2 = rdx_2
int64_t r10 = sx.q(*(arg1 + 0x30) + rdx_2.d)
int64_t var_c0 = r10

if (rdx_2 s< r10)
    uint128_t zmm1_1 = 0
    
    do
        void* rax_6 = *(arg1 + 0x10)
        int64_t rsi_1 = *(rax_6 + 0xd8)
        int64_t r12_1 = *(rax_6 + 0xf0)
        char rax_7 = *(rbx_2 + r12_1)
        
        if ((rax_7 & 4) != 0)
            *(rsi_1 + (rbx_2 << 2)) = 0x41200000
            zmm1_1 = 0
        else if ((rax_7 & 8) != 0)
            int64_t rdx_3 = sx.q(*(*(arg1 + 0x120) + (rbx_2 << 2)))
            void* r8_2 = *(arg1 + 8)
            uint128_t zmm0_1 = *(*(r8_2 + 0xd8) + (rdx_3 << 2))
            int512_t zmm2
            
            if ((var_c8.b & 0x60) != 0)
                int32_t rcx_8 = *(*(r8_2 + 0x78) + (sx.q((rdx_3 * 2).d) << 2)
                    + ((zx.q(zx.d(*(*(arg1 + 0x168) + rbx_2)) u>> 3) & 3) << 2)) * 2
                int64_t rdx_5 = *(r8_2 + 0x150)
                int32_t r14_1 = *(rdx_5 + (sx.q(rcx_8) << 2))
                void* r10_1 = *(r8_2 + 0x168) + (sx.q(*(rdx_5 + (sx.q(rcx_8 + 1) << 2))) << 2)
                uint32_t r15_1 = 0
                uint64_t r13_1 = 0
                
                if (r14_1 s>= 4)
                    void* r9_1 = r10_1 + 8
                    int64_t r11_2 = neg.q(r10_1)
                    uint64_t rax_19 = zx.q(((r14_1 - 4) u>> 2) + 1)
                    uint64_t i_2 = zx.q(rax_19.d)
                    r15_1 = (rax_19 << 2).d
                    r13_1 = rax_19 << 2
                    uint64_t i
                    
                    do
                        void* r8_3 = r11_2 + r9_1
                        *(r8_3 + var_a8 - 8) = *(*(*(arg1 + 8) + 0xd8) + (sx.q(*(r9_1 - 8)) << 2))
                        *(r8_3 + var_a8 - 4) = *(*(*(arg1 + 8) + 0xd8) + (sx.q(*(r9_1 - 4)) << 2))
                        *(var_a8 + r11_2 + r9_1) = *(*(*(arg1 + 8) + 0xd8) + (sx.q(*r9_1) << 2))
                        *(var_a8 + r11_2 + r9_1 + 4) =
                            *(*(*(arg1 + 8) + 0xd8) + (sx.q(*(r9_1 + 4)) << 2))
                        r9_1 += 0x10
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                if (r15_1 s< r14_1)
                    uint64_t rdx_13 = r13_1 << 2
                    uint64_t i_3 = zx.q(r14_1 - r15_1)
                    uint64_t i_1
                    
                    do
                        *(var_a8 + rdx_13) =
                            *(*(*(arg1 + 8) + 0xd8) + (sx.q(*(r10_1 + rdx_13)) << 2))
                        rdx_13 += 4
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                
                zmm0_1, zmm2 = sub_1429c8df0(&var_c8, zmm0_1, r14_1, var_a8)
                *(rsi_1 + (rbx_2 << 2)) = zmm0_1.d
                r10 = var_c0
            else
                if (not(zmm1_1.d f>= zmm0_1.d))
                    zmm2.o = 0x41200000
                    
                    if (not(zmm0_1.d f< 10f))
                        zmm1_1 = 0x41200000
                    else if (not(zmm0_1.d f<= 1f))
                        zmm1_1.d = zmm0_1.d f- 1f
                
                *(rsi_1 + (rbx_2 << 2)) = zmm1_1.d
            zmm1_1 = 0
            
            if (not((*(rsi_1 + (rbx_2 << 2))).d f> 0f))
                *(rbx_2 + r12_1) &= 0xf7
                zmm1_1 = 0
        
        rbx_2 += 1
    while (rbx_2 s< r10)
    
    r9 = var_58

int64_t result = j_sub_140a74f90(r9)
__security_check_cookie(rax_1 ^ &var_e8)
return result
