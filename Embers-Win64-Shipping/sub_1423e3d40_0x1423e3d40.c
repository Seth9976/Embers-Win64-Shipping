// 函数: sub_1423e3d40
// 地址: 0x1423e3d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1
void* const* result

if (data_143de5426 == 0)
    int64_t r14_1 = 0
    TEB* gsbase
    int32_t* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    int32_t var_118
    
    if (data_143f5b7d0 s> *rbx_2)
        _Init_thread_header(&data_143f5b7d0)
        
        if (data_143f5b7d0 == 0xffffffff)
            int64_t* rcx_50 = data_143db18d0
            
            if (rcx_50 == 0)
                sub_140a53c40()
                rcx_50 = data_143db18d0
            
            var_118 = 0
            int64_t* rax_45 =
                (*(*rcx_50 + 0x18))(rcx_50, r.EnableStereoEmulation", 0, Emulate stereo rendering"
                , 0)
            data_143f5b7c0 = rax_45
            data_143f5b7b8 = &data_142d3ff18
            int64_t rdx_24 = *rax_45
            data_143f5b7c8 = (*(rdx_24 + 0x58))(rax_45, rdx_24)
            atexit(sub_142d0fcd0)
            _Init_thread_footer(&data_143f5b7d0)
    
    sub_140af2b60()
    result = sub_140b21a10(&data_143dbb3f0, u"emulatestereo")
    int64_t rcx
    int64_t rdi_1
    
    if (result.b == 0)
        rdi_1 = data_143f5b7c8
        
        if (data_143de5480 == 0)
            rcx = 0
        else
            rcx.b = GetCurrentThreadId().d != data_143de5470
    
    if (result.b != 0 || *(rdi_1 + (rcx << 2)) != 0)
        void*** rax_36 = j_sub_140a82f30(0x18)
        void*** rbx_6
        
        if (rax_36 == 0)
            rbx_6 = nullptr
        else
            rbx_6 = sub_1423ceeb0(rax_36)
        
        int64_t* rax_38 = j_sub_140a82f30(0x18)
        
        if (rax_38 == 0)
            rax_38 = nullptr
        else
            rax_38[1].d = 1
            *rax_38 = &data_142d42ea8
            *(rax_38 + 0xc) = 1
            rax_38[2] = rbx_6
        
        uint128_t zmm0_1 = rbx_6.o
        uint128_t var_c8 = zmm0_1
        int64_t* rbx_7 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rbx_7 != 0)
            rbx_7[1].d += 1
            rbx_7 = rax_38
        
        if (rsi + 0xaf8 != &var_c8)
            *(rsi + 0xaf8) = var_c8.q
            var_c8.q = 0
            sub_1405aeff0(rsi + 0xb00, &var_c8:8)
            rbx_7 = rax_38
        
        void* rcx_45 = var_c8:8.q
        
        if (rcx_45 != 0)
            result = zx.q(*(rcx_45 + 8))
            *(rcx_45 + 8) -= 1
            
            if (result.d == 1)
                int64_t* rbx_8 = var_c8:8.q
                (**rbx_8)(rbx_8)
                result = zx.q(*(rbx_8 + 0xc))
                *(rbx_8 + 0xc) -= 1
                
                if (result.d == 1)
                    int64_t* rcx_47 = var_c8:8.q
                    (*(*rcx_47 + 8))(rcx_47, 1)
            
            rbx_7 = rax_38
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t r12_3 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (r12_3 == 1)
                    (*(*rbx_7 + 8))(rbx_7, zx.q(r12_3))
    else
        void* r13_1 = rsi + 0xb08
        void* var_90_1 = r13_1
        
        if (*r13_1 == 0)
            sub_140af2b60()
            
            if (sub_140b21a10(&data_143dbb3f0, u"nohmd").b == 0)
                if (data_143cd5b60 s> *rbx_2)
                    _Init_thread_header(&data_143cd5b60)
                    
                    if (data_143cd5b60 == 0xffffffff)
                        sub_140b58260(&data_143cd5b58, &data_142d408a8, 1)
                        _Init_thread_footer(&data_143cd5b60)
                
                int64_t rbx_3 = data_143cd5b58
                sub_140a387e0()
                void** var_98_1 = &data_14399e720
                void** var_f8 = nullptr
                int64_t var_f0_1 = 0
                int32_t r15_1 = 0
                void* r8_1 = data_14399e720
                int32_t rax_3 = (*(r8_1 + 8))(&data_14399e720, rbx_3, r8_1)
                int32_t rsi_1 = 0
                
                if (rax_3 s> 0)
                    do
                        void* r9_1 = *var_98_1
                        int64_t rax_4 =
                            (*(r9_1 + 0x10))(var_98_1, rbx_3, zx.q(rsi_1), r9_1, var_118)
                        
                        if (rax_4 != 0)
                            r14_1 = rax_4 - 8
                        
                        int64_t rdi_2 = sx.q(var_f0_1.d)
                        int32_t rax_5 = (rdi_2 + 1).d
                        var_f0_1.d = rax_5
                        
                        if (rax_5 s> r15_1)
                            sub_1405a4d70(&var_f8)
                            r15_1 = var_f0_1:4.d
                        
                        rsi_1 += 1
                        var_f8[rdi_2] = r14_1
                        r14_1 = 0
                    while (rsi_1 s< rax_3)
                    
                    r13_1 = var_90_1
                
                int16_t* var_a8 = nullptr
                int32_t var_a0_1 = 0
                sub_140af2b60()
                char rax_7 = sub_140b2acc0(&data_143dbb3f0, u"hmd=", &var_a8, 1)
                char rdi_3 = rax_7
                sub_1405ea950(var_f8, var_f0_1.d, arg1.b)
                result = nullptr
                int64_t var_e8
                __builtin_memset(&var_e8, 0, 0x18)
                int64_t* var_d8
                int64_t* r8_5
                
                while (true)
                    int32_t arg_20 = result.d
                    int64_t var_e0_1
                    
                    if (result.d s< 0 || result.d s>= var_f0_1.d)
                        int32_t rsi_3 = 0
                        
                        while (true)
                            if (rsi_3 s< 0 || rsi_3 s>= var_e0_1.d)
                                r8_5 = var_d8
                                break
                            
                            int64_t* r14_5 = *(var_e8 + (sx.q(rsi_3) << 3))
                            void var_68
                            result = (*(*r14_5 + 0x78))(r14_5, &var_68)
                            
                            if (r13_1 != result)
                                *r13_1 = *result
                                *result = nullptr
                                sub_1405aeff0(r13_1 + 8, &result[1])
                            
                            int64_t* var_60
                            
                            if (var_60 != 0)
                                var_60[1].d -= 1
                                
                                if (var_60[1].d == 1)
                                    (**var_60)(var_60)
                                    result = zx.q(*(var_60 + 0xc))
                                    *(var_60 + 0xc) -= 1
                                    
                                    if (result.d == 1)
                                        (*(*var_60 + 8))(var_60, 1)
                            
                            if (*r13_1 == 0)
                                rsi_3 += 1
                                continue
                            
                            r8_5 = r14_5
                            var_d8 = r14_5
                            break
                        
                        break
                    
                    int64_t* r15_2 = var_f8[sx.q(result.d)]
                    
                    if (rdi_3 == 0)
                    label_1423e40c1:
                        
                        if ((*(*r15_2 + 0x58))(r15_2) == 0)
                            int64_t rdi_8 = sx.q(var_e0_1.d)
                            int32_t rax_22 = (rdi_8 + 1).d
                            var_e0_1.d = rax_22
                            
                            if (rax_22 s> var_e0_1:4.d)
                                sub_1405a4d70(&var_e8)
                            
                            *(var_e8 + (rdi_8 << 3)) = r15_2
                        else
                            void var_78
                            result = (*(*r15_2 + 0x78))(r15_2, &var_78)
                            
                            if (r13_1 != result)
                                *r13_1 = *result
                                *result = nullptr
                                sub_1405aeff0(r13_1 + 8, &result[1])
                            
                            int64_t* var_70
                            
                            if (var_70 != 0)
                                var_70[1].d -= 1
                                
                                if (var_70[1].d == 1)
                                    (**var_70)(var_70)
                                    result = zx.q(*(var_70 + 0xc))
                                    *(var_70 + 0xc) -= 1
                                    
                                    if (result.d == 1)
                                        (*(*var_70 + 8))(var_70, 1)
                            
                            if (*r13_1 != 0)
                                r8_5 = r15_2
                                var_d8 = r15_2
                                break
                    else
                        int64_t rax_9 = *r15_2
                        int64_t* var_108 = nullptr
                        int32_t var_100_1 = 0
                        (*(rax_9 + 0x48))(r15_2, &var_108)
                        int64_t var_88
                        int64_t* rax_11 = (*(*r15_2 + 0x40))(r15_2, &var_88)
                        int64_t rsi_2 = sx.q(var_100_1)
                        int32_t i_4 = (rsi_2 + 1).d
                        
                        if (i_4 s> 0)
                            sub_1405a4f90(&var_108)
                        
                        int64_t* rcx_10 = &var_108[rsi_2 * 2]
                        *rcx_10 = 0
                        *rcx_10 = *rax_11
                        *rax_11 = 0
                        rcx_10[1].d = rax_11[1].d
                        *(rcx_10 + 0xc) = *(rax_11 + 0xc)
                        rax_11[1] = 0
                        int64_t rcx_11 = var_88
                        
                        if (rcx_11 != 0)
                            sub_140a74f90(rcx_11)
                        
                        int64_t* rdi_5 = var_108
                        uint64_t i_5 = sx.q(i_4)
                        void* r14_4 = &rdi_5[i_5 * 2]
                        
                        if (rdi_5 != r14_4)
                            while (true)
                                int16_t* rdx_9
                                
                                if (rdi_5[1].d == 0)
                                    rdx_9 = &data_142d40450
                                else
                                    rdx_9 = *rdi_5
                                
                                int16_t* const rcx_12 = &data_142d40450
                                
                                if (var_a0_1 != 0)
                                    rcx_12 = var_a8
                                
                                if (sub_140a54510(rcx_12, rdx_9) == 0)
                                    int32_t i_3 = i_4
                                    int64_t* rdi_6 = var_108
                                    
                                    if (i_3 != 0)
                                        int32_t i
                                        
                                        do
                                            int64_t rcx_15 = *rdi_6
                                            
                                            if (rcx_15 != 0)
                                                sub_140a74f90(rcx_15)
                                            
                                            rdi_6 = &rdi_6[2]
                                            i = i_3
                                            i_3 -= 1
                                        while (i != 1)
                                        rdi_6 = var_108
                                    
                                    if (rdi_6 != 0)
                                        sub_140a74f90(rdi_6)
                                    
                                    break
                                
                                rdi_5 = &rdi_5[2]
                                
                                if (rdi_5 == r14_4)
                                    i_5 = zx.q(i_4)
                                    rdi_5 = var_108
                                    goto label_1423e403d
                            
                            goto label_1423e40c1
                        
                    label_1423e403d:
                        
                        if (i_5.d != 0)
                            int32_t i_1
                            
                            do
                                int64_t rcx_13 = *rdi_5
                                
                                if (rcx_13 != 0)
                                    sub_140a74f90(rcx_13)
                                
                                rdi_5 = &rdi_5[2]
                                i_1 = i_5.d
                                i_5 = zx.q(i_5.d - 1)
                            while (i_1 != 1)
                            rdi_5 = var_108
                        
                        if (rdi_5 != 0)
                            sub_140a74f90(rdi_5)
                            rdi_3 = rax_7
                            result = zx.q(arg_20 + 1)
                            continue
                    
                    rdi_3 = rax_7
                    result = zx.q(arg_20 + 1)
                    continue
                
                for (int32_t i_2 = 0; i_2 s>= 0; i_2 += 1)
                    if (i_2 s>= var_f0_1.d)
                        break
                    
                    int64_t rdx_15 = var_f8[sx.q(i_2)]
                    
                    if (rdx_15 != r8_5)
                        int64_t r8_6 = rdx_15 + 8
                        
                        if (rdx_15 == 0)
                            r8_6 = 0
                        
                        (*(*var_98_1 + 0x20))(var_98_1, rbx_3, r8_6)
                        r8_5 = var_d8
                
                int64_t* rcx_32 = *var_90_1
                
                if (rcx_32 == 0)
                    rsi = arg1
                else
                    void var_58
                    result = (*(*rcx_32 + 0x108))(rcx_32, &var_58)
                    rsi = arg1
                    
                    if (rsi + 0xaf8 != result)
                        *(rsi + 0xaf8) = *result
                        *result = nullptr
                        sub_1405aeff0(rsi + 0xb00, &result[1])
                    
                    int64_t* var_50
                    
                    if (var_50 != 0)
                        result = zx.q(var_50[1].d)
                        var_50[1].d -= 1
                        
                        if (result.d == 1)
                            (**var_50)(var_50)
                            int32_t r12_2 = *(var_50 + 0xc)
                            *(var_50 + 0xc) -= 1
                            
                            if (r12_2 == 1)
                                (*(*var_50 + 8))(var_50, zx.q(r12_2))
                    
                    if (*(rsi + 0xaf8) != 0)
                        sub_140af2b60()
                        char rax_33
                        int64_t rdx_20
                        rax_33, rdx_20 = sub_140b21a10(&data_143dbb3f0, &data_142fdd5e4)
                        
                        if (rax_33 == 0)
                            int64_t* rax_34
                            rax_34, rdx_20 = sub_141521500()
                            result = rax_34[0x23]
                            
                            if (result == 0)
                                int64_t rdx_21 = *rax_34
                                (*(rdx_21 + 0x390))(rax_34, rdx_21)
                                result = rax_34[0x23]
                        
                        if (rax_33 != 0 || *(result + 0x10a) != 0)
                            int64_t* rcx_38 = *(rsi + 0xaf8)
                            rdx_20.b = 1
                            (*(*rcx_38 + 0x18))(rcx_38, rdx_20)
                
                int64_t rcx_39 = var_e8
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                int16_t* rcx_40 = var_a8
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                void** rcx_41 = var_f8
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)

result.b = *(rsi + 0xaf8) != 0
return result
