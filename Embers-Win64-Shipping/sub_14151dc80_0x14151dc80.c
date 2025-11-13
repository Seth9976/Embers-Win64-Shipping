// 函数: sub_14151dc80
// 地址: 0x14151dc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* var_138 = arg4
int64_t* rcx = arg7[8].q
uint64_t rdx = zx.q(*(arg3 + 0x1548))
void* const var_148 = nullptr
int64_t* rax_3 = (*(*rcx + 0x40))(rcx, rdx, &var_148)
int64_t rdx_1 = *rax_3
int32_t result = (*(rdx_1 + 0x20))(rax_3, rdx_1)

if (result == 3)
    int64_t* rcx_2 = *(arg7 + 0x78)
    int32_t var_cc
    int32_t var_cc_1 = var_cc & 0xf8000000
    int32_t var_a4
    int32_t var_a4_1 = var_a4 & 0xfffff800
    int32_t rdi_1 = 1
    int32_t var_6c
    int32_t var_6c_1 = (var_6c & 0xfc0c003c) | 0x40c003c
    int128_t* var_a0_1 = nullptr
    int32_t var_94_1 = 1
    int128_t var_90
    __builtin_memset(&var_90, 0, 0x18)
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int32_t var_70_1 = 0xffff0000
    int32_t var_98_1 = 1
    int128_t var_108
    __builtin_memset(&var_108, 0, 0x3c)
    int64_t var_c0_1 = 1
    int32_t var_b0_1 = 0xffffffff
    int32_t var_ac_1 = 0
    int32_t var_a8_1 = 0x3f800000
    char rax_8 = (*(*rcx_2 + 0x68))(rcx_2, zx.o(0))
    int64_t r12
    r12.b = rax_8 == 0
    
    if (rax_8 == 0)
        int64_t* rcx_3 = data_143eef5c8
        
        if (rcx_3 == 0)
        label_14151ddf2:
            void*** rax_13 = j_sub_140a82f30(0x210)
            
            if (rax_13 == 0)
                rax_13 = nullptr
            else
                rax_13[1].d = 0xffffffff
                *(rax_13 + 0xc) = (*(arg3 + 0x1548)).b
                rax_13[0x12] = 0
                rax_13[0x13].d = 0
                *(rax_13 + 0x9c) = 8
                rax_13[0x14].d = 0xffff0101
                *(rax_13 + 0xa4) = 0xff
                rax_13[0x19] = 0
                rax_13[0x1a].d = 0
                *(rax_13 + 0xd4) = 2
                rax_13[0x21] = 0
                rax_13[0x22].d = 0
                *(rax_13 + 0x114) = 3
                __builtin_memset(&rax_13[0x23], 0, 0x48)
                rax_13[0x34].d = 0
                *(rax_13 + 0x1a4) = 4
                __builtin_memset(&rax_13[0x35], 0, 0x40)
                rax_13[0x3d] = -1
                rax_13[0x3e].d = 0xffffffff
                __builtin_memset(rax_13 + 0x1f4, 0, 0x14)
                rax_13[0x41].d = 0xffffffff
                *rax_13 = &data_142fbb4c0
            
            data_143eef5c8 = rax_13
            sub_1419ba620(&data_143eef7c0)
            int64_t* rcx_6 = data_143eef5c8
            (*(*rcx_6 + 0x28))(rcx_6)
            rcx_3 = data_143eef5c8
        else
            char rax_9 = *(rcx_3 + 0xc)
            uint32_t rax_10
            
            if (rax_9 != 4)
                rax_10 = zx.d(rax_9)
            else
                rax_10 = data_1439c7a08
            
            if (*(arg3 + 0x1548) != rax_10)
                (*(*rcx_3 + 0x30))()
                int64_t* rcx_4 = data_143eef5c8
                
                if (rcx_4 != 0)
                    (**rcx_4)(rcx_4, 1)
                
                goto label_14151ddf2
        
        int64_t* rdx_2 = arg7
        var_90.q = rcx_3
        int128_t* rcx_7 = &var_108
        var_90:8.q = arg7[8].q
        
        if (var_a0_1 != 0)
            rcx_7 = var_a0_1
        
        rcx_7[1].q = &data_1439b72e8
        int128_t* rcx_8 = &var_108
        int64_t* rax_17 = *(arg7 + 0x68)
        
        if (rax_17 != 0)
            rdx_2 = rax_17
        
        if (var_a0_1 != 0)
            rcx_8 = var_a0_1
        
        *rcx_8 = *rdx_2
        int128_t* rcx_9 = &var_108
        
        if (var_a0_1 != 0)
            rcx_9 = var_a0_1
        
        rcx_9[4].d = 0
        int128_t* rcx_10 = &var_108
        
        if (var_a0_1 != 0)
            rcx_10 = var_a0_1
        
        *(rcx_10 + 0x44) = 2
        int128_t* rcx_11 = &var_108
        
        if (var_a0_1 != 0)
            rcx_11 = var_a0_1
        
        rcx_11[5].d = 0
        int128_t* rcx_12 = &var_108
        
        if (var_a0_1 != 0)
            rcx_12 = var_a0_1
        
        *(rcx_12 + 0x54) = 3
    
    float zmm2[0x4] = *(arg6 + 0xc0)
    int32_t rax_24 = *(arg6 + 0xd8)
    int128_t* r14_1 = &var_108
    uint64_t rcx_13 = zx.q(data_14401b1a0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    
    if (r12.b == 0)
        r14_1 = arg7
    
    uint128_t zmm7 = zx.o(*arg5)
    int32_t rbx_1 = data_143cda914
    int32_t rax_25 = arg5[1].d
    int32_t var_14c_1 = 0x3f800000
    float var_158[0x4]
    var_158[0] = zmm2[0]
    float temp0_3[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
    temp0_3[0] = temp0_1[0]
    int32_t var_140_1 = 0
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
    temp0_4[0] = temp0_2[0]
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
    int96_t var_158_1 = temp0_5[0].12
    float temp0_7[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0x55), *(arg3 + 0x350))
    var_158_1:8.d = rax_25
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0), *(arg3 + 0x340))
    void* rax_26 = *(ThreadLocalStoragePointer + (rcx_13 << 3))
    float temp0_11[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), *(arg3 + 0x370))
    var_148 = rax_26
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa)
    float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_7)
    float temp0_16[0x4] =
        _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(temp0_12, *(arg3 + 0x360)), temp0_11), temp0_13)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
    temp0_17[0] = temp0_17[0] f- rax_24
    zmm7.d = zmm7.d f* temp0_17[0]
    zmm7.d = zmm7.d f+ *(arg5 + 4)
    
    if (rbx_1 s> *(rax_26 + 0x14))
        _Init_thread_header(&data_143cda914)
        rbx_1 = data_143cda914
        
        if (rbx_1 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
            rbx_1 = data_143cda914
    
    float zmm0_1 = logf(zmm7[0])
    temp0_17[0] = temp0_17[0] f+ rax_24
    zmm7.d = (*arg5).d f* temp0_17[0]
    zmm0_1 = zmm0_1 f* data_143cda910 f* var_158_1:8.d
    var_158_1:8.d = arg5[1].d
    zmm7.d = zmm7.d f+ *(arg5 + 4)
    int32_t r12_1 = int.d(zmm0_1)
    
    if (rbx_1 s> *(var_148 + 0x14))
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    int512_t zmm0_2
    zmm0_2.d = logf(zmm7.d).d f* data_143cda910
    zmm0_2.d = zmm0_2.d f* var_158_1:8.d
    int32_t rbx_3 = *(var_138 + 8) - 1
    int32_t rcx_14 = int.d(zmm0_2.d)
    int32_t rsi_2
    
    if (r12_1 s>= 0)
        rsi_2 = rbx_3
        
        if (r12_1 s< rbx_3)
            rsi_2 = r12_1
    else
        rsi_2 = 0
    
    if (rcx_14 s< 0)
        rbx_3 = 0
    else if (rcx_14 s< rbx_3)
        rbx_3 = rcx_14
    
    char rax_31 = sub_14122e130(sub_1422e5a30(arg3))
    int64_t* rcx_17 = r14_1[8].q
    var_148 = nullptr
    
    if (rax_31 != 0)
        rdi_1 = data_1439b72c0
    
    int64_t r9 = *rcx_17
    int64_t* rax_37 = (*(r9 + 0x40))(rcx_17, zx.q(*(arg1 + 0x10)), &var_148, r9)
    var_138 = sub_141261c60(r14_1)
    int32_t rax_39 = sub_141261c10(r14_1, rax_37, &var_138)
    void* const rcx_20 = var_148
    
    if (rcx_20 == 0)
        rcx_20 = r14_1[8].q
    
    result = sub_14150d2f0(arg1, r14_1, -1, arg6, zmm0_2, rcx_20, rax_37, 
        divs.dp.d(sx.q(rdi_1 - rsi_2 + rbx_3), rdi_1), rax_39, 0)
    
    if (var_a0_1 != 0)
        result = sub_140a74f90(var_a0_1)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
