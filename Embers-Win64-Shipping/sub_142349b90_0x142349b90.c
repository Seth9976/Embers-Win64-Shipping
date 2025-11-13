// 函数: sub_142349b90
// 地址: 0x142349b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[4] != 0)
    int64_t r15
    r15.b = sub_142056a90() == 0
    void* rsi_1 = *(**arg1 + (sx.q(arg1[1].d) << 3))
    int64_t* rax_1
    
    if (data_143a2ff10 != 0)
        rax_1 = sub_1405fba70(data_143f0f1a0, 3)
    
    if (data_143a2ff10 == 0 || rax_1.b == 0)
        rax_1.b = 0
    else
        rax_1.b = 1
    
    if (arg1[0xa].b != rax_1.b)
        sub_1419ba620(&arg1[2])
    
    uint32_t count = *(rsi_1 + 0xec) * 0x18
    int64_t rax_3 = sub_140a82f30(zx.q(count), 0)
    
    if (r15.b != 0)
        int32_t rdx = data_143f58b08
        int32_t rax_5 = *(rsi_1 + 0xec) - rdx
        
        if (rax_5 s> 0)
            int32_t rcx_3 = rdx + rax_5
            bool cond:5_1 = rcx_3 s<= data_143f58b0c
            data_143f58b08 = rcx_3
            
            if (not(cond:5_1))
                sub_1406105e0(&data_143f58b00)
        
        memset(data_143f58b00, 0, zx.q(*(rsi_1 + 0xec)) << 2)
    
    memset(rax_3, 0, zx.q(*(rsi_1 + 0xec)) * 0x18)
    int32_t i_1 = 0
    int32_t i = 0
    int128_t __saved_zmm8
    uint32_t var_58[0x4]
    uint32_t var_48[0x4]
    uint32_t zmm0_1
    float zmm1
    float zmm2
    
    if (arg2[1].d s> 0)
        var_48 = arg4
        void** r14_2 = nullptr
        var_58 = arg5
        __saved_zmm8 = arg6
        
        do
            int64_t r9_2 = *arg2
            int32_t rdx_1 = arg1[1].d
            arg4 = *(*arg3 + (sx.q(*(r14_2 + r9_2 + 8)) << 2))
            void* rcx_7 = *(r14_2 + r9_2)
            uint32_t temp0_1[0x4] = _mm_and_ps(arg4, 0x7fffffff)
            int32_t arg_8
            void* rax_9 = sub_1421496a0(rcx_7, rdx_1, &arg_8)
            int32_t r8_6 = 0
            
            if (arg_8 s> 0)
                int32_t* rdx_2 = rax_9 + 0x14
                
                do
                    uint64_t rax_10 = zx.q(rdx_2[1])
                    
                    if (rax_10.d u< *(rsi_1 + 0xec))
                        uint64_t rcx_8 = rax_10 * 3
                        zmm1 = rdx_2[-4] f* arg4[0] f+ *(rax_3 + (rcx_8 << 3) + 4)
                        zmm2 = rdx_2[-3] f* arg4[0] f+ *(rax_3 + (rcx_8 << 3) + 8)
                        *(rax_3 + (rcx_8 << 3)) = arg4[0] f* rdx_2[-5] f+ *(rax_3 + (rcx_8 << 3))
                        *(rax_3 + (rcx_8 << 3) + 4) = zmm1
                        *(rax_3 + (rcx_8 << 3) + 8) = zmm2
                        
                        if (r15.b != 0)
                            zmm1 = rdx_2[-1] f* arg4[0] f+ *(rax_3 + (rcx_8 << 3) + 0x10)
                            zmm2 = *rdx_2 f* arg4[0] f+ *(rax_3 + (rcx_8 << 3) + 0x14)
                            *(rax_3 + (rcx_8 << 3) + 0xc) =
                                arg4[0] f* rdx_2[-2] f+ *(rax_3 + (rcx_8 << 3) + 0xc)
                            zmm0_1 = temp0_1[0]
                            *(rax_3 + (rcx_8 << 3) + 0x10) = zmm1
                            *(rax_3 + (rcx_8 << 3) + 0x14) = zmm2
                            int64_t rcx_9 = sx.q(rdx_2[1])
                            int64_t rax_11 = data_143f58b00
                            *(rax_11 + (rcx_9 << 2)) = zmm0_1 f+ *(rax_11 + (rcx_9 << 2))
                    
                    r8_6 += 1
                    rdx_2 = &rdx_2[7]
                while (r8_6 s< arg_8)
            
            i += 1
            r14_2 = &r14_2[2]
        while (i s< arg2[1].d)
    
    if (r15.b != 0 && *(rsi_1 + 0xec) u> 0)
        do
            zmm0_1 = *(data_143f58b00 + (sx.q(i_1) << 2))
            
            if (not(zmm0_1 f<= 1f))
                zmm2 = 1f f/ zmm0_1
                uint64_t rcx_11 = zx.q(i_1) * 3
                zmm0_1 = zmm2 f* *(rax_3 + (rcx_11 << 3) + 0xc)
                zmm1 = zmm2 f* *(rax_3 + (rcx_11 << 3) + 0x10)
                zmm2 = zmm2 f* *(rax_3 + (rcx_11 << 3) + 0x14)
                *(rax_3 + (rcx_11 << 3) + 0xc) = zmm0_1
                *(rax_3 + (rcx_11 << 3) + 0x10) = zmm1
                *(rax_3 + (rcx_11 << 3) + 0x14) = zmm2
            
            i_1 += 1
        while (i_1 u< *(rsi_1 + 0xec))
    
    int64_t* rcx_12 = data_143f0f180
    memcpy(
        (*(*rcx_12 + 0x130))(rcx_12, &data_143f02b98, arg1[4], 0, count, 1, __saved_zmm8, var_58, 
            var_48), 
        rax_3, count)
    sub_140a74f90(rax_3)
    int64_t* rcx_15 = data_143f0f180
    result = (*(*rcx_15 + 0x138))(rcx_15, &data_143f02b98, arg1[4])
    arg1[5].b = 1

return result
