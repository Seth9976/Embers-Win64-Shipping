// 函数: sub_1416eefe0
// 地址: 0x1416eefe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1
int64_t* r13 = arg3
int64_t* rcx_1 = *arg4
int32_t* rax_1 = (*(*rcx_1 + 0x20))(rcx_1)
int128_t* rdi = *(r12 + 0x58)
uint128_t zmm6 = zx.o(0)
uint128_t zmm7 = 0x7f7fffff
void* r14_2 = &rdi[sx.q(*(r12 + 0x60)) * 4]
void* result
int32_t var_d8
int32_t var_d4
void* var_c8
uint128_t var_88
uint128_t zmm0
uint128_t zmm1
int32_t zmm2
int32_t zmm3
int32_t zmm4_1
int32_t zmm5_1

if (rdi == r14_2)
label_1416ef1c0:
    uint128_t* rdi_1 = *(r12 + 0x48)
    void* r14_5 = &rdi_1[sx.q(*(r12 + 0x50)) * 4]
    int32_t var_b8
    
    if (rdi_1 == r14_5)
    label_1416ef34a:
        int64_t var_a0_1 = 1
        void** var_a8 = nullptr
        var_c8 = nullptr
        sub_1405a4d70(&var_a8)
        void** r15_1 = var_a8
        int32_t i = var_a0_1.d
        *r15_1 = var_c8
        
        if (i != 0)
            int32_t* r14_6 = arg2
            
            do
                int64_t rdi_2 = r15_1[sx.q(i - 1)]
                var_d8.q = rdi_2
                
                if (0 != 0)
                    memmove(&r15_1[sx.q(i - 1)], &r15_1[sx.q(i)], 0 << 3)
                
                i -= 1
                
                if (not(var_d4.d f> *(r13 + 0x14)))
                    void* rcx_16 = sx.q(rdi_2.d) * 0x3c + *(r12 + 0x28)
                    
                    if (*(rcx_16 + 0x38) == 0)
                        if (rcx_16 != rcx_16 + 0x30)
                            int64_t* r10_2 = arg3
                            void* rdi_3 = rcx_16 + 0x14
                            int32_t* r14_7 = rcx_16 + 0x30
                            result = r10_2 + 0x1c
                            var_d8.q = result
                            
                            do
                                void* result_1 = result
                                int32_t r8_7 = 0
                                uint128_t zmm0_1
                                zmm0_1.d = (*(rdi_3 - 0x14)).d f- *arg2
                                zmm1.d = (*(rdi_3 - 0x10)).d f- arg2[1]
                                zmm3 = zmm6.d
                                int64_t rax_15 = 0
                                int32_t var_98 = zmm0_1.d
                                zmm0_1.d = (*(rdi_3 - 0xc)).d f- arg2[2]
                                int32_t var_94_1 = zmm1.d
                                zmm1.d = (*(rdi_3 - 8)).d f- *arg2
                                int32_t var_90_1 = zmm0_1.d
                                zmm0_1.d = (*(rdi_3 - 4)).d f- arg2[1]
                                var_b8 = zmm1.d
                                zmm1.d = (*rdi_3).d f- arg2[2]
                                int32_t var_b4_2 = zmm0_1.d
                                zmm0_1 = zmm7
                                int32_t var_b0_2 = zmm1.d
                                
                                while (true)
                                    int32_t zmm4_2 = zmm0_1.d
                                    void* rcx_21 = &var_98 + rax_15
                                    int32_t zmm5_2 = zmm3
                                    zmm2 = *rcx_21
                                    
                                    if (*result_1 == 0)
                                        zmm0_1 = *(&r13[1] - &var_98 + rcx_21)
                                        zmm1 = zmm0_1
                                        zmm0_1.d = zmm0_1.d f* *(&var_b8 + rax_15)
                                        zmm1.d = zmm1.d f* zmm2
                                    else
                                        if (zmm2 f> zmm6.d)
                                            break
                                        
                                        if (zmm6.d f> *(&var_b8 + rax_15))
                                            break
                                        
                                        zmm1 = zmm6
                                        zmm0_1 = zmm7
                                    
                                    zmm3 = zmm0_1.d
                                    zmm0_1 = _mm_max_ss(zmm0_1.d, zmm1.d)
                                    int32_t temp0_11 = _mm_min_ss(zmm3, zmm1.d)
                                    zmm0_1 = _mm_min_ss(zmm0_1.d, zmm4_2)
                                    zmm3 = _mm_max_ss(temp0_11, zmm5_2)
                                    
                                    if (zmm3 f> zmm0_1.d)
                                        break
                                    
                                    r8_7 += 1
                                    result_1 += 1
                                    rax_15 += 4
                                    
                                    if (r8_7 s>= 3)
                                        if (not(zmm3 f> *(r10_2 + 0x14)) && not(zmm0_1.d f< zmm6.d))
                                            int64_t i_1 = sx.q(i)
                                            var_c8:4.d = zmm3
                                            var_c8.d = *r14_7
                                            i = (i_1 + 1).d
                                            var_a0_1.d = i
                                            
                                            if (i s> var_a0_1:4.d)
                                                sub_1405a4d70(&var_a8)
                                                r10_2 = arg3
                                                i = var_a0_1.d
                                                r15_1 = var_a8
                                            
                                            r15_1[i_1] = var_c8
                                        
                                        break
                                
                                rdi_3 += 0x18
                                r14_7 = &r14_7[1]
                                result = var_d8.q
                            while (rdi_3 - 0x14 != rcx_16 + 0x30)
                            
                            r13 = arg3
                            r14_6 = arg2
                        
                        r12 = arg1
                    else
                        r12 = arg1
                        result, zmm6, zmm7 = sub_1416f00f0(
                            sx.q(*(rcx_16 + 0x30)) * 0x98 + *(r12 + 0x38), r14_6, r13, arg4)
                        
                        if (result.b == 0)
                            if (r15_1 != 0)
                                sub_140a74f90(r15_1)
                            
                            goto label_1416ef414_1
            while (i != 0)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        result.b = 1
    else
        void* rbx_2 = rdi_1 + 0x3c
        
        while (true)
            if (*(rbx_2 - 0x18) != 0 && rax_1 != 0 && *rax_1 != 0
                && not(test_bit(*(rbx_2 - 0x24) | *(rbx_2 - 0x20), rax_1[3] u>> 0x15 & 0x1f)))
            label_1416ef337:
                rdi_1 = &rdi_1[4]
                rbx_2 += 0x40
                
                if (rdi_1 == r14_5)
                    goto label_1416ef34a
                
                continue
            
            zmm0.d = (*(rbx_2 - 0x14)).d f- *arg2
            zmm1.d = (*(rbx_2 - 0x10)).d f- arg2[1]
            int32_t r8_2 = 0
            void* rdx_2 = r13 + 0x1c
            var_b8 = zmm0.d
            int32_t* rax_9 = &var_d8
            zmm3 = (zx.o(0)).d
            zmm0.d = (*(rbx_2 - 0xc)).d f- arg2[2]
            int32_t var_b4_1 = zmm1.d
            zmm1.d = (*(rbx_2 - 8)).d f- *arg2
            int32_t var_b0_1 = zmm0.d
            zmm0.d = (*(rbx_2 - 4)).d f- arg2[1]
            var_d8 = zmm1.d
            zmm1.d = (*rbx_2).d f- arg2[2]
            var_d4 = zmm0.d
            zmm0 = 0x7f7fffff
            int32_t var_d0_2 = zmm1.d
            
            while (true)
                void* rcx_10 = &r13[1] - &var_d8 + rax_9
                zmm2 = *(rcx_10 + &var_b8 - &r13[1])
                zmm4_1 = zmm0.d
                zmm5_1 = zmm3
                
                if (*rdx_2 == 0)
                    zmm0 = *rcx_10
                    zmm1 = zmm0
                    zmm0.d = zmm0.d f* *rax_9
                    zmm1.d = zmm1.d f* zmm2
                else
                    if (zmm2 f> 0f)
                        goto label_1416ef337
                    
                    if (0f f> *rax_9)
                        goto label_1416ef337
                    
                    zmm1 = zx.o(0)
                    zmm0 = 0x7f7fffff
                
                zmm3 = zmm0.d
                zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
                int32_t temp0_6 = _mm_min_ss(zmm3, zmm1.d)
                zmm0 = _mm_min_ss(zmm0.d, zmm4_1)
                zmm3 = _mm_max_ss(temp0_6, zmm5_1)
                
                if (zmm3 f> zmm0.d)
                    goto label_1416ef337
                
                r8_2 += 1
                rdx_2 += 1
                rax_9 = &rax_9[1]
                
                if (r8_2 s>= 3)
                    if (zmm3 f> *(r13 + 0x14))
                        goto label_1416ef337
                    
                    if (zmm0.d f< 0f)
                        goto label_1416ef337
                    
                    zmm1 = rdi_1[1]
                    var_88 = *rdi_1
                    int64_t* rcx_11 = *arg4
                    uint128_t var_78_2 = zmm1
                    uint64_t var_68_2 = rdi_1[2].q
                    
                    if ((*(*rcx_11 + 0x10))(rcx_11, &var_88, r13).b == 0)
                        break
                    
                    goto label_1416ef337
            
            break
        
    label_1416ef414:
        result.b = 0
