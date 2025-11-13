// 函数: sub_14181bc60
// 地址: 0x14181bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_438
int64_t rax_2 = __security_cookie ^ &var_438
int32_t rsi_1 = 0
char var_417_1 = arg4
int32_t var_414_1 = 0
int64_t var_368 = arg1
int128_t zmm6
int128_t var_48_1 = zmm6
int64_t var_360_1 = arg1 - 0x60 + sx.q(arg2) * 0x60
char var_418_1 = arg3
int128_t zmm7
int128_t var_58_1 = zmm7
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_358_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_350
memset(&var_350, 0, 0x2e8)
int64_t* i = &var_368
int64_t* i_1 = &var_368

do
    uint128_t zmm2 = *i
    uint128_t* r9 = zmm2.q
    uint32_t var_370_1 = (i[2]).d
    uint128_t* var_400_1 = r9
    void* r10_1 = _mm_bsrli_si128(zmm2, 8).q
    void* var_408_1 = r10_1
    int32_t rdx_3 = ((r10_1 - r9) s/ 0x60).d + 1
    uint32_t var_414_2 = var_370_1
    
    if (var_370_1 == 0)
    label_14181c2a1:
        sub_14181aa20(var_400_1, rdx_3)
    label_14181c2a6:
        i = i_1
    else
        while (true)
            int128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                if (r10_1 u<= r9)
                    break
                
                uint128_t* rax_34 = &r9[6]
                uint128_t* var_3f0_3 = rax_34
                
                do
                    uint128_t* rcx_30 = r9
                    uint128_t* r15_3 = rax_34
                    uint128_t* var_3f8_2 = rcx_30
                    
                    if (rax_34 u<= r10_1)
                        do
                            int32_t r13_3 = *(r15_3 + 8)
                            int16_t* r14_2 = nullptr
                            int64_t r12_4 = *r15_3
                            uint64_t var_3a0 = 0
                            
                            if (r13_3 != 0)
                                sub_1405a4c70(&var_3a0, r13_3, 0)
                                r14_2 = var_3a0
                                memcpy(r14_2, r12_4, r13_3 * 2)
                                rcx_30 = var_3f8_2
                            else
                                int32_t var_394_1 = 0
                            
                            int32_t rax_35 = *(rcx_30 + 8)
                            int16_t* r12_5 = nullptr
                            int64_t rcx_33 = *rcx_30
                            uint64_t var_390 = 0
                            
                            if (rax_35 != 0)
                                sub_1405a4c70(&var_390, rax_35, 0)
                                r12_5 = var_390
                                memcpy(r12_5, rcx_33, rax_35 * 2)
                            else
                                int32_t var_384_1 = 0
                            
                            int16_t* const rdx_26 = &data_142d40450
                            int16_t* const rcx_36 = &data_142d40450
                            
                            if (r13_3 != 0)
                                rdx_26 = r14_2
                            
                            if (rax_35 != 0)
                                rcx_36 = r12_5
                            
                            r13_3.b = sub_140a54510(rcx_36, rdx_26) s< 0
                            
                            if (r12_5 != 0)
                                sub_140a74f90(r12_5)
                            
                            if (r14_2 != 0)
                                sub_140a74f90(r14_2)
                            
                            r10_1 = var_408_1
                            uint128_t* rax_37 = r15_3
                            
                            if (r13_3.b == 0)
                                rax_37 = var_3f8_2
                            
                            r15_3 = &r15_3[6]
                            var_3f8_2 = rax_37
                            rcx_30 = rax_37
                        while (r15_3 u<= r10_1)
                        
                        r9 = var_400_1
                        rax_34 = var_3f0_3
                    
                    if (rcx_30 != r10_1)
                        zmm2 = *rcx_30
                        zmm3 = rcx_30[1]
                        zmm4_1 = rcx_30[2]
                        zmm5_1 = rcx_30[3]
                        zmm6 = rcx_30[4]
                        zmm7 = rcx_30[5]
                        *rcx_30 = *r10_1
                        rcx_30[1] = *(r10_1 + 0x10)
                        rcx_30[2] = *(r10_1 + 0x20)
                        rcx_30[3] = *(r10_1 + 0x30)
                        rcx_30[4] = *(r10_1 + 0x40)
                        rcx_30[5] = *(r10_1 + 0x50)
                        *r10_1 = zmm2
                        *(r10_1 + 0x10) = zmm3
                        *(r10_1 + 0x20) = zmm4_1
                        *(r10_1 + 0x30) = zmm5_1
                        *(r10_1 + 0x40) = zmm6
                        *(r10_1 + 0x50) = zmm7
                    
                    r10_1 -= 0x60
                    var_408_1 = r10_1
                while (r10_1 u> r9)
                
                goto label_14181c2a6
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rax_17 = &r9[sx.q((temp1_1 - temp0_3) s>> 1) * 6]
            
            if (rax_17 != r9)
                zmm2 = *rax_17
                zmm3 = *(rax_17 + 0x10)
                zmm4_1 = *(rax_17 + 0x20)
                zmm5_1 = *(rax_17 + 0x30)
                zmm6 = *(rax_17 + 0x40)
                zmm7 = *(rax_17 + 0x50)
                *rax_17 = *r9
                *(rax_17 + 0x10) = r9[1]
                *(rax_17 + 0x20) = r9[2]
                *(rax_17 + 0x30) = r9[3]
                *(rax_17 + 0x40) = r9[4]
                *(rax_17 + 0x50) = r9[5]
                *r9 = zmm2
                r9[1] = zmm3
                r9[2] = zmm4_1
                r9[3] = zmm5_1
                r9[4] = zmm6
                r9[5] = zmm7
            
            uint64_t var_3e0
            uint64_t rbx_2 = var_3e0
            uint64_t var_3d0
            uint64_t rdi_2 = var_3d0
            uint128_t* r13_1 = r9
            void* var_3f8_1 = r10_1 + 0x60
            uint128_t* r12_3
            
            while (true)
                r13_1 = &r13_1[6]
                int32_t rax_19
                int32_t r14_1
                
                if (r13_1 u<= r10_1)
                    r14_1 = *(r13_1 + 8)
                    rdi_2 = 0
                    int64_t rbx_3 = *r13_1
                    rsi_1 |= 3
                    var_3d0 = 0
                    
                    if (r14_1 != 0)
                        sub_1405a4c70(&var_3d0, r14_1, 0)
                        rdi_2 = var_3d0
                        memcpy(rdi_2, rbx_3, r14_1 * 2)
                    else
                        int32_t var_3c4_1 = 0
                    
                    int32_t r15_1 = *(var_400_1 + 8)
                    rbx_2 = 0
                    int64_t rax_18 = *var_400_1
                    var_3e0 = 0
                    
                    if (r15_1 != 0)
                        sub_1405a4c70(&var_3e0, r15_1, 0)
                        rbx_2 = var_3e0
                        memcpy(rbx_2, rax_18, r15_1 * 2)
                    else
                        int32_t var_3d4_1 = 0
                    
                    uint64_t rdx_9 = &data_142d40450
                    uint64_t rcx_10 = &data_142d40450
                    
                    if (r14_1 != 0)
                        rdx_9 = rdi_2
                    
                    if (r15_1 != 0)
                        rcx_10 = rbx_2
                    
                    rax_19 = sub_140a54510(rcx_10, rdx_9)
                
                if (r13_1 u> r10_1 || rax_19 s< 0)
                    r14_1.b = 0
                else
                    r14_1.b = 1
                
                if ((rsi_1.b & 2) != 0)
                    rsi_1 &= 0xfffffffd
                    
                    if (rbx_2 != 0)
                        sub_140a74f90(rbx_2)
                
                if ((rsi_1.b & 1) != 0)
                    rsi_1 &= 0xfffffffe
                    
                    if (rdi_2 != 0)
                        sub_140a74f90(rdi_2)
                
                r10_1 = var_408_1
                
                if (r14_1.b == 0)
                    r12_3 = var_3f8_1
                    uint64_t var_3b0
                    uint64_t rbx_4 = var_3b0
                    uint64_t var_3c0
                    uint64_t rdi_3 = var_3c0
                    
                    do
                        r12_3 = &r12_3[-6]
                        
                        if (r12_3 u<= var_400_1)
                            r14_1.b = 0
                        else
                            r14_1 = *(var_400_1 + 8)
                            rdi_3 = 0
                            int64_t rbx_5 = *var_400_1
                            rsi_1 |= 0xc
                            var_3c0 = 0
                            
                            if (r14_1 != 0)
                                sub_1405a4c70(&var_3c0, r14_1, 0)
                                rdi_3 = var_3c0
                                memcpy(rdi_3, rbx_5, r14_1 * 2)
                            else
                                int32_t var_3b4_1 = 0
                            
                            int32_t r15_2 = *(r12_3 + 8)
                            rbx_4 = 0
                            int64_t rax_20 = *r12_3
                            var_3b0 = 0
                            
                            if (r15_2 != 0)
                                sub_1405a4c70(&var_3b0, r15_2, 0)
                                rbx_4 = var_3b0
                                memcpy(rbx_4, rax_20, r15_2 * 2)
                            else
                                int32_t var_3a4_1 = 0
                            
                            uint64_t rdx_14 = &data_142d40450
                            uint64_t rcx_17 = &data_142d40450
                            
                            if (r14_1 != 0)
                                rdx_14 = rdi_3
                            
                            if (r15_2 != 0)
                                rcx_17 = rbx_4
                            
                            if (sub_140a54510(rcx_17, rdx_14) s< 0)
                                r14_1.b = 0
                            else
                                r14_1.b = 1
                        
                        if ((rsi_1.b & 8) != 0)
                            rsi_1 &= 0xfffffff7
                            
                            if (rbx_4 != 0)
                                sub_140a74f90(rbx_4)
                        
                        if ((rsi_1.b & 4) != 0)
                            rsi_1 &= 0xfffffffb
                            
                            if (rdi_3 != 0)
                                sub_140a74f90(rdi_3)
                    while (r14_1.b != 0)
                    
                    rbx_2 = var_3e0
                    rdi_2 = var_3d0
                    var_3f8_1 = r12_3
                    
                    if (r13_1 u> r12_3)
                        break
                    
                    r10_1 = var_408_1
                    
                    if (r13_1 != r12_3)
                        zmm2 = *r13_1
                        zmm3 = r13_1[1]
                        zmm4_1 = r13_1[2]
                        zmm5_1 = r13_1[3]
                        zmm6 = r13_1[4]
                        zmm7 = r13_1[5]
                        *r13_1 = *r12_3
                        r13_1[1] = r12_3[1]
                        r13_1[2] = r12_3[2]
                        r13_1[3] = r12_3[3]
                        r13_1[4] = r12_3[4]
                        r13_1[5] = r12_3[5]
                        *r12_3 = zmm2
                        r12_3[1] = zmm3
                        r12_3[2] = zmm4_1
                        r12_3[3] = zmm5_1
                        r12_3[4] = zmm6
                        r12_3[5] = zmm7
            
            r9 = var_400_1
            
            if (r9 != r12_3)
                zmm2 = *r9
                zmm3 = r9[1]
                zmm4_1 = r9[2]
                zmm5_1 = r9[3]
                zmm6 = r9[4]
                zmm7 = r9[5]
                *r9 = *r12_3
                r9[1] = r12_3[1]
                r9[2] = r12_3[2]
                r9[3] = r12_3[3]
                r9[4] = r12_3[4]
                r9[5] = r12_3[5]
                *r12_3 = zmm2
                r12_3[1] = zmm3
                r12_3[2] = zmm4_1
                r12_3[3] = zmm5_1
                r12_3[4] = zmm6
                r12_3[5] = zmm7
            
            r10_1 = var_408_1
            uint32_t r11_2 = var_414_2 - 1
            var_414_2 = r11_2
            i = i_1
            
            if ((r12_3 - r9 - 0x60) s/ 0x60 s< (r10_1 - r13_1) s/ 0x60)
                if (r10_1 u> r13_1)
                    *i = r13_1
                    i[1] = r10_1
                    i[2].d = r11_2
                    i = &i[3]
                    i_1 = i
                
                if (&r9[6] u>= r12_3)
                    break
                
                r10_1 = &r12_3[-6]
                var_408_1 = r10_1
            else
                if (&r9[6] u< r12_3)
                    *i = r9
                    i[1] = &r12_3[-6]
                    i[2].d = r11_2
                    i = &i[3]
                    i_1 = i
                
                if (r10_1 u<= r13_1)
                    break
                
                r9 = r13_1
                var_400_1 = r13_1
            
            i = i_1
            rdx_3 = ((r10_1 - r9) s/ 0x60).d + 1
            
            if (r11_2 == 0)
                goto label_14181c2a1
    
    i -= 0x18
    i_1 = i
while (i u>= &var_368)

__security_check_cookie(rax_2 ^ &var_438)
