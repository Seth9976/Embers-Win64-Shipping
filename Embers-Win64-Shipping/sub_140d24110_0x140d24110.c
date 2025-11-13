// 函数: sub_140d24110
// 地址: 0x140d24110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
uint64_t var_10 = rsi
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
void* result_1 = nullptr
void* result_2 = arg1
void* var_200 = arg4
int32_t rdx = 0
int32_t rcx = 0
void* result

if (data_143de5452 == 0)
    int16_t* var_2a0 = nullptr
    int32_t var_298_1 = 0
    int32_t var_294_1 = 0
    int64_t rax_13
    
    if (arg2 != 0)
        rax_13 = -1
        
        do
            rax_13 += 1
        while (arg2[rax_13] != 0)
    
    if (arg2 == 0 || rax_13.d s<= 0)
        if (result_2 != 0)
            int64_t var_218 = *(result_2 + 0x18)
            int16_t* var_1d0
            sub_140b63b70(&var_218, &var_1d0)
            int16_t* rcx_34 = var_2a0
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            var_2a0 = var_1d0
            int32_t var_1c8
            var_298_1 = var_1c8
            int32_t var_1c4
            int32_t var_294_2 = var_1c4
    else if (arg2 != 0)
        int32_t rsi_7 = (rax_13 + 1).d
        
        if (*arg2 == 0)
            rsi_7 = 0
        
        if (rsi_7 != 0)
            sub_1405947f0(&var_2a0, rsi_7)
            rcx = var_294_1
            rdx = var_298_1
        
        int32_t rax_14 = rdx + rsi_7
        var_298_1 = rax_14
        
        if (rax_14 s> rcx)
            sub_140594770(&var_2a0)
        
        if (rsi_7 != 0)
            memcpy(var_2a0, arg2, rsi_7 * 2)
    
    int64_t zmm7
    
    if (sub_140bace50(&var_2a0) == 0)
    label_140d24610:
        int64_t* i = data_14399fb08
        int64_t rdx_20 = sx.q(data_14399fb10)
        int64_t var_48_1 = zmm7
        char var_90_1 = 0
        
        for (; i != &i[rdx_20 * 2]; i = &i[2])
            if (i[1].d != 0 && *i != 0)
                int32_t rax_26 = (rdx_20 - 1).d
                int32_t rcx_47 = data_14399fb1c + 1
                int64_t rsi_8 = sx.q(rax_26)
                char r14_2 = 0
                data_14399fb1c = rcx_47
                
                if (rax_26 s>= 0)
                    int64_t rbx_5 = rsi_8 << 4
                    int64_t temp1_1
                    
                    do
                        int64_t rcx_48 = data_14399fb08
                        
                        if (*(rbx_5 + rcx_48 + 8) == 0)
                            r14_2 = 1
                        else
                            int64_t* rcx_49 = *(rbx_5 + rcx_48)
                            
                            if (rcx_49 == 0)
                                r14_2 = 1
                            else
                                char rax_28
                                rax_28, arg4 = (*(*rcx_49 + 0x50))(rcx_49, &var_2a0)
                                
                                if (rax_28 == 0)
                                    r14_2 = 1
                        
                        rbx_5 -= 0x10
                        temp1_1 = rsi_8
                        rsi_8 -= 1
                    while (temp1_1 - 1 s>= 0)
                    rcx_47 = data_14399fb1c
                    rdx_20 = zx.q(data_14399fb10)
                
                data_14399fb1c = rcx_47 - 1
                
                if (r14_2 != 0 && rcx_47 - 1 s<= 0)
                    int32_t r14_3 = rdx_20.d
                    int32_t j = 0
                    
                    if (rdx_20.d s> 0)
                        int64_t* rbx_6 = nullptr
                        
                        do
                            int64_t rcx_51 = data_14399fb08
                            
                            if (*(rbx_6 + rcx_51 + 8) == 0)
                                arg4.b = 1
                                sub_1405a4880(&data_14399fb08, j, 1, arg4.b)
                            else
                                int64_t* rcx_52 = *(rbx_6 + rcx_51)
                                
                                if (rcx_52 == 0)
                                    arg4.b = 1
                                    sub_1405a4880(&data_14399fb08, j, 1, arg4.b)
                                else
                                    char rax_30
                                    rax_30, arg4 = (*(*rcx_52 + 0x20))(rcx_52)
                                    
                                    if (rax_30 != 0)
                                        arg4.b = 1
                                        sub_1405a4880(&data_14399fb08, j, 1, arg4.b)
                                    else
                                        j += 1
                                        rbx_6 = &rbx_6[2]
                            
                            rdx_20 = zx.q(data_14399fb10)
                        while (j s< rdx_20.d)
                    
                    int32_t rax_31 = (rdx_20 * 2).d
                    
                    if (rax_31 s<= 2)
                        rax_31 = 2
                    
                    data_14399fb18 = rax_31
                    
                    if (r14_3 s> rax_31 && data_14399fb14 != rdx_20.d)
                        sub_1405a5410(&data_14399fb08, rdx_20.d)
                
                break
        
        char var_2a8 = 0
        char* var_188_1 = &var_2a8
        void*** (* var_190)() = sub_140884c50
        int32_t* rbx_7 = *(sub_140a756e0(&var_190, &data_14397f5f0) + 0x48)
        
        if (rbx_7 != 0)
            *rbx_7 += 1
        
        if (rbx_7[3] s<= 0 && data_14399ea98() == 0)
            data_14399fa10()
            sub_140bc7700(0xffffffff)
        
        uint32_t rax_34
        
        if (data_143de5480 != 0)
            rax_34.b = GetCurrentThreadId() == data_143de5470
        
        if ((data_143de5480 == 0 || rax_34.b != 0) && data_14399ea98() == 0)
            data_143e1d970 += 1
        
        sub_140d3e080(rbx_7)
        void var_f8
        
        if (var_90_1 != 0)
            void var_140
            sub_140b389c0(&var_f8, 0x41f00000, sub_140a96170(&var_140))
            int64_t* var_138
            
            if (var_138 != 0)
                var_138[1].d -= 1
                
                if (var_138[1].d == 1)
                    (**var_138)(var_138)
                    int32_t rax_39 = *(var_138 + 0xc)
                    *(var_138 + 0xc) -= 1
                    
                    if (rax_39 == 1)
                        (*(*var_138 + 8))(var_138, 1)
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int32_t* var_238
        int32_t var_2b8_1 = &var_238
        int16_t* rdx_23 = &data_142d40450
        
        if (var_298_1 != 0)
            rdx_23 = var_2a0
        
        var_238 = rbx_7
        data_143d796f8
        void* rax_41 = sub_140cbd210(result_2, rdx_23, arg3, 0, 0, arg5)
        void* rsi_10 = rax_41
        int32_t* rax_42 = var_238
        
        if (rax_42 != rbx_7 && rax_42 != 0)
            sub_140d3ae10(rbx_7)
            int32_t* r14_4 = rbx_7
            rbx_7 = var_238
            
            if (rbx_7 != 0)
                *rbx_7 += 1
            
            if (r14_4 != 0)
                int32_t temp3_1 = *r14_4
                *r14_4 -= 1
                
                if (temp3_1 == 1)
                    sub_140d3a300(r14_4)
                    j_sub_140a74f90(r14_4)
            
            sub_140d3e080(rbx_7)
        
        if (rsi_10 != 0)
            void** r15 = rsi_10 + 0xa0
            void* result_3 = *r15
            void* r13_1 = result_3 + 8
            void* result_4 = result_3
            
            if (((*(result_3 + 8) u>> 0x13).b & 1) == 0)
                if ((arg3 & 0x20000) != 0)
                    *(result_3 + 0x50) |= 0x20
                
                int16_t* rdx_27 = &data_142d40450
                
                if (var_298_1 != 0)
                    rdx_27 = var_2a0
                
                void var_158
                *(result_3 + 0x5c) = *sub_140b58260(&var_158, rdx_27, 1)
                int64_t var_208 = *(*r15 + 0x18)
                int16_t* var_1c0
                double zmm2_1[0x2] = sub_140b63b70(&var_208, &var_1c0)
                int16_t* const rcx_73 = &data_142d40450
                int32_t var_1b8
                
                if (var_1b8 != 0)
                    rcx_73 = var_1c0
                
                int64_t var_88
                char rax_50 = sub_140b3d910(rcx_73, &var_88, 0)
                int16_t* rcx_74 = var_1c0
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                if (rax_50 != 0)
                    sub_140ccf920(rsi_10)
                
                if (var_90_1 != 0)
                    void var_128
                    zmm2_1 = sub_140b389c0(&var_f8, 0x41f00000, sub_140a96170(&var_128))
                    void* var_120
                    
                    if (var_120 != 0)
                        int32_t rax_52 = *(var_120 + 8)
                        *(var_120 + 8) -= 1
                        
                        if (rax_52 == 1)
                            (**var_120)(var_120)
                            int32_t rax_54 = *(var_120 + 0xc)
                            *(var_120 + 0xc) -= 1
                            
                            if (rax_54 == 1)
                                (*(*var_120 + 8))(var_120, 1)
                        
                        rsi_10 = rax_41
                        result_3 = result_4
                
                void* r15_1
                
                if ((arg3 & 0x100010) != 0)
                    r15_1.b = 1
                else
                    int64_t rax_57
                    
                    if (var_200 == 0)
                        rax_57 = *(rsi_10 + 0x278)
                    else
                        rax_57 = *(var_200 + 0x278)
                    
                    int64_t var_1a8_1 = rax_57
                    void* var_1b0 = rsi_10 + 0x200
                    sub_140bb37e0(&var_1b0)
                    sub_140cc1a10(rsi_10, data_143de5452, zmm2_1)
                    
                    if (*(rsi_10 + 0x2e0) == 0 && *(sub_140baa940() + 0xc) == 1
                            && data_14399ea98() != 0)
                        int64_t var_180 = 0
                        int32_t var_178_1 = 0
                        int64_t var_1f0 = *(*r15 + 0x18)
                        int64_t var_170
                        sub_140b63b70(&var_1f0, &var_170)
                        int16_t* var_2c0_1
                        var_2c0_1.d = 0xffffffff
                        int64_t var_2c8_1
                        var_2c8_1.d = 0
                        sub_140bcb500(&var_170, 0, 0, &var_180, var_2c8_1.d, var_2c0_1.d, 0)
                        int64_t rcx_86 = var_170
                        
                        if (rcx_86 != 0)
                            sub_140a74f90(rcx_86)
                    
                    sub_140bafac0(&var_1b0)
                    r15_1.b = 0
                
                if (var_90_1 != 0)
                    void var_110
                    sub_140b389c0(&var_f8, 0x41f00000, sub_140a96170(&var_110))
                    int64_t* var_108
                    
                    if (var_108 != 0)
                        var_108[1].d -= 1
                        
                        if (var_108[1].d == 1)
                            (**var_108)(var_108)
                            int32_t r12_1 = *(var_108 + 0xc)
                            *(var_108 + 0xc) -= 1
                            
                            if (r12_1 == 1)
                                (*(*var_108 + 8))(var_108, zx.q(r12_1))
                        
                        rsi_10 = rax_41
                        result_3 = result_4
                
                sub_140cba580(rsi_10, zx.o(0))
                int64_t zmm7_1 = sub_140d1f490(sub_140baa940())
                int32_t rdx_33 = *(result_3 + 0x50)
                int32_t rdx_34 = rdx_33 | 0x40000
                
                if ((*(rsi_10 + 0x229) & 0x10) == 0)
                    rdx_34 = rdx_33 & 0xfffbffff
                
                *(result_3 + 0x50) = rdx_34
                
                if (rax_50 != 0)
                    int64_t var_70
                    sub_140cbe140(rsi_10, &var_70)
                    *(rsi_10 + 0x1e8)
                
                if (rbx_7[6] == 0 && (arg3.b & 0x10) == 0)
                    int64_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    double zmm0_1[0x2] = zx.o(0)
                    zmm0_1[0] = float.d(performanceCount_1)
                    zmm0_1[0] = zmm0_1[0] f* data_143d796f8
                    zmm0_1[0] = zmm0_1[0] f- zmm7_1
                    *(result_3 + 0x2c) = _mm_cvtpd_ps(zmm0_1)[0].d
                
                if (data_14399ea98() != 0)
                    void* var_1d8 = rsi_10
                    sub_1405a7050(sub_140baa940() + 0x20, &var_1d8)
                else if (data_143e1d970 != 0)
                    void* var_1e0 = rsi_10
                    sub_1405a7050(sub_140baa940() + 0x20, &var_1e0)
                else
                    if (*(rsi_10 + 0x2d8) != 0)
                        sub_140ccddc0(result_3)
                    
                    if (*(result_3 + 0x68) != 0)
                        sub_140cb7040(rsi_10)
                
                if (r15_1.b == 0)
                    *r13_1 |= 0x80000
            else
                sub_140d1f490(sub_140baa940())
                int32_t rdx_25 = *(result_3 + 0x50)
                int32_t rdx_26 = rdx_25 | 0x40000
                
                if ((*(rsi_10 + 0x229) & 0x10) == 0)
                    rdx_26 = rdx_25 & 0xfffbffff
                
                *(result_3 + 0x50) = rdx_26
            
            result_1 = result_3
        else
            sub_140d1f490(rbx_7)
        
        if (rbx_7 != 0)
            int32_t temp2_1 = *rbx_7
            *rbx_7 -= 1
            
            if (temp2_1 == 1)
                sub_140d3a300(rbx_7)
                j_sub_140a74f90(rbx_7)
        
        if (var_90_1 != 0)
            char var_90_2 = 0
            sub_140b365b0(&var_f8)
            sub_140597850(&var_f8)
    else
        int16_t* rdx_17 = &data_142d40450
        
        if (var_298_1 != 0)
            rdx_17 = var_2a0
        
        void var_160
        int32_t* rax_21 = sub_140ba7ff0(*sub_140b58260(&var_160, rdx_17, 1))
        
        if (rax_21 != 0)
            int64_t var_150
            int16_t** rax_22
            rax_22, arg4 = sub_140b63b70(rax_21, &var_150)
            
            if (&var_2a0 != rax_22)
                int16_t* rcx_39 = var_2a0
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                var_2a0 = *rax_22
                *rax_22 = nullptr
                var_298_1 = rax_22[1].d
                int32_t var_294_3 = *(rax_22 + 0xc)
                rax_22[1] = 0
            
            int64_t rcx_41 = var_150
            
            if (rcx_41 != 0)
                sub_140a74f90(rcx_41)
            
            goto label_140d24610
        
        char rax_25
        rax_25, arg4, zmm7 = sub_140bb93b0(&var_2a0, &var_2a0, nullptr)
        
        if (rax_25 != 0)
            goto label_140d24610
    int16_t* rcx_107 = var_2a0
    
    if (rcx_107 != 0)
        sub_140a74f90(rcx_107)
    
    result = result_1
