// 函数: sub_14178c3d0
// 地址: 0x14178c3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t rbx = arg2[1].d
float zmm6[0x4] = arg4
int64_t* result = arg1

if (rbx s> 1)
    arg4 = *arg3
    float zmm2[0x4] = arg3[1].d
    float zmm0[0x4] = *(arg3 + 0xc)
    zmm2[0] = zmm2[0] f- *(arg3 + 4)
    float zmm1[0x4] = *(arg3 + 0x14)
    zmm0[0] = zmm0[0] - arg4[0]
    zmm1[0] = zmm1[0] f- *(arg3 + 8)
    
    if (zmm0[0] <= zmm2[0] || not(zmm0[0] > zmm1[0]))
        zmm0 = _mm_max_ss(zmm2[0], zmm1[0])
    
    if (zmm0[0] >= zmm6[0])
        zmm6[0] = zmm6[0] * 0.100000001f
        float temp0_2[0x4] = __maxss_xmmss_memss(zmm6[0], 0x3a83126e)
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        arg4[0] = arg4[0] - temp0_2[0]
        *arg3 = arg4[0]
        zmm1 = *(arg3 + 8)
        zmm0 = *(arg3 + 4)
        zmm1[0] = zmm1[0] - temp0_2[0]
        zmm0[0] = zmm0[0] - temp0_2[0]
        *(arg3 + 8) = zmm1[0]
        *(arg3 + 4) = zmm0[0]
        temp0_2[0] = temp0_2[0] f+ arg3[1].d
        temp0_2[0] = temp0_2[0] f+ *(arg3 + 0xc)
        temp0_2[0] = temp0_2[0] f+ *(arg3 + 0x14)
        arg3[1].d = temp0_2[0]
        *(arg3 + 0xc) = temp0_2[0]
        *(arg3 + 0x14) = temp0_2[0]
        int128_t zmm12 = *(arg3 + 4)
        arg4 = *arg3
        temp0_2[0] = temp0_2[0] f- zmm12.d
        int128_t zmm11 = *(arg3 + 8)
        temp0_2[0] = temp0_2[0] - arg4[0]
        temp0_2[0] = temp0_2[0] f- zmm11.d
        float zmm10[0x4]
        
        if (temp0_2[0] <= temp0_2[0] || temp0_2[0] <= temp0_2[0])
            zmm10 = _mm_max_ss(temp0_2[0], temp0_2[0])
        else
            zmm10 = temp0_2
        
        int32_t i_5 = arg2[1].d
        void* r13_1 = nullptr
        int64_t* rdi_2 = *arg2
        temp0_2[0] = temp0_2[0] * 0.5f
        void* var_160 = nullptr
        temp0_2[0] = temp0_2[0] * 0.5f
        int32_t i_6 = i_5
        temp0_2[0] = temp0_2[0] * 0.5f
        zmm11.d = zmm11.d f+ temp0_2[0]
        zmm12.d = zmm12.d f+ temp0_2[0]
        temp0_2[0] = temp0_2[0] + arg4[0]
        int32_t var_154
        
        if (i_5 != 0)
            sub_1407c3650(&var_160, i_5, 0)
            r13_1 = var_160
            void* rcx_4 = r13_1 - rdi_2
            int32_t i
            
            do
                *(rdi_2 + rcx_4) = *rdi_2
                *(rdi_2 + rcx_4 + 8) = rdi_2[1].d
                rdi_2 += 0xc
                i = i_5
                i_5 -= 1
            while (i != 1)
            i_5 = i_6
        else
            var_154 = 0
        
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x2c)
        int32_t var_fc_1 = 0x80
        int32_t var_f8_1 = 0xffffffff
        int32_t var_f4_1 = 0
        void* var_e8_1 = nullptr
        int32_t var_e0_1 = 0
        
        if (rbx s> 0)
            sub_1409d96c0(&var_128, rbx)
            int32_t rax_8
            
            if (rbx u< 4)
                rax_8 = 1
            else
                uint32_t rax_5 = rbx u>> 1
                uint64_t rflags_1
                int32_t temp0_4
                temp0_4, rflags_1 = _bit_scan_reverse(rax_5 + 8)
                int32_t rcx_6
                
                if (rax_5 == 0xfffffff8)
                    rcx_6 = 0x20
                else
                    rcx_6 = 0x1f - temp0_4
                
                uint64_t rflags_2
                char temp0_5
                temp0_5, rflags_2 = _bit_scan_reverse(rax_5 + 7)
                
                if (rax_5 == 0xfffffff9)
                    rax_8 = 1
                else
                    rax_8 = 1 << ((not.d(rcx_6 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_5)))
            
            if (var_e0_1 == 0 || var_e0_1 s< rax_8)
                var_e0_1 = rax_8
                sub_1417b2de0(&var_128)
        
        int64_t var_170 = 0
        int32_t rdx_5 = 0
        int32_t var_164_1 = 0
        int32_t var_168_1 = 0
        
        if (rbx s> 0)
            sub_1405dadb0(&var_170, rbx)
            rdx_5 = var_164_1
        
        float temp0_6[0x4] = __maxss_xmmss_memss(zmm6[0], 0x38d1b717)
        zmm1 = zmm10
        zmm1[0] = zmm1[0] / temp0_6[0]
        int32_t rcx_14 = int.d(zmm1[0])
        
        if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14))[0] == zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_14
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        zmm0 = zx.o(0)
        int32_t i_1 = 0
        int64_t rdi_5 = int.q(zmm1[0])
        int32_t i_3 = 0
        int64_t var_148_1 = rdi_5
        zmm0[0] = float.s(rdi_5)
        zmm10[0] = zmm10[0] / zmm0[0]
        int64_t var_120_1
        int64_t var_118
        int64_t* var_108
        int64_t r15_1
        
        do
            int32_t j_1 = 0
            
            if (rdx_5 s< 0)
                int32_t j_2 = 0
                
                if (rdx_5 != 0)
                    sub_1405dadb0(&var_170, 0)
                    j_1 = j_2
            
            if (var_120_1.d != var_f4_1)
                bool cond:3_1 = var_120_1:4.d s>= 0
                var_120_1.d = 0
                
                if (not(cond:3_1))
                    sub_1405a5410(&var_128, 0)
                
                var_f8_1 = 0xffffffff
                var_f4_1 = 0
                sub_140774790(&var_118)
                int64_t rcx_19 = sx.q(var_e0_1)
                
                if (rcx_19 s> 0)
                    void var_f0
                    void* rdi_6 = &var_f0
                    
                    if (var_e8_1 != 0)
                        rdi_6 = var_e8_1
                    
                    __builtin_memset(rdi_6, 0xffffffff, rcx_19 << 2)
                    rdi_5 = var_148_1
            
            int32_t r12 = 0
            float temp0_11[0x4] = _mm_cvtepi32_ps(zx.o(i_1))
            temp0_11[0] = temp0_11[0] * zmm10[0]
            temp0_11[0] = temp0_11[0] * -0.5f
            
            if (i_5 s> 0)
                int64_t rax_14
                int64_t rdx_7
                rdx_7:rax_14 = sx.o(rdi_5)
                zmm7.d = 1f / zmm10[0]
                void* r13_2 = r13_1 + 4
                zmm8.d = float.s((rax_14 - rdx_7) s>> 1)
                
                do
                    arg4 = *(r13_2 + 4)
                    zmm1 = *r13_2
                    arg4[0] = arg4[0] f- zmm11.d
                    zmm2 = *(r13_2 - 4)
                    zmm1[0] = zmm1[0] f- zmm12.d
                    zmm2[0] = zmm2[0] - temp0_2[0]
                    arg4[0] = arg4[0] - temp0_11[0]
                    arg4[0] = arg4[0] f* zmm7.d
                    arg4[0] = arg4[0] f+ zmm8.d
                    int32_t rcx_20 = int.d(arg4[0])
                    
                    if (rcx_20 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_20))[0] == arg4[0]))
                        arg4 = _mm_cvtepi32_ps(zx.o(rcx_20
                            - (_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q)) & 1)))
                    
                    zmm1[0] = zmm1[0] - temp0_11[0]
                    zmm1[0] = zmm1[0] f* zmm7.d
                    zmm1[0] = zmm1[0] f+ zmm8.d
                    int32_t rcx_22 = int.d(zmm1[0])
                    
                    if (rcx_22 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_22))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_22
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm2[0] = zmm2[0] - temp0_11[0]
                    zmm2[0] = zmm2[0] f* zmm7.d
                    zmm2[0] = zmm2[0] f+ zmm8.d
                    int32_t rcx_24 = int.d(zmm2[0])
                    
                    if (rcx_24 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_24))[0] == zmm2[0]))
                        zmm2 = _mm_cvtepi32_ps(zx.o(rcx_24
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
                    
                    int64_t r14_1 = int.q(zmm2[0])
                    char var_178 = 0
                    int64_t r14_5 = (r14_1 * rdi_5 + int.q(zmm1[0])) * rdi_5 + int.q(arg4[0])
                    int64_t rbx_1
                    
                    if (var_f4_1 == 0)
                        rbx_1 = zx.q(var_120_1.d)
                        int32_t rax_28 = (rbx_1 + 1).d
                        var_120_1.d = rax_28
                        
                        if (rax_28 s> var_120_1:4.d)
                            sub_1405a4f90(&var_128)
                        
                        int32_t var_100_1
                        int32_t rdi_7 = var_100_1
                        sub_1405a4980(&var_118, rdi_7 + 1)
                        int64_t* r8_2 = &var_118
                        var_100_1 += 1
                        
                        if (var_108 != 0)
                            r8_2 = var_108
                        
                        int32_t rax_30 = rdi_7
                        
                        if (rdi_7 s< 0)
                            rax_30 = rdi_7 + 0x1f
                        
                        int64_t rdx_11 = sx.q(rax_30 s>> 5)
                        *(r8_2 + (rdx_11 << 2)) &= not.d(1 << (rdi_7.b & 0x1f))
                    else
                        rbx_1 = sx.q(var_f8_1)
                        int64_t rcx_27 = var_128
                        int64_t rdx_8 = sx.q(*(rcx_27 + rbx_1 * 0x10 + 4))
                        int32_t temp6_1 = var_f4_1
                        var_f4_1 -= 1
                        var_f8_1 = rdx_8.d
                        
                        if (temp6_1 != 1)
                            *(rcx_27 + rdx_8 * 0x10) = 0xffffffff
                    
                    int64_t* r8_3 = &var_118
                    
                    if (var_108 != 0)
                        r8_3 = var_108
                    
                    int32_t rax_35 = rbx_1.d
                    
                    if (rbx_1.d s< 0)
                        rax_35 = (rbx_1 + 0x1f).d
                    
                    int64_t rdi_9 = sx.q(rax_35 s>> 5)
                    *(r8_3 + (rdi_9 << 2)) |= 1 << (rbx_1.b & 0x1f)
                    int64_t* r9_3 = (sx.q(rbx_1.d) << 4) + var_128
                    char* var_180_1 = &var_178
                    int32_t var_188_1 = rbx_1.d
                    *r9_3 = r14_5
                    r9_3[1].d = 0xffffffff
                    void var_140
                    sub_1417ad720(&var_128, &var_140, (r14_5 s>> 0x20).d * 0x17 + r14_5.d, r9_3, 
                        var_188_1, var_180_1)
                    
                    if (var_178 != 0)
                        int64_t j_3 = sx.q(j_1)
                        j_1 = (j_3 + 1).d
                        
                        if (j_1 s> var_164_1)
                            sub_1405a4cf0(&var_170)
                        
                        *(var_170 + (j_3 << 2)) = r12
                    
                    rdi_5 = var_148_1
                    r12 += 1
                    r13_2 += 0xc
                while (r12 s< i_5)
                
                i_1 = i_3
            
            int64_t j = sx.q(j_1)
            r15_1 = var_170
            
            if (j_1 != 0)
                do
                    int64_t r9_4 = sx.q(*(r15_1 + (j << 2) - 4))
                    j -= 1
                    int32_t rax_40 = i_5 - r9_4.d
                    
                    if (rax_40 != 1)
                        void* r14_6 = var_160
                        memmove(r14_6 + r9_4 * 0xc, r14_6 + sx.q((r9_4 + 1).d) * 0xc, 
                            (rax_40 - 1) * 0xc)
                    
                    sub_140775970(&var_160)
                    i_5 -= 1
                while (j != 0)
            
            r13_1 = var_160
            i_1 += 1
            rdx_5 = var_164_1
            rdi_5 = var_148_1
            i_3 = i_1
        while (i_1 s< 2)
        
        result = arg1
        *result = r13_1
        result[1].d = i_5
        *(result + 0xc) = var_154
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        int32_t var_e0_2 = 0
        
        if (var_e8_1 != 0)
            sub_140a74f90(var_e8_1)
        
        bool cond:5_1 = var_120_1:4.d == 0
        var_120_1.d = 0
        
        if (not(cond:5_1))
            sub_1405a5410(&var_128, 0)
        
        int32_t var_f8_2 = 0xffffffff
        int32_t var_f4_2 = 0
        sub_14059a8e0(&var_118, 0)
        
        if (var_108 != 0)
            sub_140a74f90(var_108)
        
        int64_t rcx_45 = var_128
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
    else
        int64_t* rdi_1 = *arg2
        *arg1 = 0
        arg1[1].d = 1
        sub_1407c3650(arg1, 1, 0)
        int64_t* rdx_1 = *result
        *rdx_1 = *rdi_1
        rdx_1[1].d = rdi_1[1].d
else
    *arg1 = 0
    int32_t i_4 = arg2[1].d
    int64_t* rdi = *arg2
    arg1[1].d = i_4
    
    if (i_4 != 0)
        sub_1407c3650(arg1, i_4, 0)
        int64_t* rcx = *result
        int32_t i_2
        
        do
            int64_t zmm0_1 = *rdi
            rdi += 0xc
            *rcx = zmm0_1
            rcx += 0xc
            *(rcx - 4) = *(rdi - 4)
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    else
        *(arg1 + 0xc) = 0

__security_check_cookie(rax_1 ^ &var_1a8)
return result
