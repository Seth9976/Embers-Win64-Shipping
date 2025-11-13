// 函数: sub_141495f60
// 地址: 0x141495f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
char r15 = 0
int64_t var_18c
__builtin_memset(&var_18c, 0, 0x43)
int128_t var_1e8
__builtin_memset(&var_1e8, 0, 0x30)
int128_t var_1a0 = zx.o(0)
int16_t var_148 = 0
sub_140fdc870(arg2, &var_1e8)
char result = _mm_bsrli_si128(
    *(*(sx.q(*(*(arg1 + 0x5c0) + 0x28)) * 0x78 + arg4[0x31a] + 0x30)
        + sx.q(*(arg1 + 0x50)) * 0x10), 
    8).b

if ((result & 8) != 0)
    void* var_78_1 = nullptr
    int32_t var_68_1 = 0
    int32_t var_64_1 = 8
    char var_2b8
    void var_f8
    sub_14149e990(arg1, arg4, &var_f8, &var_2b8)
    char rcx_4 = (*(arg1 + 0x570)).b
    
    if ((rcx_4 & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rcx_4 & 0x10) == 0 || data_143f0f1c3 == 0
            || *(data_143ed96b8 + 4) == 0)
        if (arg8 == 0)
            sub_1414a16e0(arg1, arg2, arg4, arg3, arg5, &var_f8, arg7, var_2b8)
            rcx_4 = (*(arg1 + 0x570)).b
    else if (arg8 == 0)
        r15 = 1
    
    char rbx_1
    
    if (*(arg4 + 0xd34) == 0)
        rbx_1 = rcx_4
    
    int64_t rax_11
    
    if (*(arg4 + 0xd34) == 0
            && ((rcx_4 & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rcx_4 & 0x10) == 0))
        rax_11 = data_1439b54e8
    else
        rax_11 = data_1439b5500
        rbx_1 = rcx_4
    
    int64_t var_1b0_1 = rax_11
    int16_t var_14c
    var_14c.b = r15
    int64_t rax_12
    
    if (r15 != 0 || arg8 != 0)
        rax_12 = data_14395d9e8
    else if (data_1439b6e14 == arg8.d)
        rax_12 = data_1439b6898
    else
        rax_12 = data_1439b6fd0
    
    int64_t rax_13 = sub_14148ba80(arg1, arg6, arg7)
    int32_t rax_14
    
    if ((rbx_1 & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rbx_1 & 0x10) == 0)
        rax_14 = 0
    else
        rax_14 = 1
    
    int32_t var_190_1 = rax_14
    int32_t rax_15 = sub_14148c700()
    int32_t rbx_2 = rax_15
    
    if (rax_15 u> 1)
        int32_t rdx_4 = *(arg1 + 0x570)
        int32_t rax_17 = rdx_4 & 0x40
        int32_t rcx_7
        
        if (rax_17 != 0)
            rcx_7 = *(arg1 + 0x534)
        
        if ((rax_17 == 0 || rcx_7 s< 0 || (rdx_4.b & 0x10) == 0 || rcx_7 s<= 0) && rbx_2 u> 2
                && rax_17 == 0)
            TEB* gsbase
            
            if (data_143ee1bf8 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143ee1bf8)
                
                if (data_143ee1bf8 == 0xffffffff)
                    int64_t* rcx_59 = data_143db18d0
                    
                    if (rcx_59 == 0)
                        sub_140a53c40()
                        rcx_59 = data_143db18d0
                    
                    int64_t r8_8
                    r8_8.b = 1
                    int64_t* rax_56 =
                        (*(*rcx_59 + 0xb0))(rcx_59, r.Shadow.PreShadowResolutionFactor", r8_8)
                    
                    if (rax_56 != 0)
                        int64_t rdx_10 = *rax_56
                        rax_56 = (*(rdx_10 + 0x60))(rax_56, rdx_10)
                    
                    data_143ee1bf0 = rax_56
                    _Init_thread_footer(&data_143ee1bf8)
            
            int32_t rdx_5
            
            if ((*(arg1 + 0x570) & 0x800) == 0)
                rdx_5 = 0x200
            else
                int128_t zmm0_1
                zmm0_1.d = (*(data_143ee1bf0 + 4)).d f* 512f
                rdx_5 = int.d(zmm0_1.d)
            
            int32_t rax_21 = *(arg1 + 0x548)
            int32_t rcx_10 = 0
            
            while (rax_21 s< rdx_5)
                rax_21 *= 2
                rcx_10 += 1
            
            int32_t rbx_3 = rbx_2 - rcx_10
            
            if (rbx_3 s>= 3)
                rbx_2 = 5
                
                if (rbx_3 s< 5)
                    rbx_2 = rbx_3
            else
                rbx_2 = 3
    
    char var_2c8
    var_2c8.q = arg1
    var_1e8.q = data_1439c9410
    int128_t var_298 = var_1e8
    int128_t var_288
    __builtin_memset(&var_288, 0, 0x20)
    int128_t var_268_1 = rax_13.o
    int128_t var_258_1 = rax_12.o
    int128_t var_248_1 = var_1a0
    int128_t var_238_1 = var_18c:4.o
    int64_t var_178
    int128_t var_228_1 = var_178.o
    int64_t var_168
    int128_t var_218_1 = var_168.o
    int64_t var_158
    int128_t var_208_1 = var_158.o
    int64_t var_1f8_1 = var_148.q
    sub_14147e3c0(rbx_2, arg2, &var_298, arg3, arg4, arg8, var_2c8, arg7)
    
    if (r15 != 0)
        sub_141986e10(arg2, *(arg1 + 0x3d0), *(arg1 + 0x3d4), &arg4[0x50])
    
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_16[3]
    
    if (rax_24 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_16[3]
    
    *(arg2 + 0x30) = rax_24
    int64_t* rax_25 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_25 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    *rcx_16 = &data_142f18bb8
    rcx_16[2].d = 0
    char rax_27 = (*(arg1 + 0x570)).b
    int64_t* var_2d8_2
    int128_t* var_2d0_2
    
    if ((rax_27 & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rax_27 & 0x10) == 0)
        float zmm1_2[0x4] = data_143dbb1e0
        int128_t var_138
        var_2d0_2 = &var_138
        int32_t var_128_1 = 1
        int64_t* rcx_33 = data_143f0f180
        int32_t var_114_1 = (1 << (data_1439c7a34).b) - 1
        var_138 = zx.o(0)
        float var_124_1[0x4] = zmm1_2
        char var_110_1 = 0
        int64_t var_108_1 = 0
        int32_t var_100_1 = 0
        var_2d8_2.d = 4
        int64_t* var_2b0
        (*(*rcx_33 + 0x498))(rcx_33, &var_2b0, &data_143f02b98, zx.q(var_68_1 << 4), var_2d8_2, 
            var_2d0_2)
        int64_t* rcx_34 = data_143f0f180
        var_2d0_2.d = 1
        var_2d8_2.d = var_68_1 << 4
        int64_t rax_39 =
            (*(*rcx_34 + 0x130))(rcx_34, &data_143f02b98, var_2b0, 0, var_2d8_2, var_2d0_2)
        void* rdx_8 = &var_f8
        
        if (var_78_1 != 0)
            rdx_8 = var_78_1
        
        memcpy(rax_39, rdx_8, var_68_1 << 4)
        int64_t* rcx_37 = data_143f0f180
        int64_t r9_6 = (*(*rcx_37 + 0x138))(rcx_37, &data_143f02b98, var_2b0)
        int64_t* rsi_2 = var_2b0
        void*** rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_41 = &rcx_40[5]
        
        if (rax_41 u> *(arg2 + 0x38))
            r9_6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_41 = &rcx_40[5]
        
        *(arg2 + 0x30) = rax_41
        int64_t* rax_42 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_42 = rcx_40
        *(arg2 + 8) = &rcx_40[1]
        rcx_40[1] = 0
        *rcx_40 = &data_142d56618
        rcx_40[2].d = 0
        rcx_40[3] = rsi_2
        rcx_40[4].d = 0
        int64_t rsi_3 = data_1439c9150
        
        if (rsi_3 == 0)
            sub_140af98a0("Unknown", 0xbc8, 
                Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_6)
            sub_140afbb40()
        
        void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_44 = &rcx_46[6]
        
        if (rax_44 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_44 = &rcx_46[6]
        
        *(arg2 + 0x30) = rax_44
        int64_t* rax_45 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_45 = rcx_46
        *(arg2 + 8) = &rcx_46[1]
        rcx_46[1] = 0
        *rcx_46 = &data_142f11598
        rcx_46[2] = rsi_3
        rcx_46[3] = 0
        rcx_46[4] = 8
        rcx_46[5].d = 0xc
        *(rcx_46 + 0x2c) = 1
        int64_t* rbx_4 = var_2b0
        var_2b0 = nullptr
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                char rax_48
                
                if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                    rax_48 = sub_1405949a0()
                
                if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_48 != 0))
                    (**rbx_4)(rbx_4, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_4 + 0xc))
                        *(rbx_4 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_4 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_50 = sub_140a20af0()
                        uint64_t rdx_9 = zx.q(rax_50)
                        void* const rax_51
                        
                        if (rax_50 != 0)
                            rax_51 = *(&data_143cf0bf8 + (rdx_9 u>> 0xe << 3))
                                + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                        else
                            rax_51 = nullptr
                        
                        *(rax_51 + 8) = rbx_4
                        sub_1405a42f0(&data_143f02390, rdx_9.d)
        
        result = sub_1405d1550(&var_2b0)
    else
        int64_t rsi_1 = data_1439c91b0
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_28 = &rcx_22[5]
        
        if (rax_28 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_28 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_28
        int64_t* rax_29 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_29 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d56618
        rcx_22[2].d = 0
        rcx_22[3] = rsi_1
        rcx_22[4].d = 0
        void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_31 = &rcx_28[4]
        
        if (rax_31 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x28)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_31 = &rcx_28[4]
        
        *(arg2 + 0x30) = rax_31
        int64_t* rax_32 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_32 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[1] = 0
        result = -0x78
        *rcx_28 = &data_142d54988
        rcx_28[2].d = 0
        *(rcx_28 + 0x14) = 2
        rcx_28[3].d = 1
    
    if (r15 == 0 && arg8 == 0 && data_1439b6e14 == 0)
        char var_2c0_2
        var_2c0_2.d = 0
        var_2d0_2.d = zx.o(0).d
        var_2d8_2.b = 0
        result = sub_14199cb60(arg2, 0, 1, &data_143dbb1e0, var_2d8_2.b, var_2d0_2.d, 1, var_2c0_2)
    
    if (var_78_1 != 0)
        result = sub_140a74f90(var_78_1)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