else
    int32_t var_26c
    __builtin_memset(&var_26c, 0, 0x14)
    int16_t* var_288
    __builtin_memset(&var_288, 0, 0x18)
    int64_t var_268
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (arg2[rsi_1] != 0)
        
        rsi = zx.q(rsi_1.d + 1)
        
        if (rsi.d s> 0)
            sub_1405947f0(&var_268, rsi.d)
            int32_t var_25c
            rcx = var_25c
            int32_t var_260
            rdx = var_260
        
        int32_t rax_2 = rsi.d + rdx
        int32_t var_260_1 = rax_2
        
        if (rax_2 s> rcx)
            sub_140594770(&var_268)
        
        UnDecorator::getReferenceType(var_268, arg2, rsi.d * 2)
    
    char rax_3 = sub_140a236f0(&var_268, &data_143e1a410, 1)
    char rax_4
    
    if (rax_3 == 0)
        rax_4 = sub_140a236f0(&var_268, &data_143e1a420, 1)
    
    if (rax_3 != 0 || rax_4 != 0)
        rsi.b = 1
    else
        rsi.b = 0
    
    int64_t rcx_6 = var_268
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t var_280
    
    if (rsi.b != 0)
        int64_t var_258 = 0
        int32_t rdx_3 = 0
        int32_t var_250_1 = 0
        int32_t rcx_7 = 0
        int32_t var_24c_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            int64_t rsi_2 = -1
            
            do
                rsi_2 += 1
            while (arg2[rsi_2] != 0)
            
            if (rsi_2.d + 1 s> 0)
                sub_1405947f0(&var_258, rsi_2.d + 1)
                rcx_7 = var_24c_1
                rdx_3 = var_250_1
            
            int32_t rax_5 = rsi_2.d + 1 + rdx_3
            int32_t var_250_2 = rax_5
            
            if (rax_5 s> rcx_7)
                sub_140594770(&var_258)
            
            UnDecorator::getReferenceType(var_258, arg2, (rsi_2.d + 1) * 2)
        
        sub_140bbcf00(&var_258, &var_288, nullptr)
        int64_t rcx_12 = var_258
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    else if (var_288 != arg2)
        int32_t rsi_5
        
        if (arg2 == 0 || *arg2 == 0)
            rsi_5 = 0
        else
            int64_t rsi_4 = -1
            
            do
                rsi_4 += 1
            while (arg2[rsi_4] != 0)
            
            rsi_5 = rsi_4.d + 1
        
        int32_t rcx_13 = var_280:4.d
        
        if (rcx_13 != rsi_5)
            sub_1405947f0(&var_288, rsi_5)
            rcx_13 = var_280:4.d
        
        int32_t rax_6 = rsi_5 + var_280.d
        var_280.d = rax_6
        
        if (rax_6 s> rcx_13)
            sub_140594770(&var_288)
        
        if (rsi_5 != 0)
            memcpy(var_288, arg2, rsi_5 * 2)
    
    int16_t* const r14_1 = &data_142d40450
    uint64_t var_278
    
    if (result_2 != 0)
        uint64_t var_230 = 0
        int64_t var_228_1 = 0
        sub_140d21e40(result_2, 0, &var_230)
        uint64_t rcx_18 = var_278
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        var_278 = var_230
        int32_t var_270_1 = var_228_1.d
        int32_t var_26c_1 = var_228_1:4.d
        goto label_140d243ae
    
    int32_t rbx_1 = var_280.d
    int16_t* rsi_6 = var_288
    int32_t r8_7 = var_26c
    int32_t var_270_2 = rbx_1
    int16_t* const rdx_12
    
    if (rbx_1 != 0 || r8_7 != 0)
        sub_1405a4c70(&var_278, var_280.d, r8_7)
        memcpy(var_278, rsi_6, rbx_1 * 2)
    label_140d243ae:
        rdx_12 = var_288
        
        if (var_280.d == 0)
            rdx_12 = &data_142d40450
    else
        rdx_12 = &data_142d40450
    
    uint64_t var_220
    sub_140b58260(&var_220, rdx_12, 1)
    
    for (int64_t* i_1 = data_14399fb08; i_1 != &i_1[sx.q(data_14399fb10) * 2]; i_1 = &i_1[2])
        if (i_1[1].d != 0 && *i_1 != 0)
            sub_140920c10(&data_14399fb08, &var_278)
            break
    
    int32_t var_2b8 = 0
    
    if (var_280.d != 0)
        r14_1 = var_288
    
    int32_t var_2c0 = 0xffffffff
    int64_t var_1a0 = 0
    int32_t var_198_1 = 0
    int32_t rax_10 = sub_140bcb500(&var_278, 0, r14_1, &var_1a0, 0, var_2c0, var_2b8)
    
    if (rax_10 != 0xffffffff)
        sub_140bc7700(zx.q(rax_10))
    
    if (result_2 == 0)
        var_2b8 = 0
        int32_t var_2c8
        var_2c8.b = 0
        result_2 = sub_140d2f0c0(sub_140cddea0(), 0, var_220, 0, var_2c8.b, 0)
    
    int16_t* rcx_28 = var_288
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    uint64_t rcx_29 = var_278
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    result = result_2

__security_check_cookie(rax_1 ^ &var_2e8)
return result
