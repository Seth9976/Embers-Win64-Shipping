// 函数: sub_140b33720
// 地址: 0x140b33720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
performanceCount.d = 0
void var_a8
sub_140b2f150(&var_a8, "CsvProfiler")

if (arg1[3].b != 0)
    arg1[3].b = 0
    int128_t zmm6
    sub_140b38050(arg1, zmm6)

if (data_143de817a == 0)
    int128_t zmm0_1 = zx.o(0)
    char var_108 = 2
    int64_t var_104_1 = -1
    int64_t var_f8_1 = 0
    int32_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    int32_t var_e0_1 = 0
    
    if (sub_140b42380(&arg1[0xc], &var_108) != 0 && var_108 == 0)
        sub_140b362e0(&arg1[0xc], &var_108)
        
        if (data_143de8178 != 0)
            goto label_140b33fa9
        
        sub_140599090(&arg1[0x3e])
        int64_t rbx_1 = data_143de70f8
        int64_t rcx_5
        
        if (data_143de5480 == 0)
            rcx_5 = 0
        else
            rcx_5.b = GetCurrentThreadId() != data_143de5470
        
        int32_t rax_3 = *(rbx_1 + (rcx_5 << 2))
        int32_t r13_1 = 0
        
        if (rax_3 s>= 0)
            r13_1 = rax_3
        
        int32_t rcx_6 = *data_143de70b0
        
        if (rcx_6 == 0xffffffff)
            rcx_6 = *data_143de7098
        
        int32_t* rcx_7 = data_143de70c8
        performanceCount.b = rcx_6 s> 0
        int32_t rdx_3 = *rcx_7
        int32_t var_d8
        int64_t r12
        
        if (rdx_3 == 0)
            r12.b = 0
        else if (rdx_3 == 1)
            r12.b = r13_1 s> 0
        else if (((var_d8 u>> 1).b & 1) == 0 || r13_1 s<= 0)
            r12.b = 0
        else
            r12.b = 1
        
        uint64_t var_148
        int64_t var_b8
        int64_t var_70
        int64_t* rax_15
        int32_t rbx_3
        
        if (var_f0_1 s> 1)
            uint64_t var_158 = 0
            sub_1405a4c70(&var_158, sbb.d(rcx_7.d, rcx_7.d, var_f0_1 != 0) + 2 + var_f0_1, 0)
            memcpy(var_158, var_f8_1, var_f0_1 * 2)
            sub_140a20ba0(&var_158, &data_142d5a024, 1)
            var_148 = var_158
            int32_t var_140_1 = var_f0_1
            int32_t var_14c
            int32_t var_13c_1 = var_14c
            int32_t var_150_1
            var_150_1.q = 0
            var_158 = 0
            rax_15 = &var_148
            rbx_3 = 4
        else
            int64_t* rax_8 = sub_140b24e60(&var_70)
            int64_t rcx_9 = *rax_8
            int32_t r8_1 = rax_8[1].d
            *rax_8 = 0
            int32_t rdx_4 = rax_8[1].d
            int64_t var_168 = rcx_9
            int32_t rcx_10 = *(rax_8 + 0xc)
            rax_8[1] = 0
            int32_t rax_11 = sbb.d(rax_8.d, rax_8.d, r8_1 != 0) + 5 + rdx_4
            
            if (rax_11 s> rcx_10)
                sub_1405947f0(&var_168, rax_11)
            
            sub_140a20ba0(&var_168, u"CSV/", 4)
            rbx_3 = 3
            var_b8 = var_168
            int32_t var_b0_1 = rdx_4
            int32_t var_ac_1 = rcx_10
            rax_15 = &var_b8
            var_168 = 0
            int32_t var_160_1
            var_160_1.q = 0
        
        int64_t rcx_19 = *rax_15
        *rax_15 = 0
        int32_t r15_1 = rax_15[1].d
        rax_15[1] = 0
        
        if ((rbx_3.b & 4) != 0)
            uint64_t rcx_20 = var_148
            rbx_3 &= 0xfffffffb
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
        
        if ((rbx_3.b & 2) != 0)
            int64_t rcx_21 = var_b8
            rbx_3 &= 0xfffffffd
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
        
        if ((rbx_3.b & 1) != 0)
            int64_t rcx_22 = var_70
            rbx_3 &= 0xfffffffe
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
        
        uint64_t var_138
        int64_t var_a0
        int64_t var_60
        int64_t* rax_23
        int32_t rsi_2
        
        if (var_e0_1 s> 1)
            int32_t var_130_1 = var_e0_1
            var_138 = 0
            
            if (var_e0_1 != 0)
                sub_1405a4c70(&var_138, var_e0_1, 0)
                memcpy(var_138, var_e8_1, var_e0_1 * 2)
            else
                int32_t var_12c_1 = 0
            
            rax_23 = &var_138
            rsi_2 = 0x20
        else
            void var_78
            int64_t* rax_22 = sub_140b28970(sub_140b21590(&var_78), &var_60, u"%Y%m%d_%H%M%S")
            int16_t* const r8_7
            
            if (rax_22[1].d == 0)
                r8_7 = &data_142d40450
            else
                r8_7 = *rax_22
            
            sub_140a2e390(&var_a0, u"Profile(%s)%s", r8_7)
            rax_23 = &var_a0
            rsi_2 = 0x18
        
        int32_t rsi_3 = rsi_2 | rbx_3
        int64_t rbx_4 = *rax_23
        *rax_23 = 0
        int32_t r14_2 = rax_23[1].d
        rax_23[1] = 0
        
        if ((rsi_3.b & 0x20) != 0)
            uint64_t rcx_28 = var_138
            rsi_3 &= 0xffffffdf
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
        
        if ((rsi_3.b & 0x10) != 0)
            int64_t rcx_29 = var_a0
            rsi_3 &= 0xffffffef
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
        
        if ((rsi_3.b & 8) != 0)
            int64_t rcx_30 = var_60
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
        
        uint64_t var_188
        int32_t var_180_1
        uint64_t rsi_4
        int32_t r15_2
        
        if (r15_1 s> 1)
            int32_t rbx_5 = r14_2 - 1
            
            if (r14_2 == 0)
                rbx_5 = 0
            
            int32_t rax_24
            
            if (r15_1 == 0)
                rax_24 = 1
            
            if (r15_1 != 0 || rbx_5 == 0)
                rax_24 = 0
            
            uint64_t var_178 = 0
            int32_t rcx_33 = rbx_5 + rax_24
            int32_t var_16c
            
            if (r15_1 != 0 || rcx_33 != 0)
                sub_1405a4c70(&var_178, r15_1 + rcx_33, 0)
                memcpy(var_178, rcx_19, r15_1 * 2)
            else
                var_16c = 0
            
            sub_140a20ba0(&var_178, rbx_4, rbx_5)
            rsi_4 = var_178
            r14_2 = r15_1
            r15_2 = var_16c
            var_178 = 0
            int32_t var_170_1
            var_170_1.q = 0
            var_188 = rsi_4
            var_180_1 = r14_2
            int32_t var_17c_2 = r15_2
        else
            var_188 = 0
            
            if (r14_2 != 0)
                sub_1405a4c70(&var_188, r14_2, 0)
                rsi_4 = var_188
                memcpy(rsi_4, rbx_4, r14_2 * 2)
                int32_t var_17c
                r15_2 = var_17c
            else
                r15_2 = 0
                int32_t var_17c_1 = 0
                rsi_4 = 0
        
        if (&arg1[8] != &var_188)
            int64_t rcx_37 = *(arg1 + 0x20)
            
            if (rcx_37 != 0)
                sub_140a74f90(rcx_37)
            
            *(arg1 + 0x20) = rsi_4
            arg1[0xb] = r15_2
            var_180_1.q = 0
            var_188 = 0
            arg1[0xa] = r14_2
        else if (rsi_4 != 0)
            sub_140a74f90(rsi_4)
        
        sub_140a464c0()
        int16_t* const rsi_5 = &data_142d40450
        int16_t* const rdx_19
        
        if (arg1[0xa] == 0)
            rdx_19 = &data_142d40450
        else
            rdx_19 = *(arg1 + 0x20)
        
        int64_t rax_26 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_19, 0)
        void*** rax_27 = j_sub_140a82f30(0x18)
        
        if (rax_27 == 0)
            rax_27 = nullptr
        else
            rax_27[1].d = 1
            *rax_27 = &data_142d42ea8
            *(rax_27 + 0xc) = 1
            rax_27[2] = rax_26
        
        if (rax_26 != 0)
            int64_t* rax_28 = j_sub_140a82f30(0xc8)
            uint128_t var_88
            int64_t* rax_29
            int32_t rcx_41
            
            if (rax_28 == 0)
                rax_29 = nullptr
                rcx_41 = 0
            else
                uint128_t zmm0_2 = rax_26.o
                var_88 = zmm0_2
                void* rcx_39 = _mm_bsrli_si128(zmm0_2, 8).q
                
                if (rcx_39 != 0)
                    *(rcx_39 + 8) += 1
                
                rax_29 = sub_140b2ec90(rax_28, &var_88, performanceCount.b, r13_1, r12.b)
                rcx_41 = 0x40
            
            *(arg1 + 0xe8) = rax_29
            
            if (rcx_41 != 0)
                int64_t* rbx_8 = var_88:8.q
                
                if (rbx_8 != 0)
                    rbx_8[1].d -= 1
                    
                    if (rbx_8[1].d == 1)
                        (**rbx_8)(rbx_8)
                        int32_t temp7_1 = *(rbx_8 + 0xc)
                        *(rbx_8 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rbx_8 + 8))(rbx_8, 1)
            
            int32_t rax_32 = var_104_1:4.d
            *arg1 = rax_32
            data_143de8154 = rax_32
            arg1[1] = 0
            QueryPerformanceCounter(&performanceCount)
            bool cond:6_1 = data_1439a92f8 == 0
            *(arg1 + 0x10) = performanceCount
            arg1[0x3c] = var_d8
            
            if (not(cond:6_1) && *(arg1 + 0x40) == 0)
                int64_t* rax_35 = j_sub_140a82f30(0x20)
                int64_t* rbx_9 = rax_35
                
                if (rax_35 == 0)
                    rbx_9 = nullptr
                else
                    *rbx_9 = &data_142e782c0
                    rbx_9[1].d = 0
                    rbx_9[3] = arg1
                    rbx_9[2] = sub_140a6e140(rbx_9, u"CSVProfiler", 0, 4, -1, 0)
                
                *(arg1 + 0x40) = rbx_9
            
            int32_t rbx_10 = 0x3c
            TEB* gsbase
            int32_t* rdi_2 =
                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
            
            if (data_143de82e0 s> *rdi_2)
                _Init_thread_header(&data_143de82e0)
                
                if (data_143de82e0 == 0xffffffff)
                    int64_t* rcx_67 = data_143db18d0
                    
                    if (rcx_67 == 0)
                        sub_140a53c40()
                        rcx_67 = data_143db18d0
                    
                    int64_t r8_17
                    r8_17.b = 1
                    data_143de82d8 = (*(*rcx_67 + 0xb0))(rcx_67, u"t.MaxFPS", r8_17)
                    _Init_thread_footer(&data_143de82e0)
            
            if (data_143de82f0 s> *rdi_2)
                _Init_thread_header(&data_143de82f0)
                
                if (data_143de82f0 == 0xffffffff)
                    int64_t* rcx_66 = data_143db18d0
                    
                    if (rcx_66 == 0)
                        sub_140a53c40()
                        rcx_66 = data_143db18d0
                    
                    int64_t r8_16
                    r8_16.b = 1
                    data_143de82e8 = (*(*rcx_66 + 0xb0))(rcx_66, u"rhi.SyncInterval", r8_16)
                    _Init_thread_footer(&data_143de82f0)
            
            int64_t* rcx_47 = data_143de82d8
            
            if (rcx_47 != 0 && (*(*rcx_47 + 0x90))(rcx_47) s> 0)
                int64_t* rcx_48 = data_143de82d8
                rbx_10 = (*(*rcx_48 + 0x90))(rcx_48)
            
            int64_t* rcx_49 = data_143de82e8
            
            if (rcx_49 != 0)
                int64_t rdx_21 = *rcx_49
                
                if ((*(rdx_21 + 0x90))(rcx_49, rdx_21) s> 0)
                    int64_t* rcx_50 = data_143de82e8
                    int64_t rdx_22 = *rcx_50
                    int32_t rax_46 = divs.dp.d(0:0x3c, (*(rdx_22 + 0x90))(rcx_50, rdx_22))
                    
                    if (rbx_10 s<= rax_46)
                        rax_46 = rbx_10
                    
                    rbx_10 = rax_46
            
            int16_t* var_128 = nullptr
            int32_t var_120_1 = 0
            sub_140a20c40(&var_128, rbx_10)
            
            if (var_120_1 != 0)
                rsi_5 = var_128
            
            sub_140b47090(u"TargetFramerate", rsi_5)
            int16_t* rcx_53 = var_128
            
            if (rcx_53 != 0)
                sub_140a74f90(rcx_53)
            
            data_143de8158 = *data_143de70e0 != 0
            
            if (data_143de7a5c == 0)
                data_143de7a5c = TlsAlloc()
            
            data_143de8178 = 1
        
        if (rax_27 != 0)
            rax_27[1].d -= 1
            
            if (rax_27[1].d == 1)
                (**rax_27)(rax_27)
                int32_t temp5_1 = *(rax_27 + 0xc)
                *(rax_27 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rax_27)[1](rax_27, 1)
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        goto label_140b33f95
    
