// 函数: sub_142675aa0
// 地址: 0x142675aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_828
int64_t rax_1 = __security_cookie ^ &var_828
int32_t result = 0
int32_t var_7d8 = 0
void* rcx = arg1[0x95]

if (rcx == 0 || arg2[1].d == 0 || *(rcx + 8) == 0)
    int64_t* rbx_5 = arg3[1]
    
    if (rbx_5 != 0)
        result = rbx_5[1].d
        rbx_5[1].d -= 1
        
        if (result == 1)
            result = (**rbx_5)(rbx_5)
            int32_t rsi_2 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rsi_2 == 1)
                result = (*(*rbx_5 + 8))(rbx_5, zx.q(rsi_2))
else
    int64_t* rdi_1 = arg3[1]
    void* r13_1 = *arg3
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* var_790
    int64_t* rcx_1
    
    if (r13_1 != 0)
        rcx_1 = var_790
    else
        rcx_1 = arg1[0x68]
        result = (r13_1 + 1).d
        r13_1 = arg1[0x67]
        var_790 = rcx_1
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
            rcx_1 = var_790
    
    if ((result.b & 1) != 0 && rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            (**var_790)(var_790)
            int32_t rax_4 = *(var_790 + 0xc)
            *(var_790 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*var_790 + 8))(var_790, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_8 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    void* rax_11 = (*(*arg1 + 0x150))(arg1)
    void* const rbx_2
    
    if (rax_11 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = *(rax_11 + 0x120)
        
        if (rbx_2 == 0)
            rbx_2 = nullptr
        else
            void* rax_12 = sub_14269bba0()
            void* rdx = *(rbx_2 + 0x10)
            int64_t rax_13 = sx.q(*(rax_12 + 0x38))
            
            if (rax_13.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                rbx_2 = nullptr
    
    void* const var_778_1 = rbx_2
    void** const var_780 = &data_143459760
    void var_770
    sub_140d3a3a0(&var_770, arg4)
    int64_t var_768_1 = 0
    void var_128
    sub_1426022c0(&var_128)
    uint32_t rax_15
    
    if (data_143de5480 != 0)
        rax_15.b = GetCurrentThreadId() == data_143de5470
    
    void* rdx_2
    void* r15_1
    
    if (data_143de5480 == 0 || rax_15.b != 0)
        rdx_2 = arg1[0x95]
        r15_1 = rdx_2 + 0x60
    else
        rdx_2 = arg1[0x95]
        r15_1 = &var_128
    
    sub_142611af0(r15_1, *(rdx_2 + 8), *(r13_1 + 0x20), &var_780)
    void* r12_1 = *(r13_1 + 0x10)
    
    if (r12_1 == 0 || r12_1 == -8)
        sub_142602500(&var_128)
        var_780 = &data_143459748
        result = sub_1405970a0(arg3)
    else
        int32_t rax_16 = *(arg1 + 0x274)
        uint128_t zmm2 = zx.o(*(arg1 + 0x26c))
        float zmm1_1[0x4] = _mm_max_ss(arg1[0x90].d[0], 0)
        uint128_t zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        int32_t var_a8 = zmm2.d
        int32_t var_a0_1 = zmm0_1.d
        int128_t* rdi_2 = *arg2
        int64_t rax_18 = sx.q(arg2[1].d)
        zmm1_1[0] = zmm1_1[0] f+ rax_16
        float var_a4_1 = zmm1_1[0]
        void* r14_2 = rax_18 * 0x38 + rdi_2
        
        if (rdi_2 != r14_2)
            int128_t* rbx_3 = rdi_2 + 0x14
            int128_t zmm7 = 0x80000000
            
            do
                int32_t var_134 = var_134 & 0xfffffffe
                int32_t var_148 = 0
                int64_t var_144 = 0x7f7fffff
                int64_t var_13c_1 = 0
                int64_t var_748[0x4]
                memset(&var_748, 0, 0x600)
                zmm1_1 = rbx_3[-1].d
                int32_t* var_800_1 = nullptr
                int32_t var_7d0 = (*rdi_2 ^ zmm7).d
                int32_t var_7cc_1 = (*(rbx_3 - 0xc)).d
                float var_7c8_1 = (zmm1_1 ^ zmm7)[0]
                zmm1_1 = *(rbx_3 - 4)
                int32_t var_7a8 = (*(rbx_3 - 8) ^ zmm7).d
                int32_t var_7a4_1 = (*rbx_3).d
                float var_7a0_1 = (zmm1_1 ^ zmm7)[0]
                var_7d8.q = 0
                zmm7 = sub_14260a640(r15_1, &var_7d0, &var_a8, r12_1 + 8, &var_7d8, var_800_1)
                int64_t rdx_5 = var_7d8.q
                
                if (rdx_5 != 0)
                    void var_98
                    int32_t rax_19
                    int32_t zmm8_1
                    rax_19, zmm7, zmm8_1 = sub_1426150f0(r15_1, rdx_5, &var_7d0, &var_7a8, 
                        r12_1 + 8, &var_144, &var_98, &var_748, &var_148, 0x80)
                    
                    if (((rax_19 u>> 0x1e).b & 1) != 0)
                        int32_t zmm6_1 = var_144.d
                        uint8_t rax_20
                        
                        rax_20 = zmm6_1 f== zmm8_1 ? 0 : 1
                        
                        if (rax_20 != 0)
                            int32_t rax_21 = var_148
                            *(rbx_3 + 0x1c) = 1
                            int64_t rdx_6
                            
                            if (rax_21 s<= 0)
                                rdx_6 = 0
                            else
                                rdx_6 = var_748[sx.q(rax_21 - 1)]
                            
                            uint128_t zmm0_3 = *rbx_3
                            float zmm5_1[0x4] = *(rbx_3 - 8)
                            zmm1_1 = *(rbx_3 - 4)
                            zmm5_1[0] = zmm5_1[0] f- *rdi_2
                            float zmm2_1 = *(rbx_3 - 0xc)
                            int64_t zmm4_1 = rbx_3[-1].d
                            zmm0_3.d = zmm0_3.d f- zmm2_1
                            zmm1_1[0] = zmm1_1[0] f- zmm4_1.d
                            zmm5_1[0] = zmm5_1[0] f* zmm6_1
                            zmm0_3.d = zmm0_3.d f* zmm6_1
                            zmm5_1[0] = zmm5_1[0] f+ *rdi_2
                            zmm1_1[0] = zmm1_1[0] f* zmm6_1
                            zmm4_1.d = zmm4_1.d f+ zmm1_1[0]
                            float var_758_1 = zmm2_1 f+ zmm0_3.d
                            zmm0_3.q = (_mm_unpacklo_ps(zmm5_1, zmm4_1)).q
                            *(rbx_3 + 4) = zmm0_3
                            uint128_t var_760 = zmm0_3
                            *(rbx_3 + 0x14) = rdx_6
                
                rdi_2 += 0x38
                rbx_3 += 0x38
            while (rdi_2 != r14_2)
        
        sub_142602500(&var_128)
        result = 0x43459748
        var_780 = &data_143459748
        int64_t* rbx_4 = arg3[1]
        
        if (rbx_4 != 0)
            result = rbx_4[1].d
            rbx_4[1].d -= 1
            
            if (result == 1)
                result = (**rbx_4)(rbx_4)
                int32_t rsi_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*(*rbx_4 + 8))(rbx_4, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_828)
return result
