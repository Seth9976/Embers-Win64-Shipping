// 函数: sub_1427724c0
// 地址: 0x1427724c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = *(arg1 + 0xb0)
*arg4 = 0

if (((*(arg1 + 0xb0) - 2) & 0xfffffffd) == 0)
    uint32_t count = *(arg1 + 0xc0)
    
    if (arg3 u< count)
        r12 = 5
    else
        *arg4 = count
        memcpy(arg2, *(arg1 + 0xb8), count)
        *(arg1 + 0xb0) = 3
        *(arg1 + 0xc0) = 0
        
        if (*(arg1 + 0xc4) s<= 0xffffffff)
            sub_1405c5510(arg1 + 0xb8, 0)
        
        *arg5 = *(arg1 + 0xd8)

uint128_t zmm0_1

if (sub_141c3e400(arg1 + 0x18) s> 0)
    int32_t rax_4 = *(arg1 + 0xf4)
    uint32_t rbx_2 = *arg4 u>> 1
    *(arg1 + 0xf0) = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_1405dadb0(arg1 + 0xe8, 0)
    
    __builtin_memset(arg1 + 0xf8, 0, 0x14)
    *(arg1 + 0x100) = *(arg1 + 0xe4)
    *(arg1 + 0x104) = 0x3e80
    int64_t r14_1 = sx.q(*(arg1 + 0xf0))
    int32_t rax_6 = r14_1.d + rbx_2
    *(arg1 + 0xf0) = rax_6
    
    if (rax_6 s> *(arg1 + 0xf4))
        sub_1406105e0(arg1 + 0xe8)
    
    uint32_t r9 = 0
    uint128_t zmm1
    
    if (rbx_2 u>= 4)
        int64_t rdx_2 = r14_1 << 2
        uint64_t rax_9 = zx.q(((rbx_2 - 4) u>> 2) + 1)
        void* rcx_6 = arg2 + 4
        uint64_t i_5 = zx.q(rax_9.d)
        r9 = (rax_9 << 2).d
        uint64_t i
        
        do
            int32_t rax_10 = sx.d(*(rcx_6 - 4))
            rdx_2 += 0x10
            rcx_6 += 8
            int64_t rax_11 = *(arg1 + 0xe8)
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f* 3.05185094e-05f
            *(rdx_2 + rax_11 - 0x10) = zmm0_1.d
            int64_t rax_13 = *(arg1 + 0xe8)
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rcx_6 - 0xa)))).d f* 3.05185094e-05f
            *(rdx_2 + rax_13 - 0xc) = zmm1.d
            int64_t rax_15 = *(arg1 + 0xe8)
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rcx_6 - 8)))).d f* 3.05185094e-05f
            *(rax_15 + rdx_2 - 8) = zmm0_1.d
            int64_t rax_17 = *(arg1 + 0xe8)
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rcx_6 - 6)))).d f* 3.05185094e-05f
            *(rax_17 + rdx_2 - 4) = zmm1.d
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    if (r9 s< rbx_2)
        int64_t rcx_7 = sx.q(r9)
        int64_t rdx_4 = (rcx_7 + r14_1) << 2
        int16_t* r8_1 = arg2 + (rcx_7 << 1)
        uint64_t i_6 = zx.q(rbx_2 - r9)
        uint64_t i_1
        
        do
            int32_t rax_20 = sx.d(*r8_1)
            rdx_4 += 4
            int64_t rcx_8 = *(arg1 + 0xe8)
            r8_1 = &r8_1[1]
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_20)).d f* 3.05185094e-05f
            *(rdx_4 + rcx_8 - 4) = zmm0_1.d
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0xf8) += rbx_2
    int32_t temp0_6 = divs.dp.d(sx.q(*(arg1 + 0xf8)), *(arg1 + 0x100))
    *(arg1 + 0x100)
    zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x104)))
    *(arg1 + 0xfc) = temp0_6
    zmm1.d = _mm_cvtepi32_ps(zx.o(temp0_6)).d f/ zmm0_1.d
    *(arg1 + 0x108) = zmm1.d
    
    if (*(arg1 + 0xe4) s> 1 && *(arg1 + 0xf0) != 0)
        int64_t rcx_9 = sx.q(temp0_6)
        int64_t rax_24 = 4 * rcx_9
        
        if (mulu.dp.q(4, rcx_9) u>> 0x40 != zx.o(0))
            rax_24 = -1
        
        int32_t* rax_25 = j_sub_140a82f30(rax_24)
        j_sub_140a74f90(0)
        memset(rax_25, 0, sx.q(*(arg1 + 0xfc)) << 2)
        int64_t r9_1 = *(arg1 + 0xe8)
        int32_t i_2 = 0
        
        if (*(arg1 + 0xfc) s> 0)
            int32_t* rdx_7 = rax_25
            
            do
                int32_t j = 0
                
                if (*(arg1 + 0x100) s> 0)
                    float zmm0_2 = *rdx_7
                    
                    do
                        int32_t rax_28 = *(arg1 + 0x100) * i_2 + j
                        j += 1
                        zmm0_2 = zmm0_2 f+ *(r9_1 + (sx.q(rax_28) << 2))
                        *rdx_7 = zmm0_2
                    while (j s< *(arg1 + 0x100))
                
                i_2 += 1
                rdx_7 = &rdx_7[1]
            while (i_2 s< *(arg1 + 0xfc))
        
        int32_t rdx_8 = *(arg1 + 0xfc)
        *(arg1 + 0xf8) = rdx_8
        *(arg1 + 0x100) = 1
        *(arg1 + 0xf0) = 0
        
        if (rdx_8 s> *(arg1 + 0xf4))
            sub_1405dadb0(arg1 + 0xe8, rdx_8)
        
        int32_t rax_31 = *(arg1 + 0xf8) + *(arg1 + 0xf0)
        *(arg1 + 0xf0) = rax_31
        
        if (rax_31 s> *(arg1 + 0xf4))
            sub_1406105e0(arg1 + 0xe8)
        
        memcpy(*(arg1 + 0xe8), rax_25, *(arg1 + 0xf8) << 2)
        j_sub_140a74f90(rax_25)
    
    sub_141c439f0(arg1 + 0x18, *(arg1 + 0xe8), *(arg1 + 0xf8))

