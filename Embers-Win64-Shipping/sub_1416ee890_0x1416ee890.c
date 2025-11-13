// 函数: sub_1416ee890
// 地址: 0x1416ee890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
void* r12 = arg3
int64_t* rcx = *arg4
int32_t* rax_1 = (*(*rcx + 0x20))(rcx)
int128_t* rdi = *(rbx + 0x58)
void* r14_2 = &rdi[sx.q(*(rbx + 0x60)) * 4]
int32_t var_f8
int32_t var_f4
void* var_e8
uint128_t var_88
uint128_t zmm0
uint128_t zmm1
int32_t zmm2
int32_t zmm3
int32_t zmm4_1

if (rdi != r14_2)
    void* rbx_1 = rdi + 0x3c
    
    while (true)
        if (*(rbx_1 - 0x18) != 0 && rax_1 != 0 && *rax_1 != 0
            && not(test_bit(*(rbx_1 - 0x24) | *(rbx_1 - 0x20), rax_1[3] u>> 0x15 & 0x1f)))
        label_1416eea5d:
            rdi = &rdi[4]
            rbx_1 += 0x40
            
            if (rdi != r14_2)
                continue
            
            rbx = arg1
            break
        
        zmm0.d = (*(rbx_1 - 0x14)).d f- *arg2
        zmm1.d = (*(rbx_1 - 0x10)).d f- arg2[1]
        int32_t r8 = 0
        void* rdx = r12 + 0x1c
        zmm3 = (zx.o(0)).d
        var_f8 = zmm0.d
        int64_t rax_4 = 0
        zmm0.d = (*(rbx_1 - 0xc)).d f- arg2[2]
        var_f4 = zmm1.d
        zmm1.d = (*(rbx_1 - 8)).d f- *arg2
        int32_t var_f0_1 = zmm0.d
        zmm0.d = (*(rbx_1 - 4)).d f- arg2[1]
        var_e8.d = zmm1.d
        zmm1.d = (*rbx_1).d f- arg2[2]
        var_e8:4.d = zmm0.d
        zmm0 = 0x7f7fffff
        int32_t var_e0_1 = zmm1.d
        
        while (true)
            zmm4_1 = zmm0.d
            void* rcx_4 = &var_f8 + rax_4
            int32_t zmm5_1 = zmm3
            zmm2 = *rcx_4
            
            if (*rdx == 0)
                zmm0 = *(r12 + 8 - &var_f8 + rcx_4)
                zmm1 = zmm0
                zmm0.d = zmm0.d f* *(&var_e8 + rax_4)
                zmm1.d = zmm1.d f* zmm2
            else
                if (zmm2 f> 0f)
                    goto label_1416eea5d
                
                if (0f f> *(&var_e8 + rax_4))
                    goto label_1416eea5d
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm3 = zmm0.d
            zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
            int32_t temp0_2 = _mm_min_ss(zmm3, zmm1.d)
            zmm0 = _mm_min_ss(zmm0.d, zmm4_1)
            zmm3 = _mm_max_ss(temp0_2, zmm5_1)
            
            if (zmm3 f> zmm0.d)
                goto label_1416eea5d
            
            r8 += 1
            rdx += 1
            rax_4 += 4
            
            if (r8 s>= 3)
                if (zmm3 f> *(r12 + 0x14))
                    goto label_1416eea5d
                
                if (zmm0.d f< 0f)
                    goto label_1416eea5d
                
                int64_t* rcx_5 = *arg4
                zmm1 = rdi[1]
                var_88 = *rdi
                uint64_t var_68_1 = rdi[2].q
                uint128_t var_78_1 = zmm1
                
                if ((*(*rcx_5 + 0x10))(rcx_5, &var_88, r12).b == 0)
                    break
                
                goto label_1416eea5d
        
        goto label_1416eefd7

uint128_t* rdi_1 = *(rbx + 0x48)
void* r14_5 = &rdi_1[sx.q(*(rbx + 0x50)) * 4]
void* result
int32_t var_c8

