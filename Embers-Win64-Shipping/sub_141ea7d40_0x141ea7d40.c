// 函数: sub_141ea7d40
// 地址: 0x141ea7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_a8
uint64_t var_48_1 = __security_cookie ^ &var_a8
void* r15_1 = arg2

if (*(arg2 + 0x28) != 0)
    int64_t* rcx = *(arg1 + 0x30)
    int32_t i_1 = 0
    
    if (rcx[5] != 0)
        arg2.b = 1
        (*(*rcx + 0x288))(rcx, arg2)
        *(*(arg1 + 0x30) + 0x28) = 0
    
    int128_t zmm7 = zx.o(0)
    int32_t rcx_2 = *(arg1 + 0x3c) | 1
    *(arg1 + 0x68) = 0
    *(arg1 + 0x70) = 0
    *(arg1 + 0x3c) = rcx_2
    uint128_t zmm0
    
    if (arg9 == 0)
        zmm0 = zx.o(0)
    else
        int32_t rax_4 = rand()
        rcx_2 = *(arg1 + 0x3c)
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_4)).d f* *(r15_1 + 0x30)
        zmm0.d = zmm0.d f* 3.05185094e-05f
    
    *(arg1 + 0x38) = zmm0.d
    *(arg1 + 0x54) = arg5.d
    zmm0 = arg10
    *(arg1 + 0x48) = 0
    *(arg1 + 0x28) = r15_1
    *(arg1 + 0x3c) = (zx.d(arg8) | 2) << 2 | (rcx_2 & 0xffffffea)
    *(arg1 + 0x50) = arg4.d
    *(arg1 + 0x40) = arg6.d
    *(arg1 + 0x44) = arg7
    
    if (zmm0.d f<= 0f)
        zmm0 = zx.o(0)
    else
        zmm0.d = zmm0.d f- arg7
    
    *(arg1 + 0x60) = zmm0.d
    int64_t var_78
    int32_t var_70
    
    if (arg3 != 0)
        void* rax_9 = sub_142486290()
        void* rdx = *(arg3 + 0x10)
        int64_t rax_10 = sx.q(*(rax_9 + 0x38))
        
        if (rax_10.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
            sub_141dd67f0(arg3, &data_143dbb1f8, 0, nullptr, 0)
            int32_t rax_12 = data_143dbb210
            var_78 = data_143dbb208
            var_70 = rax_12
            zmm7 = sub_141dd7190(arg3, &var_78, 0)
    
    int64_t* rcx_7 = *(arg1 + 0x30)
    (*(*rcx_7 + 0x280))(rcx_7, *(*(arg1 + 0x28) + 0x28), arg3)
    int32_t i = 0
    
    if (*(*(arg1 + 0x30) + 0x40) s> 0)
        int64_t r14_1 = 0
        void* rcx_10
        
        do
            void* const rsi_2 = *(*(*(*(arg1 + 0x28) + 0x28) + 0x30) + r14_1)
            void* rax_17
            int64_t rax_18
            void* rdx_4
            
            if (rsi_2 != 0)
                rax_17 = sub_1424d1b10()
                rdx_4 = *(rsi_2 + 0x10)
                rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rsi_2 == 0 || rax_18.d s> *(rdx_4 + 0x38)
                    || *(*(rdx_4 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                rsi_2 = nullptr
            
            rcx_10 = *(arg1 + 0x30)
            *(arg1 + 0x68) = rsi_2
            
            if (rsi_2 != 0)
                *(arg1 + 0x70) = *(*(rcx_10 + 0x38) + (sx.q(i) << 3))
                break
            
            i += 1
            r14_1 += 8
        while (i s< *(rcx_10 + 0x40))
    
    int64_t* rcx_13 = *(arg1 + 0x68)
    int64_t rdx_5
    
    if (rcx_13 != 0)
        rdx_5 = *(arg1 + 0x70)
    
    if (rcx_13 == 0 || rdx_5 == 0)
        *(arg1 + 0xd0) = data_143dbb0c0
        *(arg1 + 0xe0) = data_143dbb0d0
        *(arg1 + 0xf0) = data_143dbb0e0
        *(arg1 + 0x100) = *(r15_1 + 0x54)
    else
        char var_88
        void var_68
        var_88.q = &var_68
        (*(*rcx_13 + 0x370))(rcx_13, rdx_5, zmm7.d, &var_78, var_88)
        float var_58[0x4]
        float zmm7_1[0x4] = sub_140ade170(&var_68, &var_58)
        float zmm3[0x4] = data_14399f668
        float zmm4_1[0x4] = var_78.d
        float zmm5_1[0x4] = var_58
        float temp0_2[0x4] = _mm_unpacklo_ps(var_78:4.d, zmm7_1[0].q)
        float temp0_3[0x4] = _mm_unpacklo_ps(zmm4_1, var_70)
        int64_t zmm0_2 = data_14399f670
        float temp0_4[0x4] = _mm_unpacklo_ps(temp0_3, temp0_2[0].q)
        float temp0_5[0x4] = _mm_unpacklo_ps(data_14399f66c, zmm7_1[0].q)
        *(arg1 + 0xf0) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_2), temp0_5[0].q)
        *(arg1 + 0xd0) = zmm5_1
        *(arg1 + 0xe0) = temp0_4
        
        if ((*(r15_1 + 0x50) & 2) != 0)
            *(arg1 + 0x100) = *(r15_1 + 0x54)
        
        if (*(*(arg1 + 0x30) + 0x40) s> 0)
            int64_t rbp_1 = 0
            
            do
                void* rsi_3 = *(*(*(*(arg1 + 0x28) + 0x28) + 0x30) + rbp_1)
                
                if (rsi_3 != 0)
                    void* rax_25
                    int32_t zmm0_3
                    rax_25, zmm0_3 = sub_1424d16f0()
                    void* rdx_7 = *(rsi_3 + 0x10)
                    int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                    
                    if (rax_26.d s<= *(rdx_7 + 0x38)
                            && *(*(rdx_7 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30
                            && *(rsi_3 + 0x90) == data_143f3a1c8)
                        if ((*(r15_1 + 0x50) & 2) != 0)
                            (*(*(rsi_3 + 0x28) + 0x30))(rsi_3 + 0x28, 0, zmm7_1)
                            *(arg1 + 0x100) = zmm0_3
                        
                        *(arg1 + 0x3c) |= 0x20
                        break
                
                i_1 += 1
                rbp_1 += 8
            while (i_1 s< *(*(arg1 + 0x30) + 0x40))

__security_check_cookie(var_48_1 ^ &var_a8)
