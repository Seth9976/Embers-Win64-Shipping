// 函数: sub_1409d4c80
// 地址: 0x1409d4c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_158

if (arg1 + 0x608 != &var_158)
    *(arg1 + 0x608) = 0
    int64_t* rbx_1 = *(arg1 + 0x610)
    
    if (rbx_1 != 0)
        *(arg1 + 0x610) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

sub_1409d9c00(arg1 + 0x618)
sub_1409d9c70(arg1 + 0x6b8)
float result = sub_1409d9c70(arg1 + 0x668)

if (*(arg1 + 0x600) != 0)
    int64_t* rcx_5 = data_143cede08
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    int32_t var_150
    float zmm1[0x4]
    float zmm2[0x4]
    float zmm6[0x4]
    float zmm7[0x4]
    uint128_t zmm8
    uint128_t zmm9
    
    if ((*(*rcx_5 + 0x90))(rcx_5) == 0)
        sub_141cd9030(*(arg1 + 0x28), &var_158)
        float zmm0_1[0x4] = var_158
        int32_t var_154
        zmm1 = var_154
        zmm7 = zmm0_1
        int32_t var_148
        uint32_t zmm4_1[0x4] = var_148
        int32_t var_14c
        uint32_t zmm3_1[0x4] = var_14c
        zmm8.d = zmm1.d f+ zmm4_1[0]
        zmm2 = var_150
        zmm7[0] = zmm7[0] f+ zmm3_1[0]
        int32_t var_144
        zmm6 = var_144
        zmm3_1[0] = zmm3_1[0] f- zmm0_1[0]
        zmm4_1[0] = zmm4_1[0] f- zmm1[0]
        zmm9.d = zmm2.d f+ zmm6[0]
        zmm8.d = zmm8.d f* 0.5f
        zmm6[0] = zmm6[0] - zmm2[0]
        zmm7[0] = zmm7[0] * 0.5f
        zmm3_1[0] = zmm3_1[0] f* 0.5f
        zmm4_1[0] = zmm4_1[0] f* 0.5f
        zmm6[0] = zmm6[0] * 0.5f
        zmm3_1 = _mm_and_ps(zmm3_1, 0x7fffffff)
        zmm4_1 = _mm_and_ps(zmm4_1, 0x7fffffff)
        zmm9.d = zmm9.d f* 0.5f
        zmm3_1 = _mm_max_ss(zmm3_1[0], zmm4_1[0])
        zmm6 = _mm_max_ss(_mm_and_ps(zmm6, 0x7fffffff)[0], zmm3_1[0])
    else
        zmm7 = data_143dbb1f8
        zmm8 = data_143dbb1fc
        zmm9 = data_143dbb200
        zmm6 = 0x49800000
    
    void* rax_5 = j_sub_140a82f30(0x1d0)
    void* const rdi_1 = rax_5
    float var_178[0x4]
    int32_t var_16c
    float var_168[0x4]
    int32_t arg_8
    
    if (rax_5 == 0)
        rdi_1 = nullptr
    else
        int32_t rcx_7 = arg_8
        *(rax_5 + 0x120) = 0
        int32_t rcx_8 = rcx_7 & 0xfffffff0
        *(rax_5 + 0x130) = 0
        *(rax_5 + 0x134) = 6
        *(rax_5 + 0x140) = 0
        *(rax_5 + 0x188) = 0x80000000
        
        do
            *(rdi_1 + ((zx.q(rcx_8) & 7) << 3) + 0x148) = 0
            
            if ((rcx_8.b & 7) u>= 7)
                rcx_8 |= 8
            else
                rcx_8 ^= ((rcx_8 + 1) ^ rcx_8) & 7
        while (((rcx_8 u>> 3).b & 1) == 0)
        
        var_16c = 0
        var_178[0] = zmm7[0]
        int32_t var_15c_1 = 0
        var_168[0] = zmm6[0]
        float zmm0_2[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
        zmm1 = _mm_shuffle_ps(var_168, var_168, 0xe1)
        zmm0_2[0] = zmm8.d
        zmm1[0] = zmm6[0]
        zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc6)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xc6)
        zmm0_2[0] = zmm9.d
        zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xc9)
        zmm1[0] = zmm6[0]
        zmm6[0] = zmm6[0] * 3.20611321e-06f
        *(rdi_1 + 0x1b8) = 0
        *(rdi_1 + 0x190) = zmm0_2
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        *(rdi_1 + 0x1a0) = zmm1
        var_178 = zmm0_2
        zmm1[0] = zmm1[0] * 0.53125f
        var_168 = zmm1
        *(rdi_1 + 0x1b0) = zmm1[0]
        zmm1[0] = zmm1[0] - zmm1[0]
        *(rdi_1 + 0x1b4) = zmm1[0]
        *(rdi_1 + 0x1c0) = zmm6[0]
        *(rdi_1 + 0x1c8) = 0
    
    void*** rax_15 = j_sub_140a82f30(0x18)
    void*** rbx_2 = rax_15
    
    if (rax_15 == 0)
        rbx_2 = nullptr
    else
        rax_15[1].d = 1
        *(rax_15 + 0xc) = 1
        *rbx_2 = &data_142e40b20
        rbx_2[2] = rdi_1
    
    var_158.q = rdi_1
    var_150.q = rbx_2
    
    if (arg1 + 0x608 == &var_158)
    label_1409d4fec:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)
    else
        *(arg1 + 0x608) = rdi_1
        int64_t* rdi_2 = *(arg1 + 0x610)
        var_158.q = 0
        
        if (rbx_2 == rdi_2)
            goto label_1409d4fec
        
        var_150.q = 0
        *(arg1 + 0x610) = rbx_2
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp7_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_2 = var_150.q
            goto label_1409d4fec
    
    sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_8, data_143f35cc8)
    int32_t rcx_15 = 0
    void* r13_2 = *(arg1 + 0x28) + 0xe0
    var_178[0] = 0
    int32_t rdi_3 = *(r13_2 + 0x28)
    void* r9_1 = r13_2 + 0x10
    var_178[1] = 1
    var_178[2].q = r9_1
    int32_t r8_2 = 0
    var_168[0] = 0xffffffff
    var_168[1].q = 0
    
    if (rdi_3 != 0)
        void* rax_20 = *(r9_1 + 0x10)
        
        if (rax_20 != 0)
            r9_1 = rax_20
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(rdi_3 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_1409d50b9:
            int32_t rax_27 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
            uint64_t rflags_1
            int32_t temp0_13
            temp0_13, rflags_1 = _bit_scan_reverse(rax_27)
            var_178[1] = rax_27
            int32_t rax_28
            
            if (rax_27 == 0)
                rax_28 = 0x20
            else
                rax_28 = 0x1f - temp0_13
            
            var_168[1] = r8_2 - rax_28 + 0x1f
            
            if (r8_2 - rax_28 + 0x1f s> rdi_3)
                var_168[1] = rdi_3
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_15)
                r8_2 += 0x20
                rcx_15 += 1
                var_168[2] = r8_2
                var_178[0] = rcx_15
                
                if (rdx_6.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                var_168[0] = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_1409d50b9
            
            var_168[1] = rdi_3
    
    int32_t r14_1 = *(r13_2 + 0x28)
    void* rdx_7 = r13_2 + 0x10
    int32_t rsi_1 = *(rdx_7 + 0x18)
    float var_130_1[0x4] = var_178
    int32_t r8_5 = r14_1 s>> 5
    int32_t r9_3 = r14_1 & 0xffffffe0
    int64_t var_e8_1 = (_mm_unpackhi_pd(var_168, var_168[0].q)).q
    float var_108[0x4] = r13_2.o
    float var_f8_1[0x4] = var_130_1
    int32_t rbx_3
    
    if (r14_1 != rsi_1)
        void* rax_30 = *(rdx_7 + 0x10)
        void* r11_1 = rdx_7
        
        if (rax_30 != 0)
            r11_1 = rax_30
        
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(rsi_1 - 1)
        int32_t rdx_11 = *(r11_1 + (sx.q(r8_5) << 2)) & 0xffffffff << (r14_1.b & 0x1f)
        
        if (rdx_11 != 0)
        label_1409d517d:
            int32_t rax_37 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_2
            int32_t temp0_15
            temp0_15, rflags_2 = _bit_scan_reverse(rax_37)
            
            if (rax_37 == 0)
                rbx_3 = 0x20
            else
                rbx_3 = 0x1f - temp0_15
            
            r14_1 = r9_3 - rbx_3 + 0x1f
            
            if (r14_1 s> rsi_1)
                r14_1 = rsi_1
        else
            while (true)
                int64_t rcx_20 = sx.q(r8_5)
                r9_3 += 0x20
                r8_5 += 1
                
                if (rcx_20.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r11_1 + (rcx_20 << 2) + 4)
                
                if (rdx_11 != 0)
                    goto label_1409d517d
            
            r14_1 = rsi_1
        
        rdx_7 = r13_2 + 0x10
    
    void* rsi_2 = arg_8.q
    
    while (true)
        result = var_f8_1[3]
        int64_t rcx_22 = var_f8_1[0].q
        
        if (result == r14_1 && rcx_22 == rdx_7 && var_108[0].q == r13_2)
            break
        
        float result_1 = data_143a1c6c8
        zmm8 = data_143dbb1f8
        
        if (result s< *(rcx_22 + 0x18))
            result_1 = result
        
        rbx_3.b = 0
        zmm7 = data_143dbb1fc
        zmm9 = zmm8
        zmm6 = data_143dbb200
        zmm10 = zmm7
        zmm11 = zmm6
        TEB* gsbase
        
        if (data_143cef008
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cef008)
            
            if (data_143cef008 == 0xffffffff)
                atexit(sub_142cb92d0)
                _Init_thread_footer(&data_143cef008)
        
        sub_1409c3d60(arg1, result_1, &data_143ceeff8)
        int32_t* r8_7 = data_143ceeff8
        void* rcx_24 = &r8_7[sx.q(data_143cef000)]
        int64_t r9_6 = 0
        uint64_t r10_5 = (rcx_24 - r8_7 + 3) u>> 2
        
        if (r8_7 u> rcx_24)
            r10_5 = 0
        
        uint128_t zmm0_4
        
        if (r10_5 != 0)
            int64_t rdx_13 = **(rsi_2 + 0x18)
            
            do
                int64_t rcx_25 = sx.q(*r8_7) * 3
                
                if (rbx_3.b == 0)
                    zmm0_4 = zx.o(*(rdx_13 + (rcx_25 << 2)))
                    rbx_3.b = 1
                    zmm8 = zmm0_4
                    var_16c.q = zmm0_4.q
                    zmm9 = zmm8
                    zmm7 = var_168[0]
                    var_168[1] = *(rdx_13 + (rcx_25 << 2) + 8)
                    zmm10 = zmm7
                    zmm6 = var_168[1]
                    zmm11 = zmm6
                else
                    zmm0_4 = *(rdx_13 + (rcx_25 << 2))
                    
                    if (not(zmm9.d f<= zmm0_4.d))
                        zmm9 = zmm0_4
                    
                    zmm2 = *(rdx_13 + (rcx_25 << 2) + 4)
                    
                    if (not(zmm10[0] <= zmm2[0]))
                        zmm10 = zmm2
                    
                    zmm1 = *(rdx_13 + (rcx_25 << 2) + 8)
                    
                    if (not(zmm11[0] <= zmm1[0]))
                        zmm11 = zmm1
                    
                    if (not(zmm8.d f>= zmm0_4.d))
                        zmm8 = zmm0_4
                    
                    if (not(zmm7[0] >= zmm2[0]))
                        zmm7 = zmm2
                    
                    if (not(zmm6[0] >= zmm1[0]))
                        zmm6 = zmm1
                
                r8_7 = &r8_7[1]
                r9_6 += 1
            while (r9_6 != r10_5)
        
        int128_t* rcx_26 = *(arg1 + 0x608)
        zmm8.d = zmm8.d f- zmm9.d
        zmm6[0] = zmm6[0] - zmm11[0]
        var_130_1[1] = 0
        zmm7[0] = zmm7[0] - zmm10[0]
        var_168[1] = 0
        void* var_c8 = arg1
        float result_2 = result_1
        zmm8.d = zmm8.d f* 0.5f
        zmm6[0] = zmm6[0] * 0.5f
        zmm7[0] = zmm7[0] * 0.5f
        zmm9.d = zmm9.d f+ zmm8.d
        float var_d8_1 = zmm6[0]
        zmm11[0] = zmm11[0] + zmm6[0]
        var_168[0] = var_d8_1
        zmm10[0] = zmm10[0] + zmm7[0]
        zmm2 = _mm_unpacklo_ps(zmm8, zmm7[0].q)
        float var_150_1 = zmm11[0]
        zmm1 = _mm_unpacklo_ps(zmm9, zmm10[0].q)
        var_130_1[0] = var_150_1
        zmm0_4.q = zmm1.q
        zmm1 = var_130_1
        zmm1[0].q = zmm2.q
        void* var_138_1
        var_138_1.o = zmm0_4
        var_130_1 = zmm1
        float var_a8_1[0x4] = zmm1
        uint128_t var_b8_1 = zmm0_4
        sub_1409af410(rcx_26, &var_c8, rcx_26, &rcx_26[0x19])
        var_f8_1[2] &= not.d(var_108[3])
        sub_14059bdd0(&var_108[2])
        rdx_7 = r13_2 + 0x10

return result
