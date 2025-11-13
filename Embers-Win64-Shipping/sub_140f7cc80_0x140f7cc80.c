// 函数: sub_140f7cc80
// 地址: 0x140f7cc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    int32_t r15_1 = 0
    result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    
    if (result s> 0)
        void* rdi_1 = arg2 + 0x1c
        int64_t* r14_1 = nullptr
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        uint128_t zmm10
        uint128_t var_88_1 = zmm10
        int128_t zmm11 = 0x80000000
        int128_t zmm12 = 0xbf000000
        int128_t zmm6
        int128_t var_48_1 = zmm6
        
        do
            void* rbx_1 = *(r14_1 + *(arg1 + 0x2b8))
            
            if (*(rbx_1 + 0x58) != 0)
                int64_t* rcx_2 = *(rbx_1 + 0x50)
                
                if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                    int64_t* rcx_3
                    
                    if (*(rbx_1 + 0x58) == 0)
                        rcx_3 = nullptr
                    else
                        rcx_3 = *(rbx_1 + 0x50)
                    
                    int64_t var_188
                    (*(*rcx_3 + 0x48))(rcx_3, &var_188)
                    *(rbx_1 + 0x40) = var_188
            
            int32_t rcx_4 = *(rbx_1 + 0x60)
            zmm7 = zx.o(0)
            zmm9 = *(rbx_1 + 0x40)
            zmm8 = zx.o(0)
            zmm10 = *(rbx_1 + 0x44)
            int32_t var_1a8 = zmm9.d
            int32_t var_1a4_1 = zmm10.d
            
            if (rcx_4 == 2)
                zmm7.d = zmm9.d f* zmm12.d
            else if (rcx_4 == 3)
                zmm7 = zmm9 ^ zmm11
            
            int32_t rcx_6 = *(rbx_1 + 0x64)
            
            if (rcx_6 == 2)
                zmm8.d = zmm10.d f* zmm12.d
            else if (rcx_6 == 3)
                zmm8 = zmm10 ^ zmm11
            
            if (*(rbx_1 + 0x38) != 0)
                int64_t* rcx_8 = *(rbx_1 + 0x30)
                
                if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
                    int64_t* rcx_9
                    
                    if (*(rbx_1 + 0x38) == 0)
                        rcx_9 = nullptr
                    else
                        rcx_9 = *(rbx_1 + 0x30)
                    
                    int64_t var_180
                    (*(*rcx_9 + 0x48))(rcx_9, &var_180)
                    *(rbx_1 + 0x20) = var_180
            
            zmm7.d = zmm7.d f+ *(rbx_1 + 0x20)
            zmm8.d = zmm8.d f+ *(rbx_1 + 0x24)
            int128_t* rcx_11 = *(rbx_1 + 0x10) + 0x1c8
            int32_t var_194 = 0x3f800000
            int32_t var_190_1 = zmm7.d
            int32_t var_18c_1 = zmm8.d
            uint128_t var_160
            uint64_t var_150
            uint128_t var_140
            uint64_t var_130
            char rcx_12
            uint128_t zmm0_1
            uint128_t zmm1_1
            char var_148_3
            
            if (data_143e20cf4 != 0)
                uint128_t* rax_12 = sub_140e111c0(rcx_11)
                char rdx_2 = 0
                
                if (*(rax_12 + 0x18) == 0)
                    zmm1_1 = var_140
                else
                    zmm0_1 = zx.o(rax_12[1].q)
                    rdx_2 = 1
                    zmm1_1 = *rax_12
                    var_130 = zmm0_1.q
                    var_130.d = (zmm0_1 ^ zmm11).d
                
                rcx_12 = 0
                char var_148_2 = 0
                
                if (rdx_2 != 0)
                    var_150 = var_130
                    var_160 = zmm1_1
                    rcx_12 = 1
                    var_148_3 = 1
            else
                int128_t* rax_11 = sub_140e111c0(rcx_11)
                rcx_12 = 0
                char var_148_1 = 0
                
                if (*(rax_11 + 0x18) != 0)
                    zmm1_1 = zx.o(rax_11[1].q)
                    var_160 = *rax_11
                    var_150 = zmm1_1.q
                    rcx_12 = 1
                    var_148_3 = 1
            
            if (rcx_12 == 0)
                zmm6 = *(arg2 + 8)
                var_140.d = zmm9.d
                var_160 = data_142d8c9b0
                var_140:4.d = zmm10.d
                var_150.d = zmm7.d
                var_150:4.d = zmm8.d
                int32_t var_124
                zmm7, zmm8, zmm11, zmm12 = sub_1408b8950(&var_124, &var_160, rdi_1)
                zmm1_1.d = zmm7.d f* zmm6.d
                uint128_t zmm0_2
                zmm0_2.d = zmm8.d f* zmm6.d
                char var_10c = var_10c ^ ((*(arg2 + 0x34) ^ var_10c) & 1)
                zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
                var_140:8.d = zmm6.d
                zmm0_2.d = zmm0_2.d f+ *(arg2 + 0x10)
                var_130:4.d = zmm7.d
                int32_t var_128_1 = zmm8.d
                var_140:0xc.d = zmm1_1.d
                var_130.d = zmm0_2.d
            else
                int64_t* rdi_3 = *(rbx_1 + 0x10) + 0x1f8
                
                if (rdi_3[3].d != 0)
                    int64_t* rcx_13 = rdi_3[2]
                    
                    if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
                        int64_t* rcx_14
                        
                        if (rdi_3[3].d == 0)
                            rcx_14 = nullptr
                        else
                            rcx_14 = rdi_3[2]
                        
                        int64_t var_178
                        (*(*rcx_14 + 0x48))(rcx_14, &var_178)
                        *rdi_3 = var_178
                
                zmm0_1 = zx.o(*rdi_3)
                rdi_1 = arg2 + 0x1c
                int128_t* var_1b8_1 = rdi_1
                int32_t var_1a0
                int128_t* var_1c0_1 = &var_1a0
                var_1a0 = (*(arg2 + 8)).d
                zmm1_1 = *(arg2 + 0x10)
                uint64_t var_170 = zmm0_1.q
                int32_t var_19c_1 = (*(arg2 + 0xc)).d
                int32_t var_198_1 = zmm1_1.d
                zmm11, zmm12 = sub_140dd8200(&var_140, &var_1a8, &var_194, &var_160, &var_170, 
                    var_1c0_1, var_1b8_1)
            
            int64_t* rbx_2 = *(rbx_1 + 0x18)
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int64_t var_d0_1 = *(rbx_1 + 0x10)
            uint128_t var_108 = var_140
            uint128_t var_f8_1 = var_130.o
            int64_t var_110
            uint64_t var_d8_1 = var_110
            uint128_t var_120
            uint128_t var_e8_1 = var_120
            
            if (rbx_2 != 0)
                int32_t rax_18 = rbx_2[1].d
                rbx_2[1].d = rax_18
                
                if (rax_18 == 0)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            sub_140d99900(arg3, &var_108)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            r15_1 += 1
            r14_1 = &r14_1[1]
            result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (r15_1 s< result)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
