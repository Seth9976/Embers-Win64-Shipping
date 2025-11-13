// 函数: sub_141d50750
// 地址: 0x141d50750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x6c))
*(arg1 + 0x68) = 0

if (result.d s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x60, 0)

__builtin_memset(arg1 + 0x70, 0, 0x18)
*(arg1 + 0x58) = 0
int64_t* rcx_1 = *arg2

if (rcx_1 == 0)
    result.b = 0
else
    void* rax_1 = (**rcx_1)(rcx_1)
    int64_t* rcx_2 = *arg2
    void* rbx_1 = rax_1
    int64_t rdx = *rcx_2
    int32_t rax_2 = (*(rdx + 8))(rcx_2, rdx)
    int64_t* rcx_3 = *arg2
    int64_t rdx_1 = *rcx_3
    int32_t rax_3 = (*(rdx_1 + 0x20))(rcx_3, rdx_1)
    int64_t* rcx_4 = *arg2
    int32_t r15_1 = rax_3
    int32_t arg_8 = rax_3
    int64_t rdx_2 = *rcx_4
    result = (*(rdx_2 + 0x28))(rcx_4, rdx_2)
    int32_t arg_10 = result.d
    int32_t r12_1 = result.d
    
    if (rbx_1 == 0 || rax_2 == 0 || r15_1 == 0 || result.d == 0)
        result.b = 0
    else
        int64_t* rcx_5 = *arg2
        uint64_t rsi_2 = zx.q(r15_1 * rax_2)
        
        if ((*(*rcx_5 + 0x18))(rcx_5) == 2)
            if (rax_2 != *(arg1 + 0x88))
                int32_t rax_8 = *(arg1 + 0x68) + rsi_2.d
                *(arg1 + 0x68) = rax_8
                
                if (rax_8 s> *(arg1 + 0x6c))
                    sub_1406105e0(arg1 + 0x60)
                
                if (sub_141d4c600(rbx_1, rax_2, r15_1, *(arg1 + 0x60), *(arg1 + 0x88)) == 0)
                    int32_t rax_11 = *(arg1 + 0x6c)
                    *(arg1 + 0x68) = 0
                    
                    if (rax_11 s< 0 && rax_11 != 0)
                        sub_1405dadb0(arg1 + 0x60, 0)
            else
                int64_t rdi_2 = sx.q(*(arg1 + 0x68))
                int32_t rax_6 = (rdi_2 + rsi_2).d
                *(arg1 + 0x68) = rax_6
                
                if (rax_6 s> *(arg1 + 0x6c))
                    sub_1406105e0(arg1 + 0x60)
                
                memcpy(*(arg1 + 0x60) + (rdi_2 << 2), rbx_1, rsi_2.d << 2)
            
            goto label_141d50870
        
        int32_t var_40_1 = rsi_2.d
        void* var_48 = nullptr
        void* r12_2 = nullptr
        int32_t var_3c_1 = 0
        
        if (rsi_2.d s> 0)
            sub_1406105e0(&var_48)
            r12_2 = var_48
        
        int64_t* rcx_12 = *arg2
        void* r15_2 = r12_2 + (rsi_2 << 2)
        void* rdi_3 = r12_2
        int32_t rax_13 = (*(*rcx_12 + 0x18))(rcx_12)
        uint128_t zmm0
        float zmm1[0x4]
        
        if (rax_13 == 1)
            int64_t i = 0
            
            if (r12_2 u> r15_2)
                rsi_2 = 0
            
            if (rsi_2 != 0)
                if (rsi_2 u>= 8 &&
                        (r12_2 u> rbx_1 - 8 + (rsi_2 << 3) || r12_2 + ((rsi_2 - 1) << 2) u< rbx_1))
                    do
                        i += 8
                        zmm1 = _mm_cvtpd_ps(*rbx_1)
                        zmm0 = *(rbx_1 + 0x10)
                        *rdi_3 = zmm1.q
                        zmm1 = _mm_cvtpd_ps(zmm0)
                        zmm0 = *(rbx_1 + 0x20)
                        *(rdi_3 + 8) = zmm1.q
                        zmm1 = _mm_cvtpd_ps(zmm0)
                        zmm0 = *(rbx_1 + 0x30)
                        rbx_1 += 0x40
                        *(rdi_3 + 0x10) = zmm1.q
                        *(rdi_3 + 0x18) = (_mm_cvtpd_ps(zmm0)).q
                        rdi_3 += 0x20
                    while (i u< (rsi_2 & 0xfffffffffffffff8))
                
                if (i u< rsi_2)
                    if (rsi_2 - i u>= 4)
                        int64_t i_9 = ((rsi_2 - i - 4) u>> 2) + 1
                        i += i_9 << 2
                        int64_t i_1
                        
                        do
                            *rdi_3 = _mm_cvtpd_ps(zx.o(*rbx_1)).d
                            *(rdi_3 + 4) = _mm_cvtpd_ps(zx.o(*(rbx_1 + 8)))[0]
                            *(rdi_3 + 8) = _mm_cvtpd_ps(zx.o(*(rbx_1 + 0x10))).d
                            zmm1 = zx.o(*(rbx_1 + 0x18))
                            rbx_1 += 0x20
                            *(rdi_3 + 0xc) = _mm_cvtpd_ps(zmm1)[0]
                            rdi_3 += 0x10
                            i_1 = i_9
                            i_9 -= 1
                        while (i_1 != 1)
                    
                    while (i u< rsi_2)
                        rdi_3 += 4
                        zmm0 = _mm_cvtpd_ps(zx.o(*rbx_1))
                        i += 1
                        rbx_1 += 8
                        *(rdi_3 - 4) = zmm0.d
            
        label_141d50ec6:
            int32_t rbx_2 = *(arg1 + 0x88)
            
            if (rax_2 != rbx_2)
                int64_t rdi_5 = sx.q(*(arg1 + 0x68))
                r15_1 = arg_8
                int32_t rbx_4 = rbx_2 * r15_1
                int32_t rax_61 = rdi_5.d + rbx_4
                *(arg1 + 0x68) = rax_61
                
                if (rax_61 s> *(arg1 + 0x6c))
                    sub_1406105e0(arg1 + 0x60)
                
                memset(*(arg1 + 0x60) + (rdi_5 << 2), 0, sx.q(rbx_4) << 2)
                
                if (sub_141d4c600(r12_2, rax_2, r15_1, *(arg1 + 0x60), *(arg1 + 0x88)) == 0)
                    int32_t rax_65 = *(arg1 + 0x6c)
                    *(arg1 + 0x68) = 0
                    
                    if (rax_65 s< 0 && rax_65 != 0)
                        sub_1405dadb0(arg1 + 0x60, 0)
            else
                int64_t rbx_3 = sx.q(var_40_1)
                
                if (rbx_3.d != 0)
                    int32_t rax_59 = *(arg1 + 0x68)
                    int32_t rdx_24 = rax_59 + rbx_3.d
                    
                    if (rdx_24 s> *(arg1 + 0x6c))
                        sub_1405dadb0(arg1 + 0x60, rdx_24)
                        rax_59 = *(arg1 + 0x68)
                    
                    memcpy(*(arg1 + 0x60) + (sx.q(rax_59) << 2), r12_2, (rbx_3 << 2).d)
                    *(arg1 + 0x68) += rbx_3.d
                
                r15_1 = arg_8
            
            if (r12_2 != 0)
                sub_140a74f90(r12_2)
            
            r12_1 = arg_10
        label_141d50870:
            
            if (*(arg1 + 0x48) != -0x80000000)
                uint64_t rax_66 = zx.q(*(arg1 + 0x7c))
                
                if (rax_66.d != 0)
                    zmm1 = zx.o(0)
                    zmm1[0] = float.s(rax_66)
                    zmm0.d = float.s(zx.q(r12_1))
                    zmm1[0] = zmm1[0] f/ zmm0.d
                    zmm1[0] = zmm1[0] f* *(arg1 + 0x40)
                    int64_t rcx_22 = sx.q(int.d(zmm1[0]))
                    *(arg1 + 0x48) = rcx_22
                    zmm0.d = float.s(rcx_22)
                    zmm1[0] = zmm1[0] f- zmm0.d
                    *(arg1 + 0x40) = zmm1[0]
            else
                *(arg1 + 0x48) = 0
            
            int64_t* rcx_23 = *arg2
            *(arg1 + 0x70) = *(*(*rcx_23 + 0x10))(rcx_23, &arg_8)
            *(arg1 + 0x78) = r15_1
            *(arg1 + 0x7c) = r12_1
            int64_t* rcx_25 = *arg2
            result.b = 1
            *(arg1 + 0x80) = *(*(*rcx_25 + 0x30))(rcx_25, &arg_8)
        else
            if (rax_13 == 3)
                int64_t i_2 = 0
                
                if (r12_2 u> r15_2)
                    rsi_2 = 0
                
                if (rsi_2 != 0)
                    if (rsi_2 u>= 0x10
                            && (r12_2 u> rbx_1 - 1 + rsi_2 || r12_2 + ((rsi_2 - 1) << 2) u< rbx_1))
                        zmm1 = data_143226ed0
                        
                        do
                            zmm0 = zx.o(*rbx_1)
                            i_2 += 0x10
                            zmm0 = _mm_unpacklo_epi8(zmm0, zmm0.q)
                            *rdi_3 = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x18)), 
                                zmm1)
                            zmm0 = zx.o(*(rbx_1 + 4))
                            zmm0 = _mm_unpacklo_epi8(zmm0, zmm0.q)
                            *(rdi_3 + 0x10) = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x18)), 
                                zmm1)
                            zmm0 = zx.o(*(rbx_1 + 8))
                            zmm0 = _mm_unpacklo_epi8(zmm0, zmm0.q)
                            *(rdi_3 + 0x20) = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x18)), 
                                zmm1)
                            zmm0 = zx.o(*(rbx_1 + 0xc))
                            rbx_1 += 0x10
                            zmm0 = _mm_unpacklo_epi8(zmm0, zmm0.q)
                            *(rdi_3 + 0x30) = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x18)), 
                                zmm1)
                            rdi_3 += 0x40
                        while (i_2 u< (rsi_2 & 0xfffffffffffffff0))
                    
                    if (i_2 u< rsi_2)
                        if (rsi_2 - i_2 u>= 4)
                            int64_t i_11 = ((rsi_2 - i_2 - 4) u>> 2) + 1
                            i_2 += i_11 << 2
                            int64_t i_3
                            
                            do
                                zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*rbx_1))).d f* 0.0078125f
                                *rdi_3 = zmm0.d
                                zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx_1 + 1))))
                                zmm1[0] = zmm1[0] * 0.0078125f
                                *(rdi_3 + 4) = zmm1[0]
                                zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx_1 + 2)))).d f* 0.0078125f
                                *(rdi_3 + 8) = zmm0.d
                                int32_t rax_47 = sx.d(*(rbx_1 + 3))
                                rbx_1 += 4
                                zmm1 = _mm_cvtepi32_ps(zx.o(rax_47))
                                zmm1[0] = zmm1[0] * 0.0078125f
                                *(rdi_3 + 0xc) = zmm1[0]
                                rdi_3 += 0x10
                                i_3 = i_11
                                i_11 -= 1
                            while (i_3 != 1)
                        
                        while (i_2 u< rsi_2)
                            int32_t rax_48 = sx.d(*rbx_1)
                            rdi_3 += 4
                            i_2 += 1
                            rbx_1 += 1
                            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_48)).d f* 0.0078125f
                            *(rdi_3 - 4) = zmm0.d
                
                goto label_141d50ec6
            
            if (rax_13 == 4)
                int64_t i_4 = 0
                
                if (r12_2 u> r15_2)
                    rsi_2 = 0
                
                if (rsi_2 != 0)
                    if (rsi_2 u>= 0x10 && (r12_2 u> rbx_1 - 2 + (rsi_2 << 1)
                            || r12_2 + ((rsi_2 - 1) << 2) u< rbx_1))
                        zmm1 = data_14320b220
                        
                        do
                            zmm0 = zx.o(*rbx_1)
                            i_4 += 0x10
                            *rdi_3 = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x10)), 
                                zmm1)
                            zmm0 = zx.o(*(rbx_1 + 8))
                            *(rdi_3 + 0x10) = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x10)), 
                                zmm1)
                            zmm0 = zx.o(*(rbx_1 + 0x10))
                            *(rdi_3 + 0x20) = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x10)), 
                                zmm1)
                            zmm0 = zx.o(*(rbx_1 + 0x18))
                            rbx_1 += 0x20
                            *(rdi_3 + 0x30) = _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0, zmm0.q), 
                                    0x10)), 
                                zmm1)
                            rdi_3 += 0x40
                        while (i_4 u< (rsi_2 & 0xfffffffffffffff0))
                    
                    if (i_4 u< rsi_2)
                        if (rsi_2 - i_4 u>= 4)
                            int64_t i_10 = ((rsi_2 - i_4 - 4) u>> 2) + 1
                            i_4 += i_10 << 2
                            int64_t i_5
                            
                            do
                                zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*rbx_1))).d f* 3.05175781e-05f
                                *rdi_3 = zmm0.d
                                zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx_1 + 2))))
                                zmm1[0] = zmm1[0] * 3.05175781e-05f
                                *(rdi_3 + 4) = zmm1[0]
                                zmm0.d =
                                    _mm_cvtepi32_ps(zx.o(sx.d(*(rbx_1 + 4)))).d f* 3.05175781e-05f
                                *(rdi_3 + 8) = zmm0.d
                                int32_t rax_36 = sx.d(*(rbx_1 + 6))
                                rbx_1 += 8
                                zmm1 = _mm_cvtepi32_ps(zx.o(rax_36))
                                zmm1[0] = zmm1[0] * 3.05175781e-05f
                                *(rdi_3 + 0xc) = zmm1[0]
                                rdi_3 += 0x10
                                i_5 = i_10
                                i_10 -= 1
                            while (i_5 != 1)
                        
                        while (i_4 u< rsi_2)
                            int32_t rax_37 = sx.d(*rbx_1)
                            rdi_3 += 4
                            i_4 += 1
                            rbx_1 += 2
                            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_37)).d f* 3.05175781e-05f
                            *(rdi_3 - 4) = zmm0.d
                
                goto label_141d50ec6
            
            if (rax_13 == 5)
                int64_t i_6 = 0
                
                if (r12_2 u> r15_2)
                    rsi_2 = 0
                
                if (rsi_2 != 0)
                    if (rsi_2 u>= 0x10 && (r12_2 u> rbx_1 - 4 + (rsi_2 << 2)
                            || r12_2 + ((rsi_2 - 1) << 2) u< rbx_1))
                        float zmm2[0x4] = data_143226ec0
                        
                        do
                            i_6 += 0x10
                            zmm1 = _mm_cvtepi32_ps(*rbx_1)
                            zmm0 = *(rbx_1 + 0x10)
                            *rdi_3 = _mm_mul_ps(zmm1, zmm2)
                            zmm1 = _mm_cvtepi32_ps(zmm0)
                            zmm0 = *(rbx_1 + 0x20)
                            *(rdi_3 + 0x10) = _mm_mul_ps(zmm1, zmm2)
                            zmm1 = _mm_cvtepi32_ps(zmm0)
                            zmm0 = *(rbx_1 + 0x30)
                            rbx_1 += 0x40
                            *(rdi_3 + 0x20) = _mm_mul_ps(zmm1, zmm2)
                            *(rdi_3 + 0x30) = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), zmm2)
                            rdi_3 += 0x40
                        while (i_6 u< (rsi_2 & 0xfffffffffffffff0))
                    
                    if (i_6 u< rsi_2)
                        if (rsi_2 - i_6 u>= 4)
                            int64_t i_8 = ((rsi_2 - i_6 - 4) u>> 2) + 1
                            i_6 += i_8 << 2
                            int64_t i_7
                            
                            do
                                zmm0.d = _mm_cvtepi32_ps(zx.o(*rbx_1)).d f* 4.65661287e-10f
                                *rdi_3 = zmm0.d
                                zmm1 = _mm_cvtepi32_ps(zx.o(*(rbx_1 + 4)))
                                zmm1[0] = zmm1[0] * 4.65661287e-10f
                                *(rdi_3 + 4) = zmm1[0]
                                zmm0.d = _mm_cvtepi32_ps(zx.o(*(rbx_1 + 8))).d f* 4.65661287e-10f
                                *(rdi_3 + 8) = zmm0.d
                                zmm1 = zx.o(*(rbx_1 + 0xc))
                                rbx_1 += 0x10
                                zmm1 = _mm_cvtepi32_ps(zmm1)
                                zmm1[0] = zmm1[0] * 4.65661287e-10f
                                *(rdi_3 + 0xc) = zmm1[0]
                                rdi_3 += 0x10
                                i_7 = i_8
                                i_8 -= 1
                            while (i_7 != 1)
                        
                        if (i_6 u< rsi_2)
                            int64_t rdi_4 = rdi_3 - rbx_1
                            
                            do
                                zmm0 = zx.o(*rbx_1)
                                rbx_1 += 4
                                i_6 += 1
                                zmm0.d = _mm_cvtepi32_ps(zmm0).d f* 4.65661287e-10f
                                *(rdi_4 + rbx_1 - 4) = zmm0.d
                            while (i_6 u< rsi_2)
                
                goto label_141d50ec6
            
            if (r12_2 != 0)
                sub_140a74f90(r12_2)
            
            result.b = 0

return result
