// 函数: sub_1421d0840
// 地址: 0x1421d0840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
uint64_t result = *(arg1 + 0x28)
int128_t zmm6 = arg2
uint64_t result_1 = result
int32_t rcx = *(result + 0x98)

if (rcx s> 0)
    int32_t r12_1 = 0
    void* rax_3 = nullptr
    void* r14_1 = **(*(arg1 + 0x10) + 0x40)
    void* var_58_1 = nullptr
    int32_t var_4c_1 = 8
    int32_t var_50_1 = rcx + 1
    void var_b8
    
    if (rcx + 1 s> 8)
        sub_14085a560(&var_b8, 0)
        rax_3 = var_58_1
    
    int64_t rbx_1 = sx.q(rcx + 1)
    void* rcx_2 = &var_b8
    
    if (rax_3 != 0)
        rcx_2 = rax_3
    
    memset(rcx_2, 0, rbx_1 * 0xc)
    int32_t var_bc_1 = 8
    void* rax_4 = nullptr
    void* var_c8_1 = nullptr
    int32_t var_c0_1 = rcx + 1
    void var_e8
    
    if (rcx + 1 s> 8)
        sub_141ce8380(&var_e8, 0)
        rax_4 = var_c8_1
    
    void* rcx_4 = &var_e8
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    memset(rcx_4, 0, rbx_1 << 2)
    int64_t r9_1 = sx.q(rcx)
    int64_t var_178_1 = r9_1
    int64_t r15_1 = r9_1
    int32_t var_18c
    uint32_t rdx_2
    
    if (r9_1.d s> 0)
        int64_t rbx_2 = 0
        
        do
            void* rdi_2 = *(arg1 + 0x10)
            sub_140865c40(rdi_2 + 0x60, &var_18c, *(*(r14_1 + 0x90) + (rbx_2 << 3)))
            int64_t rax_5 = sx.q(var_18c)
            void* const rcx_6
            
            if (rax_5.d == 0xffffffff)
                rcx_6 = nullptr
            else
                rcx_6 = *(rdi_2 + 0x60) + rax_5 * 0x18
            
            int32_t* rax_7 = rcx_6 + 8
            
            if (rcx_6 == 0)
                rax_7 = nullptr
            
            if (rax_7 == 0)
                rdx_2 = 0
            else
                rdx_2 = *rax_7
            
            void* rcx_7 = &var_e8
            
            if (var_c8_1 != 0)
                rcx_7 = var_c8_1
            
            *(rcx_7 + (rbx_2 << 2)) = rdx_2
            rbx_2 += 1
        while (rbx_2 s< r15_1)
        
        r9_1 = zx.q(rcx)
    
    int32_t rax_9 = *(arg1 + 0x118)
    void* r10_1 = arg1
    result = zx.q(rax_9 - 1)
    int64_t rcx_8 = sx.q(result.d)
    int64_t var_160_1 = rcx_8
    
    if (rax_9 - 1 s>= 0)
        bool cond:2_1
        
        do
            result = *(r10_1 + 0xf8)
            int32_t r13_1 = 0
            void* r8_7 = sx.q(zx.d(*(result + (rcx_8 << 1))) * *(r10_1 + 0x114)) + *(r10_1 + 0xf0)
            void* var_168_1 = r8_7
            
            if ((*(r8_7 + 0x5c) & 0x4000000) == 0)
                rdx_2.b = 0
                int64_t r14_2 = 0
                int128_t var_128
                __builtin_memcpy(&var_128, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "80\x3f", 
                    0x40)
                void* rdi_3 = nullptr
                void* r11_1 = nullptr
                uint64_t var_1a0 = 0
                int32_t var_198_1 = 0
                uint64_t var_1b0 = 0
                int32_t var_1a8_1 = 0
                uint64_t var_1c0 = 0
                int32_t var_1b8_1 = 0
                void* var_170_1 = nullptr
                char var_1c8_1 = 0
                
                if (r15_1 s<= 0)
                    r12_1 = 0
                else
                    int64_t r15_2 = 0
                    uint128_t zmm0_1
                    float zmm2
                    
                    do
                        void* rax_10 = &var_e8
                        
                        if (var_c8_1 != 0)
                            rax_10 = var_c8_1
                        
                        int64_t rcx_12 = sx.q(*(rax_10 + (r14_2 << 2)))
                        result = *(result_1 + 0x90)
                        void* rsi_1 = *(result + (r14_2 << 3))
                        
                        if (rcx_12.d != 0)
                            void* rbx_3 = r8_7 + rcx_12
                            int32_t rcx_13 = (r9_1 - 1).d
                            void* rax_12 = rbx_3
                            var_18c = rcx_13
                            
                            if (r12_1 != rcx_13)
                                rax_12 = rdi_3
                            
                            rdi_3 = rax_12
                            result = zx.q(*(rsi_1 + 0x38))
                            
                            if (result.b != 0)
                                if (result.b != 1)
                                    if (result.b == 2)
                                        if (r14_2 s> 0 && rdx_2.b == result.b)
                                            int64_t var_150
                                            zmm6 = sub_1421af110(r10_1, r11_1, &var_1a0, &var_1b0, 
                                                &var_1c0, zmm6.d, &var_150, &var_128)
                                            
                                            if (*(rsi_1 + 0x28) s>= 0)
                                                zmm2 = data_143dbb1f8
                                                arg2 = data_143dbb1fc
                                                zmm0_1 = data_143dbb200
                                                var_1a0.d = zmm2
                                                var_1a0:4.d = arg2.d
                                                var_198_1 = zmm0_1.d
                                                var_1b0.d = zmm2
                                                var_1b0:4.d = arg2.d
                                                var_1a8_1 = zmm0_1.d
                                                var_1c0.d = zmm2
                                                var_1c0:4.d = arg2.d
                                                var_1b8_1 = zmm0_1.d
                                            
                                            void* rcx_15 = &var_b8
                                            r10_1 = arg1
                                            
                                            if (var_58_1 != 0)
                                                rcx_15 = var_58_1
                                            
                                            int32_t result_2
                                            result = zx.q(result_2)
                                            r13_1 += 1
                                            *(rcx_15 + r15_2) = var_150
                                            *(rcx_15 + r15_2 + 8) = result.d
                                            r15_2 += 0xc
                                            rcx_13 = var_18c
                                        
                                        if ((*(rsi_1 + 0x28) & 0x80) != 0)
                                            int32_t rax_14 = *(rbx_3 + 0x14)
                                            var_1a0 = *(rbx_3 + 0xc)
                                            var_198_1 = rax_14
                                            int32_t rax_15 = *(rbx_3 + 0x20)
                                            var_1b0 = *(rbx_3 + 0x18)
                                            var_1a8_1 = rax_15
                                            result = zx.q(*(rbx_3 + 0x38))
                                            var_1c0 = *(rbx_3 + 0x30)
                                            var_1b8_1 = result.d
                                else if ((*(rsi_1 + 0x28) & 0x80) != 0)
                                    zmm0_1.d = var_1a0.d.d f* *(rbx_3 + 0xc)
                                    arg2.d = var_1a0:4.d.d f* *(rbx_3 + 0x10)
                                    var_1a0.d = zmm0_1.d
                                    zmm0_1.d = var_198_1.d f* *(rbx_3 + 0x14)
                                    var_1a0:4.d = arg2.d
                                    arg2.d = var_1b0.d.d f* *(rbx_3 + 0x18)
                                    var_198_1 = zmm0_1.d
                                    zmm0_1.d = var_1b0:4.d.d f* *(rbx_3 + 0x1c)
                                    var_1b0.d = arg2.d
                                    arg2.d = var_1a8_1.d f* *(rbx_3 + 0x20)
                                    var_1b0:4.d = zmm0_1.d
                                    zmm0_1.d = var_1c0.d.d f* *(rbx_3 + 0x30)
                                    var_1a8_1 = arg2.d
                                    arg2.d = var_1c0:4.d.d f* *(rbx_3 + 0x34)
                                    var_1c0.d = zmm0_1.d
                                    zmm0_1.d = var_1b8_1.d f* *(rbx_3 + 0x38)
                                    var_1c0:4.d = arg2.d
                                    var_1b8_1 = zmm0_1.d
                            else if ((*(rsi_1 + 0x28) & 0x80) != 0)
                                zmm0_1.d = var_1a0.d.d f+ *(rbx_3 + 0xc)
                                arg2.d = var_1a0:4.d.d f+ *(rbx_3 + 0x10)
                                var_1a0.d = zmm0_1.d
                                zmm0_1.d = var_198_1.d f+ *(rbx_3 + 0x14)
                                var_1a0:4.d = arg2.d
                                arg2.d = var_1b0.d.d f+ *(rbx_3 + 0x18)
                                var_198_1 = zmm0_1.d
                                zmm0_1.d = var_1b0:4.d.d f+ *(rbx_3 + 0x1c)
                                var_1b0.d = arg2.d
                                arg2.d = var_1a8_1.d f+ *(rbx_3 + 0x20)
                                var_1b0:4.d = zmm0_1.d
                                zmm0_1.d = var_1c0.d.d f+ *(rbx_3 + 0x30)
                                var_1a8_1 = arg2.d
                                arg2.d = var_1c0:4.d.d f+ *(rbx_3 + 0x34)
                                var_1c0.d = zmm0_1.d
                                zmm0_1.d = var_1b8_1.d f+ *(rbx_3 + 0x38)
                                var_1c0:4.d = arg2.d
                                var_1b8_1 = zmm0_1.d
                            
                            if (r12_1 == rcx_13)
                                int64_t var_140
                                zmm6 = sub_1421af110(r10_1, rbx_3, &var_1a0, &var_1b0, &var_1c0, 
                                    zmm6.d, &var_140, &var_128)
                                void* rcx_17 = &var_b8
                                
                                if (var_58_1 != 0)
                                    rcx_17 = var_58_1
                                
                                int32_t result_3
                                result = zx.q(result_3)
                                r13_1 += 1
                                *(rcx_17 + r15_2) = var_140
                                *(rcx_17 + r15_2 + 8) = result.d
                                r15_2 += 0xc
                            
                            r10_1 = arg1
                            r8_7 = var_168_1
                            
                            if (*(rsi_1 + 0x28) s>= 0)
                                rdx_2 = zx.d(var_1c8_1)
                                r11_1 = var_170_1
                            else
                                rdx_2 = zx.d(*(rsi_1 + 0x38))
                                r11_1 = rbx_3
                                var_1c8_1 = rdx_2.b
                                var_170_1 = rbx_3
                        
                        r9_1 = zx.q(rcx)
                        r12_1 += 1
                        r14_2 += 1
                    while (r14_2 s< var_178_1)
                    
                    r12_1 = 0
                    
                    if (rdi_3 != 0)
                        int64_t r10_2 = 0
                        *(rdi_3 + 0xc) = data_143dbb1f8.q
                        int64_t r8_10 = sx.q(r13_1)
                        *(rdi_3 + 0x14) = data_143dbb200
                        
                        if (r8_10 s>= 4)
                            int64_t r11_2 = 0
                            int64_t i_3 = ((r8_10 - 4) u>> 2) + 1
                            r10_2 = i_3 << 2
                            int64_t i
                            
                            do
                                void* rcx_18 = &var_b8
                                
                                if (var_58_1 != 0)
                                    rcx_18 = var_58_1
                                
                                zmm2 = *(rdi_3 + 0xc) f+ *(rcx_18 + r11_2)
                                *(rdi_3 + 0xc) = zmm2
                                arg2.d = (*(rcx_18 + r11_2 + 4)).d f+ *(rdi_3 + 0x10)
                                *(rdi_3 + 0x10) = arg2.d
                                void* rcx_19 = &var_b8
                                zmm0_1.d = (*(rcx_18 + r11_2 + 8)).d f+ *(rdi_3 + 0x14)
                                *(rdi_3 + 0x14) = zmm0_1.d
                                
                                if (var_58_1 != 0)
                                    rcx_19 = var_58_1
                                
                                zmm2 = zmm2 f+ *(rcx_19 + r11_2 + 0xc)
                                *(rdi_3 + 0xc) = zmm2
                                arg2.d = arg2.d f+ *(rcx_19 + r11_2 + 0x10)
                                *(rdi_3 + 0x10) = arg2.d
                                zmm0_1.d = zmm0_1.d f+ *(rcx_19 + r11_2 + 0x14)
                                void* rcx_20 = &var_b8
                                *(rdi_3 + 0x14) = zmm0_1.d
                                
                                if (var_58_1 != 0)
                                    rcx_20 = var_58_1
                                
                                zmm2 = zmm2 f+ *(rcx_20 + r11_2 + 0x18)
                                *(rdi_3 + 0xc) = zmm2
                                arg2.d = arg2.d f+ *(rcx_20 + r11_2 + 0x1c)
                                *(rdi_3 + 0x10) = arg2.d
                                zmm0_1.d = zmm0_1.d f+ *(rcx_20 + r11_2 + 0x20)
                                void* rcx_21 = &var_b8
                                *(rdi_3 + 0x14) = zmm0_1.d
                                
                                if (var_58_1 != 0)
                                    rcx_21 = var_58_1
                                
                                *(rdi_3 + 0xc) = zmm2 f+ *(rcx_21 + r11_2 + 0x24)
                                arg2.d = arg2.d f+ *(rcx_21 + r11_2 + 0x28)
                                *(rdi_3 + 0x10) = arg2.d
                                zmm0_1.d = zmm0_1.d f+ *(rcx_21 + r11_2 + 0x2c)
                                r11_2 += 0x30
                                *(rdi_3 + 0x14) = zmm0_1.d
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                        
                        if (r10_2 s< r8_10)
                            int64_t rdx_8 = r10_2 * 0xc
                            int64_t i_2 = r8_10 - r10_2
                            int64_t i_1
                            
                            do
                                int32_t* rcx_22 = &var_b8
                                
                                if (var_58_1 != 0)
                                    rcx_22 = var_58_1
                                
                                zmm0_1.d = (*(rdi_3 + 0xc)).d f+ *(rcx_22 + rdx_8)
                                *(rdi_3 + 0xc) = zmm0_1.d
                                arg2.d = (*(rcx_22 + rdx_8 + 4)).d f+ *(rdi_3 + 0x10)
                                *(rdi_3 + 0x10) = arg2.d
                                zmm0_1 = *(rcx_22 + rdx_8 + 8)
                                rdx_8 += 0xc
                                zmm0_1.d = zmm0_1.d f+ *(rdi_3 + 0x14)
                                *(rdi_3 + 0x14) = zmm0_1.d
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                        
                        void* rcx_23 = &var_b8
                        
                        if (var_58_1 != 0)
                            rcx_23 = var_58_1
                        
                        result, rdx_2 = memset(rcx_23, 0, sx.q(rcx + 1) * 0xc)
                    
                    r15_1 = var_178_1
            
            r10_1 = arg1
            rcx_8 = var_160_1 - 1
            cond:2_1 = var_160_1 - 1 s>= 0
            r9_1 = zx.q(rcx)
            var_160_1 = rcx_8
        while (cond:2_1)
    
    if (var_c8_1 != 0)
        result = sub_140a74f90(var_c8_1)
    
    if (var_58_1 != 0)
        result = sub_140a74f90(var_58_1)

__security_check_cookie(rax_1 ^ &var_208)
return result
