// 函数: sub_141d8b870
// 地址: 0x141d8b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1
zmm1.o = arg1[0x18].d
uint128_t zmm0 = zx.o(0)
char rsi = arg2
int64_t r15
r15.b = zmm1.d f>= 0f
int64_t result = (*(*arg1 + 0x68))(zmm0, zmm1)

if (result.b != 0)
    result = (*(*arg1 + 0x60))(arg1)
    
    if (result.b != 0 || r15.b == 0)
        char* rcx_1 = arg1[0x11]
        int128_t zmm6
        uint128_t zmm7
        
        if (rcx_1 != 0)
            zmm0, zmm1, zmm6, zmm7 = sub_141d87ae0(rcx_1)
            EnterCriticalSection(&arg1[0x28])
            char* rcx_3 = arg1[0x11]
            
            if (rcx_3 != 0)
                zmm0, zmm1, zmm6, zmm7 = sub_141d86ab0(rcx_3, 1)
            
            arg1[0x11] = 0
            
            if (arg1 != -0x140)
                LeaveCriticalSection(&arg1[0x28])
        
        if (r15.b == 0)
            *(arg1 + 0x94)
            *(arg1 + 0x94) = 1
        
        if (arg1[7] != 0)
            int64_t* rbx_2 = arg1[8]
            
            if (rbx_2 != 0 && rbx_2[1].d s> 0)
                int64_t var_c8 = arg1[9]
                void* rax_4 = arg1[0xa]
                void* var_c0_1 = rax_4
                
                if (rax_4 != 0)
                    *(rax_4 + 8) += 1
                    rbx_2 = arg1[8]
                
                int64_t* var_d0_1 = rbx_2
                int64_t* rcx_5 = nullptr
                int64_t var_d8_1 = 0
                int64_t* rsi_1 = rbx_2
                
                if (rbx_2 != 0)
                    int32_t rax_5 = rbx_2[1].d
                    
                    if (rax_5 == 0)
                        rbx_2 = nullptr
                        rsi_1 = nullptr
                        int64_t var_d0_2 = 0
                    else
                        rbx_2[1].d = rax_5 + 1
                        rcx_5 = arg1[7]
                        int64_t* var_d8_2 = rcx_5
                
                zmm0, zmm1 = sub_140e23de0(rcx_5, &var_c8)
                
                if (rsi_1 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp2_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rsi = arg2
        
        int64_t* rcx_8 = arg1[0xd]
        
        if (rcx_8 != 0)
            int64_t var_b8 = data_143e244b0
            void* rax_10 = data_143e244b8
            void* var_b0_1 = rax_10
            
            if (rax_10 != 0)
                *(rax_10 + 8) += 1
                rcx_8 = arg1[0xd]
            
            zmm0, zmm1 = sub_140e23de0(rcx_8, &var_b8)
        
        char r12 = *(arg1 + 0xc4)
        char r13 = *(arg1 + 0xc6)
        int64_t* r14 = data_143e29f28
        
        if (arg1[9] != 0)
            zmm1, zmm6, zmm7 = sub_140e88320(r14, &arg1[9], 2, zmm0)
        
        if (data_143de5432 == 0)
            uint128_t var_68_1 = zmm7
            zmm7 = 0x4170000000000000
            int128_t var_58_1 = zmm6
            
            while (true)
                if (r13 == 0 || *(arg1 + 0x99) != 0)
                    if (*(arg1 + 0x99) != 0)
                        if (r15.b == 0)
                            break
                        
                    label_141d8baad:
                        int64_t performanceCount
                        QueryPerformanceCounter(&performanceCount)
                        zmm1.o = zx.o(0)
                        zmm1.q = float.d(performanceCount)
                        zmm0 = _mm_cvtps_pd(arg1[0x18].d.q)
                        zmm1.q = zmm1.q f* data_143d796f8
                        zmm1.q = zmm1.q f+ zmm7.q
                        zmm1.q = zmm1.q f- arg1[0x26]
                        
                        if (zmm1.q f>= zmm0.q)
                            break
                    else
                        if (r15.b != 0)
                            goto label_141d8baad
                        
                        bool z_1
                        
                        if (0 == arg1[0x12].d)
                            arg1[0x12].d = 0
                            z_1 = true
                        else
                            arg1[0x12].d
                            z_1 = false
                        
                        if (not(z_1))
                            break
                        
                        if (r12 != 0)
                            break
                
                int64_t* rcx_11 = arg1[5]
                
                if (rcx_11 != 0 && *(arg1 + 0xc9) == 2)
                    char rax_13
                    rax_13, rcx_11 = (*(*rcx_11 + 0x30))(rcx_11)
                    
                    if (rax_13 != 0)
                        break
                
                if (data_143e29f28 != 0)
                    if (arg1[7] == 0)
                    label_141d8bea3:
                        int64_t* rcx_29 = arg1[5]
                        
                        if (rcx_29 != 0)
                            (*(*rcx_29 + 8))(rcx_29)
                        
                        break
                    
                    void* rax_14 = arg1[8]
                    
                    if (rax_14 == 0 || *(rax_14 + 8) s<= 0)
                        goto label_141d8bea3
                    
                    bool z_2
                    
                    if (0 == *(arg1 + 0x9a))
                        *(arg1 + 0x9a) = 0
                        z_2 = true
                    else
                        int64_t rax_15
                        rax_15.b = *(arg1 + 0x9a)
                        z_2 = false
                    
                    if (not(z_2))
                        goto label_141d8bea3
                    
                    rcx_11.b = 1
                    sub_140d84150(rcx_11.b)
                    sub_140e78f60(r14)
                    sub_140e642c0(r14)
                    uint128_t zmm0_1
                    zmm0_1.q = r14[0x6b] f- r14[0x6c]
                    int64_t* rcx_14 = data_143f5b298
                    int32_t temp0_3 = _mm_cvtpd_ps(zmm0_1)
                    
                    if (rcx_14 != 0 && rsi != 0 && arg1[0x19].b != 0)
                        (*(*rcx_14 + 0x2a0))(rcx_14, temp0_3, 0)
                    
                    int32_t var_118_1 = temp0_3
                    
                    if (sub_140a80f40() == 0)
                        uint32_t rax_24
                        
                        if (data_143f138f4 == 0 && data_143de5480 != 0)
                            rax_24.b = GetCurrentThreadId() == data_143de5470
                        
                        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_24.b == 0))
                            void var_98
                            int64_t* rax_30 = sub_141d87460(&var_98, nullptr, 0xff)
                            *(*rax_30 + 0x10) = (&arg1[-2]).o
                            void* rcx_19 = *rax_30
                            int32_t r8_2 = rax_30[2].d
                            int64_t* rdx_4 = rax_30[1]
                            int64_t* rbx_4 = *(rcx_19 + 0x28)
                            int64_t* arg_20 = rbx_4
                            int32_t* rsi_2 = &rbx_4[9]
                            
                            if (rbx_4 != 0)
                                *rsi_2 += 1
                                rbx_4 = arg_20
                            
                            sub_1405e48c0(rcx_19, rdx_4, r8_2, 1)
                            
                            if (rbx_4 != 0)
                                int32_t rax_31 = *rsi_2
                                *rsi_2 -= 1
                                
                                if (rax_31 == 1)
                                    sub_140a2f6e0(arg_20)
                        else
                            int32_t var_a8_1 = (&arg1[-2]).d.d
                            int32_t var_a4_1 = (&arg1[-2]):4.d
                            data_14399fa54 += 1
                            int512_t zmm1_3
                            int128_t zmm6_3
                            zmm1_3, zmm6_3 = sub_1419668e0(&data_143f02b98)
                            void* rbx_3 = var_a8_1.q
                            char rax_25
                            
                            if (*(rbx_3 + 0x30) s<= 0 || *(rbx_3 + 0xc8) s<= 0)
                                rax_25 = 0
                            else
                                rax_25 = 1
                            
                            if (rax_25 != 0 && *(rbx_3 + 0x38) != 0)
                                bool z_4
                                
                                if (0 == *(rbx_3 + 0xa0))
                                    *(rbx_3 + 0xa0) = 0
                                    z_4 = true
                                else
                                    *(rbx_3 + 0xa0)
                                    z_4 = false
                                
                                if (z_4)
                                    int64_t* rcx_16 = *(rbx_3 + 0x38)
                                    zmm1_3.o = zmm6_3
                                    
                                    if ((*(*rcx_16 + 0x10))(rcx_16, zmm1_3) != 0)
                                        *(rbx_3 + 0xa0)
                                        *(rbx_3 + 0xa0) = 1
                    else
                        data_14399fa54 += 1
                        int512_t zmm1_2
                        int128_t zmm6_2
                        zmm1_2, zmm6_2 = sub_1419668e0(&data_143f02b98)
                        char rax_19
                        
                        if (arg1[4].d s<= 0 || arg1[0x17].d s<= 0)
                            rax_19 = 0
                        else
                            rax_19 = 1
                        
                        if (rax_19 != 0 && arg1[5] != 0)
                            bool z_3
                            
                            if (0 == arg1[0x12].d)
                                arg1[0x12].d = 0
                                z_3 = true
                            else
                                arg1[0x12].d
                                z_3 = false
                            
                            if (z_3)
                                int64_t* rcx_15 = arg1[5]
                                zmm1_2.o = zmm6_2
                                
                                if ((*(*rcx_15 + 0x10))(rcx_15, zmm1_2) != 0)
                                    arg1[0x12].d
                                    arg1[0x12].d = 1
                    
                    sub_140e8c780(r14, 1)
                    int64_t* rcx_22 = r14[4]
                    (*(*rcx_22 + 0xb0))(rcx_22)
                    
                    if (sub_140a80f40() == 0)
                        uint32_t rax_34
                        
                        if (data_143f138f4 == 0 && data_143de5480 != 0)
                            rax_34.b = GetCurrentThreadId() == data_143de5470
                        
                        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_34.b == 0))
                            void var_80
                            int64_t* rax_35 = sub_141d875b0(&var_80, nullptr, 0xff)
                            void* rcx_27 = *rax_35
                            int32_t r8_3 = rax_35[2].d
                            int64_t* rdx_9 = rax_35[1]
                            int64_t* rbx_6 = *(rcx_27 + 0x18)
                            int64_t* var_128_1 = rbx_6
                            int32_t* rsi_3 = &rbx_6[9]
                            
                            if (rbx_6 != 0)
                                *rsi_3 += 1
                                rbx_6 = var_128_1
                            
                            sub_1405a5890(rcx_27, rdx_9, r8_3, 1)
                            
                            if (rbx_6 != 0)
                                int32_t rax_36 = *rsi_3
                                *rsi_3 -= 1
                                
                                if (rax_36 == 1)
                                    sub_140a2f6e0(var_128_1)
                        else
                            sub_141d860a0()
                    else
                        int128_t zmm2_1
                        int128_t zmm3_1
                        zmm2_1, zmm3_1 = sub_14196d390(&data_143f02b98)
                        int32_t rbx_5 = data_143f029c8
                        sub_140b34200("FlushRHIThreadFlushResourcesTotal", rbx_5)
                        
                        if (data_143f02bac u> 0)
                            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_1, zmm3_1)
                        
                        sub_14198b230()
                        sub_14198b3f0()
                        int64_t rdx_6
                        rdx_6.b = 1
                        sub_14198b7d0()
                        sub_141971910()
                        sub_1419712f0(0)
                        sub_140b38680("FlushRHIThreadFlushResourcesTotal", rbx_5)
                    
                    zmm1, zmm7 = sub_1419a21e0(0)
                
                if (data_143de5432 != 0)
                    break
                
                rsi = arg2
        
        *(arg1 + 0x94)
        *(arg1 + 0x94) = 1
        arg1[0x13].b = 0
        void* rcx_30 = data_143f5b298
        
        if (rcx_30 != 0)
            int64_t* rcx_31 = *(rcx_30 + 0xb08)
            
            if (rcx_31 != 0)
                int64_t* rax_40 = (*(*rcx_31 + 0x118))(rcx_31)
                
                if (rax_40 != 0 && arg1[0x11] == 0)
                    int64_t rdx_10 = *rax_40
                    (*(rdx_10 + 8))(rax_40, rdx_10)
        
        arg1[0x12].d
        arg1[0x12].d = 1
        sub_1419a21e0(0)
        int64_t* rcx_33 = arg1[5]
        
        if (rcx_33 != 0)
            (*(*rcx_33 + 8))(rcx_33)
            int64_t* rcx_34 = arg1[5]
            
            if (rcx_34 != 0)
                (*(*rcx_34 + 0x38))(rcx_34)
        
        int32_t var_ec = 0x101
        int128_t var_110
        __builtin_memset(&var_110, 0, 0x1c)
        int32_t var_f0 = 0xbf800000
        int16_t var_e8 = 0
        sub_141d85dd0(&arg1[0x14], &var_110)
        int32_t i_2
        int32_t i_1 = i_2
        int64_t* var_100
        int64_t* rbx_7 = var_100
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_36 = *rbx_7
                
                if (rcx_36 != 0)
                    sub_140a74f90(rcx_36)
                
                rbx_7 = &rbx_7[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (var_100 != 0)
            sub_140a74f90(var_100)
        
        int64_t* rbx_8 = var_110:8.q
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp5_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        return sub_140599090((*(*arg1 + 0x90))(arg1)) __tailcall

void* rbx_9 = data_143f5b298

if (rbx_9 != 0)
    void* rax_49 = sub_1424ad0c0()
    void* rcx_43 = *(rbx_9 + 0x10)
    result = sx.q(*(rax_49 + 0x38))
    
    if (result.d s<= *(rcx_43 + 0x38))
        int64_t result_1 = result
        result = *(rcx_43 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_49 + 0x30 && data_143de5432 == 0)
            return sub_142010cb0(rbx_9, zmm1, (rax_49 + 0x30).d)

return result
