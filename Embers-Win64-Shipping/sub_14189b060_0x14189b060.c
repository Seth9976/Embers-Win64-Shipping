// 函数: sub_14189b060
// 地址: 0x14189b060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t result = 0
int64_t var_148 = 0
int32_t var_140 = 0
int64_t var_138
__builtin_memset(&var_138, 0, 0x2c)
bool z

if (0 == *(arg1 + 0x8c))
    *(arg1 + 0x8c) = 0
    z = true
else
    result = *(arg1 + 0x8c)
    z = false

if (z)
    void* r15
    void* var_28_1 = r15
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    bool z_4
    
    do
        bool z_1
        
        if (0 == *(arg1 + 0x88))
            *(arg1 + 0x88) = 0
            z_1 = true
        else
            *(arg1 + 0x88)
            z_1 = false
        
        if (z_1)
            result = 0
            
            if (0 == *(arg1 + 0xd0))
                *(arg1 + 0xd0) = 0
            else
                result = *(arg1 + 0xd0)
            
            if (result s<= 0)
                break
        
        EnterCriticalSection(arg1 + 0x90)
        void* const rbx_1 = **(arg1 + 0xc8)
        int64_t var_128
        int64_t var_120_1
        int32_t var_110_1
        int128_t zmm0
        
        if (rbx_1 != 0)
            int64_t* rsi_1 = rbx_1 + 8
            
            if (&var_148 != rsi_1)
                int64_t rcx_1 = var_148
                
                if (rcx_1 != 0)
                    sub_140a74f90(rcx_1)
                
                var_148 = *rsi_1
                *rsi_1 = 0
                var_140 = rsi_1[1].d
                var_140 = *(rsi_1 + 0xc)
                rsi_1[1] = 0
            
            r15 = *(arg1 + 0xc8)
            int64_t var_d0_1 = 0
            var_138.o = *(rsi_1 + 0x10)
            var_128 = rsi_1[4]
            zmm0 = *(rsi_1 + 0x28)
            int64_t var_108
            __builtin_memset(&var_108, 0, 0x3c)
            var_120_1.o = zmm0
            var_110_1 = rsi_1[7].d
            *(arg1 + 0xc8) = rbx_1
            
            if (rsi_1 != &var_108)
                int64_t rcx_2 = *rsi_1
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                *rsi_1 = 0
                rsi_1[1] = 0
                var_108 = 0
                int64_t var_100_1 = 0
            
            rsi_1[4] = 0
            int64_t var_f8
            *(rsi_1 + 0x10) = var_f8.o
            int64_t var_e0
            *(rsi_1 + 0x28) = var_e0.o
            rsi_1[7].d = 0
            
            if (r15 != 0)
                int64_t rcx_3 = *(r15 + 8)
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                j_sub_140a74f90(r15)
            
            rbx_1.b = 1
        
        LeaveCriticalSection(arg1 + 0x90)
        
        if (rbx_1.b == 0)
            sub_140b73230(0x3dcccccd)
        else
            *(arg1 + 0xd0) -= 1
            void var_c8
            sub_141820510(&var_c8)
            int32_t var_b0_1 = var_140
            int128_t var_c0_1 = var_138.o
            int64_t var_a0_1 = var_128
            int16_t var_a8_1 = 0x300
            int128_t var_98_1 = var_120_1.o
            int32_t var_88_1 = var_110_1
            void*** rax_12 = j_sub_140a82f30(0x18)
            int64_t* r12_1 = rax_12
            
            if (rax_12 == 0)
                r12_1 = nullptr
            else
                *rax_12 = &data_142fe71f8
                r12_1[1] = &var_148
                r12_1[2] = &var_c8
            
            int16_t* var_198
            sub_141839ff0(&var_198, *(arg1 + 0x28), arg1 + 0x18, &var_138, &var_128)
            int64_t* rcx_8 = *(arg1 + 0x30)
            int16_t* const rdx_3 = &data_142d40450
            int64_t var_188 = -1
            int32_t var_190
            
            if (var_190 != 0)
                rdx_3 = var_198
            
            if ((*(*rcx_8 + 0x18))(rcx_8, rdx_3, &var_188) != 0)
                int64_t rax_38 = var_188
                zmm6 = var_138.o
                int64_t* rax_39 = j_sub_140a82f30(0x20)
                
                if (rax_39 != 0)
                    *(rax_39 + 8) = zmm6
                    *rax_39 = 0
                    rax_39[3] = rax_38
                    void** temp0_7 = *(arg1 + 0xe0)
                    *(arg1 + 0xe0) = rax_39
                    *temp0_7
                    *temp0_7 = rax_39
                
                int64_t rax_41 = var_128
                zmm6 = var_138.o
                int64_t* rax_42 = j_sub_140a82f30(0x20)
                
                if (rax_42 != 0)
                    *(rax_42 + 8) = zmm6
                    *rax_42 = 0
                    rax_42[3] = rax_41
                    void** temp0_9 = *(arg1 + 0xf0)
                    *(arg1 + 0xf0) = rax_42
                    *temp0_9
                    *temp0_9 = rax_42
                
                zmm6 = var_138.o
                int64_t* rax_44 = j_sub_140a82f30(0x30)
                
                if (rax_44 != 0)
                    *(rax_44 + 8) = zmm6
                    *rax_44 = 0
                    *(rax_44 + 0x18) = var_120_1.o
                    rax_44[5].d = var_110_1
                    void** temp0_11 = *(arg1 + 0x100)
                    *(arg1 + 0x100) = rax_44
                    *temp0_11
                    *temp0_11 = rax_44
            else
                int32_t r14_1 = *(arg1 + 8)
                r15.b = 0
                bool z_2
                
                if (0 == *(arg1 + 0x8c))
                    *(arg1 + 0x8c) = 0
                    z_2 = true
                else
                    *(arg1 + 0x8c)
                    z_2 = false
                
                if (not(z_2))
                label_14189b59c:
                    int16_t* r9_2 = &data_142d40450
                    
                    if (var_190 != 0)
                        r9_2 = var_198
                    
                    sub_140af98a0("Unknown", 0xda, u"Chunk save failure (%s).", r9_2)
                    sub_140afbb40()
                else
                    while (r15.b == 0)
                        int32_t rax_16 = r14_1
                        r14_1 -= 1
                        
                        if (rax_16 s< 0)
                            goto label_14189b59c
                        
                        void var_168
                        sub_141828370(&var_168)
                        int64_t var_160
                        int64_t* rax_17 = sub_140b1a780(&var_160, &var_198)
                        int16_t* const rdx_5
                        
                        if (rax_17[1].d == 0)
                            rdx_5 = &data_142d40450
                        else
                            rdx_5 = *rax_17
                        
                        int64_t* rcx_11 = *(arg1 + 0x30)
                        (*(*rcx_11 + 0x10))(rcx_11, rdx_5)
                        int64_t rcx_12 = var_160
                        
                        if (rcx_12 != 0)
                            sub_140a74f90(rcx_12)
                        
                        int64_t* rcx_13 = *(arg1 + 0x30)
                        int16_t* r8_3 = &data_142d40450
                        
                        if (var_190 != 0)
                            r8_3 = var_198
                        
                        int64_t* var_1a0
                        (*(*rcx_13 + 0x50))(rcx_13, &var_1a0, r8_3, 0)
                        int64_t* rdx_7 = var_1a0
                        char rax_21
                        int64_t rax_23
                        char rax_24
                        char rax_25
                        
                        if (rdx_7 != 0)
                            int64_t* rcx_14 = *(arg1 + 0x38)
                            rax_21 = (*(*rcx_14 + 0x30))(rcx_14, rdx_7, r12_1)
                            sub_1418283a0(*(arg1 + 0x50), &var_168)
                            int64_t* rcx_16 = var_1a0
                            rax_23 = (*(*rcx_16 + 0x28))(rcx_16)
                            int64_t* rcx_17 = var_1a0
                            int64_t rdx_9 = *rcx_17
                            rax_24 = (*(rdx_9 + 0x1b8))(rcx_17, rdx_9)
                            int64_t* rcx_18 = *(arg1 + 0x30)
                            int16_t* rdx_10 = &data_142d40450
                            
                            if (var_190 != 0)
                                rdx_10 = var_198
                            
                            int64_t r8_5 = *rcx_18
                            rax_25 = (*(r8_5 + 0x80))(rcx_18, rdx_10, r8_5)
                        
                        if (rdx_7 == 0 || rax_24 == 0 || rax_25 == 0 || rax_21 != 0)
                            sub_140b73230(*(arg1 + 0xc))
                        else
                            zmm6 = var_138.o
                            r15.b = 1
                            int64_t* rax_26 = j_sub_140a82f30(0x20)
                            
                            if (rax_26 != 0)
                                *(rax_26 + 8) = zmm6
                                *rax_26 = 0
                                rax_26[3] = rax_23
                                void** temp0_1 = *(arg1 + 0xe0)
                                *(arg1 + 0xe0) = rax_26
                                *temp0_1
                                *temp0_1 = rax_26
                            
                            int64_t rax_28 = var_128
                            zmm6 = var_138.o
                            int64_t* rax_29 = j_sub_140a82f30(0x20)
                            
                            if (rax_29 != 0)
                                *(rax_29 + 8) = zmm6
                                *rax_29 = 0
                                rax_29[3] = rax_28
                                void** temp0_3 = *(arg1 + 0xf0)
                                *(arg1 + 0xf0) = rax_29
                                *temp0_3
                                *temp0_3 = rax_29
                            
                            zmm6 = var_138.o
                            int64_t* rax_31 = j_sub_140a82f30(0x30)
                            
                            if (rax_31 != 0)
                                *(rax_31 + 8) = zmm6
                                *rax_31 = 0
                                *(rax_31 + 0x18) = var_120_1.o
                                rax_31[5].d = var_110_1
                                void** temp0_5 = *(arg1 + 0x100)
                                *(arg1 + 0x100) = rax_31
                                *temp0_5
                                *temp0_5 = rax_31
                            
                            sub_141828360(*(arg1 + 0x58), 1)
                            sub_141828360(*(arg1 + 0x60), rax_23)
                            int32_t var_c4
                            sub_141828360(arg1 + 0x48, zx.q(var_140 + var_c4))
                            int64_t zmm0_4 = float.d(*(arg1 + 0x48))
                            
                            if (not(zmm0_4 f<= 0.0))
                                sub_1418508f0(*(arg1 + 0x70), float.d(**(arg1 + 0x60)) f/ zmm0_4)
                            
                            zmm0 = sub_141831760(**(arg1 + 0x50))
                            
                            if (not(zmm0.q f<= 0.0))
                                sub_1418508e0(*(arg1 + 0x68), 
                                    int.q(float.d(**(arg1 + 0x60)) f/ zmm0.q))
                        
                        int64_t* rcx_34 = var_1a0
                        
                        if (rcx_34 != 0)
                            (**rcx_34)(rcx_34, 1)
                        
                        bool z_3
                        
                        if (0 == *(arg1 + 0x8c))
                            *(arg1 + 0x8c) = 0
                            z_3 = true
                        else
                            *(arg1 + 0x8c)
                            z_3 = false
                        
                        if (not(z_3))
                            if (r15.b != 0)
                                break
                            
                            goto label_14189b59c
            
            int16_t* rcx_41 = var_198
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            if (r12_1 != 0)
                (**r12_1)(r12_1, 1)
        
        result = 0
        
        if (0 == *(arg1 + 0x8c))
            *(arg1 + 0x8c) = 0
            z_4 = true
        else
            result = *(arg1 + 0x8c)
            z_4 = false
    while (z_4)

int64_t rcx_43 = var_148

if (rcx_43 != 0)
    result = sub_140a74f90(rcx_43)

__security_check_cookie(rax_1 ^ &var_1d8)
return result
