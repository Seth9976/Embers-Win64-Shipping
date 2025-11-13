// 函数: sub_14108e980
// 地址: 0x14108e980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
uint64_t result = __security_cookie ^ &var_358
uint64_t result_1 = result

if ((*(arg2 + 0x9c) & 8) != 0)
    int64_t* r12_1 = *(arg2 + 0x80)
    uint64_t rdx = zx.q(*(arg1 + 0x10))
    int32_t i = 0
    int64_t* var_2a8 = nullptr
    int64_t* rax_2 = (*(*r12_1 + 0x40))(r12_1, rdx, &var_2a8)
    int64_t* rcx_1 = var_2a8
    int64_t rdx_1 = *rax_2
    
    if (rcx_1 != 0)
        r12_1 = rcx_1
    
    int32_t rax_3 = (*(rdx_1 + 0x1d8))(rax_2, rdx_1)
    int64_t r8_1 = *rax_2
    char var_2e8
    (*(r8_1 + 0x1e8))(rax_2, &var_2e8, r8_1)
    int64_t r13
    r13.b = rax_3 u> 1
    char var_2cc_1 = r13.b
    int64_t var_2a0 = sub_141261c60(arg2)
    int32_t rax_5 = sub_141261c10(arg2, rax_2, &var_2a0)
    result = sub_141261bd0(arg2, rax_2, &var_2a0)
    int32_t var_2d8_1 = result.d
    
    if (*(arg1 + 0x6c) == 0)
        result.b = r13.b ^ 1
    label_14108eb0b:
        
        if (result.b != 0)
        label_14108eb13:
            
            if (arg4 == 0 || *(arg4 + 0x37) s< 0)
                result = (*(*rax_2 + 0x20))(rax_2)
                
                if (result.d != 3)
                    result = (*(*rax_2 + 0x290))(rax_2)
                    
                    if (result.b == 0)
                        bool var_2e0
                        result = (*(*rax_2 + 0x1e8))(rax_2, &var_2e0)
                        
                        if (((*result u>> 0xa).b & 1) == 0)
                            char r12_3 = not.b(var_2e8) & 1
                            TEB* gsbase
                            void* rax_14 =
                                *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                            void* var_2b8 = rax_14
                            char var_2dc = r12_3
                            
                            if (data_143e38b10 s> *(rax_14 + 0x14))
                                _Init_thread_header(&data_143e38b10)
                                
                                if (data_143e38b10 == 0xffffffff)
                                    int64_t* rcx_46 = data_143db18d0
                                    
                                    if (rcx_46 == 0)
                                        sub_140a53c40()
                                        rcx_46 = data_143db18d0
                                    
                                    int64_t r8_15
                                    r8_15.b = 1
                                    int64_t* rax_63 =
                                        (*(*rcx_46 + 0xb0))(rcx_46, r.AllowStaticLighting", r8_15)
                                    int64_t rax_64
                                    
                                    if (rax_63 == 0)
                                        rax_64 = 0
                                    else
                                        int64_t rdx_31 = *rax_63
                                        rax_64 = (*(rdx_31 + 0x58))(rax_63, rdx_31)
                                    
                                    data_143e38b08 = rax_64
                                    _Init_thread_footer(&data_143e38b10)
                            
                            void* rax_16 = data_143e38b08
                            char var_2e4_1
                            int128_t* rcx_20
                            int128_t var_118
                            
                            if (rax_16 == 0 || *(rax_16 + 4) != 0)
                                void* rcx_27 = *(arg2 + 0x88)
                                var_2e4_1 = 1
                                
                                if (rcx_27 == 0 || r12_3 == 0)
                                    goto label_14108ebd7
                                
                                *(arg1 + 0x10)
                                rcx_20 = sub_1422e4ff0(rcx_27, &var_118)
                            else
                                var_2e4_1 = 0
                            label_14108ebd7:
                                rcx_20 = &var_118
                                __builtin_memcpy(&var_118, 
                                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                                    0x40)
                                int128_t var_d8
                                __builtin_memset(&var_d8, 0, 0x20)
                                data_142d3f660
                                int128_t var_b8
                                __builtin_memcpy(&var_b8, 
                                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                                    0x40)
                                int64_t var_78_1 = 0
                                int32_t var_68_1 = 0
                            int128_t zmm1 = rcx_20[1]
                            int128_t var_238 = *rcx_20
                            int128_t var_228_1 = zmm1
                            int128_t var_218_1 = rcx_20[2]
                            int128_t var_208_1 = rcx_20[3]
                            int128_t var_1f8_1 = rcx_20[4]
                            int128_t var_1e8_1 = rcx_20[5]
                            int128_t var_1d8_1 = rcx_20[6]
                            int128_t var_1c8_1 = rcx_20[7]
                            int128_t var_1b8_1 = rcx_20[8]
                            int128_t var_1a8_1 = rcx_20[9]
                            int72_t var_198_1 = rcx_20[0xa].9
                            int32_t var_188_1 = rcx_20[0xb].d
                            int128_t var_178_1 = rcx_20[0xc]
                            char rax_17 = sub_1423d2320(*(arg1 + 0x10))
                            
                            if (rax_17 != 0)
                                var_2e0 = true
                            
                            if (rax_17 == 0 || var_198_1:8.b == 0)
                                var_2e0 = false
                            
                            void* rcx_22 = *(arg1 + 8)
                            char var_2da_1
                            
                            if (rcx_22 != 0)
                                var_2da_1 = 1
                            
                            if (rcx_22 == 0 || *(rcx_22 + 0x1148) s<= 0)
                                var_2da_1 = 0
                            
                            char var_2db_1
                            char rax_18
                            
                            if (rcx_22 != 0)
                                rax_18 = sub_1413ebdc0(rcx_22 + 0x12c0)
                                var_2db_1 = 1
                            
                            if (rcx_22 == 0 || rax_18 == 0)
                                var_2db_1 = 0
                            
                            void* rdx_8 = *(arg1 + 0x18)
                            char var_330_1 = 1
                            int128_t var_298 = zx.o(0)
                            sub_141458e70(&var_298, rdx_8, arg4, arg2, arg5, var_330_1)
                            int32_t var_338_1
                            
                            if (sub_1419a4830((*U"1111")[sx.q(*(arg1 + 0x10))]) != 0)
                                var_330_1.q = r12_1
                                var_338_1.q = arg4
                                result = sub_14108f420(arg1, arg2, arg3, arg5, var_338_1, 
                                    var_330_1, rax_2, &var_238, r12_3, var_2e4_1, var_2db_1, 
                                    var_2da_1, rax_5, var_2d8_1)
                            else
                                char var_318
                                char var_310
                                char var_308
                                char var_300
                                
                                if (r12_3 == 0 || var_2cc_1 == 0 || arg4 == 0
                                        || (*(arg4 + 0x39) & 0x20) == 0)
                                    int64_t rcx_37
                                    
                                    if (data_143e38b20 s> *(var_2b8 + 0x14))
                                        int64_t r8_16
                                        rcx_37, r8_16 = _Init_thread_header(&data_143e38b20)
                                        
                                        if (data_143e38b20 == 0xffffffff)
                                            int64_t* rcx_48 = data_143db18d0
                                            
                                            if (rcx_48 == 0)
                                                sub_140a53c40()
                                                rcx_48 = data_143db18d0
                                            
                                            r8_16.b = 1
                                            int64_t* rax_66 = (*(*rcx_48 + 0xb0))(rcx_48, 
                                                r.SupportLowQualityLightmaps", r8_16)
                                            int64_t rax_67
                                            
                                            if (rax_66 == 0)
                                                rax_67 = 0
                                            else
                                                int64_t rdx_32 = *rax_66
                                                rax_67 = (*(rdx_32 + 0x58))(rax_66, rdx_32)
                                            
                                            data_143e38b18 = rax_67
                                            _Init_thread_footer(&data_143e38b20)
                                    
                                    void* rax_44 = data_143e38b18
                                    var_2b8 = rax_44
                                    
                                    if (rax_44 == 0)
                                        rcx_37.b = 1
                                    else
                                        if (data_143de5480 == 0)
                                            rcx_37 = 0
                                        else
                                            bool cond:3_1 = GetCurrentThreadId() != data_143de5470
                                            rax_44 = var_2b8
                                            rcx_37.b = cond:3_1
                                        
                                        if (*(rax_44 + (rcx_37 << 2)) != 0)
                                            rcx_37.b = 1
                                        else
                                            rcx_37.b = 0
                                    
                                    int64_t* var_328_5
                                    int32_t var_320
                                    int32_t var_2f8_5
                                    void* rcx_43
                                    void* rdx_28
                                    int64_t r8_14
                                    int32_t r9_6
                                    void* rax_47
                                    
                                    if (var_188_1 == 2)
                                        if (var_2e0 == 0)
                                            var_2e0.d = 0xa
                                            rax_47 = arg2 + 0x88
                                            
                                            if (rcx_37.b != 0)
                                                goto label_14108f2a8
                                            
                                            goto label_14108f2a0
                                        
                                        void* rcx_42
                                        void* r12_5
                                        
                                        if (var_2e4_1 != 0)
                                            r12_5 = arg2 + 0x88
                                            rcx_42 = *r12_5
                                        
                                        int128_t* rax_53
                                        int128_t var_168
                                        
                                        if (var_2e4_1 == 0 || rcx_42 == 0 || var_2dc == 0)
                                            var_168 = zx.o(0)
                                            int128_t var_138
                                            __builtin_memset(&var_138, 0, 0x14)
                                            void var_147
                                            void* rax_54 = &var_147
                                            
                                            do
                                                i += 4
                                                *(rax_54 - 1) = 0
                                                rax_54 += 4
                                            while (i u< 4)
                                            
                                            rax_53 = &var_168
                                            r12_5 = arg2 + 0x88
                                        else
                                            *(arg1 + 0x10)
                                            rax_53 = sub_1422e5a50(rcx_42, &var_168)
                                        r9_6 = arg5
                                        r8_14 = arg3
                                        var_2f8_5 = var_2d8_1
                                        rcx_43 = arg1
                                        var_300.d = rax_5
                                        rdx_28 = arg2
                                        var_308.q = r12_5
                                        var_310.q = &var_2e0
                                        var_318.w = var_2e8.w
                                        var_320 = rax_3
                                        var_328_5 = rax_2
                                        var_330_1.q = r12_1
                                        var_338_1.q = arg4
                                        
                                        if (rax_53[4].d != 2)
                                            var_2e0.d = 0xb
                                        else
                                            var_2e0.d = 0xc
                                    else
                                        if (r12_3 != 0)
                                            if (var_2e4_1 != 0)
                                                void* rcx_38 = *(arg1 + 8)
                                                
                                                if (rcx_38 != 0
                                                        && sub_1413ebdc0(rcx_38 + 0x12c0) != 0
                                                        && arg4 != 0 && (*(arg4 + 0x32) - 1 u<= 1
                                                        || (*(arg4 + 0x38) & 0x40) != 0
                                                        || *(arg4 + 0x33) == 2))
                                                    var_2e0.d = 1
                                                    rax_47 = arg2 + 0x88
                                                    goto label_14108f2a8
                                            
                                            *(arg1 + 0x10)
                                            
                                            if (sub_14122ca50() == 0)
                                                goto label_14108f18e
                                            
                                            void* rax_49 = *(arg1 + 8)
                                            
                                            if (rax_49 == 0 || *(rax_49 + 0x1148) s<= 0
                                                    || arg4 == 0)
                                                goto label_14108f18e
                                            
                                            void* r12_4 = *(*(arg4 + 0x110) + 0x68)
                                            bool rax_51 = *(arg4 + 0x32) - 1 u<= 1
                                            var_2e0 = rax_51
                                            
                                            if (*(arg4 + 0x40) == 0)
                                                goto label_14108f18e
                                            
                                            if (r12_4 == 0 || *(r12_4 + 0x30) s< 0
                                                    || *(r12_4 + 0x34) s< 0
                                                    || *(r12_4 + 0x38) s< 0)
                                                if (rax_51 == 0)
                                                    goto label_14108f18e
                                            else if (*(r12_4 + 0x3c) s<= 0 && rax_51 == 0)
                                                goto label_14108f18e
                                            
                                            if (sub_14121efe0(*(arg1 + 0x10)) == 0 || var_2cc_1 != 0
                                                    || ((r12_4 == 0 || *(r12_4 + 0x181) != 0)
                                                    && (var_2e0 == 0 || *(arg4 + 0x40) != 2)))
                                                var_2e0.d = 3
                                                rax_47 = arg2 + 0x88
                                            else
                                                var_2e0.d = 2
                                                rax_47 = arg2 + 0x88
                                            
                                            goto label_14108f2a8
                                        
                                    label_14108f18e:
                                        rax_47 = arg2 + 0x88
                                    label_14108f2a0:
                                        var_2e0.d = 0
                                    label_14108f2a8:
                                        rcx_43 = arg1
                                        r8_14 = arg3
                                        r9_6 = arg5
                                        var_2f8_5 = var_2d8_1
                                        var_300.d = rax_5
                                        rdx_28 = arg2
                                        var_308.q = rax_47
                                        var_310.q = &var_2e0
                                        var_318.w = var_2e8.w
                                        var_320 = rax_3
                                        var_328_5 = rax_2
                                        var_330_1.q = r12_1
                                        var_338_1.q = arg4
                                    result = sub_14107eb00(rcx_43, rdx_28, r8_14, r9_6, var_338_1, 
                                        var_330_1, var_328_5, var_320, var_318, var_310, var_308, 
                                        var_300, var_2f8_5)
                                else
                                    void* r9_2 = *(arg1 + 0x18)
                                    void* const rcx_32
                                    
                                    if (*(r9_2 + 0x1760) == *(r9_2 + 0x178c))
                                    label_14108eea0:
                                        rcx_32 = nullptr
                                    else
                                        void* r8_8 = r9_2 + 0x1790
                                        void* rdx_13 = *(r8_8 + 8)
                                        int64_t r10_1 = sx.q(*(*(arg4 + 0x110) + 0x110))
                                        
                                        if (rdx_13 != 0)
                                            r8_8 = rdx_13
                                        
                                        int32_t rax_28 =
                                            *(r8_8 + (((sx.q(*(r9_2 + 0x17a0)) - 1) & r10_1) << 2))
                                        
                                        if (rax_28 == 0xffffffff)
                                        label_14108eea0_1:
                                            rcx_32 = nullptr
                                        else
                                            int64_t r8_9 = *(r9_2 + 0x1758)
                                            
                                            while (true)
                                                int64_t rdx_14 = sx.q(rax_28) * 3
                                                rcx_32 = r8_9 + (rdx_14 << 3)
                                                
                                                if (*(r8_9 + (rdx_14 << 3)) == r10_1.d)
                                                    break
                                                
                                                rax_28 = *(rcx_32 + 0x10)
                                                
                                                if (rax_28 == 0xffffffff)
                                                    goto label_14108eea0_2
                                            
                                            if (rax_28 == 0xffffffff)
                                            label_14108eea0_2:
                                                rcx_32 = nullptr
                                    
                                    void* rdx_15 = rcx_32 + 8
                                    var_2b8 = *(arg2 + 0x88)
                                    
                                    if (rcx_32 == 0)
                                        rdx_15 = nullptr
                                    
                                    int64_t rax_30
                                    
                                    if (rdx_15 == 0)
                                        rax_30 = data_1439b6e38
                                    else
                                        rax_30 = *rdx_15
                                    
                                    int64_t var_2b0 = rax_30
                                    
                                    if (var_2e4_1 == 0 || var_2db_1 == 0)
                                        *(arg1 + 0x10)
                                        
                                        if (sub_14122ca50() == 0 || var_2da_1 == 0)
                                            var_300.d = rax_5
                                            var_308.q = &var_2b0
                                            var_310.q = &var_2dc
                                            var_318.w = var_2e8.w
                                            var_330_1.q = r12_1
                                            var_338_1.q = arg4
                                            result = sub_14107e500(arg1, arg2, arg3, arg5, 
                                                var_338_1, var_330_1, rax_2, rax_3, var_318, 
                                                var_310, var_308, var_300, var_2d8_1)
                                        else
                                            var_300.d = rax_5
                                            var_308.q = &var_2b8
                                            var_310.q = &var_2dc
                                            var_318.w = var_2e8.w
                                            var_330_1.q = r12_1
                                            var_338_1.q = arg4
                                            result = sub_14107e200(arg1, arg2, arg3, arg5, 
                                                var_338_1, var_330_1, rax_2, rax_3, var_318, 
                                                var_310, var_308, var_300, var_2d8_1)
                                    else
                                        var_300.d = rax_5
                                        var_308.q = &var_2b8
                                        var_310.q = &var_2dc
                                        var_318.w = var_2e8.w
                                        var_330_1.q = r12_1
                                        var_338_1.q = arg4
                                        result = sub_14107e800(arg1, arg2, arg3, arg5, var_338_1, 
                                            var_330_1, rax_2, rax_3, var_318, var_310, var_308, 
                                            var_300, var_2d8_1)
    else if (r13.b != 0)
        int64_t rdx_5 = *rax_2
        result = (*(rdx_5 + 0xa0))(rax_2, rdx_5)
        
        if (result.b == 0)
            int32_t rcx_8 = *(arg1 + 0x68)
            
            if (rcx_8 == 0)
                result.b = (*(*rax_2 + 0x248))(rax_2).b == 0
                goto label_14108eb0b
            
            if (rcx_8 == 1)
                result = (*(*rax_2 + 0x248))(rax_2)
                goto label_14108eb0b
            
            if (rcx_8 == 2)
                result = (*(*rax_2 + 0x248))(rax_2)
                
                if (result.b != 0)
                    int64_t r8_4 = *rax_2
                    result = (*(r8_4 + 0x250))(rax_2, zx.q((*U"1111")[sx.q(*(arg1 + 0x10))]), r8_4)
                    
                    if (result.b != 0 || rax_3 == 4)
                        goto label_14108eb13
            else if (rcx_8 == 3)
                goto label_14108eb13

__security_check_cookie(result_1 ^ &var_358)
return result
