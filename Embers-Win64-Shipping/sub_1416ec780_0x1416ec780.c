// 函数: sub_1416ec780
// 地址: 0x1416ec780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void* rbx = arg1
int32_t* r12 = arg4
int128_t zmm7
int128_t var_58 = zmm7
int32_t* r15 = arg2
int64_t* rcx_1 = *arg5
int32_t* rax_1 = (*(*rcx_1 + 0x20))(rcx_1)
int128_t* rdi = *(rbx + 0x58)
int128_t zmm8 = zx.o(0)
int128_t zmm9 = 0x7f7fffff
void* r14_2 = &rdi[sx.q(*(rbx + 0x60)) * 4]
float var_108
int32_t var_104
void* var_f8
uint128_t var_a8
uint128_t zmm0
int128_t zmm1
int32_t zmm2
int32_t zmm3
int32_t zmm4_1
float zmm5_1

if (rdi != r14_2)
    void* rbx_1 = rdi + 0x3c
    
    while (true)
        if (*(rbx_1 - 0x18) != 0 && rax_1 != 0 && *rax_1 != 0
            && not(test_bit(*(rbx_1 - 0x24) | *(rbx_1 - 0x20), rax_1[3] u>> 0x15 & 0x1f)))
        label_1416ec981:
            rdi = &rdi[4]
            rbx_1 += 0x40
            
            if (rdi != r14_2)
                continue
            
            rbx = arg1
            break
        
        zmm5_1 = *r12
        zmm6 = r12[1]
        zmm0.d = (*(rbx_1 - 0x14)).d f- zmm5_1
        zmm7 = r12[2]
        void* rdx = arg3 + 0x1c
        int32_t r8 = 0
        zmm1.d = (*(rbx_1 - 0x10)).d f- zmm6.d
        zmm0.d = zmm0.d f- *r15
        zmm6.d = zmm6.d f+ *(rbx_1 - 4)
        zmm3 = (zx.o(0)).d
        int64_t rax_4 = 0
        zmm5_1 = zmm5_1 f+ *(rbx_1 - 8) f- *r15
        zmm1.d = zmm1.d f- r15[1]
        var_108 = zmm0.d
        zmm6.d = zmm6.d f- r15[1]
        zmm0.d = (*(rbx_1 - 0xc)).d f- zmm7.d
        var_f8.d = zmm5_1
        zmm7.d = zmm7.d f+ *rbx_1
        var_104 = zmm1.d
        var_f8:4.d = zmm6.d
        zmm0.d = zmm0.d f- r15[2]
        zmm7.d = zmm7.d f- r15[2]
        int32_t var_100_1 = zmm0.d
        zmm0 = 0x7f7fffff
        int32_t var_f0_1 = zmm7.d
        
        while (true)
            zmm2 = zmm0.d
            void* rcx_5 = &var_108 + rax_4
            zmm4_1 = zmm3
            zmm1 = *rcx_5
            
            if (*rdx == 0)
                zmm0 = *(rcx_5 + &arg3[1] - &var_108)
                zmm1.d = zmm1.d f* zmm0.d
                zmm0.d = zmm0.d f* *(&var_f8 + rax_4)
            else
                if (zmm1.d f> 0f)
                    goto label_1416ec981
                
                if (0f f> *(&var_f8 + rax_4))
                    goto label_1416ec981
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm3 = zmm0.d
            zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
            int32_t temp0_2 = _mm_min_ss(zmm3, zmm1.d)
            zmm0 = _mm_min_ss(zmm0.d, zmm2)
            zmm3 = _mm_max_ss(temp0_2, zmm4_1)
            
            if (zmm3 f> zmm0.d)
                goto label_1416ec981
            
            r8 += 1
            rdx += 1
            rax_4 += 4
            
            if (r8 s>= 3)
                if (zmm3 f> *(arg3 + 0x14))
                    goto label_1416ec981
                
                if (zmm0.d f< 0f)
                    goto label_1416ec981
                
                zmm1 = rdi[1]
                var_a8 = *rdi
                int64_t* rcx_6 = *arg5
                int128_t var_98_1 = zmm1
                uint64_t var_88_1 = rdi[2].q
                
                if ((*(*rcx_6 + 0x18))(rcx_6, &var_a8, arg3).b == 0)
                    break
                
                goto label_1416ec981
        
        goto label_1416ecc3d

uint128_t* rdi_1 = *(rbx + 0x48)
void* r14_5 = &rdi_1[sx.q(*(rbx + 0x50)) * 4]
void* result
float var_e8

