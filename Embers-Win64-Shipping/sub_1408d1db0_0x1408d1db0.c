// 函数: sub_1408d1db0
// 地址: 0x1408d1db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (arg1[6].d s> 0)
    char* rbx_1 = nullptr
    int64_t rbp_1 = 0
    int128_t zmm6 = 0x3f800000
    int128_t zmm8 = 0x322bcc77
    int64_t var_88_1 = 0
    
    do
        result = arg1[5]
        
        if (*(result + rbp_1) != 0)
            int64_t r9_1 = 0
            int64_t rsi_1 = arg1[7]
            void* rax
            rax.b = (*(arg1[0x23] + 0xc))[0] f<= *(rbx_1 + rsi_1 + 8)
            rbx_1[rsi_1 + 0xc] = rax.b
            int32_t* r8_1 = *(rbx_1 + rsi_1 + 0x20)
            uint64_t r10_2 = sx.q(*(rbx_1 + rsi_1 + 0x28)) << 2 u>> 2
            
            if (r8_1 u> &r8_1[sx.q(*(rbx_1 + rsi_1 + 0x28))])
                r10_2 = 0
            
            if (r10_2 != 0)
                do
                    int64_t rcx = sx.q(*r8_1)
                    int64_t rax_3 = arg1[9]
                    uint32_t zmm0[0x4] = arg1[0x26].d
                    zmm0[0] = zmm0[0] f- zmm6.d
                    void* rdx_1 = *(rax_3 + rcx * 0x10)
                    
                    if (not(zmm0[0] f>= *(rdx_1 + 0x26c)))
                        *(rdx_1 + 0x5a7) |= 0x20
                        rbx_1[rsi_1 + 0xc] = 1
                    
                    r8_1 = &r8_1[1]
                    r9_1 += 1
                while (r9_1 != r10_2)
            
            char arg_8 = 0
            char rax_4
            rax_4, zmm6 = sub_1408ce1c0(arg1, i, &arg_8)
            result = arg1[0x23]
            char r9_2
            
            if (*result == 0 || (*(result + 4))[0] f> *(rbx_1 + rsi_1 + 8))
                r9_2 = 0
            else
                r9_2 = 1
            
            char result_2 = rbx_1[rsi_1]
            char r8_3 = rbx_1[rsi_1 + 4]
            char arg_10 = r9_2
            
            if (rax_4 != result_2)
                uint64_t rdx_3 = zx.q(rax_4)
                
                if (r8_3 == 0 || arg1[0xb][rdx_3 * 0x14].b != 0)
                    result.b = 0
                else
                    result.b = 1
                
                if (arg_8 == 0 || result.b != 0)
                    rbx_1[rsi_1 + 1] = result_2
                    rbx_1[rsi_1] = rax_4
                else
                    result = arg1[0xb]
                    
                    if (*(&result[rdx_3 * 0x14] + 1) == 0)
                        if (result[rdx_3 * 0x14].b == 0)
                            if (r9_2 != 0)
                                result = sub_1408d01c0(arg1, result_2, rax_4, i)
                                *(rbx_1 + rsi_1 + 0x10) = result.d
                            
                            if (r9_2 == 0 || result.d == 0xffffffff)
                                result, zmm6, zmm8 = sub_1408d07a0(arg1, rax_4, i)
                            
                            rbx_1[rsi_1 + 1] = result_2
                            rbx_1[rsi_1] = rax_4
                        else
                            int64_t rcx_7
                            
                            if (r8_3 != 0)
                                rcx_7 = sx.q(*(rbx_1 + rsi_1 + 0x14)) * 3
                                result = arg1[0x19]
                            
                            if (r8_3 == 0 || *(&result[rcx_7 * 2] + 3) != rax_4)
                                uint32_t zmm7_1[0x4]
                                result, zmm6, zmm7_1 = sub_1408d0410(arg1, rax_4)
                                int32_t result_1 = result.d
                                int32_t result_3 = result.d
                                
                                if (result.d != 0xffffffff)
                                    int64_t rdx_6 = arg1[7]
                                    int64_t rcx_10 = rdx_6
                                    int32_t i_1
                                    
                                    if (rbx_1[rdx_6 + 3] != 0)
                                        int64_t r8_5 = sx.q(*(rbx_1 + rdx_6 + 0x10))
                                        
                                        if (r8_5.d != 0xffffffff && r8_5.d s>= 0
                                                && r8_5.d s< arg1[0x18].d)
                                            void* rbp_3 = r8_5 * 0x38 + arg1[0x17]
                                            void* rax_7 = *(rbp_3 + 0x18)
                                            int64_t* r8_6
                                            
                                            if (*(rax_7 + 0x24) != 0)
                                                r8_6 = *(rax_7 + 0x10)
                                            else
                                                r8_6 = *(rax_7 + 0x18)
                                            
                                            zmm6, zmm7_1, zmm8 = sub_1408cf420(arg1, zx.q(i), r8_6)
                                            i_1 = i
                                            sub_1408cf290(rbp_3 + 0x20, &i_1)
                                            result_3 = result_1
                                            *(rbx_1 + arg1[7] + 0x10) = 0xffffffff
                                            rcx_10 = arg1[7]
                                    
                                    if (rbx_1[rcx_10 + 4] != 0)
                                        int64_t rax_9 = sx.q(*(rcx_10 + rbx_1 + 0x14))
                                        
                                        if (rax_9.d != 0xffffffff && rax_9.d s>= 0
                                                && rax_9.d s< arg1[0x1a].d)
                                            i_1 = i
                                            sub_1408cf290(rax_9 * 0x30 + arg1[0x19] + 0x20, &i_1)
                                    
                                    int64_t rbp_5
                                    void* r14_3
                                    
                                    if (arg_10 == 0)
                                    label_1408d2198:
                                        int64_t rax_19 = sx.q(*(rbx_1 + rsi_1 + 0x14))
                                        r14_3 = &arg1[0x19]
                                        int32_t i_2 = i
                                        arg_10.d = i_2
                                        
                                        if (rax_19.d != 0xffffffff)
                                            sub_1408cf290(rax_19 * 0x30 + *r14_3 + 0x20, &arg_10)
                                            i_2 = arg_10.d
                                        
                                        int64_t rax_23 = *r14_3
                                        rbp_5 = sx.q(result_1) * 0x30
                                        uint64_t r8_10 = zx.q(*(rax_23 + rbp_5 + 3))
                                        int64_t r9_6 = sx.q(*(rax_23 + rbp_5 + 0x14))
                                        *((sx.q(i_2) << 6) + arg1[7] + 2) = 0
                                        zmm6, zmm8 = sub_1408cf420(arg1, i_2, 
                                            *(*(r8_10 * 0xa0 + arg1[0xb] + 0x20) + (r9_6 << 3)), 
                                            r9_6, var_88_1)
                                    else
                                        if (_mm_and_ps(*(rdx_3 * 0xa0 + arg1[0xb] + 4), zmm7_1)[0]
                                                f<= zmm8.d)
                                            goto label_1408d2198
                                        
                                        r14_3 = &arg1[0x19]
                                        rbp_5 = sx.q(result_3) * 0x30
                                        int64_t r9_5
                                        
                                        if (rbx_1[rsi_1 + 4] == 0)
                                            r9_5 = sx.q(sub_1408d01c0(arg1, rbx_1[rsi_1], 
                                                *(*r14_3 + rbp_5 + 3), i))
                                            
                                            if (r9_5.d != 0xffffffff)
                                                *(r9_5 * 0x38 + arg1[0x17] + 0x34) = result_1
                                        else
                                            uint64_t rax_14 = zx.q(rbx_1[rsi_1 + 0x14])
                                            int64_t rdx_10 = *r14_3
                                            arg_10 = rax_14.b
                                            r9_5 = sx.q(sub_1408d01c0(arg1, 
                                                *(rdx_10 + rax_14 * 0x30 + 3), 
                                                *(rdx_10 + rbp_5 + 3), i))
                                            
                                            if (r9_5.d != 0xffffffff)
                                                int64_t r8_8 = r9_5 * 0x38
                                                *(r8_8 + arg1[0x17] + 0x30) = zx.d(arg_10)
                                                *(r8_8 + arg1[0x17] + 0x34) = result_1
                                        
                                        *(rbx_1 + rsi_1 + 0x10) = r9_5.d
                                        
                                        if (r9_5.d == 0xffffffff)
                                            goto label_1408d2198
                                    
                                    void* r14_5 = *r14_3 + rbp_5
                                    int64_t rbp_7 = sx.q(*(r14_5 + 0x28))
                                    int32_t rax_25 = (rbp_7 + 1).d
                                    *(r14_5 + 0x28) = rax_25
                                    
                                    if (rax_25 s> *(r14_5 + 0x2c))
                                        sub_1405a4cf0(r14_5 + 0x20)
                                    
                                    *(*(r14_5 + 0x20) + (rbp_7 << 2)) = i
                                    result = zx.q(result_1)
                                    *(rbx_1 + rsi_1 + 0x14) = result.d
                                    rbx_1[rsi_1 + 4] = 1
                                    rbx_1[rsi_1 + 1] = result_2
                                    rbx_1[rsi_1] = rax_4
                                
                                rbp_1 = var_88_1
                    else if (rbx_1[rsi_1 + 5] == 0)
                        result = sub_1408cfee0(arg1, rax_4, result_2, rbx_1[rsi_1 + 2])
                        
                        if (result.d != 0xffffffff)
                            *(rbx_1 + rsi_1 + 0x18) = result.d
                            int64_t rax_5 = sx.q(result.d)
                            rbx_1[rsi_1 + 5] = 1
                            result = arg1[0x1b]
                            result[rax_5 * 5 + 1].d = i
            else if (r8_3 == 0 && rbx_1[rsi_1 + 3] == r8_3)
                uint32_t rcx_36 = zx.d(rbx_1[rsi_1 + 2])
                result = zx.q(result_2)
                
                if (result.d s< arg1[0xc].d)
                    result = arg1[0xb]
                    
                    if (rcx_36 s< result[zx.q(result_2) * 0x14 + 9].d)
                        void* r8_19 = &result[6 + zx.q(result_2) * 0x14]
                        void* rax_32 = *(r8_19 + 0x10)
                        
                        if (rax_32 != 0)
                            r8_19 = rax_32
                        
                        uint32_t rax_33 = rcx_36
                        
                        if (rcx_36 s< 0)
                            rax_33 = rcx_36 + 0x1f
                        
                        int64_t rdx_25 = sx.q(rax_33 s>> 5)
                        result = zx.q(1 << (rcx_36.b & 0x1f))
                        *(r8_19 + (rdx_25 << 2)) |= result.d
            
            if (rbx_1[rsi_1 + 0xc] != 0)
                uint32_t rcx_32 = zx.d(rbx_1[rsi_1 + 2])
                result = arg1[0xb]
                rbx_1[rsi_1]
                
                if (rcx_32 s< result[zx.q(rbx_1[rsi_1]) * 0x14 + 0x11].d)
                    void* r8_15 = &result[0xe + zx.q(rbx_1[rsi_1]) * 0x14]
                    void* rax_28 = *(r8_15 + 0x10)
                    
                    if (rax_28 != 0)
                        r8_15 = rax_28
                    
                    uint32_t rax_29 = rcx_32
                    
                    if (rcx_32 s< 0)
                        rax_29 = rcx_32 + 0x1f
                    
                    int64_t rdx_20 = sx.q(rax_29 s>> 5)
                    result = zx.q(1 << (rcx_32.b & 0x1f))
                    *(r8_15 + (rdx_20 << 2)) |= result.d
        
        rbp_1 += 8
        i += 1
        rbx_1 = &rbx_1[0x40]
        var_88_1 = rbp_1
    while (i s< arg1[6].d)

return result
