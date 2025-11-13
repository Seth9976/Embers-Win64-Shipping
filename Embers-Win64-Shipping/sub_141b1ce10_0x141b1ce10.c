// 函数: sub_141b1ce10
// 地址: 0x141b1ce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x50)
void* rsi = arg3
int32_t result_8 = 0
void* r15 = arg1
int64_t var_b0 = 0
void* var_e8 = nullptr
void* var_b8 = nullptr
int128_t var_a0
int64_t var_90
void* result_2
void* result_3
void* var_70

if (rdx == 0)
    int64_t* rax_15 = (*(*arg4 + 0x88))(arg4, &result_2)
    
    if (&var_b8 != rax_15)
        void* rcx_15 = *rax_15
        *rax_15 = 0
        result_8 = rax_15[1].d
        rax_15[1] = 0
        var_e8 = rcx_15
    
    void* result_10 = result_2
    
    if (result_10 != 0)
        sub_140a74f90(result_10)
else
    if (rdx s> 0)
        sub_1405c5570(&var_b8, rdx)
        result_8 = var_b0.d
        var_e8 = var_b8
    
    void* rax = *(r15 + 0x48)
    void* r13_1 = r15 + 0x18
    
    if (rax != 0)
        r13_1 = rax
    
    void* var_a8_1 = r13_1
    void* result_9 = sx.q(*(r15 + 0x50)) * 0x18 + r13_1
    result_3 = result_9
    
    if (r13_1 != result_9)
        do
            int64_t zmm1 = *(r13_1 + 0x10)
            int64_t rax_3 = *arg4
            var_a0 = *r13_1
            var_90 = zmm1
            void* rax_4 = (*(rax_3 + 8))(arg4, zmm1)
            int32_t* rax_5 = sub_141a644b0(&var_a0, &var_70, *(rsi + 0x10), *(rax_4 + 8) + 0xd0)
            var_a0 = *(rax_5 + 8)
            int64_t r9_3 = sx.q(*rax_5)
            var_a0.d = r9_3.d
            var_a0:4.b = rax_5[1].b
            int32_t* rcx_9
            
            if (arg4[0x16].d == *(arg4 + 0xdc))
            label_141b1cf62:
                rcx_9 = nullptr
            else
                void* r8_1 = &arg4[0x1c]
                void* rcx_5 = *(r8_1 + 8)
                
                if (rcx_5 != 0)
                    r8_1 = rcx_5
                
                int32_t rax_8 = *(r8_1 + (((sx.q(arg4[0x1e].d) - 1) & r9_3) << 2))
                
                if (rax_8 == 0xffffffff)
                label_141b1cf62_1:
                    rcx_9 = nullptr
                else
                    while (true)
                        rcx_9 = sx.q(rax_8) * 0xc0 + arg4[0x15]
                        
                        if (*rcx_9 == r9_3.d)
                            break
                        
                        rax_8 = rcx_9[0x2e]
                        
                        if (rax_8 == 0xffffffff)
                            goto label_141b1cf62_2
                    
                    if (rax_8 == 0xffffffff)
                    label_141b1cf62_2:
                        rcx_9 = nullptr
            
            void* rax_9 = &rcx_9[2]
            
            if (rcx_9 == 0)
                rax_9 = nullptr
            
            int32_t rax_10
            void* result_11
            int32_t var_80
            
            if (rax_9 == 0)
                result_11 = nullptr
                rax_10 = 0
                result_2 = nullptr
                var_80 = 0
            else
                sub_141a4a6a0(rax_9, &result_2, &var_a0:8, arg4)
                rax_10 = var_80
                result_11 = result_2
            int64_t r14_1 = 0
            void* rcx_11 = result_11 + (sx.q(rax_10) << 3)
            uint64_t r12_4 = (rcx_11 - result_11 + 7) u>> 3
            
            if (result_11 u> rcx_11)
                r12_4 = 0
            
            if (r12_4 != 0)
                void* r13_2 = var_e8
                
                do
                    var_e8 = *result_11
                    int64_t rax_13 = sub_140d3c6e0(&var_e8)
                    
                    if (rax_13 != 0)
                        int64_t result_12 = sx.q(result_8)
                        result_8 = (result_12 + 1).d
                        var_b0.d = result_8
                        
                        if (result_8 s> var_b0:4.d)
                            sub_1405a4d70(&var_b8)
                            result_8 = var_b0.d
                            r13_2 = var_b8
                        
                        *(r13_2 + (result_12 << 3)) = rax_13
                    
                    result_11 += 8
                    r14_1 += 1
                while (r14_1 != r12_4)
                
                rsi = arg3
                var_e8 = r13_2
                r13_1 = var_a8_1
            
            r13_1 += 0x18
            var_a8_1 = r13_1
        while (r13_1 != result_3)
        
        r15 = arg1

