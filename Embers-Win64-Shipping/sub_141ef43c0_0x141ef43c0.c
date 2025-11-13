// 函数: sub_141ef43c0
// 地址: 0x141ef43c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2
float zmm7[0x4] = arg3
void* const* result

if (1f f!= *arg5 || 2f f!= arg5[1] || 3f f!= arg5[2])
    result.b = 0
else
    result.b = 1

if (result.b == 0)
    void* rsi_1 = arg1[0x98]
    
    if (rsi_1 == 0)
        void* rax_1 = (*(arg1[0x28] + 0x30))(&arg1[0x28])
        arg1[0x98] = rax_1
        rsi_1 = rax_1
    
    int64_t r13_1 = 0
    void* const rbx_1 = *(arg1[0x29] + 0x258)
    void* rax_3
    int64_t rax_4
    void* rdx_1
    
    if (rbx_1 != 0)
        rax_3 = sub_14256a090()
        rdx_1 = *(rbx_1 + 0x10)
        rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rbx_1 == 0 || rax_4.d s> *(rdx_1 + 0x38)
            || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        rbx_1 = nullptr
    
    uint128_t zmm0_1 = *(sub_1405be820(arg1) + 0x520)
    
    if (not(zmm0_1.d f== *(rsi_1 + 0x70)))
        int64_t* rax_7 = sub_1424b0d70()
        int64_t* rcx_3 = rax_7[0x23]
        
        if (rcx_3 == 0)
            int64_t r8_2 = *rax_7
            (*(r8_2 + 0x390))(rax_7, arg2, r8_2)
            rcx_3 = rax_7[0x23]
        
        result = (*(*rcx_3 + 0x640))(rcx_3, rbx_1, *(rsi_1 + 0x70))
    
    if (zmm0_1.d f== *(rsi_1 + 0x70) || result.b == 0)
        int32_t rax_9 = arg5[2]
        int64_t* r14_2 = arg6
        uint64_t var_78 = *arg5
        int32_t var_70_1 = rax_9
        int64_t rbx_2 = arg7
        float var_68
        uint128_t var_58
        
        if (sub_141ea5e60(r14_2) != 0)
            sub_141ea3bd0(r14_2, rbx_2, &var_68, &var_58)
            zmm0_1.d = var_78.d.d f+ var_68
            arg2 = var_78:4.d
            int32_t var_64
            arg2[0] = arg2[0] f+ var_64
            var_78.d = zmm0_1.d
            int32_t var_60
            zmm0_1.d = var_70_1.d f+ var_60
            var_78:4.d = arg2[0]
            var_70_1 = zmm0_1.d
        
        if (r14_2 == 0 && arg8 == 1)
            void* rbx_3 = arg1[0x29]
            r14_2 = *(rbx_3 + 0x298)
            rbx_2 = *(rbx_3 + 0x2a0)
        
        *(arg1 + 0x1f2) ^= (*(arg1 + 0x1f2) ^ *(rsi_1 + 0x80)) & 1
        char rax_13
        
        if ((*(rsi_1 + 0x80) & 1) == 0)
            rax_13 = (*(*arg1 + 0x980))(arg1, zmm6, zmm7, arg4, &var_78, arg5, r14_2, rbx_2, arg8)
        
        if ((*(rsi_1 + 0x80) & 1) != 0 || rax_13 != 0)
            void* r14_3 = *(arg1[0x29] + 0x298)
            *(rsi_1 + 0x2c) = *(arg1 + 0xc4)
            *(rsi_1 + 0x34) = *(arg1 + 0xcc)
            *(rsi_1 + 0x48) = r14_3
            *(rsi_1 + 0x50) = *(arg1[0x29] + 0x2a0)
            arg2 = *(arg1[0x16] + 0x1d0)
            var_68 = arg2[0]
            zmm0_1 = _mm_shuffle_ps(arg2, arg2, 0x55)
            float var_60_3 = _mm_shuffle_ps(arg2, arg2, 0xaa)[0]
            int32_t var_64_2 = zmm0_1.d
            int32_t* rax_29 = sub_14200ce40(&var_58, &var_68, arg1)
            *(rsi_1 + 0x20) = *rax_29
            *(rsi_1 + 0x28) = rax_29[2]
            void* rbx_4 = arg1[0x16]
            float zmm1_1[0x4] = *(rbx_4 + 0x1c0)
            uint32_t temp0_8 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_4 + 0x180), zmm1_1, 4))
            var_68.o = zmm1_1
            
            if (temp0_8 != 0)
                *(rbx_4 + 0x180) = zmm1_1
                int32_t* rax_32
                rax_32, zmm6, zmm7 = sub_140adf5d0(&var_68, &var_58)
                *(rbx_4 + 0x190) = *rax_32
                *(rbx_4 + 0x198) = rax_32[2]
            
            *(rsi_1 + 0x38) = *(rbx_4 + 0x190)
            *(rsi_1 + 0x40) = *(rbx_4 + 0x198)
            char rax_35 = sub_141ea5e60(r14_3)
            *(rsi_1 + 0x59) = rax_35
            
            if (rax_35 != 0)
                void* rax_36 = arg1[0x29]
                *(rsi_1 + 0x20) = *(rax_36 + 0x2a8)
                *(rsi_1 + 0x28) = *(rax_36 + 0x2b0)
            
            *(rsi_1 + 0x70) = *(sub_1405be820(arg1) + 0x520)
            *(rsi_1 + 0x1c) = zmm7[0]
            *(rsi_1 + 0x18) = zmm6[0]
            *(rsi_1 + 0x58) = 0
            result = (*(*arg1 + 0x5a0))(arg1)
            *(rsi_1 + 0x5a) = result.b
        else
            result = (*(*arg1 + 0x990))(arg1, zmm6, zmm7, arg4, &var_78, arg5, r14_2, rbx_2, arg8)
            
            if (result.b != 0)
                arg2 = *(arg1[0x16] + 0x1d0)
                zmm0_1.d = arg2.d f- var_78.d
                float temp0_1[0x4] = _mm_shuffle_ps(arg2, arg2, 0x55)
                temp0_1[0] = temp0_1[0] f- var_78:4.d
                float temp0_2[0x4] = _mm_shuffle_ps(arg2, arg2, 0xaa)
                temp0_2[0] = temp0_2[0] f- var_70_1
                void* rax_15
                
                if (zmm0_1.d f!= 0f || temp0_1[0] != 0f || temp0_2[0] != 0f)
                    rax_15.b = 0
                else
                    rax_15.b = 1
                
                if (rax_15.b == 0)
                label_141ef46c4:
                    var_68.q = var_78
                    int32_t var_60_1 = var_70_1
                    uint64_t* var_a8_2
                    var_a8_2.b = 0
                    float zmm8[0x4]
                    zmm6 = sub_141f49c70(arg1[0x16], &var_68, 0, 0, zmm6, zmm7, zmm8, var_a8_2.b)
                    (*(*arg1 + 0x5b0))(arg1, zx.q(arg8))
                    int64_t r9_3
                    r9_3.b = 1
                    (*(*arg1 + 0x6f0))(arg1, r14_2, rbx_2, r9_3)
                    (*(*arg1 + 0x9c0))(arg1)
                    (*(*arg1 + 0x618))(arg1)
                    void* rcx_15 = arg1[0x16]
                    int32_t var_60_2
                    
                    if (rcx_15 == 0)
                        var_68.q = data_143dbb1f8.q
                        var_60_2 = data_143dbb200
                    else
                        uint128_t zmm1 = *(rcx_15 + 0x1d0)
                        var_68 = zmm1.d
                        uint128_t zmm0_2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        var_60_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                        int32_t var_64_1 = zmm0_2.d
                    
                    arg1[0x4a] = var_68.q
                    arg1[0x4b].d = var_60_2
                    
                    if (rcx_15 == 0)
                        var_58 = data_14399f720
                    else
                        var_58 = *(rcx_15 + 0x1c0)
                    
                    result = zx.q(*(arg1 + 0xcc))
                    *(arg1 + 0x240) = var_58
                    *(arg1 + 0x25c) = *(arg1 + 0xc4)
                    *(arg1 + 0x264) = result.d
                else
                    if (arg8 != (*(*arg1 + 0x5a0))(arg1))
                        goto label_141ef46c4
                    
                    result = arg1[0x29]
                    
                    if (result != 0)
                        r13_1 = result[0x53]
                    
                    if (r13_1 != r14_2)
                        goto label_141ef46c4
                    
                    if (result != 0 && result[0x54] != rbx_2)
                        goto label_141ef46c4
            
            *(rsi_1 + 0x18) = zmm6[0]
            *(rsi_1 + 0x58) = 1
        
        *(rsi_1 + 0x80) &= 0xfffffffe

return result