label_140b33f95:
    
    if (data_143de8178 != 0)
    label_140b33fa9:
        uint64_t rbx_13 = zx.q((data_143de7130).d) & 0xf
        void* const rcx_58
        
        if (rbx_13.d != 0)
            rcx_58 = data_143de7128
        else
            void* rax_53 = j_sub_140a82f30(0x88)
            rcx_58 = rax_53
            
            if (rax_53 == 0)
                rcx_58 = nullptr
            else
                *(rax_53 + 0x80) = 0
            
            void* rax_54 = data_143de7128
            
            if (rax_54 != 0)
                *(rax_54 + 0x80) = rcx_58
                data_143de7128 = rcx_58
            else
                data_143de7120 = rcx_58
                data_143de7128 = rcx_58
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        *(rcx_58 + (rbx_13 << 3)) = performanceCount_1
        data_143de7130 += 1
    
    void* rcx_60 = zmm0_1:8.q
    
    if (rcx_60 != 0)
        int32_t rax_58 = *(rcx_60 + 8)
        *(rcx_60 + 8) -= 1
        
        if (rax_58 == 1)
            int64_t* rbx_15 = zmm0_1:8.q
            (**rbx_15)(rbx_15)
            int32_t rsi_6 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (rsi_6 == 1)
                int64_t* rcx_62 = zmm0_1:8.q
                (*(*rcx_62 + 8))(rcx_62, zx.q(rsi_6))
    
    if (var_e8_1 != 0)
        sub_140a74f90(var_e8_1)
    
    if (var_f8_1 != 0)
        sub_140a74f90(var_f8_1)

return sub_140b30b10(&var_a8)
