// 函数: sub_1413d3660
// 地址: 0x1413d3660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
int32_t r10 = data_1439b6b98
int32_t rax_2

if (r10 s>= 1)
    rax_2 = 8
    
    if (r10 s< 8)
        rax_2 = r10
else
    rax_2 = 1

int128_t zmm7 = arg6
int32_t i = 0
int32_t r13_1 = rax_2 * arg3
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* _mm_cvtepi32_ps(zx.o(arg3)).d
int128_t zmm8
zmm8.d = 0.99999994f f/ zmm1.d
zmm8.d = zmm8.d f* zmm1.d
int64_t result

do
    if (arg4 == 0)
        char rax_3 = sub_140a80f40()
        
        if (rax_3 != 0)
            data_14399fa54 += 1
            sub_1419668e0(&data_143f02b98)
        else if (data_143f138f4 != rax_3)
        label_1413d3789:
            void var_2e0
            void** rax_5 = sub_1413d9b80(&var_2e0, nullptr, 0xff)
            void* rcx_7 = *rax_5
            int32_t r8 = rax_5[2].d
            int64_t* rdx = rax_5[1]
            int64_t* rbx_1 = *(rcx_7 + 0x18)
            int64_t* var_4a0_1 = rbx_1
            void* rdi_1 = &rbx_1[9]
            
            if (rbx_1 != 0)
                *rdi_1 += 1
                rbx_1 = var_4a0_1
            
            sub_1405a5890(rcx_7, rdx, r8, 1)
            
            if (rbx_1 != 0)
                int32_t rax_6 = *rdi_1
                *rdi_1 -= 1
                
                if (rax_6 == 1)
                    sub_140a2f6e0(var_4a0_1)
        else if (data_143de5480 == rax_3)
            data_14399fa54 += 1
            sub_1419668e0(&data_143f02b98)
        else
            uint32_t rax_4
            rax_4.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_4.b == 0)
                goto label_1413d3789
            
            data_14399fa54 += 1
            sub_1419668e0(&data_143f02b98)
    
    uint128_t zmm0 = data_142d3f660
    int32_t var_434
    int32_t rbx_4 = (var_434 & 0xffffffe8) | 8
    data_1439b6c48 = arg3
    char const (** var_468_1)[0x4] = &data_1439b6c38
    int64_t var_458_1 = -0x7000000000001
    int32_t rax_7 = rbx_4
    int64_t* var_460_1 = arg1
    int32_t var_450_1 = 0xffffffff
    int64_t var_44c_1 = 0
    uint128_t var_444_1 = zmm0
    
    if (arg1 != 0)
        void* rax_9 = (*(*arg1 + 0x240))(arg1)
        rax_7 = rbx_4
        
        if (rax_9 != 0)
            bool rcx_10
            
            if (data_143de5480 == 0)
                rcx_10 = true
            else
                rcx_10 = GetCurrentThreadId() == data_143de5470
            
            rax_7 = rbx_4
            
            if (rcx_10 != 0)
                rax_7 |= 0x10
                var_444_1.d = (*(rax_9 + 0x520)).d
                var_444_1:8.d = (*(rax_9 + 0x528)).d
                var_444_1:4.d = (*(rax_9 + 0x530)).d
    
    var_434 = rax_7 & 0xfffffff7
    uint128_t var_3d8 = var_468_1.o
    uint128_t var_3c8_1 = var_458_1.o
    uint128_t var_3b8_1 = var_44c_1:4.o
    
    if (arg5 != 0)
        uint64_t var_3a8_1
        var_3a8_1:4.d = var_444_1:0xc.q:4.d | 0x10
        var_3b8_1:4.q = 0
        var_3b8_1:0xc.d = 0
    
    int64_t var_398
    sub_1422d9ba0(&var_398, &var_3d8)
    float zmm0_1[0x4] = data_14399f5c0
    int32_t var_370 = var_370 & 0xeffb7bfe
    int64_t var_1b0_1 = 0
    int32_t var_36c =
        (((var_36c & 0xfff6effd) | (zx.d(arg4) ^ 1) << 0x13) & 0xffffffdf) | (zx.d(arg8) ^ 1) << 5
    int64_t* var_1b8_1 = &var_398
    int64_t var_1a8_1 = 0
    int32_t var_1a0_1 = 0xffffffff
    int64_t var_198_1 = 0
    int64_t var_160_1 = 0
    int32_t var_158_1 = 0x42c80000
    int64_t var_150
    __builtin_memset(&var_150, 0, 0x2c)
    int32_t var_124_1 = 0x80
    int32_t var_120_1 = 0xffffffff
    int32_t var_11c_1 = 0
    int64_t var_110_1 = 0
    int32_t var_108_1 = 0
    char var_b0_1 = 0
    int64_t var_a8_1 = -1
    int32_t var_a0_1 = 0x3f800000
    int32_t var_9c_1 = 0xbf800000
    int64_t var_98_1 = 0
    int32_t var_90_1 = 0
    int16_t var_8c_1 = 0x100
    int32_t var_88_1 = 0x42b40000
    int32_t var_84_1 = 0x42b40000
    int64_t var_1d8_1 = 0
    int32_t var_1d0_1 = r13_1
    int32_t var_1cc_1 = r13_1
    int64_t var_1c8_1 = 0
    int32_t var_1c0_1 = r13_1
    int32_t var_1bc_1 = r13_1
    float var_170_1[0x4] = zmm0_1
    zmm0_1 = data_14399f5e0
    float var_190_1[0x4] = zmm0_1
    float var_180_1[0x4] = zmm0_1
    int32_t zmm2
    
    if (arg4 == 0)
        zmm2 = data_1439b6b94
    else
        zmm2 = zmm7.d
    
    zmm0_1 = data_142f79450
    zmm1 = data_142d3f660
    float var_418_1[0x4] = zmm0_1
    float var_218_1[0x4] = zmm0_1
    int32_t rax_17 = arg2[1].d
    int64_t var_400_1 = 0
    zmm0_1 = 0.o
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    temp0_3[0] = zmm8.d
    int64_t var_3e8_1 = 0
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
    int32_t var_408_1
    var_408_1.o = temp0_4
    float var_208_1[0x4] = temp0_4
    int32_t var_3dc_1 = 0
    zmm0_1 = var_3e8_1.o
    float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
    temp0_5[0] = zmm2
    uint128_t var_3f8_1 = zmm1
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
    var_3e8_1.o = temp0_6
    float var_1e8_1[0x4] = temp0_6
    int64_t var_268 = *arg2
    uint128_t var_1f8_1 = zmm1
    int32_t var_260_1 = rax_17
    void var_2a8
    int128_t* rax_18 = sub_1413d30c0(&var_2a8, i)
    int128_t var_258_1 = *rax_18
    int128_t var_248_1 = rax_18[1]
    int128_t var_238_1 = rax_18[2]
    int128_t var_228_1 = rax_18[3]
    int64_t* rax_19 = j_sub_140a82f30(0x15a0)
    int64_t* rbx_5
    
    if (rax_19 == 0)
        rbx_5 = nullptr
    else
        rbx_5 = sub_1422d8af0(rax_19, &var_268)
    
    rbx_5[0x166] = 0x3f800000
    
    if (arg8 != 0)
        __builtin_memset(&rbx_5[0x160], 0, 0x20)
    
    uint128_t zmm0_3 = zx.o(*arg2)
    *(rbx_5 + 0xd79) = arg5
    int32_t var_420_1 = arg2[1].d
    *(rbx_5 + 0xd74) = 1
    uint64_t var_428 = zmm0_3.q
    sub_1422f5770(rbx_5, &var_428)
    int32_t zmm6_1 = sub_1422e2840(rbx_5)
    int32_t var_390
    int64_t rdi_4 = sx.q(var_390)
    int32_t rax_23 = (rdi_4 + 1).d
    var_390 = rax_23
    int32_t var_38c
    
    if (rax_23 s> var_38c)
        sub_1405a4d70(&var_398)
    
    *(var_398 + (rdi_4 << 3)) = rbx_5
    void*** rax_25 = j_sub_140a82f30(0x20)
    void*** rbx_6 = rax_25
    
    if (rax_25 == 0)
        rbx_6 = nullptr
    else
        sub_1420d8740(rax_25, &var_398, zmm6_1, 0, zmm6_1)
        *rbx_6 = &data_1432c1410
    
    void*** var_310_1 = rbx_6
    int64_t* rax_26
    rax_26, zmm7, zmm8 = sub_14141b270(&var_398)
    char var_47f_1 = arg7
    int32_t i_1 = i
    int32_t var_484_1 = arg3
    uint128_t var_47c = *arg9
    int32_t var_4d8
    
    if (sub_140a80f40() == 0)
        uint32_t rax_31
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_31.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_31.b == 0))
            void var_2c8
            void** rax_33 = sub_1413d9cd0(&var_2c8, nullptr, 0xff)
            void* rcx_20 = *rax_33
            *(rcx_20 + 0x10) = rax_26.o
            uint128_t zmm0_5 = zx.o(var_47c:0xc.q)
            *(rcx_20 + 0x20) = arg4.o
            *(rcx_20 + 0x30) = zmm0_5.q
            void* rcx_21 = *rax_33
            int32_t r8_3 = rax_33[2].d
            int64_t* rdx_10 = rax_33[1]
            int64_t* rbx_7 = *(rcx_21 + 0x40)
            int64_t* var_498_1 = rbx_7
            int32_t* rdi_6 = &rbx_7[9]
            
            if (rbx_7 != 0)
                *rdi_6 += 1
                rbx_7 = var_498_1
            
            sub_1405e4b20(rcx_21, rdx_10, r8_3, 1)
            
            if (rbx_7 != 0)
                int32_t rax_34 = *rdi_6
                *rdi_6 -= 1
                
                if (rax_34 == 1)
                    sub_140a2f6e0(var_498_1)
        else
            uint128_t var_308_1 = rax_26.o
            uint64_t var_2e8_1 = var_47c:0xc.q
            int128_t var_2f8 = arg4.o
            var_4d8.b = arg4
            zmm7, zmm8 =
                sub_1413d3eb0(&data_143f02b98, rax_26, i, arg3, var_4d8.b, arg7, &var_2f8:4)
            
            if (arg4 == 0)
                sub_14196d390(&data_143f02b98)
    else
        var_4d8.b = arg4
        zmm7, zmm8 = sub_1413d3eb0(&data_143f02b98, rax_26, i, arg3, var_4d8.b, arg7, &var_47c)
        
        if (arg4 == 0)
            sub_14196d390(&data_143f02b98)
    void var_100
    sub_1413c3330(&var_100)
    int32_t var_108_2 = 0
    
    if (var_110_1 != 0)
        sub_140a74f90(var_110_1)
    
    int64_t var_148_1
    var_148_1.d = 0
    int32_t var_120_2 = 0xffffffff
    int32_t var_11c_2 = 0
    int64_t var_140
    sub_14059a8e0(&var_140, 0)
    int64_t var_130
    
    if (var_130 != 0)
        sub_140a74f90(var_130)
    
    int64_t rcx_28 = var_150
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    result = sub_1422dbba0(&var_398)
    i += 1
while (i s< 6)

__security_check_cookie(rax_1 ^ &var_4f8)
return result