if (rdi_1 == r14_5)
label_1416eebf1:
    int64_t var_d0_1 = 1
    void** var_d8 = nullptr
    var_e8 = nullptr
    sub_1405a4d70(&var_d8)
    void** r13_1 = var_d8
    int32_t i = var_d0_1.d
    *r13_1 = var_e8
    
    while (i != 0)
        int64_t rdi_2 = r13_1[sx.q(i - 1)]
        var_f8.q = rdi_2
        
        if (0 != 0)
            memmove(&r13_1[sx.q(i - 1)], &r13_1[sx.q(i)], 0 << 3)
        
        i -= 1
        
        if (not(var_f4.d f> *(r12 + 0x14)))
            void* rcx_16 = sx.q(rdi_2.d) * 0x3c + *(arg1 + 0x28)
            uint128_t zmm0_1
            int32_t zmm4_2
            
            if (*(rcx_16 + 0x38) != 0)
                result = *(arg1 + 0x38)
                int64_t rcx_18 = sx.q(*(rcx_16 + 0x30)) << 6
                uint128_t* rbx_4 = *(rcx_18 + result + 0x18)
                void* rsi_3 = &rbx_4[sx.q(*(rcx_18 + result + 0x20)) * 4]
                
                if (rbx_4 != rsi_3)
                    void* rdi_3 = rbx_4 + 0x3c
                label_1416eecf6:
                    void* rdx_7 = r12 + 0x1c
                    int32_t r8_6 = 0
                    zmm0_1.d = (*(rdi_3 - 0x14)).d f- *arg2
                    zmm1.d = (*(rdi_3 - 0x10)).d f- arg2[1]
                    zmm3 = (zx.o(0)).d
                    int32_t var_a8 = zmm0_1.d
                    zmm0_1.d = (*(rdi_3 - 0xc)).d f- arg2[2]
                    int32_t var_a4_1 = zmm1.d
                    zmm1.d = (*(rdi_3 - 8)).d f- *arg2
                    int32_t var_a0_1 = zmm0_1.d
                    zmm0_1.d = (*(rdi_3 - 4)).d f- arg2[1]
                    int32_t var_b8 = zmm1.d
                    zmm1.d = (*rdi_3).d f- arg2[2]
                    result = &var_b8
                    int32_t var_b4_1 = zmm0_1.d
                    zmm0_1 = 0x7f7fffff
                    int32_t var_b0_1 = zmm1.d
                    
                    while (true)
                        void* rcx_19 = r12 + 8 - &var_b8 + result
                        zmm2 = *(rcx_19 + &var_a8 - (r12 + 8))
                        zmm4_2 = zmm0_1.d
                        int32_t zmm5_2 = zmm3
                        
                        if (*rdx_7 == 0)
                            zmm0_1 = *rcx_19
                            zmm1 = zmm0_1
                            zmm0_1.d = zmm0_1.d f* *result
                            zmm1.d = zmm1.d f* zmm2
                        else
                            if (zmm2 f> 0f)
                                goto label_1416eee0a
                            
                            if (0f f> *result)
                                goto label_1416eee0a
                            
                            zmm1 = zx.o(0)
                            zmm0_1 = 0x7f7fffff
                        
                        zmm3 = zmm0_1.d
                        zmm0_1 = _mm_max_ss(zmm0_1.d, zmm1.d)
                        int32_t temp0_11 = _mm_min_ss(zmm3, zmm1.d)
                        zmm0_1 = _mm_min_ss(zmm0_1.d, zmm4_2)
                        zmm3 = _mm_max_ss(temp0_11, zmm5_2)
                        
                        if (zmm3 f> zmm0_1.d)
                            goto label_1416eee0a
                        
                        r8_6 += 1
                        rdx_7 += 1
                        result += 4
                        
                        if (r8_6 s>= 3)
                            if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0_1.d f< 0f))
                                zmm1 = rbx_4[1]
                                var_88 = *rbx_4
                                int64_t* rcx_20 = *arg4
                                uint128_t var_78_3 = zmm1
                                uint64_t var_68_3 = rbx_4[2].q
                                
                                if ((*(*rcx_20 + 0x10))(rcx_20, &var_88, arg3).b == 0)
                                    if (r13_1 != 0)
                                        sub_140a74f90(r13_1)
                                    
                                    goto label_1416eefd7
                            
                        label_1416eee0a:
                            rbx_4 = &rbx_4[4]
                            rdi_3 += 0x40
                            
                            if (rbx_4 != rsi_3)
                                goto label_1416eecf6
                            
                            break
                    
                    r12 = arg3
            else if (rcx_16 != rcx_16 + 0x30)
                void* rbx_5 = arg3
                void* rdi_4 = rcx_16 + 0x14
                void** r11_1 = var_d8
                int32_t* rsi_4 = rcx_16 + 0x30
                void* r13_2 = rbx_5 + 0x1c
                
                do
                    int32_t r8_8 = 0
                    zmm0_1.d = (*(rdi_4 - 0x14)).d f- *arg2
                    zmm1.d = (*(rdi_4 - 0x10)).d f- arg2[1]
                    zmm3 = (zx.o(0)).d
                    void* rdx_10 = r13_2
                    int32_t var_98 = zmm0_1.d
                    zmm0_1.d = (*(rdi_4 - 0xc)).d f- arg2[2]
                    int32_t var_94_1 = zmm1.d
                    zmm1.d = (*(rdi_4 - 8)).d f- *arg2
                    int32_t var_90_1 = zmm0_1.d
                    zmm0_1.d = (*(rdi_4 - 4)).d f- arg2[1]
                    var_c8 = zmm1.d
                    zmm1.d = (*rdi_4).d f- arg2[2]
                    int32_t* rax_17 = &var_c8
                    int32_t var_c4_2 = zmm0_1.d
                    zmm0_1 = 0x7f7fffff
                    int32_t var_c0_2 = zmm1.d
                    
                    while (true)
                        uint128_t* rcx_21 = r12 + 8 - &var_c8 + rax_17
                        zmm1 = *(rcx_21 + &var_98 - (r12 + 8))
                        zmm2 = zmm0_1.d
                        zmm4_2 = zmm3
                        
                        if (*rdx_10 == 0)
                            zmm0_1 = *rcx_21
                            zmm1.d = zmm1.d f* zmm0_1.d
                            zmm0_1.d = zmm0_1.d f* *rax_17
                        else
                            if (zmm1.d f> 0f)
                                break
                            
                            if (0f f> *rax_17)
                                break
                            
                            zmm1 = zx.o(0)
                            zmm0_1 = 0x7f7fffff
                        
                        zmm3 = zmm0_1.d
                        zmm0_1 = _mm_max_ss(zmm0_1.d, zmm1.d)
                        int32_t temp0_15 = _mm_min_ss(zmm3, zmm1.d)
                        zmm0_1 = _mm_min_ss(zmm0_1.d, zmm2)
                        zmm3 = _mm_max_ss(temp0_15, zmm4_2)
                        
                        if (zmm3 f> zmm0_1.d)
                            break
                        
                        r8_8 += 1
                        rdx_10 += 1
                        rax_17 = &rax_17[1]
                        
                        if (r8_8 s>= 3)
                            if (not(zmm3 f> *(rbx_5 + 0x14)) && not(zmm0_1.d f< 0f))
                                int64_t i_1 = sx.q(i)
                                var_e8:4.d = zmm3
                                var_e8.d = *rsi_4
                                i = (i_1 + 1).d
                                var_d0_1.d = i
                                
                                if (i s> var_d0_1:4.d)
                                    sub_1405a4d70(&var_d8)
                                    r11_1 = var_d8
                                    i = var_d0_1.d
                                
                                r11_1[i_1] = var_e8
                                rbx_5 = arg3
                            
                            break
                    
                    rdi_4 += 0x18
                    rsi_4 = &rsi_4[1]
                while (rdi_4 - 0x14 != rcx_16 + 0x30)
                
                r13_1 = var_d8
                r12 = arg3
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    result.b = 1
else
    void* rbx_2 = rdi_1 + 0x3c
    
    while (true)
        if (*(rbx_2 - 0x18) != 0 && rax_1 != 0 && *rax_1 != 0
            && not(test_bit(*(rbx_2 - 0x24) | *(rbx_2 - 0x20), rax_1[3] u>> 0x15 & 0x1f)))
        label_1416eebde:
            rdi_1 = &rdi_1[4]
            rbx_2 += 0x40
            
            if (rdi_1 == r14_5)
                goto label_1416eebf1
            
            continue
        
        zmm0.d = (*(rbx_2 - 0x14)).d f- *arg2
        zmm1.d = (*(rbx_2 - 0x10)).d f- arg2[1]
        int32_t r8_2 = 0
        void* rdx_2 = r12 + 0x1c
        var_c8 = zmm0.d
        int32_t* rax_8 = &var_f8
        zmm3 = (zx.o(0)).d
        zmm0.d = (*(rbx_2 - 0xc)).d f- arg2[2]
        int32_t var_c4_1 = zmm1.d
        zmm1.d = (*(rbx_2 - 8)).d f- *arg2
        int32_t var_c0_1 = zmm0.d
        zmm0.d = (*(rbx_2 - 4)).d f- arg2[1]
        var_f8 = zmm1.d
        zmm1.d = (*rbx_2).d f- arg2[2]
        var_f4 = zmm0.d
        zmm0 = 0x7f7fffff
        int32_t var_f0_2 = zmm1.d
        
        while (true)
            void* rcx_9 = r12 + 8 - &var_f8 + rax_8
            zmm1 = *(rcx_9 + &var_c8 - (r12 + 8))
            zmm2 = zmm0.d
            zmm4_1 = zmm3
            
            if (*rdx_2 == 0)
                zmm0 = *rcx_9
                zmm1.d = zmm1.d f* zmm0.d
                zmm0.d = zmm0.d f* *rax_8
            else
                if (zmm1.d f> 0f)
                    goto label_1416eebde
                
                if (0f f> *rax_8)
                    goto label_1416eebde
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm3 = zmm0.d
            zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
            int32_t temp0_6 = _mm_min_ss(zmm3, zmm1.d)
            zmm0 = _mm_min_ss(zmm0.d, zmm2)
            zmm3 = _mm_max_ss(temp0_6, zmm4_1)
            
            if (zmm3 f> zmm0.d)
                goto label_1416eebde
            
            r8_2 += 1
            rdx_2 += 1
            rax_8 = &rax_8[1]
            
            if (r8_2 s>= 3)
                if (zmm3 f> *(r12 + 0x14))
                    goto label_1416eebde
                
                if (zmm0.d f< 0f)
                    goto label_1416eebde
                
                int64_t* rcx_10 = *arg4
                zmm1 = rdi_1[1]
                var_88 = *rdi_1
                uint64_t var_68_2 = rdi_1[2].q
                uint128_t var_78_2 = zmm1
                
                if ((*(*rcx_10 + 0x10))(rcx_10, &var_88, r12).b == 0)
                    break
                
                goto label_1416eebde
        
        break
    
label_1416eefd7:
    result.b = 0
return result
