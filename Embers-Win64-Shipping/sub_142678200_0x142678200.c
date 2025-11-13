// 函数: sub_142678200
// 地址: 0x142678200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = *(arg1 + 0x330)
int32_t r14 = 0
bool result = *(arg1 + 0x338) s> 0
bool arg_8 = false
void* r12_2 = &rdi[sx.q(*(arg1 + 0x338)) * 2]
void* arg_10 = r12_2

if (rdi != r12_2)
    int128_t zmm6 = 0x80000000
    int64_t r13
    int64_t var_38_1 = r13
    
    do
        if (sub_140d3c6e0(*rdi + 0xc0) != 0)
            void* rcx_2 = *rdi
            r13.b = 0
            int32_t var_1a8
            
            if ((*(rcx_2 + 0xc8) & 1) != 0 && ((*(rcx_2 + 0xc8) u>> 2).b & 1) != 0)
                uint128_t zmm0 = zx.o(data_143dbb1f8.q)
                int32_t rax_3 = data_143dbb200
                void* var_d0_1 = rcx_2
                uint64_t var_ec_1 = zmm0.q
                int32_t var_f0_1 = rax_3
                void** const var_d8 = &data_143459b08
                int128_t* var_c8_1 = nullptr
                zmm0.q = zmm0.q
                int32_t var_c0_1 = 0
                int64_t var_b8
                __builtin_memset(&var_b8, 0, 0x11)
                int64_t var_a4_1 = 0
                int32_t var_9c_1 = 0x3f800000
                *(rcx_2 + 0x30) = zmm0
                int32_t var_e4_1 = rax_3
                uint128_t var_f8 = zmm0
                *(rcx_2 + 0x40) = var_ec_1
                *(rcx_2 + 0x48) = 0.d
                void* rax_5 = sub_140d3c6e0(*rdi + 0xc0)
                
                if (rax_5 != 0)
                    void* rax_7 = sub_140d21950(rax_5, sub_14254cd20())
                    
                    if (rax_7 != 0)
                        int64_t rdx_2 = *rax_7
                        (*(rdx_2 + 0x38))(rax_7, rdx_2)
                        int64_t r9_1 = *rax_7
                        (*(r9_1 + 0x28))(rax_7, &var_d8, arg1 + 0x88, r9_1, var_1a8)
                        int128_t* rcx_8 = var_c8_1
                        uint32_t r9_2 = 0
                        int32_t rdx_5 = var_c0_1 s/ 3
                        uint128_t zmm1
                        
                        if (rdx_5 s>= 4)
                            uint64_t rax_12 = zx.q(((rdx_5 - 4) u>> 2) + 1)
                            uint64_t i_3 = zx.q(rax_12.d)
                            r9_2 = (rax_12 << 2).d
                            uint64_t i
                            
                            do
                                int32_t rax_13 = *(rcx_8 + 8)
                                zmm1 = *(rcx_8 + 4) ^ zmm6
                                *rcx_8 = (*rcx_8 ^ zmm6).d
                                int128_t zmm0_1 = *(rcx_8 + 0xc)
                                *(rcx_8 + 8) = zmm1.d
                                zmm1 = rcx_8[1].d ^ zmm6
                                *(rcx_8 + 0xc) = (zmm0_1 ^ zmm6).d
                                zmm0_1 = *(rcx_8 + 0x18)
                                *(rcx_8 + 4) = rax_13
                                int32_t rax_14 = *(rcx_8 + 0x14)
                                *(rcx_8 + 0x14) = zmm1.d
                                zmm1 = *(rcx_8 + 0x1c) ^ zmm6
                                rcx_8[1].d = rax_14
                                int32_t rax_15 = rcx_8[2].d
                                *(rcx_8 + 0x18) = (zmm0_1 ^ zmm6).d
                                zmm0_1 = *(rcx_8 + 0x24)
                                rcx_8[2].d = zmm1.d
                                zmm1 = *(rcx_8 + 0x28)
                                *(rcx_8 + 0x1c) = rax_15
                                int32_t rax_16 = *(rcx_8 + 0x2c)
                                *(rcx_8 + 0x24) = (zmm0_1 ^ zmm6).d
                                *(rcx_8 + 0x2c) = (zmm1 ^ zmm6).d
                                *(rcx_8 + 0x28) = rax_16
                                rcx_8 = &rcx_8[3]
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                        
                        if (r9_2 s< rdx_5)
                            int32_t* rcx_9 = rcx_8 + 8
                            uint64_t i_2 = zx.q(rdx_5 - r9_2)
                            uint64_t i_1
                            
                            do
                                int32_t rax_17 = *rcx_9
                                zmm1 = rcx_9[-1] ^ zmm6
                                rcx_9[-2] = (rcx_9[-2] ^ zmm6).d
                                *rcx_9 = zmm1.d
                                rcx_9[-1] = rax_17
                                rcx_9 = &rcx_9[3]
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        sub_142696ee0(&var_d8)
                        r13.b = 1
                
                int64_t rcx_11 = var_b8
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                if (var_c8_1 != 0)
                    sub_140a74f90(var_c8_1)
            
            void* rbx_3 = *rdi
            
            if ((*(rbx_3 + 0xc8) & 3) != 0)
                sub_14264ec70(*(arg1 + 0x340), rbx_3)
                rbx_3 = *rdi
            
            int32_t rax_18 = *(rbx_3 + 0x70)
            int64_t var_140
            int64_t var_130
            int64_t var_120
            int64_t var_110
            int32_t* rbx_4
            
            if ((rax_18.b & 1) == 0)
                int32_t var_148 = rax_18
                var_140 = 0
                r14 |= 2
                int32_t var_138_1 = 0
                sub_1407473e0(&var_140, rbx_3 + 0x78)
                var_130 = 0
                sub_14266e0d0(&var_130, *(rbx_3 + 0x88), *(rbx_3 + 0x90), 0, 0)
                var_120 = 0
                var_1a8 = 0
                sub_14266e220(&var_120, *(rbx_3 + 0x98), *(rbx_3 + 0xa0), 0, 0)
                var_110 = 0
                int64_t rsi_1 = sx.q(*(rbx_3 + 0xb0))
                int64_t r12_3 = *(rbx_3 + 0xa8)
                int32_t var_108_1 = rsi_1.d
                
                if (rsi_1.d != 0)
                    sub_140808ed0(&var_110, rsi_1.d, 0)
                    memcpy(var_110, r12_3, (rsi_1 * 0x50).d)
                else
                    int32_t var_104_1 = 0
                
                r12_2 = arg_10
                int32_t var_100
                int32_t rcx_21 = var_100 ^ ((var_100 ^ *(rbx_3 + 0xb8)) & 1)
                int32_t var_100_1 = rcx_21
                int32_t rax_26 = ((*(rbx_3 + 0xb8) ^ rcx_21) & 2) ^ rcx_21
                int32_t var_100_2 = rax_26
                int32_t rcx_25 = ((*(rbx_3 + 0xb8) ^ rax_26) & 4) ^ rax_26
                int32_t var_100_3 = rcx_25
                int32_t rdx_16 = ((rcx_25 ^ *(rbx_3 + 0xb8)) & 8) ^ rcx_25
                int32_t var_100_4 = rdx_16
                rbx_4 = &var_148
                var_100 = ((rdx_16 ^ *(rbx_3 + 0xb8)) & 0x10) ^ rdx_16
            else
                r14 |= 1
                void var_98
                rbx_4 = sub_141dc8b30(rbx_3 + 0x70, &var_98, arg1 + 0x350, *(rbx_3 + 0xc0))
            
            int32_t var_198 = *rbx_4
            int64_t var_190 = 0
            int32_t var_188_1 = 0
            
            if (&rbx_4[2] != &var_190 && rbx_4[4] != 0)
                int64_t* rcx_26 = *(rbx_4 + 8)
                
                if (rcx_26 != 0)
                    (*(*rcx_26 + 0x40))(rcx_26, &var_190)
            
            int64_t var_180 = 0
            var_180 = *(rbx_4 + 0x18)
            __builtin_memset(&rbx_4[6], 0, 0x30)
            int32_t rax_35 = rbx_4[8]
            int32_t var_174_1 = rbx_4[9]
            int64_t var_170 = 0
            var_170 = *(rbx_4 + 0x28)
            int32_t rax_38 = rbx_4[0xc]
            int32_t var_164_1 = rbx_4[0xd]
            int64_t var_160_1 = 0
            int64_t rax_40 = *(rbx_4 + 0x38)
            int32_t rax_41 = rbx_4[0x10]
            int32_t var_154_1 = rbx_4[0x11]
            int32_t var_150
            int32_t rcx_28 = var_150 ^ ((var_150 ^ rbx_4[0x12]) & 1)
            int32_t var_150_1 = rcx_28
            int32_t rax_49 = ((rcx_28 ^ rbx_4[0x12]) & 2) ^ rcx_28
            int32_t var_150_2 = rax_49
            int32_t rcx_32 = ((rbx_4[0x12] ^ rax_49) & 4) ^ rax_49
            int32_t var_150_3 = rcx_32
            int32_t rdx_21 = ((rcx_32 ^ rbx_4[0x12]) & 8) ^ rcx_32
            int32_t var_150_4 = rdx_21
            var_150 = ((rdx_21 ^ rbx_4[0x12]) & 0x10) ^ rdx_21
            
            if ((r14.b & 2) != 0)
                int64_t rcx_33 = var_110
                r14 &= 0xfffffffd
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                sub_141db7f30(&var_120)
                sub_141db7ed0(&var_130)
                sub_140745b20(&var_140)
            
            if ((r14.b & 1) != 0)
                r14 &= 0xfffffffe
                int64_t var_60
                
                if (var_60 != 0)
                    sub_140a74f90(var_60)
                
                void var_70
                sub_141db7f30(&var_70)
                void var_80
                sub_141db7ed0(&var_80)
                void var_90
                sub_140745b20(&var_90)
            
            if ((*(arg1 + 0x14) & 4) != 0)
                void* rsi_2 = *rdi
                
                if (*(rsi_2 + 0x28) != 0 || *(rsi_2 + 0x18) != 0)
                    int64_t* rbx_5 = rdi[1]
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                    
                    if (sub_141ded450(rsi_2) != 0)
                        sub_142674160(arg1, rsi_2 + 0x10, &var_198, rsi_2 + 0x50)
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            (**rbx_5)(rbx_5)
                            int32_t rax_58 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (rax_58 == 1)
                                (*(*rbx_5 + 8))(rbx_5, 1)
                    
                    if (r13.b != 0)
                        void* rcx_46 = *rdi + 0x10
                        *(rcx_46 + 8) = 0
                        
                        if (*(rcx_46 + 0xc) != 0)
                            sub_1405c5510(rcx_46, 0)
            
            if (rax_35 != 0 || rax_38 != 0 || rax_41 != 0)
                zmm6 = sub_142674450(arg1, &var_198, *rdi + 0x50)
            
            if (rax_40 != 0)
                sub_140a74f90(rax_40)
            
            sub_141db7f30(&var_170)
            sub_141db7ed0(&var_180)
            sub_140745b20(&var_190)
        
        rdi = &rdi[2]
    while (rdi != r12_2)

return result
