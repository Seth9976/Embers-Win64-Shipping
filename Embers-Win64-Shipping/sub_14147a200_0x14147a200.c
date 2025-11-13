// 函数: sub_14147a200
// 地址: 0x14147a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5d8
int64_t rax_1 = __security_cookie ^ &var_5d8
void* result = arg5
int32_t rdi = 0
int32_t i_2 = *(arg1 + 0xa8)
int64_t* r14 = arg3
void* r15 = arg1
void* result_1 = result
int32_t var_594 = 0

if (i_2 s> 0)
    uint64_t rcx = zx.q(data_14401b1a0)
    int64_t rsi_1 = 0
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7 = zx.o(0)
    int64_t var_568_1 = 0
    
    while (true)
        void* rdx = nullptr
        zmm6 = *(*(result + 0x20) + 0x168)
        void* var_4e8_1 = nullptr
        void* r12_2 = rsi_1 * 0x5240 + *(r15 + 0xa0)
        int32_t var_4dc_1 = 2
        int32_t var_4e0_1 = 0
        void var_4f0
        
        if (i_2 != 2)
            sub_140bcf1d0(&var_4f0, i_2)
            rdx = var_4e8_1
        
        if (i_2 s> 0)
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                int64_t rbx = sx.q(var_4e0_1)
                int32_t rax_3 = (rbx + 1).d
                var_4e0_1 = rax_3
                
                if (rax_3 s> var_4dc_1)
                    sub_140bcee10(&var_4f0, rbx.d)
                    rdx = var_4e8_1
                
                void* rcx_3 = &var_4f0
                
                if (rdx != 0)
                    rcx_3 = rdx
                
                void* r8 = rcx_3 + (rbx << 2)
                
                if (r8 != 0)
                    *r8 = 0
                    rdx = var_4e8_1
                
                i = i_1
                i_1 -= 1
            while (i != 1)
            rdi = var_594
        
        void* rax_4 = &var_4f0
        
        if (rdx != 0)
            rax_4 = rdx
        
        *(rax_4 + (rsi_1 << 2)) = zmm6.d
        
        if (sub_142391c60(r12_2) != 0)
            int32_t rax_6 = *(r15 + 0xa8)
            int32_t rbx_1 = rdi + 1
            
            if (rbx_1 s< rax_6)
                void* rsi_2 = (rsi_1 << 2) + 4
                
                do
                    int64_t rdi_1
                    
                    if (rbx_1 s< 0 || rbx_1 s>= rax_6)
                        rdi_1 = sx.q(rbx_1)
                    label_14147a3a9:
                        
                        if (sub_142391c60(rdi_1 * 0x5240 + *(r15 + 0xa0)) != 0)
                            break
                    else
                        rdi_1 = sx.q(rbx_1)
                        
                        if (sub_142391cc0(rdi_1 * 0x5240 + *(r15 + 0xa0)) == 0)
                            goto label_14147a3a9
                        
                        int32_t* rax_8 = var_4e8_1
                        int32_t* rcx_7 = &var_4f0
                        
                        if (rax_8 != 0)
                            rcx_7 = rax_8
                        
                        *(rcx_7 + rsi_2) = zmm6.d
                    rax_6 = *(r15 + 0xa8)
                    rbx_1 += 1
                    rsi_2 += 4
                while (rbx_1 s< rax_6)
        
        if (sub_142391c60(r12_2) != 0)
            int32_t rbx_2 = *(r12_2 + 0x1548)
            int64_t rdi_2 = **(result_1 + 0x20)
            char rax_12 = sub_14122cc00(result_1)
            void* var_5b8
            int32_t var_5b0
            int32_t var_5a8
            char var_5a0
            char var_598
            int64_t* var_558
            int32_t var_550
            int32_t var_548
            char rax_13 = (*(rdi_2 + 0xe0))(*(result_1 + 0x20), zx.q(rbx_2), zx.q(rax_12), 
                zx.q(*(r12_2 + 0x278)), var_5b8, var_5b0, var_5a8, var_5a0, var_598, result_1, 
                arg1, arg3, r12_2, arg2, var_568_1, rcx, var_558, var_550, var_548)
            char rsi_3 = rax_13
            var_598 = rax_13
            int64_t rbx_3 = **(result_1 + 0x20)
            char rax_14 = sub_14122cc00(result_1)
            void* rbx_4 = nullptr
            int32_t rcx_16
            rcx_16.b = rsi_3 != 0
            int32_t r12_3 = rcx_16 + (*(rbx_3 + 0xa0))(*(result_1 + 0x20), r12_2, zx.q(rax_14))
            var_558 = &data_143ec4c60
            int32_t r15_2 = 0
            
            if (r12_3 s> 0)
                do
                    int32_t rdi_3 = r15_2
                    int128_t var_218_1 = data_142d3f660
                    int128_t var_1f8
                    __builtin_memcpy(&var_1f8, 
                        "\x00\x00\x00\x00\x00\x00\x00\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "4a\x00\x00\x00\x00", 
                        0x18)
                    int32_t var_94_1 = 0xffffffff
                    int64_t var_178_1 = 0
                    int32_t var_168_1 = 0
                    int32_t var_164_1 = 6
                    int64_t var_d8_1 = 0
                    int32_t var_c8_1 = 0
                    int32_t var_c4_1 = 8
                    char var_98_1 = 0
                    int32_t var_90_1 = 0x3f800000
                    int16_t var_88_1 = 0
                    
                    if (rsi_3 != 0 && r15_2 + 1 == r12_3)
                        rdi_3 = -1
                    
                    int64_t rbx_5 = **(result_1 + 0x20)
                    uint64_t r9_1 = zx.q(sub_14122cc00(result_1))
                    void var_2a8
                    var_5b8 = &var_2a8
                    
                    if ((*(rbx_5 + 0xa8))(*(result_1 + 0x20), r12_2, zx.q(rdi_3), r9_1, var_5b8, 
                            var_5b0, var_5a8, var_5a0, var_598) != 0)
                        int32_t rsi_4 = data_1439c7a74
                        int32_t rcx_20 = data_143a30378:4.d
                        
                        if (rcx_20 s< 1)
                            rsi_4 = 1
                        else if (rcx_20 s< rsi_4)
                            rsi_4 = rcx_20
                        
                        int32_t rbx_6 = data_1439c7a70
                        int32_t rcx_21 = data_143a30378:4.d
                        
                        if (rcx_21 s< 1)
                            rbx_6 = 1
                        else if (rcx_21 s< rbx_6)
                            rbx_6 = rcx_21
                        
                        char var_597 = 0
                        char* var_508_1 = &var_597
                        void*** (* var_510)() = j_sub_140597fc0
                        void* rax_20 = sub_140a756e0(&var_510, &data_143958018)
                        void*** rcx_25 = (*(rax_20 + 0x10) + 0xf) & 0xfffffffffffffff0
                        void* rax_21 = &rcx_25[0x120]
                        
                        if (rax_21 u> *(rax_20 + 0x18))
                            sub_140b0e3d0(rax_20 + 0x10, 0x910)
                            rcx_25 = (*(rax_20 + 0x10) + 0xf) & 0xfffffffffffffff0
                            rax_21 = &rcx_25[0x120]
                        
                        *(rax_20 + 0x10) = rax_21
                        void*** rdi_5
                        
                        if (rcx_25 == 0)
                            rdi_5 = nullptr
                        else
                            rdi_5 = sub_141475910(rcx_25)
                        
                        int32_t rcx_29
                        
                        if (data_143f0f1c0 == 0 || *(arg1 + 0x3b0) s< 3)
                            rcx_29 = 4
                        else
                            rcx_29 = 0
                        
                        int32_t rax_24 = rcx_29 * 2
                        var_5a0 = 0
                        var_5a8 = rcx_29
                        var_5b0 = rsi_4 - rax_24
                        var_5b8.d = rbx_6 - rax_24
                        zmm7 = sub_1414a3420(rdi_5, result_1, r12_2, &var_2a8, var_5b8.d, var_5b0, 
                            var_5a8, var_5a0)
                        void* rbx_8 = &rdi_5[0xab]
                        
                        if (rbx_8 != &var_4f0)
                            int64_t rsi_6 = sx.q(var_4e0_1)
                            int32_t r8_5 = *(rbx_8 + 0x14)
                            *(rbx_8 + 0x10) = rsi_6.d
                            
                            if (rsi_6.d != 0 || r8_5 != 0)
                                sub_14149bdb0(rbx_8, rsi_6.d, r8_5)
                                void* rax_25 = *(rbx_8 + 8)
                                void* rdx_8 = &var_4f0
                                
                                if (var_4e8_1 != 0)
                                    rdx_8 = var_4e8_1
                                
                                if (rax_25 != 0)
                                    rbx_8 = rax_25
                                
                                memcpy(rbx_8, rdx_8, (rsi_6 << 2).d)
                            else
                                *(rbx_8 + 0x14) = 2
                            
                            r14 = arg3
                        
                        int64_t rbx_9 = sx.q(arg4[1].d)
                        int32_t rax_26 = (rbx_9 + 1).d
                        arg4[1].d = rax_26
                        
                        if (rax_26 s> *(arg4 + 0xc))
                            sub_14083a310(arg4, rbx_9.d)
                        
                        *(*arg4 + (rbx_9 << 3)) = rdi_5
                        int64_t rsi_7 = sx.q(arg4[3].d)
                        int32_t rax_27 = (rsi_7 + 1).d
                        arg4[3].d = rax_27
                        
                        if (rax_27 s> *(arg4 + 0x1c))
                            sub_14083a310(&arg4[2], rsi_7.d)
                        
                        *(arg4[2] + (rsi_7 << 3)) = rdi_5
                        int64_t rbx_10 = sx.q(arg2[1].d)
                        int32_t rax_28 = (rbx_10 + 1).d
                        arg2[1].d = rax_28
                        
                        if (rax_28 s> *(arg2 + 0xc))
                            sub_14083a310(arg2, rbx_10.d)
                        
                        *(*arg2 + (rbx_10 << 3)) = rdi_5
                        
                        if ((rdi_5[0xae].d & 0x200) == 0)
                            int64_t rbx_11 = sx.q(r14[1].d)
                            int32_t rax_29 = (rbx_11 + 1).d
                            r14[1].d = rax_29
                            
                            if (rax_29 s> *(r14 + 0xc))
                                sub_14083a310(r14, rbx_11.d)
                            
                            *(*r14 + (rbx_11 << 3)) = rdi_5
                        
                        rsi_3 = var_598
                    
                    if (var_d8_1 != 0)
                        sub_140a74f90(var_d8_1)
                    
                    if (var_178_1 != 0)
                        sub_140a74f90(var_178_1)
                    
                    r15_2 += 1
                    rbx_4 = nullptr
                while (r15_2 s< r12_3)
            
            void* rcx_43 = *(r12_2 + 8)
            
            if (rcx_43 != 0)
                void* rax_30 = sub_1412278d0(rcx_43, *(r12_2 + 0x1548), 0)
                int128_t zmm0_1 = zmm7
                
                if (rax_30 != 0 && *(rax_30 + 0x168) != 0)
                    TEB* gsbase
                    void* rsi_9 = *(gsbase->ThreadLocalStoragePointer + (rcx << 3))
                    
                    if (data_143e3a9a0 s> *(rsi_9 + 0x14))
                        _Init_thread_header(&data_143e3a9a0)
                        
                        if (data_143e3a9a0 == 0xffffffff)
                            sub_140b58260(&data_143e3a998, u"FLightPropagationVolumeSettings", 1)
                            _Init_thread_footer(&data_143e3a9a0)
                    
                    void* r8_8 = *(r12_2 + 0x1510)
                    void* rcx_51
                    
                    while (true)
                        void* rcx_46
                        
                        if (rbx_4 != 0)
                            rcx_46 = zx.q(*(rbx_4 + 0x10)) + 0x14 + rbx_4 + zx.q(*(rbx_4 + 0xc))
                        else
                            rcx_46 = r8_8
                        
                        rbx_4 = nullptr
                        
                        if (rcx_46 != sx.q(*(r12_2 + 0x1518)) + r8_8)
                            rbx_4 = rcx_46
                        
                        if (rbx_4 != 0)
                            if (*(rbx_4 + 4) != data_143e3a998)
                                continue
                            else
                                uint64_t rax_33 = zx.q(*(rbx_4 + 0x10))
                                rcx_51 = rbx_4 + 0x14 + rax_33
                                
                                if (rbx_4 + 0x14 != neg.q(rax_33))
                                    break
                        
                        if (data_143e498b0 s> *(0x14 + rsi_9))
                            _Init_thread_header(&data_143e498b0)
                            
                            if (data_143e498b0 == 0xffffffff)
                                int128_t zmm1 = data_142f13080
                                data_143e49890 = data_142f130c0
                                data_143e498a0 = zmm1
                                data_143e49870.d = 0
                                data_143e49870:4.d = 0x3f800000
                                data_143e49870:0xc = 0x45a60000
                                data_143e49880:4.d = 0
                                data_143e49870:8.d = 0x3f23d70a
                                data_143e49880:8.d = 0x3ec49ba6
                                data_143e49880:0xc.d = 0x3f800000
                                _Init_thread_footer(&data_143e498b0)
                        
                        rcx_51 = &data_143e49870
                        int128_t var_538
                        __builtin_memcpy(&var_538, 
                            "\xa6\x9b\xc4\x3e\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x41\x00\x00\x"
                        "80\x3f\x00\x00\xe0\x40\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                            0x20)
                        var_550 = 0
                        int32_t var_54c_1 = 0x3f800000
                        int32_t var_53c_1 = 0
                        var_548 = 0x3f23d70a
                        int64_t var_518_1 = 0
                        data_143e49880 = 0x45a60000:4.o
                        data_143e49870 = var_550.o
                        zmm0_1 = var_538
                        int128_t var_528
                        data_143e498a0 = var_528
                        data_143e49890 = zmm0_1
                        break
                    
                    zmm0_1 = *(rcx_51 + 4)
                
                if (not(zmm0_1.d f<= zmm7.d))
                    int128_t var_448_1 = data_142d3f660
                    int128_t var_428
                    __builtin_memcpy(&var_428, 
                        "\x00\x00\x00\x00\x00\x00\x00\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "4a\x00\x00\x00\x00", 
                        0x18)
                    int64_t* rcx_52 = *(result_1 + 0x20)
                    int64_t var_3a8_1 = 0
                    int32_t var_398_1 = 0
                    int32_t var_394_1 = 6
                    int64_t var_308_1 = 0
                    int32_t var_2f8_1 = 0
                    int32_t var_2f4_1 = 8
                    char var_2c8_1 = 0
                    int32_t var_2c4_1 = 0xffffffff
                    int32_t var_2c0_1 = 0x3f800000
                    int16_t var_2b8_1 = 0
                    void var_4d8
                    
                    if ((*(*rcx_52 + 0xb0))(rcx_52, r12_2, rax_30 + 0x174, &var_4d8, var_5b8, 
                            var_5b0, var_5a8, var_5a0, var_598) != 0)
                        int32_t var_2c4_2 = 0
                        char var_596 = 0
                        int32_t rdi_6 = *(var_558 + 0x3bc)
                        char* var_4f8_1 = &var_596
                        void*** (* var_500)() = j_sub_140597fc0
                        void* rax_38 = sub_140a756e0(&var_500, &data_143958018)
                        void*** rcx_56 = (*(rax_38 + 0x10) + 0xf) & 0xfffffffffffffff0
                        void* rax_39 = &rcx_56[0x120]
                        
                        if (rax_39 u> *(rax_38 + 0x18))
                            sub_140b0e3d0(rax_38 + 0x10, 0x910)
                            rcx_56 = (*(rax_38 + 0x10) + 0xf) & 0xfffffffffffffff0
                            rax_39 = &rcx_56[0x120]
                        
                        *(rax_38 + 0x10) = rax_39
                        void*** rbx_13
                        
                        if (rcx_56 == 0)
                            rbx_13 = nullptr
                        else
                            rbx_13 = sub_141475910(rcx_56)
                        
                        var_5a0 = 1
                        var_5a8 = 0
                        var_5b0 = rdi_6
                        var_5b8.d = rdi_6
                        zmm7 = sub_1414a3420(rbx_13, result_1, r12_2, &var_4d8, var_5b8.d, var_5b0, 
                            var_5a8, var_5a0)
                        int64_t rdi_7 = sx.q(arg4[1].d)
                        int32_t rax_41 = (rdi_7 + 1).d
                        arg4[1].d = rax_41
                        
                        if (rax_41 s> *(arg4 + 0xc))
                            sub_14083a310(arg4, rdi_7.d)
                        
                        *(*arg4 + (rdi_7 << 3)) = rbx_13
                        int64_t rsi_11 = sx.q(arg4[3].d)
                        int32_t rax_43 = (rsi_11 + 1).d
                        arg4[3].d = rax_43
                        
                        if (rax_43 s> *(arg4 + 0x1c))
                            sub_14083a310(&arg4[2], rsi_11.d)
                        
                        *(arg4[2] + (rsi_11 << 3)) = rbx_13
                        int64_t rdi_8 = sx.q(arg2[1].d)
                        int32_t rax_45 = (rdi_8 + 1).d
                        arg2[1].d = rax_45
                        
                        if (rax_45 s> *(arg2 + 0xc))
                            sub_14083a310(arg2, rdi_8.d)
                        
                        *(*arg2 + (rdi_8 << 3)) = rbx_13
                        
                        if ((rbx_13[0xae].d & 0x200) == 0)
                            int64_t rdi_9 = sx.q(arg3[1].d)
                            int32_t rax_47 = (rdi_9 + 1).d
                            arg3[1].d = rax_47
                            
                            if (rax_47 s> *(arg3 + 0xc))
                                sub_14083a310(arg3, rdi_9.d)
                            
                            *(*arg3 + (rdi_9 << 3)) = rbx_13
                    
                    if (var_308_1 != 0)
                        sub_140a74f90(var_308_1)
                    
                    if (var_3a8_1 != 0)
                        sub_140a74f90(var_3a8_1)
            
            r15 = arg1
        
        if (var_4e8_1 != 0)
            sub_140a74f90(var_4e8_1)
        
        rdi = var_594 + 1
        i_2 = *(r15 + 0xa8)
        rsi_1 = var_568_1 + 1
        r14 = arg3
        result = result_1
        var_594 = rdi
        var_568_1 = rsi_1
        
        if (rdi s>= i_2)
            break

__security_check_cookie(rax_1 ^ &var_5d8)
return result
