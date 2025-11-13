// 函数: sub_1426c2330
// 地址: 0x1426c2330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = &__return_addr
int64_t* r15 = arg1[0x4a]
uint128_t zmm10 = arg2

if (r15 != 0)
    uint64_t var_b8
    (*(*arg1 + 0x660))(arg4, &var_b8)
    int32_t rax_1 = arg1[0x59].d
    uint128_t zmm4_1 = data_143b57f80.d
    uint128_t zmm3 = data_143b57f80:4.d
    uint32_t zmm9[0x4] = zmm4_1
    uint128_t zmm2 = data_143b57f88
    uint32_t zmm8[0x4] = zmm3
    float zmm7[0x4] = zmm2
    int64_t rdi_1 = sx.q(rax_1 - 1)
    uint32_t var_a8
    uint64_t rax_2
    
    if (rax_1 - 1 s>= 0)
        int64_t rsi_2 = rdi_1 * 0x14
        
        while (true)
            int32_t* rbx_2 = arg1[0x58] + rsi_2
            rax_2 = sub_140d3c6e0(rbx_2)
            
            if (rax_2 != 0)
                int64_t* rax_4 = (*(*arg1 + 0x7c0))(arg1, &var_a8, rax_2)
                zmm2 = data_143b57f88
                zmm3 = data_143b57f80:4.d
                zmm4_1 = data_143b57f80.d
                arg2 = zx.o(*rax_4)
                rax_2 = zx.q(rax_4[1].d)
            else
                zmm4_1 = data_143b57f80.d
                arg2 = rbx_2[2]
                zmm2 = data_143b57f88
                zmm3 = data_143b57f80:4.d
                
                if ((zmm4_1 ^ 0x80000000).d f>= arg2.d || arg2.d f>= zmm4_1.d)
                    rax_2.b = 0
                else
                    arg2 = rbx_2[3]
                    
                    if ((zmm3 ^ 0x80000000).d f>= arg2.d || arg2.d f>= zmm3.d)
                        rax_2.b = 0
                    else
                        arg2 = rbx_2[4]
                        
                        if ((zmm2 ^ 0x80000000).d f>= arg2.d || arg2.d f>= zmm2.d)
                            rax_2.b = 0
                        else
                            rax_2.b = 1
                
                if (rax_2.b != 0)
                    arg2 = zx.o(*(rbx_2 + 8))
                    rax_2 = zx.q(rbx_2[4])
                else
                    rsi_2 -= 0x14
                    int64_t temp1_1 = rdi_1
                    rdi_1 -= 1
                    
                    if (temp1_1 - 1 s< 0)
                        break
                    
                    continue
            
            var_a8.q = arg2.q
            zmm9 = var_a8
            int32_t var_a0_1 = rax_2.d
            zmm8 = _mm_shuffle_ps(arg2, arg2, 0x55)
            zmm7 = var_a0_1
            break
    
    arg4 = zmm4_1 ^ 0x80000000
    
    if (arg4.d f>= zmm9[0] || zmm9[0] f>= zmm4_1.d)
        rax_2.b = 0
    else
        arg4 = zmm3 ^ 0x80000000
        
        if (arg4.d f>= zmm8[0] || zmm8[0] f>= zmm3.d)
            rax_2.b = 0
        else
            arg4 = zmm2 ^ 0x80000000
            
            if (arg4.d f>= zmm7[0] || zmm7[0] f>= zmm2.d)
                rax_2.b = 0
            else
                rax_2.b = 1
    
    int32_t var_b0
    uint128_t var_98
    void var_88
    
    if (rax_2.b != 0)
        int32_t* rax_6 = (*(*r15 + 0x6d0))(arg4, &var_98)
        zmm7[0] = zmm7[0] f- rax_6[2]
        zmm8[0] = zmm8[0] f- rax_6[1]
        zmm9[0] = zmm9[0] f- *rax_6
        float var_a0_2 = zmm7[0]
        uint32_t var_a4_1 = zmm8[0]
        var_a8 = zmm9[0]
        int32_t* rax_7 = sub_140adf3c0(&var_a8, &var_88)
        var_b8 = *rax_7
        var_b0 = rax_7[2]
    else if ((arg1[0x5a].b & 0x40) != 0)
        void* rbx_3 = r15[0x26]
        int32_t rax_12
        
        if (rbx_3 == 0)
            arg4 = zx.o(data_143dbb208)
            rax_12 = data_143dbb210
        else
            arg2 = *(rbx_3 + 0x1c0)
            var_98 = arg2
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(arg2, *(rbx_3 + 0x180), 4)) != 0)
                *(rbx_3 + 0x180) = arg2
                int32_t* rax_10 = sub_140adf5d0(&var_98, &var_88)
                *(rbx_3 + 0x190) = *rax_10
                *(rbx_3 + 0x198) = rax_10[2]
            
            arg4 = zx.o(*(rbx_3 + 0x190))
            rax_12 = *(rbx_3 + 0x198)
        
        var_a8.q = arg4.q
        arg2 = zx.o(var_a8.q)
        var_b8:4.d = _mm_shuffle_ps(arg2, arg2, 0x55).d
        var_b0 = rax_12.d
        var_b8.d = arg2.d
        var_a8.q = arg2.q
    
    if (not(var_b8.d.d f== 0f))
        void* rax_14 = sub_1426b1e00(arg1)
        void* rax_15
        int64_t rax_16
        void* rdx_6
        
        if (rax_14 != 0)
            rax_15 = sub_14255d000()
            rdx_6 = *(rax_14 + 0x10)
            rax_16 = sx.q(*(rax_15 + 0x38))
        
        if (rax_14 == 0 || rax_16.d s> *(rdx_6 + 0x38)
                || *(*(rdx_6 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
            var_b8.d = 0
    
    result = (*(*arg1 + 0x668))(arg1, &var_b8)
    
    if (arg3 != 0)
        void* rbx_5 = r15[0x26]
        int32_t rax_22
        
        if (rbx_5 == 0)
            arg4 = zx.o(data_143dbb208)
            rax_22 = data_143dbb210
        else
            arg2 = *(rbx_5 + 0x1c0)
            uint32_t temp0_7 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_5 + 0x180), arg2, 4))
            var_98 = arg2
            
            if (temp0_7 != 0)
                *(rbx_5 + 0x180) = arg2
                int32_t* rax_20 = sub_140adf5d0(&var_98, &var_88)
                *(rbx_5 + 0x190) = *rax_20
                *(rbx_5 + 0x198) = rax_20[2]
            
            arg4 = zx.o(*(rbx_5 + 0x190))
            rax_22 = *(rbx_5 + 0x198)
        
        zmm7 = data_143f72030
        float zmm4_2[0x4] = var_b8.d
        zmm9 = data_143f72010
        var_a8.q = arg4.q
        arg4 = _mm_unpacklo_ps(var_b8:4.d, 0)
        zmm4_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_2, var_b0.q), arg4.q)
        float zmm5_1[0x4] = zx.o(var_a8.q)
        arg4 = zmm5_1
        arg4 = _mm_shuffle_ps(arg4, arg4, 0x55)
        float zmm6[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, rax_22.q), _mm_unpacklo_ps(arg4, 0).q)
        zmm2 = data_143f72040
        zmm6 = _mm_sub_ps(zmm6, zmm4_2)
        var_a8.q = zmm5_1.q
        zmm5_1 = _mm_and_ps(zmm7, zmm9)
        zmm3 = _mm_div_ps(zmm6, zmm7)
        zmm4_2 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
        zmm6 = _mm_sub_ps(zmm6, 
            _mm_mul_ps(
                _mm_and_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(zmm3, zmm9), 2), zmm4_2 ^ zmm3) ^ zmm4_2, 
                zmm7))
        zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), _mm_min_ps(zmm6, zmm5_1))
        zmm8 = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
        arg2 = _mm_add_ps(zmm2, zmm7)
        zmm8 = _mm_and_ps(zmm8, arg2 ^ zmm2) ^ arg2
        arg4 = _mm_cmpeq_ps(data_143f72020, zmm8, 1)
        arg2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, arg4) ^ zmm8
        result = _mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x3a83126f, 0x3a83126f, 0), 
            _mm_and_ps(arg2, zmm9), 1))
        
        if (result != 0)
            int32_t var_a0_7 = var_b0
            var_a8.q = var_b8
            return (*(*r15 + 0x6f0))(r15, &var_a8, zmm10)

return result