if (data_143f879f8 != 0 && data_143f5b298 != 0)
    int64_t performanceCount
    TEB* gsbase
    
    if (data_143f87aa0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f87aa0)
        
        if (data_143f87aa0 == 0xffffffff)
            QueryPerformanceCounter(&performanceCount)
            zmm0_1.q = float.d(performanceCount)
            zmm0_1.q = zmm0_1.q f* data_143d796f8
            zmm0_1.q = zmm0_1.q f+ 16777216.0
            data_143f87a98 = zmm0_1.q
            _Init_thread_footer(&data_143f87aa0)
    
    QueryPerformanceCounter(&performanceCount)
    zmm0_1.q = float.d(performanceCount)
    zmm0_1.q = zmm0_1.q f* data_143d796f8
    zmm0_1.q = zmm0_1.q f+ 16777216.0
    zmm0_1.q = zmm0_1.q f- data_143f87a98
    
    if (not(zmm0_1.q f<= 0.050000000000000003))
        int128_t zmm0_3 = sub_141c39c30(arg1 + 0x140)
        int64_t var_68
        sub_140a2e390(&var_68, u"Mic Amp: %.2f", fconvert.d(zmm0_3.d))
        float zmm0_4 = sub_141c39c30(arg1 + 0x140) * 32f
        int32_t i_7 = int.d(zmm0_4 + zmm0_4 - 0.5f) s>> 1
        
        if (i_7 s> 0)
            uint64_t i_4 = zx.q(i_7)
            uint64_t i_3
            
            do
                int32_t var_60
                int32_t rbx_4 = var_60 - 1
                
                if (var_60 s<= 0)
                    rbx_4 = 0
                
                int32_t rax_35
                rax_35.b = var_60 s<= 0
                int32_t rax_37 = rax_35 + 1 + var_60
                var_60 = rax_37
                int32_t var_5c
                
                if (rax_37 s> var_5c)
                    sub_140594770(&var_68)
                
                int64_t rcx_23 = sx.q(rbx_4)
                *(var_68 + (rcx_23 << 1)) = 0x7c
                *(var_68 + (rcx_23 << 1) + 2) = 0
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
        
        int512_t zmm3
        zmm3.o = zmm0_3
        void var_58
        sub_140ae16d0(sub_140ad9660(&var_58, &data_14399f600, &data_14399f5f0), &performanceCount, 
            1)
        data_143f5b298
        int32_t* var_78_1 = &data_14399f658
        char var_80_1 = 0
        int64_t* var_88_1 = &var_68
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        int64_t rcx_28 = var_68
        data_143f87a98 = float.d(performanceCount_1) f* data_143d796f8 f+ 16777216.0
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)

return zx.q(r12)