else
    void* rbx_1 = rdi + 0x3c
    
    while (true)
        if (*(rbx_1 - 0x18) != 0 && rax_1 != 0 && *rax_1 != 0
            && not(test_bit(*(rbx_1 - 0x24) | *(rbx_1 - 0x20), rax_1[3] u>> 0x15 & 0x1f)))
        label_1416ef1af:
            rdi = &rdi[4]
            rbx_1 += 0x40
            
            if (rdi == r14_2)
                goto label_1416ef1c0
            
            continue
        
        zmm0.d = (*(rbx_1 - 0x14)).d f- *arg2
        zmm1.d = (*(rbx_1 - 0x10)).d f- arg2[1]
        int32_t r8 = 0
        void* rdx = r13 + 0x1c
        zmm3 = (zx.o(0)).d
        var_d8 = zmm0.d
        int64_t rax_4 = 0
        zmm0.d = (*(rbx_1 - 0xc)).d f- arg2[2]
        var_d4 = zmm1.d
        zmm1.d = (*(rbx_1 - 8)).d f- *arg2
        int32_t var_d0_1 = zmm0.d
        zmm0.d = (*(rbx_1 - 4)).d f- arg2[1]
        var_c8.d = zmm1.d
        zmm1.d = (*rbx_1).d f- arg2[2]
        var_c8:4.d = zmm0.d
        zmm0 = 0x7f7fffff
        int32_t var_c0_1 = zmm1.d
        
        while (true)
            zmm4_1 = zmm0.d
            void* rcx_5 = &var_d8 + rax_4
            zmm5_1 = zmm3
            zmm2 = *rcx_5
            
            if (*rdx == 0)
                zmm0 = *(&r13[1] - &var_d8 + rcx_5)
                zmm1 = zmm0
                zmm0.d = zmm0.d f* *(&var_c8 + rax_4)
                zmm1.d = zmm1.d f* zmm2
            else
                if (zmm2 f> 0f)
                    goto label_1416ef1af
                
                if (0f f> *(&var_c8 + rax_4))
                    goto label_1416ef1af
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm3 = zmm0.d
            zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
            int32_t temp0_2 = _mm_min_ss(zmm3, zmm1.d)
            zmm0 = _mm_min_ss(zmm0.d, zmm4_1)
            zmm3 = _mm_max_ss(temp0_2, zmm5_1)
            
            if (zmm3 f> zmm0.d)
                goto label_1416ef1af
            
            r8 += 1
            rdx += 1
            rax_4 += 4
            
            if (r8 s>= 3)
                if (zmm3 f> *(r13 + 0x14))
                    goto label_1416ef1af
                
                if (zmm0.d f< 0f)
                    goto label_1416ef1af
                
                zmm1 = rdi[1]
                var_88 = *rdi
                int64_t* rcx_6 = *arg4
                uint128_t var_78_1 = zmm1
                uint64_t var_68_1 = rdi[2].q
                
                if ((*(*rcx_6 + 0x10))(rcx_6, &var_88, r13).b == 0)
                    break
                
                goto label_1416ef1af
        
        break
    
label_1416ef414_1:
    result.b = 0
return result
