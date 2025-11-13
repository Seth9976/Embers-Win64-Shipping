// 函数: sub_142675530
// 地址: 0x142675530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t result = 0
int32_t var_228 = 0
void* rcx

if (arg2[1].d != 0)
    rcx = arg1[0x95]

int64_t* rbx_5

if (arg2[1].d == 0 || rcx == 0 || *(rcx + 8) == 0)
    rbx_5 = arg3[1]
    
    if (rbx_5 != 0)
    label_142675a4e:
        result = rbx_5[1].d
        rbx_5[1].d -= 1
        
        if (result == 1)
            result = (**rbx_5)(rbx_5)
            int32_t rsi_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*(*rbx_5 + 8))(rbx_5, zx.q(rsi_1))
else
    int64_t* rdi_1 = arg3[1]
    void* r15_1 = *arg3
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* var_1d8
    int64_t* rcx_1
    
    if (r15_1 != 0)
        rcx_1 = var_1d8
    else
        rcx_1 = arg1[0x68]
        result = (r15_1 + 1).d
        r15_1 = arg1[0x67]
        var_1d8 = rcx_1
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
            rcx_1 = var_1d8
    
    if ((result.b & 1) != 0 && rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            (**var_1d8)(var_1d8)
            int32_t rax_4 = *(var_1d8 + 0xc)
            *(var_1d8 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*var_1d8 + 8))(var_1d8, 1)
    
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
    
    void* const var_1a8_1 = rbx_2
    void** const var_1b0 = &data_143459760
    void var_1a0
    sub_140d3a3a0(&var_1a0, arg4)
    int64_t var_198_1 = 0
    void var_188
    sub_1426022c0(&var_188)
    uint32_t rax_15
    
    if (data_143de5480 != 0)
        rax_15.b = GetCurrentThreadId() == data_143de5470
    
    void* rdx_2
    void* r14_1
    
    if (data_143de5480 == 0 || rax_15.b != 0)
        rdx_2 = arg1[0x95]
        r14_1 = rdx_2 + 0x60
    else
        rdx_2 = arg1[0x95]
        r14_1 = &var_188
    
    sub_142611af0(r14_1, *(rdx_2 + 8), *(r15_1 + 0x20), &var_1b0)
    void* r15_2 = *(r15_1 + 0x10)
    
    if (r15_2 != 0 && r15_2 != -8)
        int128_t* rdi_2 = *arg2
        void* r13_1 = rdi_2 + sx.q(arg2[1].d) * 0x48
        
        if (rdi_2 != r13_1)
            int128_t zmm6
            int128_t var_58_1 = zmm6
            int128_t* rbx_3 = &rdi_2[2]
            int128_t zmm7
            int128_t var_68_1 = zmm7
            uint32_t zmm8[0x4]
            uint32_t var_78_1[0x4] = zmm8
            uint32_t zmm9[0x4]
            uint32_t var_88_1[0x4] = zmm9
            uint32_t zmm10[0x4]
            uint32_t var_98_1[0x4] = zmm10
            int128_t zmm11 = 0x80000000
            int128_t zmm12 = zx.o(0)
            int128_t zmm13 = 0xbf000000
            uint32_t zmm15[0x4] = 0x7fffffff
            
            do
                bool cond:0_1 = (rbx_3[2].b & 1) == 0
                uint32_t var_210
                int128_t* r8_2 = &var_210
                uint32_t zmm2[0x4] = *rbx_3
                int32_t var_200
                int128_t* rdx_4 = &var_200
                float zmm3 = *(rbx_3 - 0xc)
                uint32_t zmm0_1[0x4] = *rdi_2 ^ zmm11
                uint32_t zmm4_1[0x4] = *(rbx_3 - 8)
                zmm6 = *(rbx_3 - 0x14)
                zmm9 = _mm_max_ss(arg1[0x90].d[0], zmm12.d)
                uint32_t zmm5_1[0x4] = *(rbx_3 - 4)
                zmm4_1[0] = zmm4_1[0] f- zmm6.d
                zmm7 = rbx_3[-1].d
                zmm6.d = zmm6.d f+ zmm4_1[0]
                uint32_t zmm1_1[0x4] = *(rbx_3 - 0x1c)
                uint32_t var_220 = zmm0_1[0]
                zmm5_1[0] = zmm5_1[0] f- zmm7.d
                zmm7.d = zmm7.d f+ zmm5_1[0]
                uint32_t var_21c_1 = (*(rbx_3 - 0x18))[0]
                uint32_t var_218_1 = (zmm1_1 ^ zmm11)[0]
                zmm2[0] = zmm2[0] f- zmm3
                zmm6.d = zmm6.d f* zmm13.d
                zmm3 = zmm3 f+ zmm2[0]
                zmm7.d = zmm7.d f* zmm13.d
                zmm2[0] = zmm2[0] f* 0.5f
                zmm9[0] = zmm9[0] f+ zmm2[0]
                zmm5_1[0] = zmm5_1[0] f* zmm13.d
                var_200 = zmm6.d
                zmm4_1[0] = zmm4_1[0] f* zmm13.d
                float var_1fc_1 = zmm3 * 0.5f
                uint32_t var_208_1 = _mm_and_ps(zmm5_1, zmm15)[0]
                int32_t var_1f8_1 = zmm7.d
                var_210 = _mm_and_ps(zmm4_1, zmm15)[0]
                uint32_t var_20c_1 = _mm_and_ps(zmm9, zmm15)[0]
                int32_t var_108
                int32_t zmm14_1
                
                if (cond:0_1)
                    zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14_1, zmm15 =
                        sub_14260acd0(r14_1, rdx_4, r8_2, r15_2 + 8, &var_228, &var_108, &var_220)
                else
                    zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14_1, zmm15 = sub_14260a910(r14_1, 
                        rdx_4, r8_2, r15_2 + 8, &var_228, &var_108, &var_220, zmm12.d)
                
                int64_t rcx_13 = var_228.q
                
                if (rcx_13 != 0)
                    int32_t var_104
                    zmm0_1 = var_104
                    zmm2 = var_108 ^ zmm11
                    int32_t var_100
                    zmm1_1 = var_100 ^ zmm11
                    zmm4_1 = *(rbx_3 - 0x1c)
                    zmm3 = *rdi_2 f- zmm2[0]
                    zmm4_1[0] = zmm4_1[0] f- zmm1_1[0]
                    zmm8[0] = zmm8[0] f* zmm8[0]
                    uint32_t var_1f0_1 = zmm2[0]
                    zmm2 = *(rbx_3 - 0x18)
                    zmm10[0] = zmm10[0] f* zmm10[0]
                    zmm2[0] = zmm2[0] f- zmm0_1[0]
                    zmm4_1[0] = zmm4_1[0] f* zmm4_1[0]
                    zmm8[0] = zmm8[0] f+ zmm10[0]
                    zmm2[0] = zmm2[0] f* zmm2[0]
                    zmm4_1[0] = zmm4_1[0] f+ zmm3 * zmm3
                    zmm9[0] = zmm9[0] f* zmm9[0]
                    zmm8[0] = zmm8[0] f* zmm14_1
                    uint32_t var_1ec_1 = zmm1_1[0]
                    zmm4_1[0] = zmm4_1[0] f+ zmm2[0]
                    uint32_t var_1e8_1 = zmm0_1[0]
                    zmm8[0] = zmm8[0] f+ zmm9[0]
                    
                    if (not(zmm4_1[0] f> zmm8[0]))
                        rbx_3[2].d |= 2
                        uint32_t var_1c0_1 = var_1e8_1
                        uint32_t var_1c8[0x4]
                        var_1c8[0].q = var_1f0_1.q
                        *(rbx_3 + 8) = var_1c8
                        *(rbx_3 + 0x18) = rcx_13
                
                rdi_2 += 0x48
                rbx_3 += 0x48
            while (rdi_2 != r13_1)
    
    sub_142602500(&var_188)
    result = 0x43459748
    var_1b0 = &data_143459748
    rbx_5 = arg3[1]
    
    if (rbx_5 != 0)
        goto label_142675a4e
__security_check_cookie(rax_1 ^ &var_268)
return result
