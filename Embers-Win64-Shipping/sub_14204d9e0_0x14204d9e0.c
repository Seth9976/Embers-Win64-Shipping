// 函数: sub_14204d9e0
// 地址: 0x14204d9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint128_t* r15 = nullptr
int64_t rbx = sx.q(arg2[1].d)
int64_t rdi = *arg2
uint128_t* var_a0 = nullptr
int32_t var_98 = rbx.d

if (rbx.d != 0)
    sub_1405a4be0(&var_a0, rbx.d, 0)
    r15 = var_a0
    result = memcpy(r15, rdi, (rbx << 4).d)
    rbx = zx.q(var_98)
else
    int32_t var_94_1 = 0

if (rbx.d s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int64_t var_88
    uint128_t zmm8 = zx.o(var_88)
    int128_t zmm9 = 0x7f7fc99e
    
    do
        int32_t rdi_1 = (rbx - 1).d
        uint128_t* var_c8 = nullptr
        int32_t rbx_1 = rbx.d - rdi_1
        int32_t var_bc_1 = 0
        int64_t var_90_1 = r15[sx.q(rdi_1)].q
        
        if (rbx_1 != 1)
            memmove(&r15[sx.q(rdi_1)], &r15[sx.q(rdi_1 + 1)], (rbx_1 - 1) << 4)
        
        sub_1405a5010(&var_a0)
        int32_t var_b0_1 = *arg3
        int64_t var_ac_1 = 0
        char var_a4_1 = 0
        int32_t var_c0_1 = 1
        sub_1405a4df0(&var_c8)
        uint128_t* rsi_1 = var_c8
        int64_t rbx_3 = sx.q(var_c0_1)
        uint128_t zmm0
        zmm0.d = var_90_1.d.d
        _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        zmm0.d = var_90_1:4.d.d
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
        int32_t rdi_2 = (rbx_3 + 1).d
        uint128_t var_b8 = zmm0
        *rsi_1 = zmm0
        rsi_1[1].q = var_ac_1
        var_b8:4.d = var_88:4.d.d
        var_b8.d = var_88.d.d
        int32_t var_b0_2 = *arg3
        int64_t var_ac_2 = 0
        char var_a4_2 = 0
        
        if (rdi_2 s> var_bc_1)
            sub_1405a4df0(&var_c8)
            rsi_1 = var_c8
        
        r15 = var_a0
        int64_t rcx_8 = rbx_3 * 3
        rbx = zx.q(rdi_1)
        uint128_t zmm5_1 = data_143a2e258
        uint128_t zmm1
        
        while (true)
            float zmm4_1 = zmm9.d
            *(rsi_1 + (rcx_8 << 3)) = var_b8
            *(rsi_1 + (rcx_8 << 3) + 0x10) = var_ac_2
            uint128_t* rax_6 = sx.q(rdi_2 - 1) * 3
            int32_t i = 0
            zmm7 = *(rsi_1 + (rax_6 << 3) + 4)
            zmm6 = *(rsi_1 + (rax_6 << 3))
            int32_t i_1 = -1
            
            if (rbx.d s> 0)
                rax_6 = r15
                
                do
                    int32_t i_2 = i_1
                    zmm0.d = (*rax_6).d f- zmm6.d
                    float zmm2 = *(rax_6 + 4) f- zmm7.d
                    float zmm3 = zmm4_1
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm2 = zmm2 * zmm2 f+ zmm0.d
                    
                    if (not(zmm2 >= zmm4_1))
                        zmm0 = *rax_6
                        zmm8 = _mm_shuffle_ps(zmm0, zmm0, 0xee)
                        uint128_t var_90_2 = zmm0
                    
                    zmm1.d = (*(rax_6 + 8)).d f- zmm6.d
                    i_1 = i
                    zmm0.d = (*(rax_6 + 0xc)).d f- zmm7.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4_1 = _mm_min_ss(zmm2, zmm3)
                    
                    if (zmm3 <= zmm2)
                        i_1 = i_2
                    
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm1.d = zmm1.d f+ zmm0.d
                    
                    if (not(zmm1.d f>= zmm4_1))
                        zmm8 = *rax_6
                        i_1 = i
                        zmm4_1 = zmm1.d
                    
                    i += 1
                    rax_6 = &rax_6[1]
                while (i s< rbx.d)
            
            zmm0.d = zmm5_1.d f* zmm5_1.d
            
            if (zmm4_1 f>= zmm0.d)
                rax_6.b = 0
            else
                int32_t rax_8 = rbx.d - i_1
                
                if (rax_8 != 1)
                    memmove(&r15[sx.q(i_1)], &r15[sx.q(i_1 + 1)], (rax_8 - 1) << 4)
                
                sub_1405a5010(&var_a0)
                zmm5_1 = data_143a2e258
                rax_6.b = 1
                rbx = zx.q(rbx.d - 1)
                r15 = var_a0
            
            if (rax_6.b == 0)
                break
            
            int64_t r14_1 = sx.q(rdi_2)
            var_b8.q = zmm8.q
            int32_t var_b0_3 = *arg3
            var_ac_2 = 0
            rdi_2 = (r14_1 + 1).d
            char var_a4_3 = 0
            
            if (rdi_2 s> var_bc_1)
                sub_1405a4df0(&var_c8)
                zmm5_1 = data_143a2e258
                rsi_1 = var_c8
            
            rcx_8 = r14_1 * 3
        
        result = sx.q(rdi_2 - 1)
        void* rcx_15 = result * 3
        zmm1.d = (*rsi_1).d f- *(rsi_1 + (rcx_15 << 3))
        zmm0.d = (*(rsi_1 + 4)).d f- *(rsi_1 + (rcx_15 << 3) + 4)
        
        if (rdi_2 s>= 4)
            zmm0.d = zmm0.d f* zmm0.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm5_1.d = zmm5_1.d f* zmm5_1.d
            zmm0.d = zmm0.d f+ zmm1.d
            
            if (not(zmm0.d f>= zmm5_1.d))
                if (0 != 0)
                    memmove(rsi_1 + sx.q(rdi_2 - 1) * 0x18, rsi_1 + sx.q(rdi_2) * 0x18, 0)
                
                sub_1405fde90(&var_c8)
                zmm8, zmm9 = sub_1420580d0(&var_c8)
                int64_t rdi_5 = sx.q(arg1[1].d)
                result = zx.q((rdi_5 + 1).d)
                arg1[1].d = result.d
                
                if (result.d s> *(arg1 + 0xc))
                    result = sub_1405a4f90(arg1)
                
                int64_t rsi_2 = sx.q(rdi_2 - 1)
                int64_t* rdi_7 = (rdi_5 << 4) + *arg1
                *rdi_7 = 0
                rdi_7[1].d = rsi_2.d
                
                if (rsi_2.d != 0)
                    sub_140808f70(rdi_7, rsi_2.d, 0)
                    rsi_1 = var_c8
                    result = memcpy(*rdi_7, rsi_1, (rsi_2 * 0x18).d)
                else
                    *(rdi_7 + 0xc) = rsi_2.d
                    rsi_1 = var_c8
        
        if (rsi_1 != 0)
            result = sub_140a74f90(rsi_1)
    while (rbx.d s> 0)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
