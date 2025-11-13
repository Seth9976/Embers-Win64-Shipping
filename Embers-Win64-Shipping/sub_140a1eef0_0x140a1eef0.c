// 函数: sub_140a1eef0
// 地址: 0x140a1eef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
int64_t* rsi = arg1
int32_t r14_1 = arg2 * 7 + 0xd
int64_t r12 = 0
int32_t i_1 = 0
uint64_t result
int32_t i

do
    void* rdi_1 = *rsi
    int32_t rcx = r14_1 * 0xbb38435
    r14_1 = rcx * 0xbb38435 - 0x6290db6e
    int128_t zmm0
    zmm0.d = ((rcx + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
    bool cond:2_1 = zmm0.d f>= 0.0299999993f
    zmm0.d = (r14_1 u>> 9 | 0x3f800000).d f- 1f
    
    if (cond:2_1)
        int64_t rbx_6
        
        if (zmm0.d f>= 0.330000013f)
            result = 0
            uint64_t j_3
            int32_t j_5
            int32_t j_6
            
            if (zmm0.d f>= 0.660000026f)
                if (0 == *(rdi_1 + 0xa8))
                    *(rdi_1 + 0xa8) = 0
                else
                    result = *(rdi_1 + 0xa8)
                
                uint64_t result_4 = result
                int32_t j
                
                for (j = result.d & 0x3ffffff; j != 0; j = result.d & 0x3ffffff)
                    if (((result_4 + 0x40000000) & 0xfffffffffc000000)
                            u< (result_4 & 0xfffffffffc000000))
                        sub_140b73230(0x3a83126f)
                    
                    void* rdx_17
                    
                    if (j != 0)
                        rdx_17 =
                            *((zx.q(j) u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(j) & 0x3fff) * 0x18
                    else
                        rdx_17 = nullptr
                    
                    result = result_4
                    bool z_5
                    
                    if (result == *(rdi_1 + 0xa8))
                        *(rdi_1 + 0xa8) =
                            zx.q(*(rdx_17 + 0x10)) | ((result_4 + 0x40000000) & 0xfffffffffc000000)
                        z_5 = true
                    else
                        result = *(rdi_1 + 0xa8)
                        z_5 = false
                    
                    if (z_5)
                        *(rdx_17 + 0x10) = 0
                        break
                    
                    result = 0
                    
                    if (0 == *(rdi_1 + 0xa8))
                        *(rdi_1 + 0xa8) = 0
                    else
                        result = *(rdi_1 + 0xa8)
                    
                    result_4 = result
                
                rbx_6 = 0
                
                if (j != 0)
                    j_6 = j
                    j_5 = j
                    j_3 = zx.q(j)
                label_140a1f5cc:
                    rbx_6 =
                        *(*((j_3 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(j_6) & 0x3fff) * 0x18 + 8)
                    result = sub_140a24050(j_5)
            else
                if (0 == *(rdi_1 + 0x90))
                    *(rdi_1 + 0x90) = 0
                else
                    result = *(rdi_1 + 0x90)
                
                uint64_t result_3 = result
                int32_t j_1
                
                for (j_1 = result.d & 0x3ffffff; j_1 != 0; j_1 = result.d & 0x3ffffff)
                    if ((((result_3 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (result_3 & 0xfffffffffc000000))
                        sub_140b73230(0x3a83126f)
                    
                    void* rdx_16
                    
                    if (j_1 != 0)
                        rdx_16 = *((zx.q(j_1) u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(j_1) & 0x3fff) * 0x18
                    else
                        rdx_16 = nullptr
                    
                    result = result_3
                    bool z_4
                    
                    if (result == *(rdi_1 + 0x90))
                        *(rdi_1 + 0x90) =
                            zx.q(*(rdx_16 + 0x10)) | ((result_3 & 0xfffffffffc000000) + 0x4000000)
                        z_4 = true
                    else
                        result = *(rdi_1 + 0x90)
                        z_4 = false
                    
                    if (z_4)
                        *(rdx_16 + 0x10) = 0
                        break
                    
                    result = 0
                    
                    if (0 == *(rdi_1 + 0x90))
                        *(rdi_1 + 0x90) = 0
                    else
                        result = *(rdi_1 + 0x90)
                    
                    result_3 = result
                
                rbx_6 = 0
                
                if (j_1 != 0)
                    j_6 = j_1
                    j_5 = j_1
                    j_3 = zx.q(j_1)
                    goto label_140a1f5cc
        else
            result = sub_140a2d3e0(rdi_1)
            rbx_6 = 0
            
            if (result.d != 0)
                rbx_6 = *(*((zx.q(result.d) u>> 0xe << 3) + &data_143cf0bf8)
                    + (zx.q(result.d) & 0x3fff) * 0x18 + 8)
                result = sub_140a24050(result.d)
        
        rsi = arg1
        
        if (rbx_6 != 0)
            void* rdi_10 = *rsi
            r14_1 = r14_1 * 0xbb38435 + 0x3619636b
            zmm0.d = (r14_1 u>> 9 | 0x3f800000).d f- 1f
            
            if (not(zmm0.d f>= 0.330000013f))
                int32_t rax_61 = sub_140a2d7c0(&data_143cf0ae0)
                uint64_t rcx_41 = zx.q(rax_61)
                
                if (rax_61 != 0)
                    *(*((rcx_41 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rcx_41.d) & 0x3fff) * 0x18
                        + 8) = rbx_6
                    result = sub_1405a42f0(rdi_10, rcx_41.d)
                else
                    *8 = rbx_6
                    result = sub_1405a42f0(rdi_10, rcx_41.d)
            else if (zmm0.d f>= 0.660000026f)
                result = sub_140a2f2a0(rdi_10 + 0xa0, rbx_6)
            else
                result = sub_140a2f190(rdi_10 + 0x88, rbx_6)
    else
        int64_t* var_b8 = nullptr
        int64_t var_b0_1 = 0
        int64_t* r15_1
        
        if (zmm0.d f>= 0.330000013f)
            int64_t* rdx_1 = &var_b8
            
            if (zmm0.d f>= 0.660000026f)
                sub_140a2e280(rdi_1 + 0xa0, rdx_1)
            else
                sub_140a2e170(rdi_1 + 0x88, rdx_1)
            
            r15_1 = var_b8
        else
            int64_t rax_7 = 0
            
            if (0 == *(rdi_1 + 0x40))
                *(rdi_1 + 0x40) = 0
            else
                rax_7 = *(rdi_1 + 0x40)
            
            int64_t rbx_1 = rax_7
            int64_t rax_12
            int32_t j_2
            
            for (j_2 = rax_7.d & 0x3ffffff; j_2 != 0; j_2 = rax_12.d & 0x3ffffff)
                if ((((rbx_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                        u< (rbx_1 & 0xfffffffffc000000))
                    sub_140b73230(0x3a83126f)
                
                bool z_1
                
                if (rbx_1 == *(rdi_1 + 0x40))
                    *(rdi_1 + 0x40) = (rbx_1 & 0xfffffffffc000000) + 0x4000000
                    z_1 = true
                else
                    *(rdi_1 + 0x40)
                    z_1 = false
                
                if (z_1)
                    break
                
                rax_12 = 0
                
                if (0 == *(rdi_1 + 0x40))
                    *(rdi_1 + 0x40) = 0
                else
                    rax_12 = *(rdi_1 + 0x40)
                
                rbx_1 = rax_12
            
            r15_1 = var_b8
            
            while (j_2 != 0)
                int64_t rbx_2 = sx.q(var_b0_1.d)
                uint64_t rcx_5 = (zx.q(j_2) & 0x3fff) * 3
                int64_t rax_15 = *((zx.q(j_2) u>> 0xe << 3) + &data_143cf0bf8)
                int64_t rbp_4 = *(rax_15 + (rcx_5 << 3) + 8)
                int32_t rax_16 = (rbx_2 + 1).d
                var_b0_1.d = rax_16
                
                if (rax_16 s> var_b0_1:4.d)
                    sub_1405a4d70(&var_b8)
                    r15_1 = var_b8
                
                r15_1[rbx_2] = rbp_4
                int32_t j_4 = j_2
                j_2 = *(rax_15 + (rcx_5 << 3) + 0x10)
                sub_140a24050(j_4)
            
            rsi = arg1
        
        result = sx.q(var_b0_1.d)
        int64_t var_c0_1 = 0
        void* rcx_9 = &r15_1[result]
        uint64_t r13_4 = (rcx_9 - r15_1 + 7) u>> 3
        
        if (r15_1 u> rcx_9)
            r13_4 = 0
        
        uint64_t var_c8_1 = r13_4
        
        if (r13_4 != 0)
            do
                int64_t rbx_3 = *r15_1
                void* rbp_5 = *rsi
                zmm6.d = ((r14_1 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                int32_t rax_20
                rax_20, zmm6 = sub_140a2d7c0(&data_143cf0ae0)
                uint64_t r14_5 = zx.q(rax_20)
                
                if (zmm6.d f>= 0.330000013f)
                    if (zmm6.d f>= 0.660000026f)
                        void* rax_35
                        
                        if (rax_20 != 0)
                            rax_35 = *((r14_5 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(r14_5.d) & 0x3fff) * 0x18
                        else
                            rax_35 = nullptr
                        
                        *(rax_35 + 8) = rbx_3
                        bool z_3
                        
                        do
                            uint64_t result_2 = 0
                            
                            if (0 == *(rbp_5 + 0xa8))
                                *(rbp_5 + 0xa8) = 0
                            else
                                result_2 = *(rbp_5 + 0xa8)
                            
                            if ((((result_2 & 0xfffffffffc000000) + 0x40000000)
                                    & 0xfffffffffc000000) u< (result_2 & 0xfffffffffc000000))
                                sub_140b73230(0x3a83126f)
                            
                            void* rcx_20
                            
                            if (r14_5.d != 0)
                                rcx_20 = *((r14_5 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(r14_5.d) & 0x3fff) * 0x18
                            else
                                rcx_20 = nullptr
                            
                            *(rcx_20 + 0x10) = result_2.d & 0x3ffffff
                            result = result_2
                            
                            if (result == *(rbp_5 + 0xa8))
                                *(rbp_5 + 0xa8) =
                                    r14_5 | ((result_2 & 0xfffffffffc000000) + 0x40000000)
                                z_3 = true
                            else
                                result = *(rbp_5 + 0xa8)
                                z_3 = false
                        while (not(z_3))
                    else
                        void* rax_25
                        
                        if (rax_20 != 0)
                            rax_25 = *((r14_5 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(r14_5.d) & 0x3fff) * 0x18
                        else
                            rax_25 = nullptr
                        
                        *(rax_25 + 8) = rbx_3
                        bool z_2
                        
                        do
                            uint64_t result_1 = 0
                            
                            if (0 == *(rbp_5 + 0x90))
                                *(rbp_5 + 0x90) = 0
                            else
                                result_1 = *(rbp_5 + 0x90)
                            
                            if ((((result_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                    u< (result_1 & 0xfffffffffc000000))
                                sub_140b73230(0x3a83126f)
                            
                            void* rcx_15
                            
                            if (r14_5.d != 0)
                                rcx_15 = *((r14_5 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(r14_5.d) & 0x3fff) * 0x18
                            else
                                rcx_15 = nullptr
                            
                            *(rcx_15 + 0x10) = result_1.d & 0x3ffffff
                            result = result_1
                            
                            if (result == *(rbp_5 + 0x90))
                                *(rbp_5 + 0x90) =
                                    ((result_1 & 0xfffffffffc000000) + 0x4000000) | r14_5
                                z_2 = true
                            else
                                result = *(rbp_5 + 0x90)
                                z_2 = false
                        while (not(z_2))
                        r12 = var_c0_1
                    
                    rsi = arg1
                    r13_4 = var_c8_1
                else if (rax_20 != 0)
                    *(*((r14_5 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(r14_5.d) & 0x3fff) * 0x18
                        + 8) = rbx_3
                    result = sub_1405a42f0(rbp_5, r14_5.d)
                else
                    *8 = rbx_3
                    result = sub_1405a42f0(rbp_5, r14_5.d)
                
                r14_1 = r14_1 * 0xbb38435 + 0x3619636b
                r12 += 1
                r15_1 = &r15_1[1]
                var_c0_1 = r12
            while (r12 != r13_4)
            
            r15_1 = var_b8
        
        if (r15_1 != 0)
            result = sub_140a74f90(r15_1)
        
        r12 = 0
    
    i = i_1 + 1
    i_1 = i
while (i s< 0xf4240)
return result
