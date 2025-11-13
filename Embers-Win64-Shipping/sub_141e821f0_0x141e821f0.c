// 函数: sub_141e821f0
// 地址: 0x141e821f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* arg_10 = arg2
uint64_t rbx_1 = zx.q(arg4)
int64_t* rdi_1 = arg2

if (*(arg2 + 0x169) == 0)
    if (arg5 != 0)
    label_141e82256:
        *(arg2 + 0x1a4)
        *(arg2 + 0x1a4) = 0
        rdi_1 = arg_10
    
    if (arg3 != 0)
        goto label_141e82339
    
    bool z_1
    
    if (0 == *(rdi_1 + 0x1a4))
        *(rdi_1 + 0x1a4) = 0
        z_1 = true
    else
        *(rdi_1 + 0x1a4)
        z_1 = false
    
    int32_t var_118
    
    if (not(z_1))
    label_141e82328:
        rdi_1 = arg_10
    label_141e82339:
        
        if (*(rdi_1 + 0x204) == 0)
            *(arg2 + 0x169) = 1
        else if (rdi_1[0x4f] == 0)
            char rax = *(rdi_1 + 0x16d)
            
            if ((rax & 1) != 0)
                *(arg2 + 0x169) = 5
            else if ((rax & 4) == 0)
                if ((*(*arg1 + 0x88))(arg1, rdi_1) == 0)
                    *(arg2 + 0x169) = 3
                else
                    void* rax_6 = sub_1423677a0(sub_141e6e8e0(), zx.d(*(rdi_1 + 0x16a)))
                    
                    if (not(data_143f39fe0 > 0f) && not(sub_1409606b0() >= 0f))
                        *(rax_6 + 0x1c)
                    
                    char rax_7
                    int32_t zmm6_2
                    int32_t zmm7_1
                    rax_7, zmm6_2, zmm7_1 = sub_14236bfb0(rdi_1, nullptr)
                    
                    if (rax_7 != 0)
                        *(arg2 + 0x169) = 7
                        *(rdi_1 + 0x16d) &= 0xf7
                    else if (arg5 != 0)
                        *(arg2 + 0x169) = 3
                    else if ((*(*arg1 + 0x90))(arg1) == 0)
                        *(arg2 + 0x169) = 3
                    else if ((*(arg1 + 0x352) & 2) != 0)
                        *(arg2 + 0x169) = 4
                    else if ((*(*arg1 + 0x98))(arg1) != 0)
                        *(arg2 + 0x169) = 4
                    else if ((*(rax_6 + 0x18) & 1) != 0)
                        *(arg2 + 0x169) = 3
                    else if (data_143f39fd4 != 0)
                        *(arg2 + 0x169) = 4
                    else
                        int32_t zmm0_2 = rdi_1[0x1f].d
                        
                        if (zmm0_2 f> zmm6_2 || (data_143f39fe4 != 0 && not(zmm0_2 f> zmm7_1)))
                            *(arg2 + 0x169) = 4
                        else
                            *(arg2 + 0x169) = 3
                    
                    void var_b0
                    (*(*rdi_1 + 0x308))(rdi_1, *(*(*arg1 + 0x80))(arg1, &var_b0, rdi_1))
                    
                    if (rdi_1[0x4c] != 0 || *(arg2 + 0x169) - 3 u> 1)
                        rbx_1 = zx.q(arg4)
                    else
                        if (arg3 == 0)
                            void*** rax_14 = j_sub_140a82f30(0x38)
                            void*** rbx_5 = rax_14
                            
                            if (rax_14 == 0)
                                rbx_5 = nullptr
                            else
                                int32_t r8_2 = data_143f39fe8
                                
                                if (r8_2 s<= 0)
                                    r8_2 = *(arg1 + 0x24)
                                
                                *rax_14 = &data_143250e18
                                sub_141e4f1a0(&rax_14[1], rdi_1, r8_2, arg1)
                                rbx_5[4].d = 0
                                rbx_5[5] = 0
                                rbx_5[6] = 0
                            
                            rdi_1[0x4c] = rbx_5
                            int64_t rax_15 = data_143db7ac8
                            rbx_5[4].d += 1
                            void*** rcx_13 = rbx_5[5]
                            rbx_5[6] = rax_15
                            
                            if (rax_15 == 0)
                                sub_140a4fc50(rcx_13)
                                rbx_5[5] = 0
                                sub_141e59870(&rbx_5[1])
                                rbx_5[4].d -= 1
                            else
                                if (rcx_13 == 0)
                                    rcx_13.b = 1
                                    void*** rax_16 = sub_140a491d0(rcx_13.b)
                                    rbx_5[5] = rax_16
                                    rcx_13 = rax_16
                                
                                (*rcx_13)[3](rcx_13)
                                int64_t* rcx_14 = rbx_5[6]
                                (*(*rcx_14 + 0x10))(rcx_14, rbx_5)
                            
                            int64_t rdi_2 = sx.q(arg1[0x7b].d)
                            int32_t rax_19 = (rdi_2 + 1).d
                            arg1[0x7b].d = rax_19
                            
                            if (rax_19 s> *(arg1 + 0x3dc))
                                sub_1405a4d70(&arg1[0x7a])
                            
                            rdi_1 = arg_10
                            *(arg1[0x7a] + (rdi_2 << 3)) = rdi_1
                        else
                            int32_t r8_1 = data_143f39fe8
                            
                            if (r8_1 s<= 0)
                                r8_1 = *(arg1 + 0x24)
                            
                            void** const var_e8_1 = &data_143250e18
                            void var_e0
                            sub_141e4f1a0(&var_e0, rdi_1, r8_1, arg1)
                            int32_t var_c8_1 = 0
                            int64_t var_c0_1 = (zx.o(0)).q
                            int32_t var_c8_2 = 1
                            var_c0_1 = 0
                            sub_140a4fc50(nullptr)
                            var_c0_1 = 0
                            sub_141e59870(&var_e0)
                            int32_t var_c8_3 = var_c8_2 - 1
                            void** const var_e8_2 = &data_143250e18
                            sub_140a4fc50(var_c0_1)
                            rdi_1 = arg_10
                        
                        TEB* gsbase
                        
                        if (data_143f3a040 s> *(0x14 +
                                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                            _Init_thread_header(&data_143f3a040)
                            
                            if (data_143f3a040 == 0xffffffff)
                                sub_140b58260(&data_143f3a038, &data_142d6be30, 1)
                                _Init_thread_footer(&data_143f3a040)
                        
                        char rcx_21 = 0
                        void var_a8
                        
                        if (*(*(*arg1 + 0x80))(arg1, &var_a8, rdi_1) == data_143f3a038)
                            rcx_21 = 2
                        
                        *(rdi_1 + 0x16e) = rcx_21 | (*(rdi_1 + 0x16e) & 0xfd)
                        
                        if (*(arg2 + 0x169) != 3)
                            rbx_1 = zx.q(arg4)
                        else
                            rbx_1.b = 0
            else
                *(arg2 + 0x169) = ((*(arg1 + 0x352) & 0x20) | 8) u>> 3
        else
            *(arg2 + 0x169) = 2
        
        if (rdi_1[0x4c] == 0)
            *(rdi_1 + 0x1a4)
            *(rdi_1 + 0x1a4) = 2
            rdi_1 = arg_10
        
        if (rbx_1.b != 0)
            int64_t rax_25 = *rdi_1
            var_118 = 0
            int32_t var_110_2 = 0
            int32_t var_108_1 = 0
            int32_t var_100_1 = 0
            int32_t var_f8_1 = 0
            int32_t var_f0_1 = 0
            (*(rax_25 + 0x160))(rdi_1, &var_118)
            *(rdi_1 + 0x214) += var_110_2 + var_108_1 + var_100_1 + var_f8_1 + var_f0_1
    else if (arg5 != 0 || data_143f39fdc != 1)
        uint32_t rax_1
        
        if (data_143de5480 != 0)
            rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_1.b != 0)
            *(rdi_1 + 0x1a4)
            *(rdi_1 + 0x1a4) = 1
            sub_1405a7050(&arg1[0x71], &arg_10)
        
        if (sub_140a80ea0() != 0)
            goto label_141e82328
        
        char rdx_1 = arg_10.b
        int64_t* var_110_1 = arg_10
        void** const var_78_1 = &data_142e345d8
        var_118.q = arg1
        int128_t zmm0 = var_118.o
        int64_t var_108
        var_108.b = 0
        var_108:1.b = rbx_1.b
        var_108:2.b = arg5
        int64_t (* var_98)(int64_t* arg1) = sub_141e767c0
        int64_t var_88_1 = 0
        int128_t var_70_1 = zmm0
        int64_t var_60_1 = var_108
        sub_141e85cb0(&var_98, rdx_1)
else if (arg5 != 0)
    goto label_141e82256
