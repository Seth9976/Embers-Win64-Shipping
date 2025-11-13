// 函数: sub_1413ccf90
// 地址: 0x1413ccf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t result = __security_cookie ^ &var_308
int64_t result_1 = result

if ((*(arg2 + 0x9c) & 8) != 0)
    int64_t* rcx = *(arg2 + 0x78)
    int512_t zmm0_1
    result, zmm0_1 = sub_1413edd80((*(*rcx + 0x40))(rcx))
    
    if (result.b != 0)
        uint64_t rdx = zx.q(arg1[3].d)
        int32_t i = 0
        int64_t* r13_1 = *(arg2 + 0x80)
        int64_t* var_298 = nullptr
        int64_t* rax_4 = (*(*r13_1 + 0x40))(r13_1, rdx, &var_298)
        int64_t* rcx_3 = var_298
        int64_t rdx_1 = *rax_4
        
        if (rcx_3 != 0)
            r13_1 = rcx_3
        
        (*(rdx_1 + 0x1d8))(rax_4, rdx_1)
        int64_t r8_1 = *rax_4
        char var_2b4
        result = (*(r8_1 + 0x1e8))(rax_4, &var_2b4, r8_1)
        
        if (arg4 == 0 || *(arg4 + 0x37) s< 0)
            result = (*(*rax_4 + 0x20))(rax_4)
            
            if (result.d != 3)
                TEB* gsbase
                void* rax_7 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                char r12_1 = not.b(var_2b4) & 1
                void* var_2a8 = rax_7
                
                if (data_143ecc158 s> *(rax_7 + 0x14))
                    int64_t r8_5
                    r8_5, zmm0_1 = _Init_thread_header(&data_143ecc158)
                    
                    if (data_143ecc158 == 0xffffffff)
                        int64_t* rcx_18 = data_143db18d0
                        
                        if (rcx_18 == 0)
                            sub_140a53c40()
                            rcx_18 = data_143db18d0
                        
                        r8_5.b = 1
                        int64_t* rax_25 = (*(*rcx_18 + 0xb0))(rcx_18, r.AllowStaticLighting", r8_5)
                        int64_t rax_26
                        
                        if (rax_25 == 0)
                            rax_26 = 0
                        else
                            int64_t rdx_6 = *rax_25
                            rax_26 = (*(rdx_6 + 0x58))(rax_25, rdx_6)
                        
                        data_143ecc150 = rax_26
                        _Init_thread_footer(&data_143ecc158)
                
                void* rax_9 = data_143ecc150
                char var_2b8_1
                int128_t* rcx_8
                int128_t var_118
                
                if (rax_9 == 0 || *(rax_9 + 4) != 0)
                    void* rcx_11 = *(arg2 + 0x88)
                    var_2b8_1 = 1
                    
                    if (rcx_11 == 0 || r12_1 == 0)
                        goto label_1413cd0e0
                    
                    arg1[3].d
                    int128_t* rax_13
                    rax_13, zmm0_1 = sub_1422e4ff0(rcx_11, &var_118)
                    rcx_8 = rax_13
                else
                    var_2b8_1 = 0
                label_1413cd0e0:
                    zmm0_1.o = data_142d3f660
                    rcx_8 = &var_118
                    __builtin_memcpy(&var_118, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f", 
                        0x40)
                    zmm0_1.o = zx.o(0)
                    int128_t var_d8
                    __builtin_memset(&var_d8, 0, 0x20)
                    zmm0_1.o = data_142d3f660
                    int128_t var_b8
                    __builtin_memcpy(&var_b8, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f", 
                        0x40)
                    int64_t var_78_1 = 0
                    int32_t var_68_1 = 0
                zmm0_1.o = *rcx_8
                int128_t var_238_1 = zmm0_1.o
                zmm0_1.o = rcx_8[2]
                int128_t var_228_1 = rcx_8[1]
                int128_t var_218_1 = zmm0_1.o
                zmm0_1.o = rcx_8[4]
                int128_t var_208_1 = rcx_8[3]
                int128_t var_1f8_1 = zmm0_1.o
                zmm0_1.o = rcx_8[6]
                int128_t var_1e8_1 = rcx_8[5]
                int128_t var_1d8_1 = zmm0_1.o
                zmm0_1.o = rcx_8[7]
                int128_t var_1c8_1 = zmm0_1.o
                zmm0_1.o = rcx_8[9]
                int128_t var_1b8_1 = rcx_8[8]
                int128_t var_1a8_1 = zmm0_1.o
                zmm0_1.o = rcx_8[0xb]
                int72_t var_198_1 = rcx_8[0xa].9
                int32_t var_188_1 = zmm0_1.d
                int128_t var_178_1 = rcx_8[0xc]
                char rax_10 = sub_1423d2320(arg1[3].d)
                char var_2b0_1
                
                if (rax_10 != 0)
                    var_2b0_1 = 1
                
                if (rax_10 == 0 || var_198_1:8.b == 0)
                    var_2b0_1 = 0
                
                int64_t rcx_10
                
                if (data_143ecc168 s> *(var_2a8 + 0x14))
                    int64_t r8_6
                    rcx_10, r8_6, zmm0_1 = _Init_thread_header(&data_143ecc168)
                    
                    if (data_143ecc168 == 0xffffffff)
                        int64_t* rcx_20 = data_143db18d0
                        
                        if (rcx_20 == 0)
                            sub_140a53c40()
                            rcx_20 = data_143db18d0
                        
                        r8_6.b = 1
                        int64_t* rax_28 =
                            (*(*rcx_20 + 0xb0))(rcx_20, r.SupportLowQualityLightmaps", r8_6)
                        int64_t rax_29
                        
                        if (rax_28 == 0)
                            rax_29 = 0
                        else
                            int64_t rdx_7 = *rax_28
                            rax_29 = (*(rdx_7 + 0x58))(rax_28, rdx_7)
                        
                        data_143ecc160 = rax_29
                        rcx_10, zmm0_1 = _Init_thread_footer(&data_143ecc168)
                
                void* rax_15 = data_143ecc160
                var_2a8 = rax_15
                
                if (rax_15 == 0)
                    rcx_10.b = 1
                else
                    if (data_143de5480 == 0)
                        rcx_10 = 0
                    else
                        bool cond:2_1 = GetCurrentThreadId() != data_143de5470
                        rax_15 = var_2a8
                        rcx_10.b = cond:2_1
                    
                    if (*(rax_15 + (rcx_10 << 2)) != 0)
                        rcx_10.b = 1
                    else
                        rcx_10.b = 0
                
                int64_t* var_2e8_1
                int64_t* var_2e0_1
                int16_t var_2d8_1
                int64_t* var_2d0_1
                int64_t* rcx_15
                void* rdx_5
                int64_t r8_4
                void* r9
                void* rax_18
                
                if (var_188_1 == 2)
                    if (var_2b0_1 == 0)
                        var_2a8.d = 0xa
                        rax_18 = arg2 + 0x88
                        
                        if (rcx_10.b != 0)
                            goto label_1413cd3d5
                        
                        goto label_1413cd3d1
                    
                    void* rcx_14
                    void* r12_2
                    
                    if (var_2b8_1 != 0)
                        r12_2 = arg2 + 0x88
                        rcx_14 = *r12_2
                    
                    int128_t* rax_19
                    int128_t var_168
                    
                    if (var_2b8_1 == 0 || rcx_14 == 0 || r12_1 == 0)
                        zmm0_1.o = zx.o(0)
                        var_168 = zmm0_1.o
                        int128_t var_138
                        __builtin_memset(&var_138, 0, 0x14)
                        void var_147
                        void* rax_20 = &var_147
                        
                        do
                            i += 4
                            *(rax_20 - 1) = 0
                            rax_20 += 4
                        while (i u< 4)
                        
                        rax_19 = &var_168
                        r12_2 = arg2 + 0x88
                    else
                        arg1[3].d
                        rax_19, zmm0_1 = sub_1422e5a50(rcx_14, &var_168)
                    r9 = arg4
                    r8_4 = arg3
                    void* var_2c8_1 = r12_2
                    var_2d0_1 = &var_2a8
                    rdx_5 = arg2
                    rcx_15 = arg1
                    var_2d8_1 = var_2b4.w
                    var_2e0_1 = rax_4
                    var_2e8_1 = r13_1
                    
                    if (rax_19[4].d != 2)
                        var_2a8.d = 0xb
                    else
                        var_2a8.d = 0xc
                else
                    if (r12_1 != 0 && var_2b8_1 != 0)
                        void* rcx_12 = arg1[1]
                        
                        if (rcx_12 == 0)
                            goto label_1413cd2dd
                        
                        if (sub_1413ebdc0(rcx_12 + 0x12c0) == 0 || arg4 == 0 || (
                                *(arg4 + 0x32) - 1 u> 1 && (*(arg4 + 0x38) & 0x40) == 0
                                && *(arg4 + 0x33) != 2))
                            goto label_1413cd2dd
                        
                        var_2a8.d = 1
                        rax_18 = arg2 + 0x88
                        goto label_1413cd3d5
                    
                label_1413cd2dd:
                    rax_18 = arg2 + 0x88
                label_1413cd3d1:
                    var_2a8.d = 0
                label_1413cd3d5:
                    r8_4 = arg3
                    rcx_15 = arg1
                    void* var_2c8_2 = rax_18
                    rdx_5 = arg2
                    r9 = arg4
                    var_2d0_1 = &var_2a8
                    var_2d8_1 = var_2b4.w
                    var_2e0_1 = rax_4
                    var_2e8_1 = r13_1
                result = sub_1413ef830(rcx_15, rdx_5, r8_4, r9, zmm0_1, var_2e8_1, var_2e0_1, 
                    var_2d8_1, var_2d0_1)

__security_check_cookie(result_1 ^ &var_308)
return result
