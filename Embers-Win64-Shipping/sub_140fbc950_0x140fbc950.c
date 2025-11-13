// 函数: sub_140fbc950
// 地址: 0x140fbc950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t rbx = *(arg1 + 0x2e0)
int64_t var_188 = rbx
char* r14 = arg3
int32_t result = (**(arg1 + 0x2a8))()

if (rbx != 0)
    result += 1

uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
int32_t var_1a8
int32_t var_19c
uint64_t var_190
uint128_t var_160
int32_t var_150
uint128_t var_140
uint64_t var_130
int32_t var_124
uint128_t var_120
int64_t var_110
char var_10c
uint128_t var_108

if (result s<= 0)
    void* rdi_5 = *(arg1 + 0x300)
    
    if (rdi_5 != 0)
        int64_t* rbx_3 = *(arg1 + 0x308)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        bool cond:0_1 = data_143e20cf4 != 0
        zmm7 = data_143dbb1f0.d
        zmm8 = data_143dbb1f0:4.d
        var_1a8 = 0x3f800000
        int32_t var_1a4_3 = zmm7.d
        int32_t var_1a0_3 = zmm8.d
        uint128_t zmm0_5
        uint128_t zmm1_3
        
        if (cond:0_1)
            int128_t* rax_36 = sub_140e111c0(rdi_5 + 0x1c8)
            char rcx_36 = 0
            
            if (*(rax_36 + 0x18) == 0)
                zmm1_3 = var_140
            else
                zmm0_5 = zx.o(rax_36[1].q)
                rcx_36 = 1
                zmm1_3 = *rax_36
                var_130 = zmm0_5.q
                var_130.d = (zmm0_5 ^ data_142d3f780).d
            
            if (rcx_36 == 0)
                goto label_140fbd227
            
            var_150.q = var_130
            var_160 = zmm1_3
            goto label_140fbd16b
        
        int128_t* rax_35 = sub_140e111c0(rdi_5 + 0x1c8)
        
        if (*(rax_35 + 0x18) == 0)
        label_140fbd227:
            zmm1_3 = *(arg2 + 4)
            zmm6 = *(arg2 + 8)
            var_140.d = (*arg2).d
            var_160 = data_142d8c9b0
            var_140:4.d = zmm1_3.d
            int32_t var_150_2 = zmm7.d
            int32_t var_14c_3 = zmm8.d
            zmm7, zmm8 = sub_1408b8950(&var_124, &var_160, arg2 + 0x1c)
            zmm1_3.d = zmm6.d f* zmm7.d
            uint128_t zmm0_6
            zmm0_6.d = zmm6.d f* zmm8.d
            char var_10c_2 = var_10c ^ ((*(arg2 + 0x34) ^ var_10c) & 1)
            zmm1_3.d = zmm1_3.d f+ *(arg2 + 0xc)
            var_140:8.d = zmm6.d
            zmm0_6.d = zmm0_6.d f+ arg2[1].d
            var_130:4.d = zmm7.d
            int32_t var_128_3 = zmm8.d
            var_140:0xc.d = zmm1_3.d
            var_130.d = zmm0_6.d
        else
            zmm1_3 = zx.o(rax_35[1].q)
            var_160 = *rax_35
            var_150.q = zmm1_3.q
        label_140fbd16b:
            char var_148_5 = 1
            
            if (*(rdi_5 + 0x210) != 0)
                int64_t* rcx_37 = *(rdi_5 + 0x208)
                
                if (rcx_37 != 0 && (*(*rcx_37 + 0x28))(rcx_37) != 0)
                    int64_t* r12_2
                    
                    if (*(rdi_5 + 0x210) == 0)
                        r12_2 = nullptr
                    else
                        r12_2 = *(rdi_5 + 0x208)
                    
                    (*(*r12_2 + 0x48))(r12_2, &var_188)
                    *(rdi_5 + 0x1f8) = var_188
            
            zmm0_5 = zx.o(*(rdi_5 + 0x1f8))
            var_19c = (*(arg2 + 8)).d
            zmm1_3 = arg2[1].d
            int128_t* var_1c0_3 = &var_19c
            var_190 = zmm0_5.q
            int32_t var_198_3 = (*(arg2 + 0xc)).d
            int32_t var_194_3 = zmm1_3.d
            sub_140dd8200(&var_140, arg2, &var_1a8, &var_160, &var_190, var_1c0_3, arg2 + 0x1c)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        void* var_d0_3 = rdi_5
        var_108 = var_140
        uint128_t var_f8_3 = var_130.o
        uint64_t var_d8_3 = var_110
        uint128_t var_e8_3 = var_120
        
        if (rbx_3 != 0)
            int32_t rax_42 = rbx_3[1].d
            rbx_3[1].d = rax_42
            
            if (rax_42 == 0)
                (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        result = sub_140d99900(r14, &var_108)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp5_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
else
    int64_t* r12_1 = nullptr
    int32_t zmm2 = *(arg2 + 4)
    zmm7 = zx.o(0)
    int32_t r13_1 = 0
    int128_t zmm10 = 0x40400000
    int128_t zmm11 = 0x80000000
    int64_t var_178_1 = sx.q(result)
    zmm8.d = (*arg2).d f/ _mm_cvtepi32_ps(zx.o(result)).d
    zmm8.d = zmm8.d f- 3f
    uint128_t zmm9
    zmm9.d = zmm8.d f* 0.5f
    uint128_t zmm0
    zmm0.d = zmm8.d
    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
    uint128_t zmm1
    zmm1.d = zmm2
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    uint64_t var_180 = zmm1.q
    uint128_t zmm12 = zmm1
    zmm9.d = zmm9.d f+ *(arg1 + 0x2f0)
    
    if (result s> 0)
        void* rcx_2 = arg1 + 0x2a8
        int64_t* r14_1 = nullptr
        int64_t i
        
        do
            if (rbx != 0 && not(zmm7.d f> zmm9.d))
                zmm0.d = zmm7.d f+ zmm8.d
                
                if (not(zmm9.d f>= zmm0.d))
                    zmm0.d = zmm8.d f+ zmm10.d
                    zmm7.d = zmm7.d f+ zmm0.d
            
            result = (**rcx_2)()
            
            if (r13_1 s< result)
                int64_t rax_4 = *(arg1 + 0x2b8)
                int64_t* rbx_1 = *(r14_1 + rax_4 + 8)
                void* rdi_1 = *(r14_1 + rax_4)
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                bool cond:2_1 = data_143e20cf4 != 0
                int32_t var_198_1 = zmm7.d
                var_19c = 0x3f800000
                int32_t var_194_1 = 0
                char rcx_4
                uint128_t zmm0_1
                uint128_t zmm1_1
                char var_148_3
                
                if (cond:2_1)
                    uint128_t* rax_6 = sub_140e111c0(rdi_1 + 0x1c8)
                    char rdx_1 = 0
                    
                    if (*(rax_6 + 0x18) == 0)
                        zmm1_1 = var_140
                    else
                        zmm0_1 = zx.o(rax_6[1].q)
                        rdx_1 = 1
                        zmm1_1 = *rax_6
                        var_130 = zmm0_1.q
                        var_130.d = (zmm0_1 ^ zmm11).d
                    
                    rcx_4 = 0
                    char var_148_2 = 0
                    
                    if (rdx_1 != 0)
                        var_150.q = var_130
                        var_160 = zmm1_1
                        rcx_4 = 1
                        var_148_3 = 1
                else
                    int128_t* rax_5 = sub_140e111c0(rdi_1 + 0x1c8)
                    rcx_4 = 0
                    char var_148_1 = 0
                    
                    if (*(rax_5 + 0x18) != 0)
                        zmm1_1 = zx.o(rax_5[1].q)
                        var_160 = *rax_5
                        var_150.q = zmm1_1.q
                        rcx_4 = 1
                        var_148_3 = 1
                
                if (rcx_4 == 0)
                    zmm6 = *(arg2 + 8)
                    var_150 = zmm7.d
                    var_160 = data_142d8c9b0
                    int32_t var_14c_1 = 0
                    var_140.q = zmm12.q
                    zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 =
                        sub_1408b8950(&var_124, &var_160, arg2 + 0x1c)
                    zmm1_1.d = zmm6.d f* zmm7.d
                    int32_t var_128_1 = 0
                    var_130.d = arg2[1].d.d
                    var_140:8.d = zmm6.d
                    zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
                    var_130:4.d = zmm7.d
                    var_10c ^= (*(arg2 + 0x34) ^ var_10c) & 1
                    var_140:0xc.d = zmm1_1.d
                else
                    if (*(rdi_1 + 0x210) != 0)
                        int64_t* rcx_5 = *(rdi_1 + 0x208)
                        
                        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
                            int64_t* rcx_6
                            
                            if (*(rdi_1 + 0x210) == 0)
                                rcx_6 = nullptr
                            else
                                rcx_6 = *(rdi_1 + 0x208)
                            
                            int64_t var_168
                            (*(*rcx_6 + 0x48))(rcx_6, &var_168)
                            *(rdi_1 + 0x1f8) = var_168
                    
                    zmm0_1 = zx.o(*(rdi_1 + 0x1f8))
                    var_1a8 = (*(arg2 + 8)).d
                    zmm1_1 = arg2[1].d
                    int128_t* var_1c0_1 = &var_1a8
                    var_190 = zmm0_1.q
                    int32_t var_1a4_1 = (*(arg2 + 0xc)).d
                    int32_t var_1a0_1 = zmm1_1.d
                    zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 = sub_140dd8200(&var_140, &var_180, 
                        &var_19c, &var_160, &var_190, var_1c0_1, arg2 + 0x1c)
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                void* var_d0_1 = rdi_1
                var_108 = var_140
                uint128_t var_f8_1 = var_130.o
                uint64_t var_d8_1 = var_110
                uint128_t var_e8_1 = var_120
                
                if (rbx_1 != 0)
                    int32_t rax_12 = rbx_1[1].d
                    rbx_1[1].d = rax_12
                    
                    if (rax_12 == 0)
                        (**rbx_1)(rbx_1)
                        int32_t temp12_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                result = sub_140d99900(arg3, &var_108)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp15_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        result = (**rbx_1)(rbx_1)
                        int32_t temp17_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx = var_188
                zmm0.d = zmm8.d f+ zmm10.d
                zmm7.d = zmm7.d f+ zmm0.d
            
            r13_1 += 1
            rcx_2 = arg1 + 0x2a8
            r14_1 = &r14_1[2]
            i = var_178_1
            var_178_1 -= 1
        while (i != 1)
        r14 = arg3
    
    if (rbx != 0)
        void* rdi_3 = *(arg1 + 0x2d0)
        
        if (rdi_3 != 0)
            int64_t* rbx_2 = *(arg1 + 0x2d8)
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
            
            bool cond:1_1 = data_143e20cf4 != 0
            zmm7 = *(arg1 + 0x2f0)
            int32_t var_1a4_2 = zmm7.d
            var_1a8 = 0x3f800000
            int32_t var_1a0_2 = 0
            uint128_t zmm0_3
            uint128_t zmm1_2
            
            if (cond:1_1)
                uint128_t* rax_20 = sub_140e111c0(rdi_3 + 0x1c8)
                char rcx_18 = 0
                
                if (*(rax_20 + 0x18) == 0)
                    zmm1_2 = var_140
                else
                    zmm0_3 = zx.o(rax_20[1].q)
                    rcx_18 = 1
                    zmm1_2 = *rax_20
                    var_130 = zmm0_3.q
                    var_130.d = (zmm0_3 ^ zmm11).d
                
                if (rcx_18 == 0)
                    goto label_140fbcf10
                
                var_150.q = var_130
                var_160 = zmm1_2
                goto label_140fbce50
            
            int128_t* rax_19 = sub_140e111c0(rdi_3 + 0x1c8)
            
            if (*(rax_19 + 0x18) == 0)
            label_140fbcf10:
                zmm6 = *(arg2 + 8)
                int32_t var_150_1 = zmm7.d
                var_160 = data_142d8c9b0
                int32_t var_14c_2 = 0
                var_140.q = zmm12.q
                zmm7 = sub_1408b8950(&var_124, &var_160, arg2 + 0x1c)
                zmm1_2.d = zmm6.d f* zmm7.d
                int32_t var_128_2 = 0
                var_130.d = arg2[1].d.d
                var_140:8.d = zmm6.d
                zmm1_2.d = zmm1_2.d f+ *(arg2 + 0xc)
                var_130:4.d = zmm7.d
                char var_10c_1 = var_10c ^ ((*(arg2 + 0x34) ^ var_10c) & 1)
                var_140:0xc.d = zmm1_2.d
            else
                zmm1_2 = zx.o(rax_19[1].q)
                var_160 = *rax_19
                var_150.q = zmm1_2.q
            label_140fbce50:
                char var_148_4 = 1
                
                if (*(rdi_3 + 0x210) != 0)
                    int64_t* rcx_19 = *(rdi_3 + 0x208)
                    
                    if (rcx_19 != 0 && (*(*rcx_19 + 0x28))(rcx_19) != 0)
                        if (*(rdi_3 + 0x210) != 0)
                            r12_1 = *(rdi_3 + 0x208)
                        
                        (*(*r12_1 + 0x48))(r12_1, &var_188)
                        *(rdi_3 + 0x1f8) = var_188
                
                zmm0_3 = zx.o(*(rdi_3 + 0x1f8))
                var_19c = (*(arg2 + 8)).d
                zmm1_2 = arg2[1].d
                int128_t* var_1c0_2 = &var_19c
                var_190 = zmm0_3.q
                int32_t var_198_2 = (*(arg2 + 0xc)).d
                int32_t var_194_2 = zmm1_2.d
                sub_140dd8200(&var_140, &var_180, &var_1a8, &var_160, &var_190, var_1c0_2, 
                    arg2 + 0x1c)
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            void* var_d0_2 = rdi_3
            var_108 = var_140
            uint128_t var_f8_2 = var_130.o
            uint64_t var_d8_2 = var_110
            uint128_t var_e8_2 = var_120
            
            if (rbx_2 != 0)
                int32_t rax_26 = rbx_2[1].d
                rbx_2[1].d = rax_26
                
                if (rax_26 == 0)
                    (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            result = sub_140d99900(r14, &var_108)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp9_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp10_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        result = (**rbx_2)(rbx_2)
                        int32_t temp16_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp16_1 == 1)
                            result = (*(*rbx_2 + 8))(rbx_2, 1)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