if (rdi_1 == r14_5)
label_1416ecb4c:
    int64_t var_d0_1 = 1
    void** var_d8 = nullptr
    var_f8 = nullptr
    sub_1405a4d70(&var_d8)
    void** r15_1 = var_d8
    int32_t i = var_d0_1.d
    *r15_1 = var_f8
    
    if (i != 0)
        int64_t* r14_6 = arg4
        
        do
            int64_t rsi_1 = r15_1[sx.q(i - 1)]
            var_108.q = rsi_1
            
            if (0 != 0)
                memmove(&r15_1[sx.q(i - 1)], &r15_1[sx.q(i)], 0 << 3)
            
            i -= 1
            
            if (not(var_104.d f> *(arg3 + 0x14)))
                void* rcx_16 = sx.q(rsi_1.d) * 0x3c + *(arg1 + 0x28)
                
                if (*(rcx_16 + 0x38) != 0)
                    int64_t rcx_17 = sx.q(*(rcx_16 + 0x30)) * 0x98
                    int64_t var_b8 = *r14_6
                    int32_t var_b0_1 = r14_6[1].d
                    result, zmm8, zmm9 =
                        sub_1416f85c0(rcx_17 + *(arg1 + 0x38), arg2, arg3, &var_b8, arg5)
                    
                    if (result.b == 0)
                        if (r15_1 != 0)
                            sub_140a74f90(r15_1)
                        
                        goto label_1416ecc3d
                else if (rcx_16 != rcx_16 + 0x30)
                    float* rbx_4 = arg4
                    void* r10_2 = &arg3[1]
                    result = arg3 + 0x1c
                    int32_t* r14_7 = rcx_16 + 0x30
                    void* rsi_2 = rcx_16 + 0x14
                    
                    do
                        float zmm5_2 = *rbx_4
                        int32_t r8_7 = 0
                        zmm6 = rbx_4[1]
                        int64_t zmm0_1
                        zmm0_1.d = (*(rsi_2 - 0x14)).d f- zmm5_2
                        zmm7 = rbx_4[2]
                        void* result_1 = result
                        float* rax_17 = &var_e8
                        zmm1.d = (*(rsi_2 - 0x10)).d f- zmm6.d
                        zmm3 = zmm8.d
                        zmm0_1.d = zmm0_1.d f- *arg2
                        zmm6.d = zmm6.d f+ *(rsi_2 - 4)
                        zmm5_2 = zmm5_2 f+ *(rsi_2 - 8) f- *arg2
                        zmm1.d = zmm1.d f- *(arg2 + 4)
                        int32_t var_c8 = zmm0_1.d
                        zmm6.d = zmm6.d f- *(arg2 + 4)
                        zmm0_1.d = (*(rsi_2 - 0xc)).d f- zmm7.d
                        var_e8 = zmm5_2
                        zmm7.d = zmm7.d f+ *rsi_2
                        int32_t var_c4_1 = zmm1.d
                        int32_t var_e4_2 = zmm6.d
                        zmm0_1.d = zmm0_1.d f- *(arg2 + 8)
                        zmm7.d = zmm7.d f- *(arg2 + 8)
                        int32_t var_c0_1 = zmm0_1.d
                        zmm0_1 = zmm9.q
                        int32_t var_e0_2 = zmm7.d
                        
                        while (true)
                            void* rcx_21 = r10_2 - &var_e8 + rax_17
                            zmm1 = *(rcx_21 + &var_c8 - r10_2)
                            zmm2 = zmm0_1.d
                            int32_t zmm4_2 = zmm3
                            
                            if (*result_1 == 0)
                                zmm0_1 = *rcx_21
                                zmm1.d = zmm1.d f* zmm0_1.d
                                zmm0_1.d = zmm0_1.d f* *rax_17
                            else
                                if (zmm1.d f> zmm8.d)
                                    break
                                
                                if (zmm8.d f> *rax_17)
                                    break
                                
                                zmm1 = zmm8
                                zmm0_1 = zmm9.q
                            
                            zmm3 = zmm0_1.d
                            zmm0_1 = _mm_max_ss(zmm0_1.d, zmm1.d).q
                            int32_t temp0_11 = _mm_min_ss(zmm3, zmm1.d)
                            zmm0_1 = _mm_min_ss(zmm0_1.d, zmm2).q
                            zmm3 = _mm_max_ss(temp0_11, zmm4_2)
                            
                            if (zmm3 f> zmm0_1.d)
                                break
                            
                            r8_7 += 1
                            result_1 += 1
                            rax_17 = &rax_17[1]
                            
                            if (r8_7 s>= 3)
                                if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0_1.d f< zmm8.d))
                                    int64_t i_1 = sx.q(i)
                                    var_f8:4.d = zmm3
                                    var_f8.d = *r14_7
                                    i = (i_1 + 1).d
                                    var_d0_1.d = i
                                    
                                    if (i s> var_d0_1:4.d)
                                        sub_1405a4d70(&var_d8)
                                        i = var_d0_1.d
                                        r15_1 = var_d8
                                    
                                    r15_1[i_1] = var_f8
                                    rbx_4 = arg4
                                
                                break
                        
                        rsi_2 += 0x18
                        r10_2 = &arg3[1]
                        r14_7 = &r14_7[1]
                        result = arg3 + 0x1c
                    while (rsi_2 - 0x14 != rcx_16 + 0x30)
                    
                    r14_6 = arg4
        while (i != 0)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    result.b = 1
