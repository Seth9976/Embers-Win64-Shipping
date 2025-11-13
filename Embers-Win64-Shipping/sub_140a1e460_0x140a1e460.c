// 函数: sub_140a1e460
// 地址: 0x140a1e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
int64_t* rdi = arg1
int32_t r12_1 = arg2 * 7 + 0xd
int32_t i = 0
int32_t i_1 = 0
uint64_t result

do
    void* rbp_1 = *rdi
    int32_t rcx = r12_1 * 0xbb38435
    r12_1 = rcx * 0xbb38435 - 0x6290db6e
    int128_t zmm0
    zmm0.d = ((rcx + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
    bool cond:2_1 = zmm0.d f>= 0.0299999993f
    zmm0.d = (r12_1 u>> 9 | 0x3f800000).d f- 1f
    
    if (cond:2_1)
        uint64_t result_5
        
        if (zmm0.d f>= 0.330000013f)
            if (zmm0.d f>= 0.660000026f)
                result = sub_140a2d230(rbp_1 + 0xf8)
            else
                result = sub_140a2d080(rbp_1 + 0xd0)
            
            result_5 = result
        else
            while (true)
                int64_t rax_95 = 0
                
                if (0 == *(rbp_1 + 0x40))
                    *(rbp_1 + 0x40) = 0
                else
                    rax_95 = *(rbp_1 + 0x40)
                
                int64_t rax_96 = 0
                
                if (0 == *(rbp_1 + 0x88))
                    *(rbp_1 + 0x88) = 0
                else
                    rax_96 = *(rbp_1 + 0x88)
                
                int32_t r15_4 = rax_95.d & 0x3ffffff
                int64_t* rcx_62
                
                if (r15_4 != 0)
                    rcx_62 = *((zx.q(r15_4) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(r15_4) & 0x3fff) * 0x18
                else
                    rcx_62 = nullptr
                
                int32_t rax_100 = 0
                
                if (0 == *rcx_62)
                    *rcx_62 = 0
                else
                    rax_100 = (*rcx_62).d
                
                int64_t rax_101 = 0
                
                if (0 == *(rbp_1 + 0x40))
                    *(rbp_1 + 0x40) = 0
                else
                    rax_101 = *(rbp_1 + 0x40)
                
                if (rax_95 == rax_101)
                    result = zx.q(rax_96.d) & 0x3ffffff
                    
                    if (r15_4 != result.d)
                        uint64_t rax_108 = zx.q(rax_100) & 0x3ffffff
                        void* const rax_109
                        
                        if (rax_108.d != 0)
                            rax_109 = *((rax_108 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_108.d) & 0x3fff) * 0x18
                        else
                            rax_109 = nullptr
                        
                        result_5 = *(rax_109 + 8)
                        
                        if ((((rax_95 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                u< (rax_95 & 0xfffffffffc000000))
                            sub_140b73230(0x3a83126f)
                        
                        bool z_5
                        
                        if (rax_95 == *(rbp_1 + 0x40))
                            *(rbp_1 + 0x40) = (zx.q(rax_100) & 0x3ffffff)
                                | ((rax_95 & 0xfffffffffc000000) + 0x4000000)
                            z_5 = true
                        else
                            *(rbp_1 + 0x40)
                            z_5 = false
                        
                        if (z_5)
                            result = sub_140a24050(r15_4)
                            rdi = arg1
                            i = i_1
                            break
                    else
                        if ((rax_100 & 0x3ffffff) == 0)
                            i = i_1
                            goto label_140a1ec82
                        
                        if ((((rax_96 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                u< (rax_96 & 0xfffffffffc000000))
                            sub_140b73230(0x3a83126f)
                        
                        if (rax_96 == *(rbp_1 + 0x88))
                            *(rbp_1 + 0x88) = (zx.q(rax_100) & 0x3ffffff)
                                | ((rax_96 & 0xfffffffffc000000) + 0x4000000)
                        else
                            *(rbp_1 + 0x88)
        
        if (result_5 != 0)
            void* rcx_76 = *rdi
            r12_1 = r12_1 * 0xbb38435 + 0x3619636b
            zmm0.d = (r12_1 u>> 9 | 0x3f800000).d f- 1f
            
            if (not(zmm0.d f>= 0.330000013f))
                result = sub_140a2efc0(rcx_76, result_5)
            else if (zmm0.d f>= 0.660000026f)
                result = sub_140a2edf0(rcx_76 + 0xf8, result_5)
            else
                result = sub_140a2ec20(rcx_76 + 0xd0, result_5)
    else
        int64_t* var_c0 = nullptr
        int64_t var_b8_1 = 0
        
        if (zmm0.d f>= 0.330000013f)
            int64_t* rdx_1 = &var_c0
            
            if (zmm0.d f>= 0.660000026f)
                sub_140a2df90(rbp_1 + 0xf8, rdx_1)
            else
                sub_140a2ddb0(rbp_1 + 0xd0, rdx_1)
        else
            while (true)
                int64_t rax_7 = 0
                
                if (0 == *(rbp_1 + 0x40))
                    *(rbp_1 + 0x40) = 0
                else
                    rax_7 = *(rbp_1 + 0x40)
                
                int64_t rax_8 = 0
                
                if (0 == *(rbp_1 + 0x88))
                    *(rbp_1 + 0x88) = 0
                else
                    rax_8 = *(rbp_1 + 0x88)
                
                int32_t r14_2 = rax_7.d & 0x3ffffff
                int64_t* rcx_1
                
                if (r14_2 != 0)
                    rcx_1 = *((zx.q(r14_2) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(r14_2) & 0x3fff) * 0x18
                else
                    rcx_1 = nullptr
                
                int32_t rax_12 = 0
                
                if (0 == *rcx_1)
                    *rcx_1 = 0
                else
                    rax_12 = (*rcx_1).d
                
                int64_t rax_13 = 0
                
                if (0 == *(rbp_1 + 0x40))
                    *(rbp_1 + 0x40) = 0
                else
                    rax_13 = *(rbp_1 + 0x40)
                
                if (rax_7 == rax_13)
                    if (r14_2 != (rax_8.d & 0x3ffffff))
                        uint64_t rax_21 = zx.q(rax_12) & 0x3ffffff
                        void* rax_22
                        
                        if (rax_21.d != 0)
                            rax_22 = *((rax_21 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_21.d) & 0x3fff) * 0x18
                        else
                            rax_22 = nullptr
                        
                        int64_t r15_1 = *(rax_22 + 8)
                        
                        if ((((rax_7 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                u< (rax_7 & 0xfffffffffc000000))
                            sub_140b73230(0x3a83126f)
                        
                        bool z_1
                        
                        if (rax_7 == *(rbp_1 + 0x40))
                            *(rbp_1 + 0x40) = (zx.q(rax_12) & 0x3ffffff)
                                | ((rax_7 & 0xfffffffffc000000) + 0x4000000)
                            z_1 = true
                        else
                            *(rbp_1 + 0x40)
                            z_1 = false
                        
                        if (z_1)
                            sub_140a24050(r14_2)
                            
                            if (r15_1 == 0)
                                break
                            
                            int64_t rbx_5 = sx.q(var_b8_1.d)
                            int32_t rax_29 = (rbx_5 + 1).d
                            var_b8_1.d = rax_29
                            
                            if (rax_29 s> var_b8_1:4.d)
                                sub_1405a4d70(&var_c0)
                            
                            var_c0[rbx_5] = r15_1
                    else
                        if ((rax_12 & 0x3ffffff) == 0)
                            break
                        
                        if ((((rax_8 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                u< (rax_8 & 0xfffffffffc000000))
                            sub_140b73230(0x3a83126f)
                        
                        if (rax_8 == *(rbp_1 + 0x88))
                            *(rbp_1 + 0x88) = (zx.q(rax_12) & 0x3ffffff)
                                | ((rax_8 & 0xfffffffffc000000) + 0x4000000)
                        else
                            *(rbp_1 + 0x88)
            
            rdi = arg1
        
        int64_t* r13_1 = var_c0
        int64_t* var_d8_1 = r13_1
        int64_t var_d0_1 = 0
        void* rcx_17 = &r13_1[sx.q(var_b8_1.d)]
        result = (rcx_17 - r13_1 + 7) u>> 3
        
        if (r13_1 u> rcx_17)
            result = 0
        
        uint64_t result_1 = result
        
        if (result != 0)
            bool cond:3_1
            
            do
                int64_t rbx_6 = *r13_1
                void* r15_2 = *rdi
                zmm6.d = ((r12_1 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                int32_t rax_38
                rax_38, zmm6 = sub_140a2d7c0(&data_143cf0ae0)
                uint64_t r12_5 = zx.q(rax_38)
                int64_t* r13_2
                
                if (not(zmm6.d f>= 0.330000013f))
                    void* rcx_18
                    
                    if (rax_38 != 0)
                        rcx_18 = *((r12_5 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(r12_5.d) & 0x3fff) * 0x18
                    else
                        rcx_18 = nullptr
                    
                    *(rcx_18 + 8) = rbx_6
                    uint64_t result_2
                    
                    while (true)
                        result_2 = 0
                        
                        if (0 == *(r15_2 + 0x88))
                            *(r15_2 + 0x88) = 0
                        else
                            result_2 = *(r15_2 + 0x88)
                        
                        uint64_t rax_42 = zx.q(result_2.d) & 0x3ffffff
                        int64_t* r14_3
                        
                        if (rax_42.d != 0)
                            r14_3 = *((rax_42 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_42.d) & 0x3fff) * 0x18
                        else
                            r14_3 = nullptr
                        
                        int64_t rax_45 = 0
                        
                        if (0 == *r14_3)
                            *r14_3 = 0
                        else
                            rax_45 = *r14_3
                        
                        int64_t rax_46 = 0
                        
                        if (0 == *(r15_2 + 0x88))
                            *(r15_2 + 0x88) = 0
                        else
                            rax_46 = *(r15_2 + 0x88)
                        
                        if (rax_46 == result_2)
                            if ((rax_45.d & 0x3ffffff) == 0)
                                if ((((rax_45 & 0xfffffffffc000000) + 0x4000000)
                                        & 0xfffffffffc000000) u< (rax_45 & 0xfffffffffc000000))
                                    sub_140b73230(0x3a83126f)
                                
                                bool z_2
                                
                                if (rax_45 == *r14_3)
                                    *r14_3 = r12_5 | ((rax_45 & 0xfffffffffc000000) + 0x4000000)
                                    z_2 = true
                                else
                                    *r14_3
                                    z_2 = false
                                
                                if (z_2)
                                    break
                            else
                                if ((((result_2 & 0xfffffffffc000000) + 0x4000000)
                                        & 0xfffffffffc000000) u< (result_2 & 0xfffffffffc000000))
                                    sub_140b73230(0x3a83126f)
                                
                                if (result_2 == *(r15_2 + 0x88))
                                    *(r15_2 + 0x88) = (zx.q(rax_45.d) & 0x3ffffff)
                                        | ((result_2 & 0xfffffffffc000000) + 0x4000000)
                                else
                                    *(r15_2 + 0x88)
                    
                    r13_2 = var_d8_1
                    
                    if ((((result_2 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (result_2 & 0xfffffffffc000000))
                        sub_140b73230(0x3a83126f)
                    
                    result = result_2
                    
                    if (result == *(r15_2 + 0x88))
                        *(r15_2 + 0x88) = r12_5 | ((result_2 & 0xfffffffffc000000) + 0x4000000)
                    else
                        result = *(r15_2 + 0x88)
                else if (zmm6.d f>= 0.660000026f)
                    void* rax_76
                    
                    if (rax_38 != 0)
                        rax_76 = *((r12_5 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(r12_5.d) & 0x3fff) * 0x18
                    else
                        rax_76 = nullptr
                    
                    *(rax_76 + 8) = rbx_6
                    uint64_t result_4
                    
                    while (true)
                        result_4 = 0
                        
                        if (0 == *(r15_2 + 0x110))
                            *(r15_2 + 0x110) = 0
                        else
                            result_4 = *(r15_2 + 0x110)
                        
                        uint64_t rax_80 = zx.q(result_4.d) & 0x3ffffff
                        int64_t* r14_5
                        
                        if (rax_80.d != 0)
                            r14_5 = *((rax_80 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_80.d) & 0x3fff) * 0x18
                        else
                            r14_5 = nullptr
                        
                        int64_t rax_83 = 0
                        
                        if (0 == *r14_5)
                            *r14_5 = 0
                        else
                            rax_83 = *r14_5
                        
                        int64_t rax_84 = 0
                        
                        if (0 == *(r15_2 + 0x110))
                            *(r15_2 + 0x110) = 0
                        else
                            rax_84 = *(r15_2 + 0x110)
                        
                        if (rax_84 == result_4)
                            if ((rax_83.d & 0x3ffffff) == 0)
                                if ((((rax_83 & 0xfffffffffc000000) + 0x40000000)
                                        & 0xfffffffffc000000) u< (rax_83 & 0xfffffffffc000000))
                                    sub_140b73230(0x3a83126f)
                                
                                bool z_4
                                
                                if (rax_83 == *r14_5)
                                    *r14_5 = r12_5 | ((rax_83 & 0xfffffffffc000000) + 0x40000000)
                                    z_4 = true
                                else
                                    *r14_5
                                    z_4 = false
                                
                                if (z_4)
                                    break
                            else
                                if ((((result_4 & 0xfffffffffc000000) + 0x40000000)
                                        & 0xfffffffffc000000) u< (result_4 & 0xfffffffffc000000))
                                    sub_140b73230(0x3a83126f)
                                
                                if (result_4 == *(r15_2 + 0x110))
                                    *(r15_2 + 0x110) = (zx.q(rax_83.d) & 0x3ffffff)
                                        | ((result_4 & 0xfffffffffc000000) + 0x40000000)
                                else
                                    *(r15_2 + 0x110)
                    
                    r13_2 = var_d8_1
                    
                    if ((((result_4 & 0xfffffffffc000000) + 0x40000000) & 0xfffffffffc000000)
                            u< (result_4 & 0xfffffffffc000000))
                        sub_140b73230(0x3a83126f)
                    
                    result = result_4
                    
                    if (result == *(r15_2 + 0x110))
                        *(r15_2 + 0x110) = r12_5 | ((result_4 & 0xfffffffffc000000) + 0x40000000)
                    else
                        result = *(r15_2 + 0x110)
                else
                    void* rax_57
                    
                    if (rax_38 != 0)
                        rax_57 = *((r12_5 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(r12_5.d) & 0x3fff) * 0x18
                    else
                        rax_57 = nullptr
                    
                    *(rax_57 + 8) = rbx_6
                    uint64_t result_3
                    
                    while (true)
                        result_3 = 0
                        
                        if (0 == *(r15_2 + 0xe8))
                            *(r15_2 + 0xe8) = 0
                        else
                            result_3 = *(r15_2 + 0xe8)
                        
                        uint64_t rax_61 = zx.q(result_3.d) & 0x3ffffff
                        int64_t* r14_4
                        
                        if (rax_61.d != 0)
                            r14_4 = *((rax_61 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_61.d) & 0x3fff) * 0x18
                        else
                            r14_4 = nullptr
                        
                        int64_t rax_64 = 0
                        
                        if (0 == *r14_4)
                            *r14_4 = 0
                        else
                            rax_64 = *r14_4
                        
                        int64_t rax_65 = 0
                        
                        if (0 == *(r15_2 + 0xe8))
                            *(r15_2 + 0xe8) = 0
                        else
                            rax_65 = *(r15_2 + 0xe8)
                        
                        if (rax_65 == result_3)
                            if ((rax_64.d & 0x3ffffff) == 0)
                                if ((((rax_64 & 0xfffffffffc000000) + 0x4000000)
                                        & 0xfffffffffc000000) u< (rax_64 & 0xfffffffffc000000))
                                    sub_140b73230(0x3a83126f)
                                
                                bool z_3
                                
                                if (rax_64 == *r14_4)
                                    *r14_4 = r12_5 | ((rax_64 & 0xfffffffffc000000) + 0x4000000)
                                    z_3 = true
                                else
                                    *r14_4
                                    z_3 = false
                                
                                if (z_3)
                                    break
                            else
                                if ((((result_3 & 0xfffffffffc000000) + 0x4000000)
                                        & 0xfffffffffc000000) u< (result_3 & 0xfffffffffc000000))
                                    sub_140b73230(0x3a83126f)
                                
                                if (result_3 == *(r15_2 + 0xe8))
                                    *(r15_2 + 0xe8) = (zx.q(rax_64.d) & 0x3ffffff)
                                        | ((result_3 & 0xfffffffffc000000) + 0x4000000)
                                else
                                    *(r15_2 + 0xe8)
                    
                    r13_2 = var_d8_1
                    
                    if ((((result_3 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (result_3 & 0xfffffffffc000000))
                        sub_140b73230(0x3a83126f)
                    
                    result = result_3
                    
                    if (result == *(r15_2 + 0xe8))
                        *(r15_2 + 0xe8) = r12_5 | ((result_3 & 0xfffffffffc000000) + 0x4000000)
                    else
                        result = *(r15_2 + 0xe8)
                
                r13_1 = &r13_2[1]
                r12_1 = r12_1 * 0xbb38435 + 0x3619636b
                cond:3_1 = var_d0_1 + 1 != result_1
                var_d0_1 += 1
                rdi = arg1
                var_d8_1 = r13_1
            while (cond:3_1)
            r13_1 = var_c0
        
        if (r13_1 != 0)
            result = sub_140a74f90(r13_1)
        
        i = i_1
    
label_140a1ec82:
    rdi = arg1
    i += 1
    i_1 = i
while (i s< 0xf4240)

return result
