// 函数: sub_142440df0
// 地址: 0x142440df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* var_150 = arg2
void* r13 = arg2
sub_140b33630("RemoveFromWorld")
*(r13 + 0x1f5) |= 0x80
int64_t rax_2 = *(arg1 + 0xe0)

if (rax_2 == 0)
label_142440e52:
    
    if ((*(r13 + 0x1f4) & 0x20) != 0)
        int128_t zmm6
        int128_t var_48_1 = zmm6
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm7
        zmm7.q = float.d(performanceCount)
        zmm7.q = zmm7.q f* data_143d796f8
        
        if (arg3 == 0 || data_143a2d8d4.d f<= 0f)
            *(r13 + 0x1f6) |= 8
        label_142440f58:
            int32_t i = 0
            
            if (*(r13 + 0xa0) s> 0)
                int64_t* rbx_2 = nullptr
                
                do
                    int64_t* rcx_3 = *(rbx_2 + *(r13 + 0x98))
                    
                    if (rcx_3 != 0)
                        sub_141dd6120(rcx_3, 3)
                    
                    i += 1
                    rbx_2 = &rbx_2[1]
                while (i s< *(r13 + 0xa0))
            
            void* rax_6 = sub_14255d000()
            void* rbx_3 = rax_6
            
            if (rax_6 == 0)
                rbx_3 = nullptr
            else
                void* rax_7 = sub_14255d000()
                
                if (rax_7 == 0)
                    rbx_3 = nullptr
                else
                    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                    
                    if (rax_8.d s> *(rbx_3 + 0x38)
                            || *(*(rbx_3 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                        rbx_3 = nullptr
            
            int32_t var_d0 = 5
            char var_78_1 = 0
            void* var_c8
            sub_142442440(&var_c8)
            sub_1405ab0f0(&var_c8, arg1, rbx_3)
            char var_78_2 = 1
            sub_1405b0c60(&var_d0)
            int32_t var_130_1 = 0
            char var_d8_1 = 0
            char i_1
            
            if (i_1 == 0)
                int64_t* var_a0
                int64_t* rdi_1 = var_a0
                
                do
                    if (sub_141dcdf90(rdi_1, r13) == 0)
                        void* rax_12 = (*(*rdi_1 + 0x628))(rdi_1)
                        
                        if (rax_12 != 0)
                            void* rax_13 = sub_142490590()
                            void* rcx_11 = *(rax_12 + 0x10)
                            int64_t rdx_4 = sx.q(*(rax_13 + 0x38))
                            
                            if (rdx_4.d s<= *(rcx_11 + 0x38)
                                    && *(*(rcx_11 + 0x30) + (rdx_4 << 3)) == rax_13 + 0x30)
                                *(rax_12 + 0x1f1) |= 8
                    else
                        int64_t* rcx_9 = rdi_1[0x4b]
                        
                        if (rcx_9 != 0 && rcx_9[0x4a] != rdi_1)
                            sub_141f9ecf0(rcx_9)
                    
                    int32_t var_90
                    int32_t r8_1 = var_90
                    int32_t var_b8
                    int32_t rdx_5 = var_b8
                    void* r15_1 = var_c8
                    int32_t var_b0
                    int32_t rsi_2 = var_b0 + 1
                    
                    if (rsi_2 s>= r8_1 + rdx_5)
                    label_142441269:
                        int64_t var_a0_1 = 0
                        char var_ac = 1
                        break
                    
                    int64_t r14_1 = sx.q(rsi_2) << 3
                    
                    while (true)
                        int64_t var_98
                        int64_t var_c0
                        
                        if (rsi_2 s>= rdx_5)
                            rdi_1 = *(var_98 + (sx.q(rsi_2 - rdx_5) << 3))
                        else
                            rdi_1 = *(r14_1 + var_c0)
                        int32_t var_a8 = var_a8 + 1
                        
                        if (rdi_1 != 0)
                            void* rax_21 = sub_141dc9840(rdi_1)
                            
                            if (rax_21 != 0)
                                void* const rax_28
                                
                                if ((var_d0.b & 1) != 0)
                                    int32_t rax_22 = *(rdi_1 + 0xc)
                                    
                                    if (rax_22 s>= data_143e1d9b4)
                                        rax_28 = nullptr
                                    else
                                        int16_t temp0_2
                                        int32_t temp1_1
                                        temp0_2:temp1_1 = sx.q(rax_22)
                                        uint32_t rdx_7 = zx.d(temp0_2)
                                        int32_t rax_24 = temp1_1 + rdx_7
                                        rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3))
                                            + sx.q(zx.d(rax_24.w) - rdx_7) * 0x18
                                
                                if ((var_d0.b & 1) == 0 || ((*(rax_28 + 8) u>> 0x1d).b & 1) == 0)
                                    int32_t rcx_20 = var_d0
                                    
                                    if (((rcx_20 u>> 1).b & 1) == 0)
                                        goto label_142441169
                                    
                                    uint64_t rax_32 = sub_1405949a0()
                                    
                                    if (rax_32.b != 0)
                                        rcx_20 = var_d0
                                    label_142441169:
                                        
                                        if (((rcx_20 u>> 2).b & 1) == 0)
                                        label_142441211:
                                            
                                            if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                    rax_21) == r15_1)
                                                if (rax_21 == *(r15_1 + 0x30))
                                                    break
                                                
                                                void* rax_34 = sub_1425bd0d0()
                                                void* rdx_10 = rdi_1[2]
                                                int64_t rax_35 = sx.q(*(rax_34 + 0x38))
                                                
                                                if (rax_35.d s> *(rdx_10 + 0x38))
                                                    break
                                                
                                                if (*(*(rdx_10 + 0x30) + (rax_35 << 3))
                                                        != rax_34 + 0x30)
                                                    break
                                        else
                                            if ((*(rax_21 + 0x1f4) & 0x20) == 0
                                                    || (*(rax_21 + 0x1f6) & 8) != 0)
                                                rax_32 = zx.q(*(rax_21 + 0x1f5))
                                            
                                            char r9_1
                                            
                                            if (((*(rax_21 + 0x1f4) & 0x20) != 0
                                                    && (*(rax_21 + 0x1f6) & 8) == 0)
                                                    || (rax_32.b & 0x40) != 0 || rax_32.b s< 0)
                                                r9_1 = 1
                                            else
                                                r9_1 = 0
                                            
                                            void* rdx_9 = *(rax_21 + 0xb8)
                                            char* r8_3 = *(rax_21 + 0x248)
                                            uint8_t rcx_21
                                            
                                            if (rdx_9 != 0)
                                                rax_32 = sx.q(*(rdx_9 + 0x168))
                                                
                                                if (rax_32.d s< 0 || rax_32.d s>= *(rdx_9 + 0x160))
                                                    rcx_21 = 0
                                                else
                                                    rcx_21 = 1
                                            
                                            int64_t rcx_23
                                            
                                            if (rdx_9 == 0 || rcx_21 == 0)
                                                rcx_23 = 0
                                            else
                                                rcx_23 = rax_32 * 0x78 + *(rdx_9 + 0x158)
                                            
                                            if (rcx_23 == 0 || r8_3 == rcx_23)
                                                rcx_23.b = 1
                                            else
                                                rcx_23.b = 0
                                            
                                            if (r8_3 == 0 || *r8_3 == 2)
                                                rax_32.b = 1
                                            else
                                                rax_32.b = 0
                                            
                                            if (rcx_23.b != 0 || rax_32.b != 0)
                                                rax_32.b = 1
                                            
                                            if (r9_1 != 0 && rax_32.b != 0)
                                                goto label_142441211
                            
                            r8_1 = var_90
                            rdx_5 = var_b8
                        
                        rsi_2 += 1
                        r14_1 += 8
                        
                        if (rsi_2 s>= r8_1 + rdx_5)
                            goto label_142441269
                    
                    int64_t* var_a0_2 = rdi_1
                    var_b0 = rsi_2
                while (i_1 == 0)
            
            void var_128
            sub_142442440(&var_128)
            sub_142442440(&var_c8)
            sub_1420eb5d0(r13)
            void*** rax_38 = sub_141f88540()
            void** r8_5 = *rax_38
            r8_5[0xa](rax_38, r13, r8_5)
            sub_1420deb90(r13)
            
            if ((*(r13 + 0x1f6) & 2) == 0)
                int64_t var_148
                sub_14225aa60(&var_148, r13, 0)
                int64_t rbx_6 = var_148
                int64_t** var_160
                sub_1423ddac0(data_143f5b298, &var_160, arg1)
                int64_t** r8_7 = var_160
                int32_t var_158
                int32_t rdx_14 = var_158
                int64_t* rax_39
                
                while (true)
                    if (rdx_14 s< 0 || rdx_14 s>= r8_7[1].d)
                        rax_39.b = 0
                    else
                        rax_39.b = 1
                    
                    if (rax_39.b == 0)
                        break
                    
                    if ((*r8_7)[sx.q(rdx_14)] != 0)
                        break
                    
                    rdx_14 += 1
                    var_158 = rdx_14
                
                while (true)
                    if (rdx_14 s< 0 || rdx_14 s>= r8_7[1].d)
                        rax_39.b = 0
                    else
                        rax_39.b = 1
                    
                    if (rax_39.b == 0)
                        break
                    
                    rax_39 = sub_14226e280((*r8_7)[sx.q(rdx_14)], arg1)
                    
                    if (rax_39 != 0)
                        var_148 = *sub_142272470(rax_39, &performanceCount, rbx_6, 0)
                        sub_14256a8c0(rax_39, &var_148)
                    
                    rdx_14 = var_158
                    r8_7 = var_160
                    
                    do
                        rdx_14 += 1
                        var_158 = rdx_14
                        
                        if (rdx_14 s< 0 || rdx_14 s>= r8_7[1].d)
                            rax_39.b = 0
                        else
                            rax_39.b = 1
                        
                        if (rax_39.b == 0)
                            break
                    while ((*r8_7)[sx.q(rdx_14)] == 0)
            
            *(r13 + 0x1f4) &= 0xdf
            void* rcx_40 = *(arg1 + 0x560)
            
            if (rcx_40 != 0)
                sub_14244ec70(rcx_40, r13)
            
            uint32_t rax_42 = zx.d(*(arg1 + 0x11a))
            bool c_1
            
            if (rax_42.b u<= 6)
                c_1 = test_bit(0x6a, zx.d(rax_42.b))
            
            if (rax_42.b u> 6 || not(c_1))
                rax_42.b = 0
            else
                rax_42.b = 1
            
            if (rax_42.b != 0)
                sub_1409d7d20(arg1 + 0x148, &var_150)
                r13 = var_150
                *(r13 + 0xb8) = 0
            
            sub_140aeb3d0(&data_143a30728, r13, arg1)
            sub_140599090(arg1 + 0x3d0)
            sub_1420de620(arg1, *(sub_140d21d80(r13) + 0x18), 0)
            *(r13 + 0x1f6) &= 0xf7
        else
            int64_t rax_3 = *(arg1 + 0xe8)
            
            if (rax_3 == 0)
                *(arg1 + 0xe8) = r13
                *(r13 + 0x1f6) |= 8
                rax_3 = *(arg1 + 0xe8)
            
            if (rax_3 == r13)
                int32_t rbx_1 = data_143a2d8d0
                
                while (true)
                    if (sub_1420e56a0(r13, rbx_1) != 0)
                        *(arg1 + 0xe8) = 0
                        break
                    
                    zmm6 = _mm_cvtps_pd(data_143a2d8d4.q)
                    QueryPerformanceCounter(&performanceCount)
                    
                    if (not((float.d(performanceCount) f* data_143d796f8 f- zmm7.q)
                            f* 0x408f400000000000 f<= zmm6.q))
                        goto label_142441476
                
                goto label_142440f58
        
    label_142441476:
        *(r13 + 0x1f5) &= 0x7f
else if (arg3 == 0 && rax_2 != r13)
    goto label_142440e52

int64_t result = sub_140b37f60("RemoveFromWorld")
__security_check_cookie(rax_1 ^ &var_188)
return result
