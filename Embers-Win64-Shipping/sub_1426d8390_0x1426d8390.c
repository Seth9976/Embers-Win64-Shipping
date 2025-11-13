// 函数: sub_1426d8390
// 地址: 0x1426d8390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t result = __security_cookie ^ &var_128
int64_t result_2 = result
int64_t* r15 = arg2
int64_t r14 = arg1

if (*(arg1 + 0x50) != 0)
    result = sub_142452380()
    
    if (result != 0)
        void* rdx = *(r14 + 0x50)
        int64_t r8_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rdx + 0x38))
            int64_t result_3 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_3 << 3)) == r8_1 && rdx != 0)
                result = sub_140d3c6e0(r15 + 0x34)
                int64_t result_4 = result
                
                if (result != 0)
                    float zmm6_1
                    result, zmm6_1 = sub_1423de540(data_143f5b298, result, 1)
                    
                    if (result != 0)
                        int64_t* rcx_2 = *(r14 + 0x68)
                        
                        if (rcx_2 != 0)
                            int64_t r9_1 = *rcx_2
                            (*(r9_1 + 0x260))(rcx_2, result_4, zx.q(r15[6].d), r9_1)
                            *(r14 + 0x60) = sub_140cdb8f0(*(*(r14 + 0x68) + 0x10), *(r14 + 0x70))
                        
                        void* rax_3 = *(r14 + 0x60)
                        int64_t rax_4
                        
                        if (rax_3 != 0)
                            rax_4 = sx.q(*(rax_3 + 0x4c))
                        
                        char rcx_4
                        
                        if (rax_3 == 0 || rax_4 == neg.q(*(r14 + 0x68)))
                            rcx_4 = *(r14 + 0x88)
                        else
                            rcx_4 = *(rax_4 + *(r14 + 0x68))
                        
                        void** var_108 = nullptr
                        int64_t var_100_1 = 0
                        float var_e8
                        char var_b0
                        void* var_a8
                        void** var_a0
                        char i
                        void* var_80
                        int64_t var_78
                        int64_t var_60
                        char var_58
                        
                        if (rcx_4 == 0)
                            sub_1426c4df0(&var_b0, result, *(r14 + 0x50), 5)
                            
                            while (i == 0)
                                int64_t rbx_4 = sx.q(var_100_1.d)
                                int32_t rax_43 = (rbx_4 + 1).d
                                var_100_1.d = rax_43
                                
                                if (rax_43 s> var_100_1:4.d)
                                    sub_1405a4d70(&var_108)
                                
                                var_108[rbx_4] = var_80
                                sub_1406277a0(&var_b0)
                            
                            if (var_58 != 0)
                                char var_58_2 = 0
                                sub_142441560(var_a8, var_60)
                                
                                if (var_78 != 0)
                                    sub_140a74f90(var_78)
                                
                                if (var_a0 != 0)
                                    sub_140a74f90(var_a0)
                        else
                            float var_48_1 = zmm6_1
                            void* var_d8 = nullptr
                            int32_t var_d0_1 = 0
                            void* rdx_4
                            
                            if (*(r14 + 0xc8) == 0)
                                rdx_4 = nullptr
                            else
                                void* rax_6 = sub_142736ba0()
                                
                                if (rax_6 == 0)
                                    rdx_4 = nullptr
                                else
                                    rdx_4 = *(r14 + 0xc8)
                                    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                                    
                                    if (rax_7.d s> *(rdx_4 + 0x38)
                                            || *(*(rdx_4 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                                        rdx_4 = nullptr
                            
                            sub_1426e7790(r15, rdx_4, &var_d8)
                            r15[6].d
                            sub_1426cce30(r14 + 0x90, result_4)
                            void* rax_9 = *(r14 + 0x98)
                            int64_t rax_10
                            
                            if (rax_9 != 0)
                                rax_10 = sx.q(*(rax_9 + 0x4c))
                            
                            float zmm6_2
                            
                            if (rax_9 == 0 || rax_10 == neg.q(*(r14 + 0xa0)))
                                zmm6_2 = *(r14 + 0xc0)
                            else
                                zmm6_2 = *(rax_10 + *(r14 + 0xa0))
                            
                            sub_1426c4df0(&var_b0, result, *(r14 + 0x50), 5)
                            
                            if (i == 0)
                                void* rdi_2 = var_80
                                
                                do
                                    int32_t rcx_9 = 0
                                    
                                    if (var_d0_1 s> 0)
                                        void* r8_7 = *(rdi_2 + 0x130)
                                        void* rdx_8 = var_d8 + 8
                                        int32_t r9_2 = data_143dbb200
                                        int64_t zmm3_1 = data_143dbb1f8.q
                                        
                                        do
                                            int32_t* rax_12
                                            uint128_t zmm0_1
                                            float zmm1_1[0x4]
                                            
                                            if (r8_7 == 0)
                                                int64_t var_c8 = zmm3_1
                                                rax_12 = &var_c8
                                                int32_t var_c0_1 = r9_2
                                            else
                                                zmm1_1 = *(r8_7 + 0x1d0)
                                                rax_12 = &var_e8
                                                var_e8 = zmm1_1[0]
                                                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                                float var_e0_1 =
                                                    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                                                int32_t var_e4_1 = zmm0_1.d
                                            
                                            zmm0_1 = zx.o(*rax_12)
                                            int32_t rax_13 = rax_12[2]
                                            zmm1_1 = zmm0_1
                                            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                            float zmm2_1 = zmm0_1.d f- *(rdx_8 - 8)
                                            zmm1_1[0] = zmm1_1[0] f- *(rdx_8 - 4)
                                            zmm0_1.d = rax_13.d f- *rdx_8
                                            zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                                            zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                            
                                            if (zmm2_1 * zmm2_1 + zmm1_1[0] f+ zmm0_1.d
                                                    < zmm6_2 * zmm6_2)
                                                int64_t rbx_1 = sx.q(var_100_1.d)
                                                int32_t rax_14 = (rbx_1 + 1).d
                                                var_100_1.d = rax_14
                                                
                                                if (rax_14 s> var_100_1:4.d)
                                                    sub_1405a4d70(&var_108)
                                                
                                                var_108[rbx_1] = rdi_2
                                                break
                                            
                                            rcx_9 += 1
                                            rdx_8 += 0xc
                                        while (rcx_9 s< var_d0_1)
                                    
                                    int32_t var_70
                                    int32_t r8_8 = var_70
                                    int32_t var_98
                                    int32_t rdx_10 = var_98
                                    int32_t var_90
                                    int32_t r14_2 = var_90 + 1
                                    
                                    if (r14_2 s>= r8_8 + rdx_10)
                                    label_1426d8820:
                                        int64_t var_80_1 = 0
                                        char var_8c = 1
                                        break
                                    
                                    int64_t r12_1 = sx.q(r14_2) << 3
                                    
                                    while (true)
                                        if (r14_2 s>= rdx_10)
                                            rdi_2 = *(var_78 + (sx.q(r14_2 - rdx_10) << 3))
                                        else
                                            rdi_2 = *(var_a0 + r12_1)
                                        
                                        int32_t var_88 = var_88 + 1
                                        
                                        if (rdi_2 != 0)
                                            void* rax_22 = sub_141dc9840(rdi_2)
                                            
                                            if (rax_22 != 0)
                                                void* const rax_29
                                                
                                                if ((var_b0 & 1) != 0)
                                                    int32_t rax_23 = *(rdi_2 + 0xc)
                                                    
                                                    if (rax_23 s>= data_143e1d9b4)
                                                        rax_29 = nullptr
                                                    else
                                                        int16_t temp4_1
                                                        int32_t temp5_1
                                                        temp4_1:temp5_1 = sx.q(rax_23)
                                                        uint32_t rdx_12 = zx.d(temp4_1)
                                                        int32_t rax_25 = temp5_1 + rdx_12
                                                        rax_29 = *(data_143e1d9a0
                                                            + (sx.q(rax_25 s>> 0x10) << 3))
                                                            + sx.q(zx.d(rax_25.w) - rdx_12) * 0x18
                                                
                                                if ((var_b0 & 1) == 0
                                                        || ((*(rax_29 + 8) u>> 0x1d).b & 1) == 0)
                                                    int32_t rcx_18 = var_b0.d
                                                    
                                                    if (((rcx_18 u>> 1).b & 1) == 0)
                                                        goto label_1426d8746
                                                    
                                                    uint64_t rax_33 = sub_1405949a0()
                                                    
                                                    if (rax_33.b != 0)
                                                        rcx_18 = var_b0.d
                                                    label_1426d8746:
                                                        
                                                        if (((rcx_18 u>> 2).b & 1) == 0)
                                                        label_1426d87c4:
                                                            
                                                            if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                                    rax_22) == var_a8)
                                                                if (rax_22 == *(var_a8 + 0x30))
                                                                    break
                                                                
                                                                void* rax_35 = sub_1425bd0d0()
                                                                void* rdx_14 = *(rdi_2 + 0x10)
                                                                int64_t rax_36 = sx.q(*(rax_35 + 0x38))
                                                                
                                                                if (rax_36.d s> *(rdx_14 + 0x38))
                                                                    break
                                                                
                                                                if (*(*(rdx_14 + 0x30) + (rax_36 << 3))
                                                                        != rax_35 + 0x30)
                                                                    break
                                                        else
                                                            if ((*(rax_22 + 0x1f4) & 0x20) == 0
                                                                    || (*(rax_22 + 0x1f6) & 8) != 0)
                                                                rax_33 = zx.q(*(rax_22 + 0x1f5))
                                                            
                                                            if (((*(rax_22 + 0x1f4) & 0x20) != 0
                                                                    && (*(rax_22 + 0x1f6) & 8) == 0)
                                                                    || (rax_33.b & 0x40) != 0
                                                                    || rax_33.b s< 0)
                                                                r15.b = 1
                                                            else
                                                                r15.b = 0
                                                            
                                                            void* rcx_20 = *(rax_22 + 0xb8)
                                                            char* rsi_1 = *(rax_22 + 0x248)
                                                            
                                                            if (rcx_20 != 0)
                                                                rax_33 = sub_1424359b0(rcx_20)
                                                            
                                                            if (rcx_20 == 0 || rax_33 == 0
                                                                    || rsi_1 == rax_33)
                                                                rcx_20.b = 1
                                                            else
                                                                rcx_20.b = 0
                                                            
                                                            if (rsi_1 == 0 || *rsi_1 == 2)
                                                                rax_33.b = 1
                                                            else
                                                                rax_33.b = 0
                                                            
                                                            if (rcx_20.b != 0 || rax_33.b != 0)
                                                                rax_33.b = 1
                                                            
                                                            if (r15.b != 0 && rax_33.b != 0)
                                                                goto label_1426d87c4
                                            
                                            r8_8 = var_70
                                            rdx_10 = var_98
                                        
                                        r14_2 += 1
                                        r12_1 += 8
                                        
                                        if (r14_2 s>= r8_8 + rdx_10)
                                            goto label_1426d8820
                                    
                                    void* var_80_2 = rdi_2
                                    var_90 = r14_2
                                while (i == 0)
                                
                                r14 = arg1
                            
                            if (var_58 != 0)
                                char var_58_1 = 0
                                sub_142441560(var_a8, var_60)
                                
                                if (var_78 != 0)
                                    sub_140a74f90(var_78)
                                
                                if (var_a0 != 0)
                                    sub_140a74f90(var_a0)
                            
                            void* rax_39 = var_d8
                            
                            if (rax_39 != 0)
                                sub_140a74f90(rax_39)
                            
                            r15 = arg2
                        (*(*r14 + 0x280))(r14, r15, &var_108)
                        void** rdi_3 = var_108
                        result = sx.q(var_100_1.d)
                        void* rcx_28 = &rdi_3[result]
                        uint64_t r14_6 = (rcx_28 - rdi_3 + 7) u>> 3
                        
                        if (rdi_3 u> rcx_28)
                            r14_6 = 0
                        
                        if (r14_6 != 0)
                            void** r12_2 = &r15[3]
                            int64_t result_1
                            result_1.d = 0
                            int64_t r13_2 = 0
                            
                            do
                                sub_140d3a3a0(&var_e8, *rdi_3)
                                uint64_t count = zx.q(*(r15 + 0x13c))
                                int64_t rsi_2 = sx.q(arg2[4].d)
                                int32_t rax_41 = (rsi_2 + count).d
                                arg2[4].d = rax_41
                                
                                if (rax_41 s> *(arg2 + 0x24))
                                    sub_1405daba0(r12_2)
                                
                                memset(*r12_2 + rsi_2, 0, count)
                                sub_142714680(*r12_2 + rsi_2, &var_e8)
                                r15 = arg2
                                result_1:4.d = rsi_2.d & 0x7fffffff
                                int64_t rbx_3 = sx.q(r15[1].d)
                                int32_t rax_42 = (rbx_3 + 1).d
                                r15[1].d = rax_42
                                
                                if (rax_42 s> *(r15 + 0xc))
                                    sub_1405a4d70(r15)
                                
                                rdi_3 = &rdi_3[1]
                                result = result_1
                                r13_2 += 1
                                *(*r15 + (rbx_3 << 3)) = result
                            while (r13_2 != r14_6)
                            
                            rdi_3 = var_108
                        
                        if (rdi_3 != 0)
                            result = sub_140a74f90(rdi_3)

__security_check_cookie(result_2 ^ &var_128)
return result