else
    void* rbx_2 = rdi_1 + 0x3c
    
    while (true)
        if (*(rbx_2 - 0x18) != 0 && rax_1 != 0 && *rax_1 != 0
            && not(test_bit(*(rbx_2 - 0x24) | *(rbx_2 - 0x20), rax_1[3] u>> 0x15 & 0x1f)))
        label_1416ecb39:
            rdi_1 = &rdi_1[4]
            rbx_2 += 0x40
            
            if (rdi_1 == r14_5)
                goto label_1416ecb4c
            
            continue
        
        zmm5_1 = *r12
        zmm6 = r12[1]
        zmm0.d = (*(rbx_2 - 0x14)).d f- zmm5_1
        zmm7 = r12[2]
        void* rdx_2 = arg3 + 0x1c
        zmm1.d = (*(rbx_2 - 0x10)).d f- zmm6.d
        int32_t r8_2 = 0
        zmm0.d = zmm0.d f- *r15
        zmm6.d = zmm6.d f+ *(rbx_2 - 4)
        int32_t* rax_9 = &var_108
        zmm5_1 = zmm5_1 f+ *(rbx_2 - 8) f- *r15
        zmm1.d = zmm1.d f- r15[1]
        var_e8 = zmm0.d
        zmm3 = (zx.o(0)).d
        zmm6.d = zmm6.d f- r15[1]
        zmm0.d = (*(rbx_2 - 0xc)).d f- zmm7.d
        var_108 = zmm5_1
        zmm7.d = zmm7.d f+ *rbx_2
        int32_t var_e4_1 = zmm1.d
        var_104 = zmm6.d
        zmm0.d = zmm0.d f- r15[2]
        zmm7.d = zmm7.d f- r15[2]
        int32_t var_e0_1 = zmm0.d
        zmm0 = 0x7f7fffff
        int32_t var_100_2 = zmm7.d
        
        while (true)
            void* rcx_10 = &arg3[1] - &var_108 + rax_9
            zmm1 = *(rcx_10 + &var_e8 - &arg3[1])
            zmm2 = zmm0.d
            zmm4_1 = zmm3
            
            if (*rdx_2 == 0)
                zmm0 = *rcx_10
                zmm1.d = zmm1.d f* zmm0.d
                zmm0.d = zmm0.d f* *rax_9
            else
                if (zmm1.d f> 0f)
                    goto label_1416ecb39
                
                if (0f f> *rax_9)
                    goto label_1416ecb39
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm3 = zmm0.d
            zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
            int32_t temp0_6 = _mm_min_ss(zmm3, zmm1.d)
            zmm0 = _mm_min_ss(zmm0.d, zmm2)
            zmm3 = _mm_max_ss(temp0_6, zmm4_1)
            
            if (zmm3 f> zmm0.d)
                goto label_1416ecb39
            
            r8_2 += 1
            rdx_2 += 1
            rax_9 = &rax_9[1]
            
            if (r8_2 s>= 3)
                if (zmm3 f> *(arg3 + 0x14))
                    goto label_1416ecb39
                
                if (zmm0.d f< 0f)
                    goto label_1416ecb39
                
                zmm1 = rdi_1[1]
                var_a8 = *rdi_1
                int64_t* rcx_11 = *arg5
                int128_t var_98_2 = zmm1
                uint64_t var_88_2 = rdi_1[2].q
                
                if ((*(*rcx_11 + 0x18))(rcx_11, &var_a8, arg3).b == 0)
                    break
                
                goto label_1416ecb39
        
        break
    
label_1416ecc3d:
    result.b = 0
return result