int64_t* rcx_49 = var_e8
int64_t result = sx.q(result_8)
int64_t* rdx_8 = rcx_49
int64_t* var_a8_2 = rcx_49
void* r8_4 = &rcx_49[result]
var_b8 = r8_4

if (rcx_49 != r8_4)
    while (true)
        int64_t* r12_5 = *rdx_8
        
        if (r12_5 != 0)
            int64_t* r14_2 = *(r15 + 8)
            result = sx.q(*(r15 + 0x10))
            void* r13_4 = result * 0x38 + r14_2
            
            if (r14_2 != r13_4)
                while (true)
                    result = sub_140d1fd20(r12_5, *r14_2)
                    int64_t result_7 = result
                    
                    if (result != 0)
                        void** const var_e0 = &data_1430507f0
                        int64_t result_1
                        sub_140d3a3a0(&result_1, nullptr)
                        int64_t var_d0_1 = 0
                        int32_t var_c8_1 = 0xffffffff
                        int32_t var_c4_1 = 0
                        char var_c0_1 = 0
                        int64_t* rax_16 = sub_140d3c6e0(&result_1)
                        
                        if (rax_16 != 0)
                            int32_t rdx_10 = *(rax_16 + 0x5c)
                            int32_t r8_8 = (rax_16[0xb].d - 1 + rdx_10) & not.d(rdx_10 - 1)
                            int32_t rcx_21 = 1
                            
                            if (r8_8 != 0)
                                rcx_21 = r8_8
                            
                            int64_t rax_17 = sub_140a82f30(sx.q(rcx_21), 0, r8_8)
                            var_d0_1 = rax_17
                            int64_t r9_5 = *rax_16
                            (*(r9_5 + 0x2a0))(rax_16, rax_17, 1, r9_5)
                            var_c0_1 = 1
                        
                        sub_141b22db0(&r14_2[1], &var_e0)
                        void* rax_18 = sub_140d3c6e0(&result_1)
                        result = 0xffff
                        
                        if (*(result_7 + 0xb8) == 0xffff)
                            var_a0:8.q = *(result_7 + 0x50)
                            var_a0.q = result_7
                            var_90.d = 0xffffffff
                            var_90:4.w = 0x101
                            var_90:6.b = 0
                            sub_1406328d0(&var_a0)
                            var_70 = rax_18
                            int64_t* rax_20
                            
                            if (rax_18 == 0)
                                rax_20 = nullptr
                            else
                                rax_20 = *(rax_18 + 0x50)
                            
                            int32_t var_60_1 = 0xffffffff
                            int16_t var_5c_1 = 0x101
                            char var_5a_1 = 0
                            
                            while (true)
                                result = sub_1406328d0(&var_70)
                                void* rdi = var_a0:8.q
                                
                                if (rdi == 0)
                                    break
                                
                                if (rax_20 == 0)
                                    var_e0 = &data_1430507f0
                                    
                                    if (var_c0_1 == 0)
                                        goto label_141b1d411
                                    
                                    result = sub_140d3c6e0(&result_1)
                                    
                                    if (result == 0)
                                        goto label_141b1d407
                                    
                                    if (var_d0_1 != 0)
                                        int64_t r9_8 = *result
                                        (*(r9_8 + 0x2a8))(result, var_d0_1, 1, r9_8)
                                    
                                    int64_t result_5
                                    sub_140d3a3a0(&result_5, nullptr)
                                    result = result_5
                                    goto label_141b1d3fe
                                
                                result = (*(*rax_20 + 0x128))(rax_20, rdi)
                                
                                if (result.b != 0)
                                    result = zx.q(*(rdi + 0x4c))
                                    
                                    if (*(rax_20 + 0x4c) == result.d)
                                        result = zx.q(*(rdi + 0x3c) * *(rdi + 0x38))
                                        
                                        if (*(rax_20 + 0x3c) * rax_20[7].d == result.d)
                                            var_a0:8.q = *(rdi + 0x20)
                                            sub_1406328d0(&var_a0)
                                            rax_20 = rax_20[4]
                                            continue
                                
                                var_e0 = &data_1430507f0
                                
                                if (var_c0_1 == 0)
                                    goto label_141b1d411
                                
                                result = sub_140d3c6e0(&result_1)
                                
                                if (result == 0)
                                    goto label_141b1d407
                                
                                if (var_d0_1 != 0)
                                    int64_t r9_7 = *result
                                    (*(r9_7 + 0x2a8))(result, var_d0_1, 1, r9_7)
                                
                                int64_t result_4
                                sub_140d3a3a0(&result_4, nullptr)
                                result = result_4
                                goto label_141b1d3fe
                            
                            if (rax_20 != 0)
                                var_e0 = &data_1430507f0
                                
                                if (var_c0_1 != 0)
                                    result = sub_140d3c6e0(&result_1)
                                    
                                    if (result == 0)
                                        goto label_141b1d407
                                    
                                    if (var_d0_1 != 0)
                                        int64_t r9_10 = *result
                                        (*(r9_10 + 0x2a8))(result, var_d0_1, 1, r9_10)
                                    
                                    sub_140d3a3a0(&result_2, nullptr)
                                    result = result_2
                                label_141b1d3fe:
                                    result_1 = result
                                label_141b1d407:
                                    
                                    if (var_d0_1 != 0)
                                        result = sub_140a74f90(var_d0_1)
                            else
                                result = (*(*r12_5 + 0x210))(r12_5, result_7, var_d0_1)
                                var_e0 = &data_1430507f0
                                
                                if (var_c0_1 != 0)
                                    result = sub_140d3c6e0(&result_1)
                                    
                                    if (result == 0)
                                        goto label_141b1d407
                                    
                                    if (var_d0_1 != 0)
                                        int64_t r9_9 = *result
                                        (*(r9_9 + 0x2a8))(result, var_d0_1, 1, r9_9)
                                    
                                    int64_t result_6
                                    sub_140d3a3a0(&result_6, nullptr)
                                    result = result_6
                                    goto label_141b1d3fe
                        else
                            var_e0 = &data_1430507f0
                            
                            if (var_c0_1 != 0)
                                result = sub_140d3c6e0(&result_1)
                                
                                if (result == 0)
                                    goto label_141b1d407
                                
                                if (var_d0_1 != 0)
                                    int64_t r9_6 = *result
                                    (*(r9_6 + 0x2a8))(result, var_d0_1, 1, r9_6)
                                
                                sub_140d3a3a0(&result_3, nullptr)
                                result = result_3
                                goto label_141b1d3fe
                    
                label_141b1d411:
                    r14_2 = &r14_2[7]
                    
                    if (r14_2 == r13_4)
                        break
                
                rdx_8 = var_a8_2
                r8_4 = var_b8
        
        r15 = arg1
        rdx_8 = &rdx_8[1]
        var_a8_2 = rdx_8
        
        if (rdx_8 == r8_4)
            break
    
    rcx_49 = var_e8

if (rcx_49 == 0)
    return result

return sub_140a74f90(rcx_49)
